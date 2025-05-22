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

#include <alibabacloud/rds/model/DescribeMaskingRulesRequest.h>

using AlibabaCloud::Rds::Model::DescribeMaskingRulesRequest;

DescribeMaskingRulesRequest::DescribeMaskingRulesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeMaskingRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMaskingRulesRequest::~DescribeMaskingRulesRequest() {}

std::string DescribeMaskingRulesRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeMaskingRulesRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DescribeMaskingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeMaskingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeMaskingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeMaskingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeMaskingRulesRequest::getRuleName() const {
  return ruleName_;
}

void DescribeMaskingRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string DescribeMaskingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMaskingRulesRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeMaskingRulesRequest::getDBName() const {
  return dBName_;
}

void DescribeMaskingRulesRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string DescribeMaskingRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeMaskingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

