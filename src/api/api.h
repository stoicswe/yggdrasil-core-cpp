#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/core/macro/codegen.hpp"

#include OATPP_CODEGEN_BEGIN(ApiController)

namespace api
{
    class BlockchainService
    {
    public:
        BlockchainService() = default;

    };

    class BlockchainController : public oatpp::web::server::api::ApiController
    {
        public:
            BlockchainController() = default;
            virtual ~BlockchainController() = default;

            BlockchainController(OATPP_COMPONENT(std::shared_ptr<ObjectMapper> objectMapper))
                : oatpp::web::server::api::ApiController(objectMapper)
            {}

            std::shared_ptr<BlockchainService> m_blockChainService;
    };
}

#include OATPP_CODEGEN_END(ApiController)