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

#include <alibabacloud/config/model/StartAggregateRemediationRequest.h>

using AlibabaCloud::Config::Model::StartAggregateRemediationRequest;

StartAggregateRemediationRequest::StartAggregateRemediationRequest()
    : RpcServiceRequest("config", "2020-09-07", "StartAggregateRemediation") {
  setMethod(HttpRequest::Method::Post);
}

StartAggregateRemediationRequest::~StartAggregateRemediationRequest() {}

std::string StartAggregateRemediationRequest::getConfigRuleId() const {
  return configRuleId_;
}

void StartAggregateRemediationRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string StartAggregateRemediationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartAggregateRemediationRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string StartAggregateRemediationRequest::getAggregatorId() const {
  return aggregatorId_;
}

void StartAggregateRemediationRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

long StartAggregateRemediationRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void StartAggregateRemediationRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

std::string StartAggregateRemediationRequest::getRegionId() const {
  return regionId_;
}

void StartAggregateRemediationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartAggregateRemediationRequest::getResourceRegionId() const {
  return resourceRegionId_;
}

void StartAggregateRemediationRequest::setResourceRegionId(const std::string &resourceRegionId) {
  resourceRegionId_ = resourceRegionId;
  setParameter(std::string("ResourceRegionId"), resourceRegionId);
}

std::string StartAggregateRemediationRequest::getResourceId() const {
  return resourceId_;
}

void StartAggregateRemediationRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string StartAggregateRemediationRequest::getResourceType() const {
  return resourceType_;
}

void StartAggregateRemediationRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

