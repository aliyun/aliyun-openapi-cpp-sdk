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

#include <alibabacloud/slb/model/SetLoadBalancerHTTPSListenerAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerHTTPSListenerAttributeRequest;

SetLoadBalancerHTTPSListenerAttributeRequest::SetLoadBalancerHTTPSListenerAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerHTTPSListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerHTTPSListenerAttributeRequest::~SetLoadBalancerHTTPSListenerAttributeRequest() {}

long SetLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<SetLoadBalancerHTTPSListenerAttributeRequest::ServerCertificate> SetLoadBalancerHTTPSListenerAttributeRequest::getServerCertificate() const {
  return serverCertificate_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setServerCertificate(const std::vector<SetLoadBalancerHTTPSListenerAttributeRequest::ServerCertificate> &serverCertificate) {
  serverCertificate_ = serverCertificate;
  for(int dep1 = 0; dep1 != serverCertificate.size(); dep1++) {
  auto serverCertificateObj = serverCertificate.at(dep1);
  std::string serverCertificateObjStr = std::string("ServerCertificate") + "." + std::to_string(dep1 + 1);
    setParameter(serverCertificateObjStr + ".BindingType", serverCertificateObj.bindingType);
    setParameter(serverCertificateObjStr + ".CertificateId", serverCertificateObj.certificateId);
    setParameter(serverCertificateObjStr + ".StandardType", serverCertificateObj.standardType);
  }
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor() const {
  return xForwardedFor_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor(const std::string &xForwardedFor) {
  xForwardedFor_ = xForwardedFor;
  setParameter(std::string("XForwardedFor"), xForwardedFor);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_SLBPORT() const {
  return xForwardedFor_SLBPORT_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_SLBPORT(const std::string &xForwardedFor_SLBPORT) {
  xForwardedFor_SLBPORT_ = xForwardedFor_SLBPORT;
  setParameter(std::string("XForwardedFor_SLBPORT"), xForwardedFor_SLBPORT);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAclStatus() const {
  return aclStatus_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAclType() const {
  return aclType_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheck() const {
  return healthCheck_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVpcIds() const {
  return vpcIds_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVpcIds(const std::string &vpcIds) {
  vpcIds_ = vpcIds;
  setParameter(std::string("VpcIds"), vpcIds);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAclId() const {
  return aclId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertClientVerify() const {
  return xForwardedFor_ClientCertClientVerify_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertClientVerify(const std::string &xForwardedFor_ClientCertClientVerify) {
  xForwardedFor_ClientCertClientVerify_ = xForwardedFor_ClientCertClientVerify;
  setParameter(std::string("XForwardedFor_ClientCertClientVerify"), xForwardedFor_ClientCertClientVerify);
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

long SetLoadBalancerHTTPSListenerAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getCACertificateId() const {
  return cACertificateId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setCACertificateId(const std::string &cACertificateId) {
  cACertificateId_ = cACertificateId;
  setParameter(std::string("CACertificateId"), cACertificateId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getBackendProtocol() const {
  return backendProtocol_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setBackendProtocol(const std::string &backendProtocol) {
  backendProtocol_ = backendProtocol;
  setParameter(std::string("BackendProtocol"), backendProtocol);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getTags() const {
  return tags_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertFingerprintAlias() const {
  return xForwardedFor_ClientCertFingerprintAlias_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertFingerprintAlias(const std::string &xForwardedFor_ClientCertFingerprintAlias) {
  xForwardedFor_ClientCertFingerprintAlias_ = xForwardedFor_ClientCertFingerprintAlias;
  setParameter(std::string("XForwardedFor_ClientCertFingerprintAlias"), xForwardedFor_ClientCertFingerprintAlias);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_SLBIP() const {
  return xForwardedFor_SLBIP_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_SLBIP(const std::string &xForwardedFor_SLBIP) {
  xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
  setParameter(std::string("XForwardedFor_SLBIP"), xForwardedFor_SLBIP);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertClientVerifyAlias() const {
  return xForwardedFor_ClientCertClientVerifyAlias_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertClientVerifyAlias(const std::string &xForwardedFor_ClientCertClientVerifyAlias) {
  xForwardedFor_ClientCertClientVerifyAlias_ = xForwardedFor_ClientCertClientVerifyAlias;
  setParameter(std::string("XForwardedFor_ClientCertClientVerifyAlias"), xForwardedFor_ClientCertClientVerifyAlias);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_SLBID() const {
  return xForwardedFor_SLBID_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_SLBID(const std::string &xForwardedFor_SLBID) {
  xForwardedFor_SLBID_ = xForwardedFor_SLBID;
  setParameter(std::string("XForwardedFor_SLBID"), xForwardedFor_SLBID);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertFingerprint() const {
  return xForwardedFor_ClientCertFingerprint_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertFingerprint(const std::string &xForwardedFor_ClientCertFingerprint) {
  xForwardedFor_ClientCertFingerprint_ = xForwardedFor_ClientCertFingerprint;
  setParameter(std::string("XForwardedFor_ClientCertFingerprint"), xForwardedFor_ClientCertFingerprint);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientSrcPort() const {
  return xForwardedFor_ClientSrcPort_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientSrcPort(const std::string &xForwardedFor_ClientSrcPort) {
  xForwardedFor_ClientSrcPort_ = xForwardedFor_ClientSrcPort;
  setParameter(std::string("XForwardedFor_ClientSrcPort"), xForwardedFor_ClientSrcPort);
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

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertIssuerDNAlias() const {
  return xForwardedFor_ClientCertIssuerDNAlias_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertIssuerDNAlias(const std::string &xForwardedFor_ClientCertIssuerDNAlias) {
  xForwardedFor_ClientCertIssuerDNAlias_ = xForwardedFor_ClientCertIssuerDNAlias;
  setParameter(std::string("XForwardedFor_ClientCertIssuerDNAlias"), xForwardedFor_ClientCertIssuerDNAlias);
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

int SetLoadBalancerHTTPSListenerAttributeRequest::getMaxConnection() const {
  return maxConnection_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getEnableHttp2() const {
  return enableHttp2_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setEnableHttp2(const std::string &enableHttp2) {
  enableHttp2_ = enableHttp2;
  setParameter(std::string("EnableHttp2"), enableHttp2);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getRegionId() const {
  return regionId_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertSubjectDN() const {
  return xForwardedFor_ClientCertSubjectDN_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertSubjectDN(const std::string &xForwardedFor_ClientCertSubjectDN) {
  xForwardedFor_ClientCertSubjectDN_ = xForwardedFor_ClientCertSubjectDN;
  setParameter(std::string("XForwardedFor_ClientCertSubjectDN"), xForwardedFor_ClientCertSubjectDN);
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

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int SetLoadBalancerHTTPSListenerAttributeRequest::getBandwidth() const {
  return bandwidth_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getStickySession() const {
  return stickySession_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getGzip() const {
  return gzip_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setGzip(const std::string &gzip) {
  gzip_ = gzip;
  setParameter(std::string("Gzip"), gzip);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getTLSCipherPolicy() const {
  return tLSCipherPolicy_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setTLSCipherPolicy(const std::string &tLSCipherPolicy) {
  tLSCipherPolicy_ = tLSCipherPolicy;
  setParameter(std::string("TLSCipherPolicy"), tLSCipherPolicy);
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

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_proto() const {
  return xForwardedFor_proto_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_proto(const std::string &xForwardedFor_proto) {
  xForwardedFor_proto_ = xForwardedFor_proto;
  setParameter(std::string("XForwardedFor_proto"), xForwardedFor_proto);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertSubjectDNAlias() const {
  return xForwardedFor_ClientCertSubjectDNAlias_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertSubjectDNAlias(const std::string &xForwardedFor_ClientCertSubjectDNAlias) {
  xForwardedFor_ClientCertSubjectDNAlias_ = xForwardedFor_ClientCertSubjectDNAlias;
  setParameter(std::string("XForwardedFor_ClientCertSubjectDNAlias"), xForwardedFor_ClientCertSubjectDNAlias);
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

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getVServerGroup() const {
  return vServerGroup_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setVServerGroup(const std::string &vServerGroup) {
  vServerGroup_ = vServerGroup;
  setParameter(std::string("VServerGroup"), vServerGroup);
}

std::string SetLoadBalancerHTTPSListenerAttributeRequest::getXForwardedFor_ClientCertIssuerDN() const {
  return xForwardedFor_ClientCertIssuerDN_;
}

void SetLoadBalancerHTTPSListenerAttributeRequest::setXForwardedFor_ClientCertIssuerDN(const std::string &xForwardedFor_ClientCertIssuerDN) {
  xForwardedFor_ClientCertIssuerDN_ = xForwardedFor_ClientCertIssuerDN;
  setParameter(std::string("XForwardedFor_ClientCertIssuerDN"), xForwardedFor_ClientCertIssuerDN);
}

