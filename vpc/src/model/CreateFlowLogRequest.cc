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

#include <alibabacloud/vpc/model/CreateFlowLogRequest.h>

using AlibabaCloud::Vpc::Model::CreateFlowLogRequest;

CreateFlowLogRequest::CreateFlowLogRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateFlowLog") {
  setMethod(HttpRequest::Method::Post);
}

CreateFlowLogRequest::~CreateFlowLogRequest() {}

long CreateFlowLogRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateFlowLogRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateFlowLogRequest::getDescription() const {
  return description_;
}

void CreateFlowLogRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateFlowLogRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateFlowLogRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateFlowLogRequest::getRegionId() const {
  return regionId_;
}

void CreateFlowLogRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateFlowLogRequest::getIpVersion() const {
  return ipVersion_;
}

void CreateFlowLogRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::vector<CreateFlowLogRequest::Tag> CreateFlowLogRequest::getTag() const {
  return tag_;
}

void CreateFlowLogRequest::setTag(const std::vector<CreateFlowLogRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateFlowLogRequest::getResourceId() const {
  return resourceId_;
}

void CreateFlowLogRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string CreateFlowLogRequest::getProjectName() const {
  return projectName_;
}

void CreateFlowLogRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateFlowLogRequest::getLogStoreName() const {
  return logStoreName_;
}

void CreateFlowLogRequest::setLogStoreName(const std::string &logStoreName) {
  logStoreName_ = logStoreName;
  setParameter(std::string("LogStoreName"), logStoreName);
}

std::string CreateFlowLogRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateFlowLogRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateFlowLogRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateFlowLogRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> CreateFlowLogRequest::getTrafficPath() const {
  return trafficPath_;
}

void CreateFlowLogRequest::setTrafficPath(const std::vector<std::string> &trafficPath) {
  trafficPath_ = trafficPath;
}

int CreateFlowLogRequest::getAggregationInterval() const {
  return aggregationInterval_;
}

void CreateFlowLogRequest::setAggregationInterval(int aggregationInterval) {
  aggregationInterval_ = aggregationInterval;
  setParameter(std::string("AggregationInterval"), std::to_string(aggregationInterval));
}

long CreateFlowLogRequest::getOwnerId() const {
  return ownerId_;
}

void CreateFlowLogRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateFlowLogRequest::getResourceType() const {
  return resourceType_;
}

void CreateFlowLogRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string CreateFlowLogRequest::getTrafficType() const {
  return trafficType_;
}

void CreateFlowLogRequest::setTrafficType(const std::string &trafficType) {
  trafficType_ = trafficType;
  setParameter(std::string("TrafficType"), trafficType);
}

std::string CreateFlowLogRequest::getFlowLogName() const {
  return flowLogName_;
}

void CreateFlowLogRequest::setFlowLogName(const std::string &flowLogName) {
  flowLogName_ = flowLogName;
  setParameter(std::string("FlowLogName"), flowLogName);
}

std::string CreateFlowLogRequest::getTrafficAnalyzerId() const {
  return trafficAnalyzerId_;
}

void CreateFlowLogRequest::setTrafficAnalyzerId(const std::string &trafficAnalyzerId) {
  trafficAnalyzerId_ = trafficAnalyzerId;
  setParameter(std::string("TrafficAnalyzerId"), trafficAnalyzerId);
}

