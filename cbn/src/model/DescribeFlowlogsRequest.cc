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

#include <alibabacloud/cbn/model/DescribeFlowlogsRequest.h>

using AlibabaCloud::Cbn::Model::DescribeFlowlogsRequest;

DescribeFlowlogsRequest::DescribeFlowlogsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeFlowlogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeFlowlogsRequest::~DescribeFlowlogsRequest() {}

long DescribeFlowlogsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeFlowlogsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeFlowlogsRequest::getClientToken() const {
  return clientToken_;
}

void DescribeFlowlogsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeFlowlogsRequest::getCenId() const {
  return cenId_;
}

void DescribeFlowlogsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string DescribeFlowlogsRequest::getDescription() const {
  return description_;
}

void DescribeFlowlogsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int DescribeFlowlogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeFlowlogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeFlowlogsRequest::getRegionId() const {
  return regionId_;
}

void DescribeFlowlogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeFlowlogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeFlowlogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeFlowlogsRequest::Tag> DescribeFlowlogsRequest::getTag() const {
  return tag_;
}

void DescribeFlowlogsRequest::setTag(const std::vector<DescribeFlowlogsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeFlowlogsRequest::getProjectName() const {
  return projectName_;
}

void DescribeFlowlogsRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string DescribeFlowlogsRequest::getLogStoreName() const {
  return logStoreName_;
}

void DescribeFlowlogsRequest::setLogStoreName(const std::string &logStoreName) {
  logStoreName_ = logStoreName;
  setParameter(std::string("LogStoreName"), logStoreName);
}

std::string DescribeFlowlogsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeFlowlogsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeFlowlogsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeFlowlogsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeFlowlogsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeFlowlogsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeFlowlogsRequest::getVersion() const {
  return version_;
}

void DescribeFlowlogsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DescribeFlowlogsRequest::getTransitRouterAttachmentId() const {
  return transitRouterAttachmentId_;
}

void DescribeFlowlogsRequest::setTransitRouterAttachmentId(const std::string &transitRouterAttachmentId) {
  transitRouterAttachmentId_ = transitRouterAttachmentId;
  setParameter(std::string("TransitRouterAttachmentId"), transitRouterAttachmentId);
}

std::string DescribeFlowlogsRequest::getFlowLogId() const {
  return flowLogId_;
}

void DescribeFlowlogsRequest::setFlowLogId(const std::string &flowLogId) {
  flowLogId_ = flowLogId;
  setParameter(std::string("FlowLogId"), flowLogId);
}

std::string DescribeFlowlogsRequest::getFlowLogName() const {
  return flowLogName_;
}

void DescribeFlowlogsRequest::setFlowLogName(const std::string &flowLogName) {
  flowLogName_ = flowLogName;
  setParameter(std::string("FlowLogName"), flowLogName);
}

std::string DescribeFlowlogsRequest::getStatus() const {
  return status_;
}

void DescribeFlowlogsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

