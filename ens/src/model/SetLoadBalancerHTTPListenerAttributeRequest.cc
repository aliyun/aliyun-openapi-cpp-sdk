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

#include <alibabacloud/ens/model/SetLoadBalancerHTTPListenerAttributeRequest.h>

using AlibabaCloud::Ens::Model::SetLoadBalancerHTTPListenerAttributeRequest;

SetLoadBalancerHTTPListenerAttributeRequest::SetLoadBalancerHTTPListenerAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "SetLoadBalancerHTTPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerHTTPListenerAttributeRequest::~SetLoadBalancerHTTPListenerAttributeRequest() {}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor() const {
  return xForwardedFor_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor(const std::string &xForwardedFor) {
  xForwardedFor_ = xForwardedFor;
  setParameter(std::string("XForwardedFor"), xForwardedFor);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheck() const {
  return healthCheck_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getProtocol() const {
  return protocol_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getCookie() const {
  return cookie_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setCookie(const std::string &cookie) {
  cookie_ = cookie;
  setParameter(std::string("Cookie"), cookie);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckMethod() const {
  return healthCheckMethod_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckMethod(const std::string &healthCheckMethod) {
  healthCheckMethod_ = healthCheckMethod;
  setParameter(std::string("HealthCheckMethod"), healthCheckMethod);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckDomain() const {
  return healthCheckDomain_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckDomain(const std::string &healthCheckDomain) {
  healthCheckDomain_ = healthCheckDomain;
  setParameter(std::string("HealthCheckDomain"), healthCheckDomain);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getRequestTimeout() const {
  return requestTimeout_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setRequestTimeout(int requestTimeout) {
  requestTimeout_ = requestTimeout;
  setParameter(std::string("RequestTimeout"), std::to_string(requestTimeout));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getDescription() const {
  return description_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getUnhealthyThreshold() const {
  return unhealthyThreshold_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setUnhealthyThreshold(int unhealthyThreshold) {
  unhealthyThreshold_ = unhealthyThreshold;
  setParameter(std::string("UnhealthyThreshold"), std::to_string(unhealthyThreshold));
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthyThreshold() const {
  return healthyThreshold_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthyThreshold(int healthyThreshold) {
  healthyThreshold_ = healthyThreshold;
  setParameter(std::string("HealthyThreshold"), std::to_string(healthyThreshold));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getCookieTimeout() const {
  return cookieTimeout_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setCookieTimeout(int cookieTimeout) {
  cookieTimeout_ = cookieTimeout;
  setParameter(std::string("CookieTimeout"), std::to_string(cookieTimeout));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getStickySessionType() const {
  return stickySessionType_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setStickySessionType(const std::string &stickySessionType) {
  stickySessionType_ = stickySessionType;
  setParameter(std::string("StickySessionType"), stickySessionType);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getStickySession() const {
  return stickySession_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckConnectPort() const {
  return healthCheckConnectPort_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckConnectPort(int healthCheckConnectPort) {
  healthCheckConnectPort_ = healthCheckConnectPort;
  setParameter(std::string("HealthCheckConnectPort"), std::to_string(healthCheckConnectPort));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckHttpCode() const {
  return healthCheckHttpCode_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckHttpCode(const std::string &healthCheckHttpCode) {
  healthCheckHttpCode_ = healthCheckHttpCode;
  setParameter(std::string("HealthCheckHttpCode"), healthCheckHttpCode);
}

