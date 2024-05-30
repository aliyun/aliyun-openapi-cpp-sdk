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
    : RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerHTTPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerHTTPListenerAttributeRequest::~SetLoadBalancerHTTPListenerAttributeRequest() {}

long SetLoadBalancerHTTPListenerAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

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

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_SLBPORT() const {
  return xForwardedFor_SLBPORT_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_SLBPORT(const std::string &xForwardedFor_SLBPORT) {
  xForwardedFor_SLBPORT_ = xForwardedFor_SLBPORT;
  setParameter(std::string("XForwardedFor_SLBPORT"), xForwardedFor_SLBPORT);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getAclStatus() const {
  return aclStatus_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getAclType() const {
  return aclType_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheck() const {
  return healthCheck_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getVpcIds() const {
  return vpcIds_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setVpcIds(const std::string &vpcIds) {
  vpcIds_ = vpcIds;
  setParameter(std::string("VpcIds"), vpcIds);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getAclId() const {
  return aclId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getForwardCode() const {
  return forwardCode_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setForwardCode(int forwardCode) {
  forwardCode_ = forwardCode;
  setParameter(std::string("ForwardCode"), std::to_string(forwardCode));
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

long SetLoadBalancerHTTPListenerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getTags() const {
  return tags_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_SLBIP() const {
  return xForwardedFor_SLBIP_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_SLBIP(const std::string &xForwardedFor_SLBIP) {
  xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
  setParameter(std::string("XForwardedFor_SLBIP"), xForwardedFor_SLBIP);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_SLBID() const {
  return xForwardedFor_SLBID_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_SLBID(const std::string &xForwardedFor_SLBID) {
  xForwardedFor_SLBID_ = xForwardedFor_SLBID;
  setParameter(std::string("XForwardedFor_SLBID"), xForwardedFor_SLBID);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_ClientSrcPort() const {
  return xForwardedFor_ClientSrcPort_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_ClientSrcPort(const std::string &xForwardedFor_ClientSrcPort) {
  xForwardedFor_ClientSrcPort_ = xForwardedFor_ClientSrcPort;
  setParameter(std::string("XForwardedFor_ClientSrcPort"), xForwardedFor_ClientSrcPort);
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

int SetLoadBalancerHTTPListenerAttributeRequest::getMaxConnection() const {
  return maxConnection_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getRegionId() const {
  return regionId_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
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

std::string SetLoadBalancerHTTPListenerAttributeRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
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

std::string SetLoadBalancerHTTPListenerAttributeRequest::getGzip() const {
  return gzip_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setGzip(const std::string &gzip) {
  gzip_ = gzip;
  setParameter(std::string("Gzip"), gzip);
}

int SetLoadBalancerHTTPListenerAttributeRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

std::string SetLoadBalancerHTTPListenerAttributeRequest::getXForwardedFor_proto() const {
  return xForwardedFor_proto_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setXForwardedFor_proto(const std::string &xForwardedFor_proto) {
  xForwardedFor_proto_ = xForwardedFor_proto;
  setParameter(std::string("XForwardedFor_proto"), xForwardedFor_proto);
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

std::string SetLoadBalancerHTTPListenerAttributeRequest::getVServerGroup() const {
  return vServerGroup_;
}

void SetLoadBalancerHTTPListenerAttributeRequest::setVServerGroup(const std::string &vServerGroup) {
  vServerGroup_ = vServerGroup;
  setParameter(std::string("VServerGroup"), vServerGroup);
}

