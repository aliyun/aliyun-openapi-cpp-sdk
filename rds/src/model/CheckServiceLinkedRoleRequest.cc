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

#include <alibabacloud/rds/model/CheckServiceLinkedRoleRequest.h>

using AlibabaCloud::Rds::Model::CheckServiceLinkedRoleRequest;

CheckServiceLinkedRoleRequest::CheckServiceLinkedRoleRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CheckServiceLinkedRole") {
  setMethod(HttpRequest::Method::Post);
}

CheckServiceLinkedRoleRequest::~CheckServiceLinkedRoleRequest() {}

long CheckServiceLinkedRoleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckServiceLinkedRoleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckServiceLinkedRoleRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckServiceLinkedRoleRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckServiceLinkedRoleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CheckServiceLinkedRoleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CheckServiceLinkedRoleRequest::getServiceLinkedRole() const {
  return serviceLinkedRole_;
}

void CheckServiceLinkedRoleRequest::setServiceLinkedRole(const std::string &serviceLinkedRole) {
  serviceLinkedRole_ = serviceLinkedRole;
  setParameter(std::string("ServiceLinkedRole"), serviceLinkedRole);
}

std::string CheckServiceLinkedRoleRequest::getRegionId() const {
  return regionId_;
}

void CheckServiceLinkedRoleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CheckServiceLinkedRoleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckServiceLinkedRoleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CheckServiceLinkedRoleRequest::getOwnerId() const {
  return ownerId_;
}

void CheckServiceLinkedRoleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

