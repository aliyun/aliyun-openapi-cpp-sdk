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

#include <alibabacloud/rds/model/CheckCloudResourceAuthorizedRequest.h>

using AlibabaCloud::Rds::Model::CheckCloudResourceAuthorizedRequest;

CheckCloudResourceAuthorizedRequest::CheckCloudResourceAuthorizedRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CheckCloudResourceAuthorized") {
  setMethod(HttpRequest::Method::Post);
}

CheckCloudResourceAuthorizedRequest::~CheckCloudResourceAuthorizedRequest() {}

long CheckCloudResourceAuthorizedRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckCloudResourceAuthorizedRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckCloudResourceAuthorizedRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckCloudResourceAuthorizedRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckCloudResourceAuthorizedRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CheckCloudResourceAuthorizedRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CheckCloudResourceAuthorizedRequest::getSecurityToken() const {
  return securityToken_;
}

void CheckCloudResourceAuthorizedRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CheckCloudResourceAuthorizedRequest::getRegionId() const {
  return regionId_;
}

void CheckCloudResourceAuthorizedRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CheckCloudResourceAuthorizedRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CheckCloudResourceAuthorizedRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CheckCloudResourceAuthorizedRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckCloudResourceAuthorizedRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckCloudResourceAuthorizedRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckCloudResourceAuthorizedRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckCloudResourceAuthorizedRequest::getOwnerId() const {
  return ownerId_;
}

void CheckCloudResourceAuthorizedRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckCloudResourceAuthorizedRequest::getTargetRegionId() const {
  return targetRegionId_;
}

void CheckCloudResourceAuthorizedRequest::setTargetRegionId(const std::string &targetRegionId) {
  targetRegionId_ = targetRegionId;
  setParameter(std::string("TargetRegionId"), targetRegionId);
}

