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

#include <alibabacloud/ecs/model/ListPluginStatusRequest.h>

using AlibabaCloud::Ecs::Model::ListPluginStatusRequest;

ListPluginStatusRequest::ListPluginStatusRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ListPluginStatus") {
  setMethod(HttpRequest::Method::Post);
}

ListPluginStatusRequest::~ListPluginStatusRequest() {}

long ListPluginStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListPluginStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long ListPluginStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPluginStatusRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListPluginStatusRequest::getRegionId() const {
  return regionId_;
}

void ListPluginStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPluginStatusRequest::getNextToken() const {
  return nextToken_;
}

void ListPluginStatusRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListPluginStatusRequest::getPageSize() const {
  return pageSize_;
}

void ListPluginStatusRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPluginStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListPluginStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListPluginStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListPluginStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListPluginStatusRequest::getOwnerId() const {
  return ownerId_;
}

void ListPluginStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> ListPluginStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ListPluginStatusRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string ListPluginStatusRequest::getName() const {
  return name_;
}

void ListPluginStatusRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListPluginStatusRequest::getMaxResults() const {
  return maxResults_;
}

void ListPluginStatusRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

