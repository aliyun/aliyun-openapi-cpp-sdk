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

#include <alibabacloud/ecs/model/DescribeCommandsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCommandsRequest;

DescribeCommandsRequest::DescribeCommandsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeCommands") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCommandsRequest::~DescribeCommandsRequest() {}

long DescribeCommandsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCommandsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCommandsRequest::getDescription() const {
  return description_;
}

void DescribeCommandsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string DescribeCommandsRequest::getType() const {
  return type_;
}

void DescribeCommandsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeCommandsRequest::getCommandId() const {
  return commandId_;
}

void DescribeCommandsRequest::setCommandId(const std::string &commandId) {
  commandId_ = commandId;
  setParameter(std::string("CommandId"), commandId);
}

long DescribeCommandsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCommandsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCommandsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCommandsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCommandsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCommandsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCommandsRequest::getProvider() const {
  return provider_;
}

void DescribeCommandsRequest::setProvider(const std::string &provider) {
  provider_ = provider;
  setParameter(std::string("Provider"), provider);
}

std::string DescribeCommandsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCommandsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeCommandsRequest::getContentEncoding() const {
  return contentEncoding_;
}

void DescribeCommandsRequest::setContentEncoding(const std::string &contentEncoding) {
  contentEncoding_ = contentEncoding;
  setParameter(std::string("ContentEncoding"), contentEncoding);
}

long DescribeCommandsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCommandsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeCommandsRequest::Tag> DescribeCommandsRequest::getTag() const {
  return tag_;
}

void DescribeCommandsRequest::setTag(const std::vector<DescribeCommandsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool DescribeCommandsRequest::getLatest() const {
  return latest_;
}

void DescribeCommandsRequest::setLatest(bool latest) {
  latest_ = latest;
  setParameter(std::string("Latest"), latest ? "true" : "false");
}

std::string DescribeCommandsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCommandsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCommandsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCommandsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCommandsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCommandsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCommandsRequest::getName() const {
  return name_;
}

void DescribeCommandsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int DescribeCommandsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeCommandsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

