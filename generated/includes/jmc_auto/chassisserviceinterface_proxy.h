/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef jmc_auto_chassisserviceinterface_proxy_h
#define jmc_auto_chassisserviceinterface_proxy_h

#include "ara/com/internal/proxy/ProxyAdapter.h"
#include "ara/com/internal/proxy/EventAdapter.h"
#include "ara/com/internal/proxy/FieldAdapter.h"
#include "ara/com/internal/proxy/MethodAdapter.h"
#include "jmc_auto/chassisserviceinterface_common.h"
#include "impl_type_chassismsg.h"
#include <string>

namespace jmc_auto {
namespace proxy {
namespace events {
    using ChassisEvent = ara::com::internal::proxy::event::EventAdapter<::ChassisMsg>;
    static constexpr ara::com::internal::EntityId ChassisEventId = 32374; //ChassisEvent_event_hash
}

namespace fields {
}

namespace methods {
static constexpr ara::com::internal::EntityId ChassisSetMethodId = 15946; //ChassisSetMethod_method_hash


class ChassisSetMethod {
public:
    struct Output {
        ::ChassisMsg ChassisData;

        static bool IsPlane()
        {
            return true;
        }

        using IsEnumerableTag = void;
        template<typename F>
        void enumerate(F& fun)
        {
            fun(ChassisData);
        }

        template<typename F>
        void enumerate(F& fun) const
        {
            fun(ChassisData);
        }

        bool operator == (const Output& t) const
        {
           return (ChassisData == t.ChassisData);
        }
    };

    ChassisSetMethod(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
    std::shared_ptr<vrtf::vcc::Proxy>& GetProxy() { return method_.GetProxy();}
    void Initialize(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId)
    {
        method_.Initialize(proxy, entityId);
    }

    ara::core::Future<Output> operator()()
    {
        return method_();
    }

    ara::com::internal::proxy::method::MethodAdapter<Output> GetMethod()
    {
        return method_;
    }

private:
    ara::com::internal::proxy::method::MethodAdapter<Output> method_;
};
} // namespace methods

class ChassisServiceInterfaceProxy :public ara::com::internal::proxy::ProxyAdapter {
public:
    virtual ~ChassisServiceInterfaceProxy()
    {
        ChassisEvent.UnsetReceiveHandler();
        ChassisEvent.Unsubscribe();
    }

    explicit ChassisServiceInterfaceProxy(const HandleType &handle)
        :ara::com::internal::proxy::ProxyAdapter(::jmc_auto::ChassisServiceInterface::ServiceIdentifier, handle),
        ChassisEvent(GetProxy(), events::ChassisEventId, handle, ::jmc_auto::ChassisServiceInterface::ServiceIdentifier),
        ChassisSetMethod(GetProxy(), methods::ChassisSetMethodId){            InitializeMethod<methods::ChassisSetMethod::Output>(methods::ChassisSetMethodId);
        }

    ChassisServiceInterfaceProxy(const ChassisServiceInterfaceProxy&) = delete;
    ChassisServiceInterfaceProxy& operator=(const ChassisServiceInterfaceProxy&) = delete;

    ChassisServiceInterfaceProxy(ChassisServiceInterfaceProxy&& other) = default;
    ChassisServiceInterfaceProxy& operator=(ChassisServiceInterfaceProxy&& other) = default;


    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::com::InstanceIdentifier instance = ara::com::InstanceIdentifier::Any)
    {
        return ProxyAdapter::StartFindService(handler, ::jmc_auto::ChassisServiceInterface::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance = ara::com::InstanceIdentifier::Any)
    {
        return ProxyAdapter::FindService(::jmc_auto::ChassisServiceInterface::ServiceIdentifier, instance);
    }

    events::ChassisEvent ChassisEvent;
    methods::ChassisSetMethod ChassisSetMethod;
};
} // namespace proxy
} // namespace jmc_auto

#endif // jmc_auto_chassisserviceinterface_proxy_h