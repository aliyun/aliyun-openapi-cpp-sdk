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

#include <alibabacloud/config/model/GetAggregateResourceComplianceByConfigRuleRequest.h>

using AlibabaCloud::Config::Model::GetAggregateResourceComplianceByConfigRuleRequest;

GetAggregateResourceComplianceByConfigRuleRequest::GetAggregateResourceComplianceByConfigRuleRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetAggregateResourceComplianceByConfigRule") {
  setMethod(HttpRequest::Method::Post);
}

GetAggregateResourceComplianceByConfigRuleRequest::~GetAggregateResourceComplianceByConfigRuleRequest() {}

std::string GetAggregateResourceComplianceByConfigRuleRequest::getConfigRuleId() const {
  return configRuleId_;
}

void GetAggregateResourceComplianceByConfigRuleRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setParameter(std::string("ConfigRuleId"), configRuleId);
}

long GetAggregateResourceComplianceByConfigRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetAggregateResourceComplianceByConfigRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetAggregateResourceComplianceByConfigRuleRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GetAggregateResourceComplianceByConfigRuleRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

long GetAggregateResourceComplianceByConfigRuleRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void GetAggregateResourceComplianceByConfigRuleRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

std::string GetAggregateResourceComplianceByConfigRuleRequest::getComplianceType() const {
  return complianceType_;
}

void GetAggregateResourceComplianceByConfigRuleRequest::setComplianceType(const std::string &complianceType) {
  complianceType_ = complianceType;
  setParameter(std::string("ComplianceType"), complianceType);
}

