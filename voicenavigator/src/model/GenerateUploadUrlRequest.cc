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

#include <alibabacloud/voicenavigator/model/GenerateUploadUrlRequest.h>

using AlibabaCloud::VoiceNavigator::Model::GenerateUploadUrlRequest;

GenerateUploadUrlRequest::GenerateUploadUrlRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "GenerateUploadUrl") {
  setMethod(HttpRequest::Method::Post);
}

GenerateUploadUrlRequest::~GenerateUploadUrlRequest() {}

long GenerateUploadUrlRequest::getCallerParentId() const {
  return callerParentId_;
}

void GenerateUploadUrlRequest::setCallerParentId(long callerParentId) {
  callerParentId_ = callerParentId;
  setBodyParameter(std::string("CallerParentId"), std::to_string(callerParentId));
}

bool GenerateUploadUrlRequest::getSecurityTransport() const {
  return securityTransport_;
}

void GenerateUploadUrlRequest::setSecurityTransport(bool securityTransport) {
  securityTransport_ = securityTransport;
  setBodyParameter(std::string("SecurityTransport"), securityTransport ? "true" : "false");
}

bool GenerateUploadUrlRequest::getProxyOriginalSecurityTransport() const {
  return proxyOriginalSecurityTransport_;
}

void GenerateUploadUrlRequest::setProxyOriginalSecurityTransport(bool proxyOriginalSecurityTransport) {
  proxyOriginalSecurityTransport_ = proxyOriginalSecurityTransport;
  setBodyParameter(std::string("ProxyOriginalSecurityTransport"), proxyOriginalSecurityTransport ? "true" : "false");
}

long GenerateUploadUrlRequest::getUserId() const {
  return userId_;
}

void GenerateUploadUrlRequest::setUserId(long userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), std::to_string(userId));
}

std::string GenerateUploadUrlRequest::getCallerType() const {
  return callerType_;
}

void GenerateUploadUrlRequest::setCallerType(const std::string &callerType) {
  callerType_ = callerType;
  setBodyParameter(std::string("CallerType"), callerType);
}

std::string GenerateUploadUrlRequest::getCallerIp() const {
  return callerIp_;
}

void GenerateUploadUrlRequest::setCallerIp(const std::string &callerIp) {
  callerIp_ = callerIp;
  setBodyParameter(std::string("CallerIp"), callerIp);
}

std::string GenerateUploadUrlRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GenerateUploadUrlRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setBodyParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GenerateUploadUrlRequest::getSecurityToken() const {
  return securityToken_;
}

void GenerateUploadUrlRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setBodyParameter(std::string("SecurityToken"), securityToken);
}

long GenerateUploadUrlRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void GenerateUploadUrlRequest::setInstanceOwnerId(long instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setBodyParameter(std::string("InstanceOwnerId"), std::to_string(instanceOwnerId));
}

std::string GenerateUploadUrlRequest::getClientIp() const {
  return clientIp_;
}

void GenerateUploadUrlRequest::setClientIp(const std::string &clientIp) {
  clientIp_ = clientIp;
  setBodyParameter(std::string("ClientIp"), clientIp);
}

long GenerateUploadUrlRequest::getTenantId() const {
  return tenantId_;
}

void GenerateUploadUrlRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string GenerateUploadUrlRequest::getProxyOriginalSourceIp() const {
  return proxyOriginalSourceIp_;
}

void GenerateUploadUrlRequest::setProxyOriginalSourceIp(const std::string &proxyOriginalSourceIp) {
  proxyOriginalSourceIp_ = proxyOriginalSourceIp;
  setBodyParameter(std::string("ProxyOriginalSourceIp"), proxyOriginalSourceIp);
}

std::string GenerateUploadUrlRequest::getKey() const {
  return key_;
}

void GenerateUploadUrlRequest::setKey(const std::string &key) {
  key_ = key;
  setBodyParameter(std::string("Key"), key);
}

long GenerateUploadUrlRequest::getCallerUid() const {
  return callerUid_;
}

void GenerateUploadUrlRequest::setCallerUid(long callerUid) {
  callerUid_ = callerUid;
  setBodyParameter(std::string("CallerUid"), std::to_string(callerUid));
}

std::string GenerateUploadUrlRequest::getCallerBid() const {
  return callerBid_;
}

void GenerateUploadUrlRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setBodyParameter(std::string("CallerBid"), callerBid);
}

long GenerateUploadUrlRequest::getXspaceTenantBuId() const {
  return xspaceTenantBuId_;
}

void GenerateUploadUrlRequest::setXspaceTenantBuId(long xspaceTenantBuId) {
  xspaceTenantBuId_ = xspaceTenantBuId;
  setBodyParameter(std::string("XspaceTenantBuId"), std::to_string(xspaceTenantBuId));
}

bool GenerateUploadUrlRequest::getMfaPresent() const {
  return mfaPresent_;
}

void GenerateUploadUrlRequest::setMfaPresent(bool mfaPresent) {
  mfaPresent_ = mfaPresent;
  setBodyParameter(std::string("MfaPresent"), mfaPresent ? "true" : "false");
}

int GenerateUploadUrlRequest::getEnvironment() const {
  return environment_;
}

void GenerateUploadUrlRequest::setEnvironment(int environment) {
  environment_ = environment;
  setBodyParameter(std::string("Environment"), std::to_string(environment));
}

std::string GenerateUploadUrlRequest::getFileName() const {
  return fileName_;
}

void GenerateUploadUrlRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setBodyParameter(std::string("FileName"), fileName);
}

std::string GenerateUploadUrlRequest::getInstanceId() const {
  return instanceId_;
}

void GenerateUploadUrlRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string GenerateUploadUrlRequest::getRequestId() const {
  return requestId_;
}

void GenerateUploadUrlRequest::setRequestId(const std::string &requestId) {
  requestId_ = requestId;
  setBodyParameter(std::string("RequestId"), requestId);
}

long GenerateUploadUrlRequest::getXspaceServicerId() const {
  return xspaceServicerId_;
}

void GenerateUploadUrlRequest::setXspaceServicerId(long xspaceServicerId) {
  xspaceServicerId_ = xspaceServicerId;
  setBodyParameter(std::string("XspaceServicerId"), std::to_string(xspaceServicerId));
}

std::string GenerateUploadUrlRequest::getTenantName() const {
  return tenantName_;
}

void GenerateUploadUrlRequest::setTenantName(const std::string &tenantName) {
  tenantName_ = tenantName;
  setBodyParameter(std::string("TenantName"), tenantName);
}

bool GenerateUploadUrlRequest::getProxyTrustTransportInfo() const {
  return proxyTrustTransportInfo_;
}

void GenerateUploadUrlRequest::setProxyTrustTransportInfo(bool proxyTrustTransportInfo) {
  proxyTrustTransportInfo_ = proxyTrustTransportInfo;
  setBodyParameter(std::string("ProxyTrustTransportInfo"), proxyTrustTransportInfo ? "true" : "false");
}

std::string GenerateUploadUrlRequest::getUserName() const {
  return userName_;
}

void GenerateUploadUrlRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

