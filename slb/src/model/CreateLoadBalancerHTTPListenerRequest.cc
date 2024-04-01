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

#include <alibabacloud/slb/model/CreateLoadBalancerHTTPListenerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerHTTPListenerRequest;

CreateLoadBalancerHTTPListenerRequest::CreateLoadBalancerHTTPListenerRequest()
    : RpcServiceRequest("slb", "2013-02-21", "CreateLoadBalancerHTTPListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerHTTPListenerRequest::~CreateLoadBalancerHTTPListenerRequest() {}

long CreateLoadBalancerHTTPListenerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
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

std::string CreateLoadBalancerHTTPListenerRequest::getHostId() const {
  return hostId_;
}

void CreateLoadBalancerHTTPListenerRequest::setHostId(const std::string &hostId) {
  hostId_ = hostId;
  setParameter(std::string("HostId"), hostId);
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

std::string CreateLoadBalancerHTTPListenerRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateLoadBalancerHTTPListenerRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateLoadBalancerHTTPListenerRequest::getScheduler() const {
  return scheduler_;
}

void CreateLoadBalancerHTTPListenerRequest::setScheduler(const std::string &scheduler) {
  scheduler_ = scheduler;
  setParameter(std::string("Scheduler"), scheduler);
}

std::string CreateLoadBalancerHTTPListenerRequest::getHealthCheck() const {
  return healthCheck_;
}

void CreateLoadBalancerHTTPListenerRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
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

std::string CreateLoadBalancerHTTPListenerRequest::getCookie() const {
  return cookie_;
}

void CreateLoadBalancerHTTPListenerRequest::setCookie(const std::string &cookie) {
  cookie_ = cookie;
  setParameter(std::string("Cookie"), cookie);
}

std::string CreateLoadBalancerHTTPListenerRequest::getStickySession() const {
  return stickySession_;
}

void CreateLoadBalancerHTTPListenerRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

int CreateLoadBalancerHTTPListenerRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateLoadBalancerHTTPListenerRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateLoadBalancerHTTPListenerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLoadBalancerHTTPListenerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateLoadBalancerHTTPListenerRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string CreateLoadBalancerHTTPListenerRequest::getURI() const {
  return uRI_;
}

void CreateLoadBalancerHTTPListenerRequest::setURI(const std::string &uRI) {
  uRI_ = uRI;
  setParameter(std::string("URI"), uRI);
}

std::string CreateLoadBalancerHTTPListenerRequest::getListenerStatus() const {
  return listenerStatus_;
}

void CreateLoadBalancerHTTPListenerRequest::setListenerStatus(const std::string &listenerStatus) {
  listenerStatus_ = listenerStatus;
  setParameter(std::string("ListenerStatus"), listenerStatus);
}

std::string CreateLoadBalancerHTTPListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerHTTPListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

int CreateLoadBalancerHTTPListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerHTTPListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

std::string CreateLoadBalancerHTTPListenerRequest::getDomain() const {
  return domain_;
}

void CreateLoadBalancerHTTPListenerRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int CreateLoadBalancerHTTPListenerRequest::getInterval() const {
  return interval_;
}

void CreateLoadBalancerHTTPListenerRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

