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

#include <alibabacloud/ens/model/CreateLoadBalancerHTTPSListenerRequest.h>

using AlibabaCloud::Ens::Model::CreateLoadBalancerHTTPSListenerRequest;

CreateLoadBalancerHTTPSListenerRequest::CreateLoadBalancerHTTPSListenerRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateLoadBalancerHTTPSListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerHTTPSListenerRequest::~CreateLoadBalancerHTTPSListenerRequest() {}

std::string CreateLoadBalancerHTTPSListenerRequest::getListenerForward() const {
  return listenerForward_;
}

void CreateLoadBalancerHTTPSListenerRequest::setListenerForward(const std::string &listenerForward) {
  listenerForward_ = listenerForward;
  setParameter(std::string("ListenerForward"), listenerForward);
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheck() const {
  return healthCheck_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getProtocol() const {
  return protocol_;
}

void CreateLoadBalancerHTTPSListenerRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getCookie() const {
  return cookie_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCookie(const std::string &cookie) {
  cookie_ = cookie;
  setParameter(std::string("Cookie"), cookie);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

int CreateLoadBalancerHTTPSListenerRequest::getRequestTimeout() const {
  return requestTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setRequestTimeout(int requestTimeout) {
  requestTimeout_ = requestTimeout;
  setParameter(std::string("RequestTimeout"), std::to_string(requestTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

int CreateLoadBalancerHTTPSListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getDescription() const {
  return description_;
}

void CreateLoadBalancerHTTPSListenerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateLoadBalancerHTTPSListenerRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void CreateLoadBalancerHTTPSListenerRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getScheduler() const {
  return scheduler_;
}

void CreateLoadBalancerHTTPSListenerRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int CreateLoadBalancerHTTPSListenerRequest::getForwardPort() const {
  return forwardPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setForwardPort(int forwardPort) {
  forwardPort_ = forwardPort;
  setParameter(std::string("ForwardPort"), std::to_string(forwardPort));
}

int CreateLoadBalancerHTTPSListenerRequest::getCookieTimeout() const {
  return cookieTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCookieTimeout(int cookieTimeout) {
  cookieTimeout_ = cookieTimeout;
  setParameter(std::string("CookieTimeout"), std::to_string(cookieTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getStickySessionType() const {
  return stickySessionType_;
}

void CreateLoadBalancerHTTPSListenerRequest::setStickySessionType(const std::string &stickySessionType) {
  stickySessionType_ = stickySessionType;
  setParameter(std::string("StickySessionType"), stickySessionType);
}

int CreateLoadBalancerHTTPSListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getStickySession() const {
  return stickySession_;
}

void CreateLoadBalancerHTTPSListenerRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getServerCertificateId() const {
  return serverCertificateId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setServerCertificateId(const std::string &serverCertificateId) {
  serverCertificateId_ = serverCertificateId;
  setParameter(std::string("ServerCertificateId"), serverCertificateId);
}

int CreateLoadBalancerHTTPSListenerRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}

