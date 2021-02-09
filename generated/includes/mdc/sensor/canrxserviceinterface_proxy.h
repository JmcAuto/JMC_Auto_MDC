/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef mdc_sensor_canrxserviceinterface_proxy_h
#define mdc_sensor_canrxserviceinterface_proxy_h

#include "ara/com/internal/proxy/ProxyAdapter.h"
#include "ara/com/internal/proxy/EventAdapter.h"
#include "ara/com/internal/proxy/FieldAdapter.h"
#include "ara/com/internal/proxy/MethodAdapter.h"
#include "mdc/sensor/canrxserviceinterface_common.h"
#include "impl_type_cansetdataresult.h"
#include "impl_type_canbusdataparam.h"
#include <string>

namespace mdc {
namespace sensor {
namespace proxy {
namespace events {
    using CanDataRxEvent = ara::com::internal::proxy::event::EventAdapter<::CanBusDataParam>;
    static constexpr ara::com::internal::EntityId CanDataRxEventId = 10384; //CanDataRxEvent_event_hash
}

namespace fields {
}

namespace methods {
static constexpr ara::com::internal::EntityId CanDataSetMethodId = 41040; //CanDataSetMethod_method_hash


class CanDataSetMethod {
public:
    struct Output {
        ::CanSetDataResult result;

        static bool IsPlane()
        {
            return false;
        }

        using IsEnumerableTag = void;
        template<typename F>
        void enumerate(F& fun)
        {
            fun(result);
        }

        template<typename F>
        void enumerate(F& fun) const
        {
            fun(result);
        }

        bool operator == (const Output& t) const
        {
           return (result == t.result);
        }
    };

    CanDataSetMethod(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
    std::shared_ptr<vrtf::vcc::Proxy>& GetProxy() { return method_.GetProxy();}
    void Initialize(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId)
    {
        method_.Initialize(proxy, entityId);
    }

    ara::core::Future<Output> operator()(const ::CanBusDataParam& canData)
    {
        return method_(canData);
    }

    ara::com::internal::proxy::method::MethodAdapter<Output, ::CanBusDataParam> GetMethod()
    {
        return method_;
    }

private:
    ara::com::internal::proxy::method::MethodAdapter<Output, ::CanBusDataParam> method_;
};
} // namespace methods

class CanRxServiceInterfaceProxy :public ara::com::internal::proxy::ProxyAdapter {
public:
    virtual ~CanRxServiceInterfaceProxy()
    {
        CanDataRxEvent.UnsetReceiveHandler();
        CanDataRxEvent.Unsubscribe();
    }

    explicit CanRxServiceInterfaceProxy(const HandleType &handle)
        :ara::com::internal::proxy::ProxyAdapter(::mdc::sensor::CanRxServiceInterface::ServiceIdentifier, handle),
        CanDataRxEvent(GetProxy(), events::CanDataRxEventId, handle, ::mdc::sensor::CanRxServiceInterface::ServiceIdentifier),
        CanDataSetMethod(GetProxy(), methods::CanDataSetMethodId){            InitializeMethod<methods::CanDataSetMethod::Output>(methods::CanDataSetMethodId);
        }

    CanRxServiceInterfaceProxy(const CanRxServiceInterfaceProxy&) = delete;
    CanRxServiceInterfaceProxy& operator=(const CanRxServiceInterfaceProxy&) = delete;

    CanRxServiceInterfaceProxy(CanRxServiceInterfaceProxy&& other) = default;
    CanRxServiceInterfaceProxy& operator=(CanRxServiceInterfaceProxy&& other) = default;


    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::com::InstanceIdentifier instance = ara::com::InstanceIdentifier::Any)
    {
        return ProxyAdapter::StartFindService(handler, ::mdc::sensor::CanRxServiceInterface::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance = ara::com::InstanceIdentifier::Any)
    {
        return ProxyAdapter::FindService(::mdc::sensor::CanRxServiceInterface::ServiceIdentifier, instance);
    }

    events::CanDataRxEvent CanDataRxEvent;
    methods::CanDataSetMethod CanDataSetMethod;
};
} // namespace proxy
} // namespace sensor
} // namespace mdc

#endif // mdc_sensor_canrxserviceinterface_proxy_h
