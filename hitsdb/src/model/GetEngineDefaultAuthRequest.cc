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

#include <alibabacloud/hitsdb/model/GetEngineDefaultAuthRequest.h>

using AlibabaCloud::Hitsdb::Model::GetEngineDefaultAuthRequest;

GetEngineDefaultAuthRequest::GetEngineDefaultAuthRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetEngineDefaultAuth") {
  setMethod(HttpRequest::Method::Post);
}

GetEngineDefaultAuthRequest::~GetEngineDefaultAuthRequest() {}

long GetEngineDefaultAuthRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetEngineDefaultAuthRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetEngineDefaultAuthRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetEngineDefaultAuthRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetEngineDefaultAuthRequest::getSecurityToken() const {
  return securityToken_;
}

void GetEngineDefaultAuthRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetEngineDefaultAuthRequest::getRegionId() const {
  return regionId_;
}

void GetEngineDefaultAuthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetEngineDefaultAuthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetEngineDefaultAuthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetEngineDefaultAuthRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetEngineDefaultAuthRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetEngineDefaultAuthRequest::getOwnerId() const {
  return ownerId_;
}

void GetEngineDefaultAuthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetEngineDefaultAuthRequest::getInstanceId() const {
  return instanceId_;
}

void GetEngineDefaultAuthRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

