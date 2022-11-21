#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/macro/component.hpp"



namespace api
{
    class BlockchainService
    {
    public:
        BlockchainService() = default;

    };

#include OATPP_CODEGEN_BEGIN(ApiController)

    class BlockchainController : public oatpp::web::server::api::ApiController
    {
        public:
            BlockchainController(const std::shared_ptr<ObjectMapper>& objectMapper)
                : oatpp::web::server::api::ApiController(objectMapper)
            {}

            static std::shared_ptr<BlockchainController> createShared(OATPP_COMPONENT(std::shared_ptr<ObjectMapper>, objectMapper)) {
                return std::shared_ptr<BlockchainController>(new BlockchainController(objectMapper));
            }

            std::shared_ptr<BlockchainService> m_blockChainService;

            ENDPOINT("GET", "/", root) {
                return createResponse(Status::CODE_200, "API IS LIVE");
            }

            // TODO: More endpoints
    };

#include OATPP_CODEGEN_END(ApiController)
}

