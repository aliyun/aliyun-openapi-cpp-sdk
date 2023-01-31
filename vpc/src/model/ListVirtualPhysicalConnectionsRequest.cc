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

#include <alibabacloud/vpc/model/ListVirtualPhysicalConnectionsRequest.h>

using AlibabaCloud::Vpc::Model::ListVirtualPhysicalConnectionsRequest;

ListVirtualPhysicalConnectionsRequest::ListVirtualPhysicalConnectionsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListVirtualPhysicalConnections") {
  setMethod(HttpRequest::Method::Post);
}

ListVirtualPhysicalConnectionsRequest::~ListVirtualPhysicalConnectionsRequest() {}

std::vector<std::string> ListVirtualPhysicalConnectionsRequest::getVlanIds() const {
  return vlanIds_;
}

void ListVirtualPhysicalConnectionsRequest::setVlanIds(const std::vector<std::string> &vlanIds) {
  vlanIds_ = vlanIds;
}

std::string ListVirtualPhysicalConnectionsRequest::getVirtualPhysicalConnectionBusinessStatus() const {
  return virtualPhysicalConnectionBusinessStatus_;
}

void ListVirtualPhysicalConnectionsRequest::setVirtualPhysicalConnectionBusinessStatus(const std::string &virtualPhysicalConnectionBusinessStatus) {
  virtualPhysicalConnectionBusinessStatus_ = virtualPhysicalConnectionBusinessStatus;
  setParameter(std::string("VirtualPhysicalConnectionBusinessStatus"), virtualPhysicalConnectionBusinessStatus);
}

std::string ListVirtualPhysicalConnectionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVirtualPhysicalConnectionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::vector<std::string> ListVirtualPhysicalConnectionsRequest::getVirtualPhysicalConnectionAliUids() const {
  return virtualPhysicalConnectionAliUids_;
}

void ListVirtualPhysicalConnectionsRequest::setVirtualPhysicalConnectionAliUids(const std::vector<std::string> &virtualPhysicalConnectionAliUids) {
  virtualPhysicalConnectionAliUids_ = virtualPhysicalConnectionAliUids;
}

std::string ListVirtualPhysicalConnectionsRequest::getNextToken() const {
  return nextToken_;
}

void ListVirtualPhysicalConnectionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListVirtualPhysicalConnectionsRequest::getRegionId() const {
  return regionId_;
}

void ListVirtualPhysicalConnectionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ListVirtualPhysicalConnectionsRequest::getVirtualPhysicalConnectionIds() const {
  return virtualPhysicalConnectionIds_;
}

void ListVirtualPhysicalConnectionsRequest::setVirtualPhysicalConnectionIds(const std::vector<std::string> &virtualPhysicalConnectionIds) {
  virtualPhysicalConnectionIds_ = virtualPhysicalConnectionIds;
}

bool ListVirtualPhysicalConnectionsRequest::getIsConfirmed() const {
  return isConfirmed_;
}

void ListVirtualPhysicalConnectionsRequest::setIsConfirmed(bool isConfirmed) {
  isConfirmed_ = isConfirmed;
  setParameter(std::string("IsConfirmed"), isConfirmed ? "true" : "false");
}

std::vector<ListVirtualPhysicalConnectionsRequest::Tags> ListVirtualPhysicalConnectionsRequest::getTags() const {
  return tags_;
}

void ListVirtualPhysicalConnectionsRequest::setTags(const std::vector<ListVirtualPhysicalConnectionsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::vector<std::string> ListVirtualPhysicalConnectionsRequest::getVirtualPhysicalConnectionStatuses() const {
  return virtualPhysicalConnectionStatuses_;
}

void ListVirtualPhysicalConnectionsRequest::setVirtualPhysicalConnectionStatuses(const std::vector<std::string> &virtualPhysicalConnectionStatuses) {
  virtualPhysicalConnectionStatuses_ = virtualPhysicalConnectionStatuses;
}

std::string ListVirtualPhysicalConnectionsRequest::getPhysicalConnectionId() const {
  return physicalConnectionId_;
}

void ListVirtualPhysicalConnectionsRequest::setPhysicalConnectionId(const std::string &physicalConnectionId) {
  physicalConnectionId_ = physicalConnectionId;
  setParameter(std::string("PhysicalConnectionId"), physicalConnectionId);
}

std::string ListVirtualPhysicalConnectionsRequest::getName() const {
  return name_;
}

void ListVirtualPhysicalConnectionsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListVirtualPhysicalConnectionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVirtualPhysicalConnectionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

