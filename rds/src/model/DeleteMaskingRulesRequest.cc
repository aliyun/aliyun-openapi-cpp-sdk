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

#include <alibabacloud/rds/model/DeleteMaskingRulesRequest.h>

using AlibabaCloud::Rds::Model::DeleteMaskingRulesRequest;

DeleteMaskingRulesRequest::DeleteMaskingRulesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteMaskingRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMaskingRulesRequest::~DeleteMaskingRulesRequest() {}

std::string DeleteMaskingRulesRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DeleteMaskingRulesRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DeleteMaskingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteMaskingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteMaskingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteMaskingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteMaskingRulesRequest::getRuleName() const {
  return ruleName_;
}

void DeleteMaskingRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DeleteMaskingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteMaskingRulesRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DeleteMaskingRulesRequest::getDBName() const {
  return dBName_;
}

void DeleteMaskingRulesRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string DeleteMaskingRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteMaskingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

