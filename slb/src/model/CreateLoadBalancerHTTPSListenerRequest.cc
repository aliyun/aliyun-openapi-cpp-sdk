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

#include <alibabacloud/slb/model/CreateLoadBalancerHTTPSListenerRequest.h>

using AlibabaCloud::Slb::Model::CreateLoadBalancerHTTPSListenerRequest;

CreateLoadBalancerHTTPSListenerRequest::CreateLoadBalancerHTTPSListenerRequest()
    : RpcServiceRequest("slb", "2014-05-15", "CreateLoadBalancerHTTPSListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoadBalancerHTTPSListenerRequest::~CreateLoadBalancerHTTPSListenerRequest() {}

long CreateLoadBalancerHTTPSListenerRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<CreateLoadBalancerHTTPSListenerRequest::ServerCertificate> CreateLoadBalancerHTTPSListenerRequest::getServerCertificate() const {
  return serverCertificate_;
}

void CreateLoadBalancerHTTPSListenerRequest::setServerCertificate(const std::vector<CreateLoadBalancerHTTPSListenerRequest::ServerCertificate> &serverCertificate) {
  serverCertificate_ = serverCertificate;
  for(int dep1 = 0; dep1 != serverCertificate.size(); dep1++) {
  auto serverCertificateObj = serverCertificate.at(dep1);
  std::string serverCertificateObjStr = std::string("ServerCertificate") + "." + std::to_string(dep1 + 1);
    setParameter(serverCertificateObjStr + ".BindingType", serverCertificateObj.bindingType);
    setParameter(serverCertificateObjStr + ".CertificateId", serverCertificateObj.certificateId);
    setParameter(serverCertificateObjStr + ".StandardType", serverCertificateObj.standardType);
  }
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckTimeout() const {
  return healthCheckTimeout_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckTimeout(int healthCheckTimeout) {
  healthCheckTimeout_ = healthCheckTimeout;
  setParameter(std::string("HealthCheckTimeout"), std::to_string(healthCheckTimeout));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor() const {
  return xForwardedFor_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor(const std::string &xForwardedFor) {
  xForwardedFor_ = xForwardedFor;
  setParameter(std::string("XForwardedFor"), xForwardedFor);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckURI() const {
  return healthCheckURI_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckURI(const std::string &healthCheckURI) {
  healthCheckURI_ = healthCheckURI;
  setParameter(std::string("HealthCheckURI"), healthCheckURI);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_SLBPORT() const {
  return xForwardedFor_SLBPORT_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_SLBPORT(const std::string &xForwardedFor_SLBPORT) {
  xForwardedFor_SLBPORT_ = xForwardedFor_SLBPORT;
  setParameter(std::string("XForwardedFor_SLBPORT"), xForwardedFor_SLBPORT);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAclStatus() const {
  return aclStatus_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAclStatus(const std::string &aclStatus) {
  aclStatus_ = aclStatus;
  setParameter(std::string("AclStatus"), aclStatus);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAclType() const {
  return aclType_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAclType(const std::string &aclType) {
  aclType_ = aclType;
  setParameter(std::string("AclType"), aclType);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheck() const {
  return healthCheck_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheck(const std::string &healthCheck) {
  healthCheck_ = healthCheck;
  setParameter(std::string("HealthCheck"), healthCheck);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getVpcIds() const {
  return vpcIds_;
}

void CreateLoadBalancerHTTPSListenerRequest::setVpcIds(const std::string &vpcIds) {
  vpcIds_ = vpcIds;
  setParameter(std::string("VpcIds"), vpcIds);
}

std::vector<CreateLoadBalancerHTTPSListenerRequest::Tag> CreateLoadBalancerHTTPSListenerRequest::getTag() const {
  return tag_;
}

void CreateLoadBalancerHTTPSListenerRequest::setTag(const std::vector<CreateLoadBalancerHTTPSListenerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateLoadBalancerHTTPSListenerRequest::getVServerGroupId() const {
  return vServerGroupId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setVServerGroupId(const std::string &vServerGroupId) {
  vServerGroupId_ = vServerGroupId;
  setParameter(std::string("VServerGroupId"), vServerGroupId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAclId() const {
  return aclId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertClientVerify() const {
  return xForwardedFor_ClientCertClientVerify_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertClientVerify(const std::string &xForwardedFor_ClientCertClientVerify) {
  xForwardedFor_ClientCertClientVerify_ = xForwardedFor_ClientCertClientVerify;
  setParameter(std::string("XForwardedFor_ClientCertClientVerify"), xForwardedFor_ClientCertClientVerify);
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

long CreateLoadBalancerHTTPSListenerRequest::getOwnerId() const {
  return ownerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getCACertificateId() const {
  return cACertificateId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setCACertificateId(const std::string &cACertificateId) {
  cACertificateId_ = cACertificateId;
  setParameter(std::string("CACertificateId"), cACertificateId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getBackendProtocol() const {
  return backendProtocol_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBackendProtocol(const std::string &backendProtocol) {
  backendProtocol_ = backendProtocol;
  setParameter(std::string("BackendProtocol"), backendProtocol);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getTags() const {
  return tags_;
}

void CreateLoadBalancerHTTPSListenerRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertFingerprintAlias() const {
  return xForwardedFor_ClientCertFingerprintAlias_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertFingerprintAlias(const std::string &xForwardedFor_ClientCertFingerprintAlias) {
  xForwardedFor_ClientCertFingerprintAlias_ = xForwardedFor_ClientCertFingerprintAlias;
  setParameter(std::string("XForwardedFor_ClientCertFingerprintAlias"), xForwardedFor_ClientCertFingerprintAlias);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_SLBIP() const {
  return xForwardedFor_SLBIP_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_SLBIP(const std::string &xForwardedFor_SLBIP) {
  xForwardedFor_SLBIP_ = xForwardedFor_SLBIP;
  setParameter(std::string("XForwardedFor_SLBIP"), xForwardedFor_SLBIP);
}

int CreateLoadBalancerHTTPSListenerRequest::getBackendServerPort() const {
  return backendServerPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBackendServerPort(int backendServerPort) {
  backendServerPort_ = backendServerPort;
  setParameter(std::string("BackendServerPort"), std::to_string(backendServerPort));
}

int CreateLoadBalancerHTTPSListenerRequest::getHealthCheckInterval() const {
  return healthCheckInterval_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckInterval(int healthCheckInterval) {
  healthCheckInterval_ = healthCheckInterval;
  setParameter(std::string("HealthCheckInterval"), std::to_string(healthCheckInterval));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertClientVerifyAlias() const {
  return xForwardedFor_ClientCertClientVerifyAlias_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertClientVerifyAlias(const std::string &xForwardedFor_ClientCertClientVerifyAlias) {
  xForwardedFor_ClientCertClientVerifyAlias_ = xForwardedFor_ClientCertClientVerifyAlias;
  setParameter(std::string("XForwardedFor_ClientCertClientVerifyAlias"), xForwardedFor_ClientCertClientVerifyAlias);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_SLBID() const {
  return xForwardedFor_SLBID_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_SLBID(const std::string &xForwardedFor_SLBID) {
  xForwardedFor_SLBID_ = xForwardedFor_SLBID;
  setParameter(std::string("XForwardedFor_SLBID"), xForwardedFor_SLBID);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertFingerprint() const {
  return xForwardedFor_ClientCertFingerprint_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertFingerprint(const std::string &xForwardedFor_ClientCertFingerprint) {
  xForwardedFor_ClientCertFingerprint_ = xForwardedFor_ClientCertFingerprint;
  setParameter(std::string("XForwardedFor_ClientCertFingerprint"), xForwardedFor_ClientCertFingerprint);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckHttpVersion() const {
  return healthCheckHttpVersion_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckHttpVersion(const std::string &healthCheckHttpVersion) {
  healthCheckHttpVersion_ = healthCheckHttpVersion;
  setParameter(std::string("HealthCheckHttpVersion"), healthCheckHttpVersion);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getAccess_key_id() const {
  return access_key_id_;
}

void CreateLoadBalancerHTTPSListenerRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientSrcPort() const {
  return xForwardedFor_ClientSrcPort_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientSrcPort(const std::string &xForwardedFor_ClientSrcPort) {
  xForwardedFor_ClientSrcPort_ = xForwardedFor_ClientSrcPort;
  setParameter(std::string("XForwardedFor_ClientSrcPort"), xForwardedFor_ClientSrcPort);
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

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertIssuerDNAlias() const {
  return xForwardedFor_ClientCertIssuerDNAlias_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertIssuerDNAlias(const std::string &xForwardedFor_ClientCertIssuerDNAlias) {
  xForwardedFor_ClientCertIssuerDNAlias_ = xForwardedFor_ClientCertIssuerDNAlias;
  setParameter(std::string("XForwardedFor_ClientCertIssuerDNAlias"), xForwardedFor_ClientCertIssuerDNAlias);
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

int CreateLoadBalancerHTTPSListenerRequest::getMaxConnection() const {
  return maxConnection_;
}

void CreateLoadBalancerHTTPSListenerRequest::setMaxConnection(int maxConnection) {
  maxConnection_ = maxConnection;
  setParameter(std::string("MaxConnection"), std::to_string(maxConnection));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getEnableHttp2() const {
  return enableHttp2_;
}

void CreateLoadBalancerHTTPSListenerRequest::setEnableHttp2(const std::string &enableHttp2) {
  enableHttp2_ = enableHttp2;
  setParameter(std::string("EnableHttp2"), enableHttp2);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getRegionId() const {
  return regionId_;
}

void CreateLoadBalancerHTTPSListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertSubjectDN() const {
  return xForwardedFor_ClientCertSubjectDN_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertSubjectDN(const std::string &xForwardedFor_ClientCertSubjectDN) {
  xForwardedFor_ClientCertSubjectDN_ = xForwardedFor_ClientCertSubjectDN;
  setParameter(std::string("XForwardedFor_ClientCertSubjectDN"), xForwardedFor_ClientCertSubjectDN);
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

std::string CreateLoadBalancerHTTPSListenerRequest::getHealthCheckType() const {
  return healthCheckType_;
}

void CreateLoadBalancerHTTPSListenerRequest::setHealthCheckType(const std::string &healthCheckType) {
  healthCheckType_ = healthCheckType;
  setParameter(std::string("HealthCheckType"), healthCheckType);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateLoadBalancerHTTPSListenerRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateLoadBalancerHTTPSListenerRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateLoadBalancerHTTPSListenerRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateLoadBalancerHTTPSListenerRequest::getStickySession() const {
  return stickySession_;
}

void CreateLoadBalancerHTTPSListenerRequest::setStickySession(const std::string &stickySession) {
  stickySession_ = stickySession;
  setParameter(std::string("StickySession"), stickySession);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateLoadBalancerHTTPSListenerRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getGzip() const {
  return gzip_;
}

void CreateLoadBalancerHTTPSListenerRequest::setGzip(const std::string &gzip) {
  gzip_ = gzip;
  setParameter(std::string("Gzip"), gzip);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getTLSCipherPolicy() const {
  return tLSCipherPolicy_;
}

void CreateLoadBalancerHTTPSListenerRequest::setTLSCipherPolicy(const std::string &tLSCipherPolicy) {
  tLSCipherPolicy_ = tLSCipherPolicy;
  setParameter(std::string("TLSCipherPolicy"), tLSCipherPolicy);
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

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_proto() const {
  return xForwardedFor_proto_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_proto(const std::string &xForwardedFor_proto) {
  xForwardedFor_proto_ = xForwardedFor_proto;
  setParameter(std::string("XForwardedFor_proto"), xForwardedFor_proto);
}

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertSubjectDNAlias() const {
  return xForwardedFor_ClientCertSubjectDNAlias_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertSubjectDNAlias(const std::string &xForwardedFor_ClientCertSubjectDNAlias) {
  xForwardedFor_ClientCertSubjectDNAlias_ = xForwardedFor_ClientCertSubjectDNAlias;
  setParameter(std::string("XForwardedFor_ClientCertSubjectDNAlias"), xForwardedFor_ClientCertSubjectDNAlias);
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

std::string CreateLoadBalancerHTTPSListenerRequest::getXForwardedFor_ClientCertIssuerDN() const {
  return xForwardedFor_ClientCertIssuerDN_;
}

void CreateLoadBalancerHTTPSListenerRequest::setXForwardedFor_ClientCertIssuerDN(const std::string &xForwardedFor_ClientCertIssuerDN) {
  xForwardedFor_ClientCertIssuerDN_ = xForwardedFor_ClientCertIssuerDN;
  setParameter(std::string("XForwardedFor_ClientCertIssuerDN"), xForwardedFor_ClientCertIssuerDN);
}

