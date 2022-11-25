#include "oatpp/network/Server.hpp"
#include <plog/Log.h>
#include <iostream>

#include "api/api.h"
#include "AppComponent.h"

void run() {
    PLOG(plog::info) << "Loading appComponent";
    // Init the primary runtime
    AppComponent components;
    PLOG(plog::info) << "Loading router";
    // Create the controllers and add to the router component
    auto router = components.httpRouter.getObject();
    PLOG(plog::info) << "Loading controller(s)";
    // Init and add the controller(s) to the router
    router->addController(api::BlockchainController::createShared());
    PLOG(plog::info) << "Loading server";
    // create the server
    oatpp::network::Server server(
        components.serverConnectionProvider.getObject(),
        components.serverConnectionHandler.getObject()
    );
    PLOG(plog::info) << "Components loaded.";
    PLOG(plog::info) << "Listening on " << components.serverConnectionProvider.getObject()->getProperty("port").toString()->c_str();
    OATPP_LOGD("Server", "Running on port %s...", components.serverConnectionProvider.getObject()->getProperty("port").toString()->c_str());
    // Officially start
    server.run();
}

int main(int argc, char** argv) {
    // Init the PLOG component
    plog::init(plog::debug, "log.txt", 1000000, 5);
    // Init the oatpp env
    PLOG(plog::info) << "Starting up";
    oatpp::base::Environment::init();
    // Wire the controllers and start server
    PLOG(plog::info) << "Initializing components";
    run();
    // Log the env objs
    PLOG(plog::info) << "Shutting down";
    PLOG(plog::info) << "Environment:\n"
        << "\nobjectCount -> "
        << oatpp::base::Environment::getObjectsCount()
        << "\nobjectsCreated -> "
        << oatpp::base::Environment::getObjectsCreated;
    PLOG(plog::info) << "Destroying environment";
    // Destroy oatpp env
    oatpp::base::Environment::destroy();
    // Done
    return 0;
}