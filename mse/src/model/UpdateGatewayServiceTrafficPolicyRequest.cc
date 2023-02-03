/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/mse/model/UpdateGatewayServiceTrafficPolicyRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayServiceTrafficPolicyRequest;

UpdateGatewayServiceTrafficPolicyRequest::UpdateGatewayServiceTrafficPolicyRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayServiceTrafficPolicy") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayServiceTrafficPolicyRequest::~UpdateGatewayServiceTrafficPolicyRequest() {}

std::string UpdateGatewayServiceTrafficPolicyRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayServiceTrafficPolicyRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string UpdateGatewayServiceTrafficPolicyRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayServiceTrafficPolicyRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

long UpdateGatewayServiceTrafficPolicyRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayServiceTrafficPolicyRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

UpdateGatewayServiceTrafficPolicyRequest::GatewayTrafficPolicy UpdateGatewayServiceTrafficPolicyRequest::getGatewayTrafficPolicy() const {
  return gatewayTrafficPolicy_;
}

void UpdateGatewayServiceTrafficPolicyRequest::setGatewayTrafficPolicy(const UpdateGatewayServiceTrafficPolicyRequest::GatewayTrafficPolicy &gatewayTrafficPolicy) {
  gatewayTrafficPolicy_ = gatewayTrafficPolicy;
  setParameter(std::string("GatewayTrafficPolicy") + ".TlsSetting.TlsMode", gatewayTrafficPolicy.tlsSetting.tlsMode);
  setParameter(std::string("GatewayTrafficPolicy") + ".TlsSetting.CaCertContent", gatewayTrafficPolicy.tlsSetting.caCertContent);
  setParameter(std::string("GatewayTrafficPolicy") + ".TlsSetting.CertId", gatewayTrafficPolicy.tlsSetting.certId);
  setParameter(std::string("GatewayTrafficPolicy") + ".TlsSetting.Sni", gatewayTrafficPolicy.tlsSetting.sni);
  setParameter(std::string("GatewayTrafficPolicy") + ".LoadBalancerSettings.WarmupDuration", std::to_string(gatewayTrafficPolicy.loadBalancerSettings.warmupDuration));
  setParameter(std::string("GatewayTrafficPolicy") + ".LoadBalancerSettings.LoadbalancerType", gatewayTrafficPolicy.loadBalancerSettings.loadbalancerType);
  setParameter(std::string("GatewayTrafficPolicy") + ".LoadBalancerSettings.ConsistentHashLBConfig.HttpCookie.Path", gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.path);
  setParameter(std::string("GatewayTrafficPolicy") + ".LoadBalancerSettings.ConsistentHashLBConfig.HttpCookie.Name", gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.name);
  setParameter(std::string("GatewayTrafficPolicy") + ".LoadBalancerSettings.ConsistentHashLBConfig.HttpCookie.TTL", gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.httpCookie.tTL);
  setParameter(std::string("GatewayTrafficPolicy") + ".LoadBalancerSettings.ConsistentHashLBConfig.ParameterName", gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.parameterName);
  setParameter(std::string("GatewayTrafficPolicy") + ".LoadBalancerSettings.ConsistentHashLBConfig.ConsistentHashLBType", gatewayTrafficPolicy.loadBalancerSettings.consistentHashLBConfig.consistentHashLBType);
}

std::string UpdateGatewayServiceTrafficPolicyRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayServiceTrafficPolicyRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

long UpdateGatewayServiceTrafficPolicyRequest::getServiceId() const {
  return serviceId_;
}

void UpdateGatewayServiceTrafficPolicyRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), std::to_string(serviceId));
}

