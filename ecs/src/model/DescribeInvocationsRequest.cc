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

#include <alibabacloud/ecs/model/DescribeInvocationsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInvocationsRequest;

DescribeInvocationsRequest::DescribeInvocationsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeInvocations") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInvocationsRequest::~DescribeInvocationsRequest() {}

long DescribeInvocationsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeInvocationsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeInvocationsRequest::getInvokeStatus() const {
  return invokeStatus_;
}

void DescribeInvocationsRequest::setInvokeStatus(const std::string &invokeStatus) {
  invokeStatus_ = invokeStatus;
  setParameter(std::string("InvokeStatus"), invokeStatus);
}

bool DescribeInvocationsRequest::getIncludeOutput() const {
  return includeOutput_;
}

void DescribeInvocationsRequest::setIncludeOutput(bool includeOutput) {
  includeOutput_ = includeOutput;
  setParameter(std::string("IncludeOutput"), includeOutput ? "true" : "false");
}

std::string DescribeInvocationsRequest::getCommandId() const {
  return commandId_;
}

void DescribeInvocationsRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

long DescribeInvocationsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInvocationsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInvocationsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInvocationsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeInvocationsRequest::getRegionId() const {
  return regionId_;
}

void DescribeInvocationsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeInvocationsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeInvocationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeInvocationsRequest::getContentEncoding() const {
  return contentEncoding_;
}

void DescribeInvocationsRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

std::string DescribeInvocationsRequest::getRepeatMode() const {
  return repeatMode_;
}

void DescribeInvocationsRequest::setRepeatMode(const std::string &repeatMode) {
  repeatMode_ = repeatMode;
  setParameter(std::string("RepeatMode"), repeatMode);
}

long DescribeInvocationsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInvocationsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeInvocationsRequest::Tag> DescribeInvocationsRequest::getTag() const {
  return tag_;
}

void DescribeInvocationsRequest::setTag(const std::vector<DescribeInvocationsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string DescribeInvocationsRequest::getInvokeId() const {
  return invokeId_;
}

void DescribeInvocationsRequest::setInvokeId(const std::string &invokeId) {
  invokeId_ = invokeId;
  setParameter(std::string("InvokeId"), invokeId);
}

bool DescribeInvocationsRequest::getTimed() const {
  return timed_;
}

void DescribeInvocationsRequest::setTimed(bool timed) {
  timed_ = timed;
  setParameter(std::string("Timed"), timed ? "true" : "false");
}

std::string DescribeInvocationsRequest::getCommandName() const {
  return commandName_;
}

void DescribeInvocationsRequest::setCommandName(const std::string &commandName) {
  commandName_ = commandName;
  setParameter(std::string("CommandName"), commandName);
}

std::string DescribeInvocationsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeInvocationsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeInvocationsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeInvocationsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeInvocationsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeInvocationsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeInvocationsRequest::getCommandType() const {
  return commandType_;
}

void DescribeInvocationsRequest::setCommandType(const std::string &commandType) {
  commandType_ = commandType;
  setParameter(std::string("CommandType"), commandType);
}

std::string DescribeInvocationsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInvocationsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int DescribeInvocationsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeInvocationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

