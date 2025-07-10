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

#include <alibabacloud/vpc/model/ModifyFlowLogAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyFlowLogAttributeRequest;

ModifyFlowLogAttributeRequest::ModifyFlowLogAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyFlowLogAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFlowLogAttributeRequest::~ModifyFlowLogAttributeRequest() {}

long ModifyFlowLogAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyFlowLogAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyFlowLogAttributeRequest::getDescription() const {
  return description_;
}

void ModifyFlowLogAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool ModifyFlowLogAttributeRequest::getEnableTrafficAnalyze() const {
  return enableTrafficAnalyze_;
}

void ModifyFlowLogAttributeRequest::setEnableTrafficAnalyze(bool enableTrafficAnalyze) {
  enableTrafficAnalyze_ = enableTrafficAnalyze;
  setParameter(std::string("EnableTrafficAnalyze"), enableTrafficAnalyze ? "true" : "false");
}

std::string ModifyFlowLogAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyFlowLogAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyFlowLogAttributeRequest::getDisableLogDelivery() const {
  return disableLogDelivery_;
}

void ModifyFlowLogAttributeRequest::setDisableLogDelivery(bool disableLogDelivery) {
  disableLogDelivery_ = disableLogDelivery;
  setParameter(std::string("DisableLogDelivery"), disableLogDelivery ? "true" : "false");
}

std::string ModifyFlowLogAttributeRequest::getIpVersion() const {
  return ipVersion_;
}

void ModifyFlowLogAttributeRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

bool ModifyFlowLogAttributeRequest::getEnableLogDelivery() const {
  return enableLogDelivery_;
}

void ModifyFlowLogAttributeRequest::setEnableLogDelivery(bool enableLogDelivery) {
  enableLogDelivery_ = enableLogDelivery;
  setParameter(std::string("EnableLogDelivery"), enableLogDelivery ? "true" : "false");
}

std::string ModifyFlowLogAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyFlowLogAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyFlowLogAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyFlowLogAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyFlowLogAttributeRequest::getAggregationInterval() const {
  return aggregationInterval_;
}

void ModifyFlowLogAttributeRequest::setAggregationInterval(int aggregationInterval) {
  aggregationInterval_ = aggregationInterval;
  setParameter(std::string("AggregationInterval"), std::to_string(aggregationInterval));
}

long ModifyFlowLogAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyFlowLogAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyFlowLogAttributeRequest::getFlowLogId() const {
  return flowLogId_;
}

void ModifyFlowLogAttributeRequest::setFlowLogId(const std::string &flowLogId) {
  flowLogId_ = flowLogId;
  setParameter(std::string("FlowLogId"), flowLogId);
}

std::string ModifyFlowLogAttributeRequest::getFlowLogName() const {
  return flowLogName_;
}

void ModifyFlowLogAttributeRequest::setFlowLogName(const std::string &flowLogName) {
  flowLogName_ = flowLogName;
  setParameter(std::string("FlowLogName"), flowLogName);
}

std::string ModifyFlowLogAttributeRequest::getTrafficAnalyzerId() const {
  return trafficAnalyzerId_;
}

void ModifyFlowLogAttributeRequest::setTrafficAnalyzerId(const std::string &trafficAnalyzerId) {
  trafficAnalyzerId_ = trafficAnalyzerId;
  setParameter(std::string("TrafficAnalyzerId"), trafficAnalyzerId);
}

