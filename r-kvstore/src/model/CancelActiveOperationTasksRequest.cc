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

#include <alibabacloud/r-kvstore/model/CancelActiveOperationTasksRequest.h>

using AlibabaCloud::R_kvstore::Model::CancelActiveOperationTasksRequest;

CancelActiveOperationTasksRequest::CancelActiveOperationTasksRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "CancelActiveOperationTasks") {
  setMethod(HttpRequest::Method::Post);
}

CancelActiveOperationTasksRequest::~CancelActiveOperationTasksRequest() {}

long CancelActiveOperationTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CancelActiveOperationTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CancelActiveOperationTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CancelActiveOperationTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CancelActiveOperationTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void CancelActiveOperationTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CancelActiveOperationTasksRequest::getRegionId() const {
  return regionId_;
}

void CancelActiveOperationTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CancelActiveOperationTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CancelActiveOperationTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CancelActiveOperationTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CancelActiveOperationTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CancelActiveOperationTasksRequest::getOwnerId() const {
  return ownerId_;
}

void CancelActiveOperationTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CancelActiveOperationTasksRequest::getIds() const {
  return ids_;
}

void CancelActiveOperationTasksRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

