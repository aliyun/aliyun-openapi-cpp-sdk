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

#include <alibabacloud/slb/model/SetLoadBalancerHTTPListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerHTTPListenerAttributeRequest;

SetLoadBalancerHTTPListenerAttributeRequest::SetLoadBalancerHTTPListenerAttributeRequest()
    : RpcServiceRequest("slb", "2013-02-21", "SetLoadBalancerHTTPListenerAttribute") {
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

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor() const {
  return xForwardedFor_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor(const std::string &xForwardedFor) {
  xForwardedFor_ = xForwardedFor;
  setParameter(std::string("XForwardedFor"), xForwardedFor);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHostId() const {
  return hostId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHostId(const std::string &hostId) {
  hostId_ = hostId;
  setParameter(std::string("HostId"), hostId);
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

std::string SetLoadBalancerHTTPListenerAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getScheduler() const {
  return scheduler_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheck() const {
  return healthCheck_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
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

std::string SetLoadBalancerHTTPListenerAttributeRequest::getCookie() const {
  return cookie_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setCookie(const std::string &cookie) {
  cookie_ = cookie;
  setParameter(std::string("Cookie"), cookie);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getStickySession() const {
  return stickySession_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getURI() const {
  return uRI_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getDomain() const {
  return domain_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getInterval() const {
  return interval_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

