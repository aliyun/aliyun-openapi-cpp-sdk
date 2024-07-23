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

#include <alibabacloud/rds/model/ModifyCustinsResourceRequest.h>

using AlibabaCloud::Rds::Model::ModifyCustinsResourceRequest;

ModifyCustinsResourceRequest::ModifyCustinsResourceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyCustinsResource") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCustinsResourceRequest::~ModifyCustinsResourceRequest() {}

long ModifyCustinsResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCustinsResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCustinsResourceRequest::getIncreaseRatio() const {
  return increaseRatio_;
}

void ModifyCustinsResourceRequest::setIncreaseRatio(const std::string &increaseRatio) {
  increaseRatio_ = increaseRatio;
  setParameter(std::string("IncreaseRatio"), increaseRatio);
}

std::string ModifyCustinsResourceRequest::getRestoreOriginalSpecification() const {
  return restoreOriginalSpecification_;
}

void ModifyCustinsResourceRequest::setRestoreOriginalSpecification(const std::string &restoreOriginalSpecification) {
  restoreOriginalSpecification_ = restoreOriginalSpecification;
  setParameter(std::string("RestoreOriginalSpecification"), restoreOriginalSpecification);
}

std::string ModifyCustinsResourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyCustinsResourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyCustinsResourceRequest::getRegionId() const {
  return regionId_;
}

void ModifyCustinsResourceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCustinsResourceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyCustinsResourceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyCustinsResourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCustinsResourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyCustinsResourceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCustinsResourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCustinsResourceRequest::getResourceType() const {
  return resourceType_;
}

void ModifyCustinsResourceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ModifyCustinsResourceRequest::getAdjustDeadline() const {
  return adjustDeadline_;
}

void ModifyCustinsResourceRequest::setAdjustDeadline(const std::string &adjustDeadline) {
  adjustDeadline_ = adjustDeadline;
  setParameter(std::string("AdjustDeadline"), adjustDeadline);
}

int ModifyCustinsResourceRequest::getTargetValue() const {
  return targetValue_;
}

void ModifyCustinsResourceRequest::setTargetValue(int targetValue) {
  targetValue_ = targetValue;
  setParameter(std::string("TargetValue"), std::to_string(targetValue));
}

