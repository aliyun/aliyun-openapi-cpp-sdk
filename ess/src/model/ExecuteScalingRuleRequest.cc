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

#include <alibabacloud/ess/model/ExecuteScalingRuleRequest.h>

using AlibabaCloud::Ess::Model::ExecuteScalingRuleRequest;

ExecuteScalingRuleRequest::ExecuteScalingRuleRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ExecuteScalingRule") {
  setMethod(HttpRequest::Method::Post);
}

ExecuteScalingRuleRequest::~ExecuteScalingRuleRequest() {}

long ExecuteScalingRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ExecuteScalingRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ExecuteScalingRuleRequest::getClientToken() const {
  return clientToken_;
}

void ExecuteScalingRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ExecuteScalingRuleRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ExecuteScalingRuleRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ExecuteScalingRuleRequest::getRegionId() const {
  return regionId_;
}

void ExecuteScalingRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

float ExecuteScalingRuleRequest::getBreachThreshold() const {
  return breachThreshold_;
}

void ExecuteScalingRuleRequest::setBreachThreshold(float breachThreshold) {
  breachThreshold_ = breachThreshold;
  setParameter(std::string("BreachThreshold"), std::to_string(breachThreshold));
}

std::string ExecuteScalingRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ExecuteScalingRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ExecuteScalingRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ExecuteScalingRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ExecuteScalingRuleRequest::getOwnerId() const {
  return ownerId_;
}

void ExecuteScalingRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

float ExecuteScalingRuleRequest::getMetricValue() const {
  return metricValue_;
}

void ExecuteScalingRuleRequest::setMetricValue(float metricValue) {
  metricValue_ = metricValue;
  setParameter(std::string("MetricValue"), std::to_string(metricValue));
}

std::string ExecuteScalingRuleRequest::getScalingRuleAri() const {
  return scalingRuleAri_;
}

void ExecuteScalingRuleRequest::setScalingRuleAri(const std::string &scalingRuleAri) {
  scalingRuleAri_ = scalingRuleAri;
  setParameter(std::string("ScalingRuleAri"), scalingRuleAri);
}

