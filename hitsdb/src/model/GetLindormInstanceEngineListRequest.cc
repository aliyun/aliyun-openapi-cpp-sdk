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

#include <alibabacloud/hitsdb/model/GetLindormInstanceEngineListRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLindormInstanceEngineListRequest;

GetLindormInstanceEngineListRequest::GetLindormInstanceEngineListRequest()
    : RpcServiceRequest("hitsdb", "2020-06-15", "GetLindormInstanceEngineList") {
  setMethod(HttpRequest::Method::Post);
}

GetLindormInstanceEngineListRequest::~GetLindormInstanceEngineListRequest() {}

long GetLindormInstanceEngineListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetLindormInstanceEngineListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetLindormInstanceEngineListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetLindormInstanceEngineListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetLindormInstanceEngineListRequest::getSecurityToken() const {
  return securityToken_;
}

void GetLindormInstanceEngineListRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string GetLindormInstanceEngineListRequest::getRegionId() const {
  return regionId_;
}

void GetLindormInstanceEngineListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetLindormInstanceEngineListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetLindormInstanceEngineListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetLindormInstanceEngineListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetLindormInstanceEngineListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetLindormInstanceEngineListRequest::getOwnerId() const {
  return ownerId_;
}

void GetLindormInstanceEngineListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetLindormInstanceEngineListRequest::getInstanceId() const {
  return instanceId_;
}

void GetLindormInstanceEngineListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

