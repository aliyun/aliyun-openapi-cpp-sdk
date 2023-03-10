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

#include <alibabacloud/vpc/model/DescribeFlowLogsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeFlowLogsRequest;

DescribeFlowLogsRequest::DescribeFlowLogsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeFlowLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFlowLogsRequest::~DescribeFlowLogsRequest() {}

long DescribeFlowLogsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeFlowLogsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeFlowLogsRequest::getDescription() const {
  return description_;
}

void DescribeFlowLogsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int DescribeFlowLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeFlowLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeFlowLogsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeFlowLogsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeFlowLogsRequest::getRegionId() const {
  return regionId_;
}

void DescribeFlowLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeFlowLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeFlowLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeFlowLogsRequest::getResourceId() const {
  return resourceId_;
}

void DescribeFlowLogsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeFlowLogsRequest::getProjectName() const {
  return projectName_;
}

void DescribeFlowLogsRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string DescribeFlowLogsRequest::getLogStoreName() const {
  return logStoreName_;
}

void DescribeFlowLogsRequest::setLogStoreName(const std::string &logStoreName) {
  logStoreName_ = logStoreName;
  setParameter(std::string("LogStoreName"), logStoreName);
}

std::string DescribeFlowLogsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeFlowLogsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeFlowLogsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeFlowLogsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeFlowLogsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeFlowLogsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeFlowLogsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeFlowLogsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::vector<DescribeFlowLogsRequest::Tags> DescribeFlowLogsRequest::getTags() const {
  return tags_;
}

void DescribeFlowLogsRequest::setTags(const std::vector<DescribeFlowLogsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string DescribeFlowLogsRequest::getVpcId() const {
  return vpcId_;
}

void DescribeFlowLogsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeFlowLogsRequest::getTrafficType() const {
  return trafficType_;
}

void DescribeFlowLogsRequest::setTrafficType(const std::string &trafficType) {
  trafficType_ = trafficType;
  setParameter(std::string("TrafficType"), trafficType);
}

std::string DescribeFlowLogsRequest::getFlowLogId() const {
  return flowLogId_;
}

void DescribeFlowLogsRequest::setFlowLogId(const std::string &flowLogId) {
  flowLogId_ = flowLogId;
  setParameter(std::string("FlowLogId"), flowLogId);
}

std::string DescribeFlowLogsRequest::getFlowLogName() const {
  return flowLogName_;
}

void DescribeFlowLogsRequest::setFlowLogName(const std::string &flowLogName) {
  flowLogName_ = flowLogName;
  setParameter(std::string("FlowLogName"), flowLogName);
}

std::string DescribeFlowLogsRequest::getStatus() const {
  return status_;
}

void DescribeFlowLogsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

