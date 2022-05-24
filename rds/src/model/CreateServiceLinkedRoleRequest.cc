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

#include <alibabacloud/rds/model/CreateServiceLinkedRoleRequest.h>

using AlibabaCloud::Rds::Model::CreateServiceLinkedRoleRequest;

CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateServiceLinkedRole") {
  setMethod(HttpRequest::Method::Post);
}

CreateServiceLinkedRoleRequest::~CreateServiceLinkedRoleRequest() {}

long CreateServiceLinkedRoleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateServiceLinkedRoleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateServiceLinkedRoleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateServiceLinkedRoleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateServiceLinkedRoleRequest::getOwnerId() const {
  return ownerId_;
}

void CreateServiceLinkedRoleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateServiceLinkedRoleRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateServiceLinkedRoleRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateServiceLinkedRoleRequest::getServiceLinkedRole() const {
  return serviceLinkedRole_;
}

void CreateServiceLinkedRoleRequest::setServiceLinkedRole(const std::string &serviceLinkedRole) {
  serviceLinkedRole_ = serviceLinkedRole;
  setParameter(std::string("ServiceLinkedRole"), serviceLinkedRole);
}

std::string CreateServiceLinkedRoleRequest::getRegionId() const {
  return regionId_;
}

void CreateServiceLinkedRoleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

