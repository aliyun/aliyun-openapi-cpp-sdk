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

#include <alibabacloud/ens/model/SetLoadBalancerHTTPSListenerAttributeRequest.h>

using AlibabaCloud::Ens::Model::SetLoadBalancerHTTPSListenerAttributeRequest;

SetLoadBalancerHTTPSListenerAttributeRequest::SetLoadBalancerHTTPSListenerAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "SetLoadBalancerHTTPSListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerHTTPSListenerAttributeRequest::~SetLoadBalancerHTTPSListenerAttributeRequest() {}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheck() const {
  return healthCheck_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getProtocol() const {
  return protocol_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getCookie() const {
  return cookie_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCookie(const std::string &cookie) {
  cookie_ = cookie;
  setParameter(std::string("Cookie"), cookie);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getRequestTimeout() const {
  return requestTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setRequestTimeout(int requestTimeout) {
  requestTimeout_ = requestTimeout;
  setParameter(std::string("RequestTimeout"), std::to_string(requestTimeout));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getDescription() const {
  return description_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getCookieTimeout() const {
  return cookieTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCookieTimeout(int cookieTimeout) {
  cookieTimeout_ = cookieTimeout;
  setParameter(std::string("CookieTimeout"), std::to_string(cookieTimeout));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getStickySessionType() const {
  return stickySessionType_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setStickySessionType(const std::string &stickySessionType) {
  stickySessionType_ = stickySessionType;
  setParameter(std::string("StickySessionType"), stickySessionType);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getStickySession() const {
  return stickySession_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getServerCertificateId() const {
  return serverCertificateId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setServerCertificateId(const std::string &serverCertificateId) {
  serverCertificateId_ = serverCertificateId;
  setParameter(std::string("ServerCertificateId"), serverCertificateId);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}

