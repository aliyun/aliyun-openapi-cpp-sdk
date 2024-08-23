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

#include <alibabacloud/ens/model/CreateLoadBalancerHTTPListenerRequest.h>

using AlibabaCloud::Ens::Model::CreateLoadBalancerHTTPListenerRequest;

CreateLoadBalancerHTTPListenerRequest::CreateLoadBalancerHTTPListenerRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateLoadBalancerHTTPListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerHTTPListenerRequest::~CreateLoadBalancerHTTPListenerRequest() {}

std::string CreateLoadBalancerHTTPListenerRequest::getListenerForward() const {
  return listenerForward_;
}

void CreateLoadBalancerHTTPListenerRequest::setListenerForward(const std::string &listenerForward) {
  listenerForward_ = listenerForward;
  setParameter(std::string("ListenerForward"), listenerForward);
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getXForwardedFor() const {
  return xForwardedFor_;
}

void CreateLoadBalancerHTTPListenerRequest::setXForwardedFor(const std::string &xForwardedFor) {
  xForwardedFor_ = xForwardedFor;
  setParameter(std::string("XForwardedFor"), xForwardedFor);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheck() const {
  return healthCheck_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string CreateLoadBalancerHTTPListenerRequest::getProtocol() const {
  return protocol_;
}

void CreateLoadBalancerHTTPListenerRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateLoadBalancerHTTPListenerRequest::getCookie() const {
  return cookie_;
}

void CreateLoadBalancerHTTPListenerRequest::setCookie(const std::string &cookie) {
  cookie_ = cookie;
  setParameter(std::string("Cookie"), cookie);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

int CreateLoadBalancerHTTPListenerRequest::getRequestTimeout() const {
  return requestTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setRequestTimeout(int requestTimeout) {
  requestTimeout_ = requestTimeout;
  setParameter(std::string("RequestTimeout"), std::to_string(requestTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

int CreateLoadBalancerHTTPListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getDescription() const {
  return description_;
}

void CreateLoadBalancerHTTPListenerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int CreateLoadBalancerHTTPListenerRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void CreateLoadBalancerHTTPListenerRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string CreateLoadBalancerHTTPListenerRequest::getScheduler() const {
  return scheduler_;
}

void CreateLoadBalancerHTTPListenerRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int CreateLoadBalancerHTTPListenerRequest::getForwardPort() const {
  return forwardPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setForwardPort(int forwardPort) {
  forwardPort_ = forwardPort;
  setParameter(std::string("ForwardPort"), std::to_string(forwardPort));
}

int CreateLoadBalancerHTTPListenerRequest::getCookieTimeout() const {
  return cookieTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setCookieTimeout(int cookieTimeout) {
  cookieTimeout_ = cookieTimeout;
  setParameter(std::string("CookieTimeout"), std::to_string(cookieTimeout));
}

std::string CreateLoadBalancerHTTPListenerRequest::getStickySessionType() const {
  return stickySessionType_;
}

void CreateLoadBalancerHTTPListenerRequest::setStickySessionType(const std::string &stickySessionType) {
  stickySessionType_ = stickySessionType;
  setParameter(std::string("StickySessionType"), stickySessionType);
}

int CreateLoadBalancerHTTPListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getStickySession() const {
  return stickySession_;
}

void CreateLoadBalancerHTTPListenerRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

int CreateLoadBalancerHTTPListenerRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void CreateLoadBalancerHTTPListenerRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

int CreateLoadBalancerHTTPListenerRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}

