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

#include <alibabacloud/r-kvstore/model/ModifyInstanceSSLRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceSSLRequest;

ModifyInstanceSSLRequest::ModifyInstanceSSLRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceSSL") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceSSLRequest::~ModifyInstanceSSLRequest() {}

long ModifyInstanceSSLRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceSSLRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceSSLRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyInstanceSSLRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyInstanceSSLRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyInstanceSSLRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyInstanceSSLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceSSLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceSSLRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceSSLRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceSSLRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceSSLRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceSSLRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceSSLRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceSSLRequest::getSSLEnabled() const {
  return sSLEnabled_;
}

void ModifyInstanceSSLRequest::setSSLEnabled(const std::string &sSLEnabled) {
  sSLEnabled_ = sSLEnabled;
  setParameter(std::string("SSLEnabled"), sSLEnabled);
}

