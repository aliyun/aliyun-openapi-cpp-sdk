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

#include <alibabacloud/vpc/model/ListTrafficMirrorSessionsRequest.h>

using AlibabaCloud::Vpc::Model::ListTrafficMirrorSessionsRequest;

ListTrafficMirrorSessionsRequest::ListTrafficMirrorSessionsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListTrafficMirrorSessions") {
  setMethod(HttpRequest::Method::Post);
}

ListTrafficMirrorSessionsRequest::~ListTrafficMirrorSessionsRequest() {}

long ListTrafficMirrorSessionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTrafficMirrorSessionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorSourceId() const {
  return trafficMirrorSourceId_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorSourceId(const std::string &trafficMirrorSourceId) {
  trafficMirrorSourceId_ = trafficMirrorSourceId;
  setParameter(std::string("TrafficMirrorSourceId"), trafficMirrorSourceId);
}

bool ListTrafficMirrorSessionsRequest::getEnabled() const {
  return enabled_;
}

void ListTrafficMirrorSessionsRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), enabled ? "true" : "false");
}

std::string ListTrafficMirrorSessionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListTrafficMirrorSessionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorSessionName() const {
  return trafficMirrorSessionName_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorSessionName(const std::string &trafficMirrorSessionName) {
  trafficMirrorSessionName_ = trafficMirrorSessionName;
  setParameter(std::string("TrafficMirrorSessionName"), trafficMirrorSessionName);
}

std::string ListTrafficMirrorSessionsRequest::getNextToken() const {
  return nextToken_;
}

void ListTrafficMirrorSessionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTrafficMirrorSessionsRequest::getRegionId() const {
  return regionId_;
}

void ListTrafficMirrorSessionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> ListTrafficMirrorSessionsRequest::getTrafficMirrorSessionIds() const {
  return trafficMirrorSessionIds_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorSessionIds(const std::vector<std::string> &trafficMirrorSessionIds) {
  trafficMirrorSessionIds_ = trafficMirrorSessionIds;
}

std::string ListTrafficMirrorSessionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTrafficMirrorSessionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTrafficMirrorSessionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTrafficMirrorSessionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ListTrafficMirrorSessionsRequest::getPriority() const {
  return priority_;
}

void ListTrafficMirrorSessionsRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

long ListTrafficMirrorSessionsRequest::getOwnerId() const {
  return ownerId_;
}

void ListTrafficMirrorSessionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorTargetId() const {
  return trafficMirrorTargetId_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorTargetId(const std::string &trafficMirrorTargetId) {
  trafficMirrorTargetId_ = trafficMirrorTargetId;
  setParameter(std::string("TrafficMirrorTargetId"), trafficMirrorTargetId);
}

std::string ListTrafficMirrorSessionsRequest::getTrafficMirrorFilterId() const {
  return trafficMirrorFilterId_;
}

void ListTrafficMirrorSessionsRequest::setTrafficMirrorFilterId(const std::string &trafficMirrorFilterId) {
  trafficMirrorFilterId_ = trafficMirrorFilterId;
  setParameter(std::string("TrafficMirrorFilterId"), trafficMirrorFilterId);
}

std::vector<ListTrafficMirrorSessionsRequest::Tags> ListTrafficMirrorSessionsRequest::getTags() const {
  return tags_;
}

void ListTrafficMirrorSessionsRequest::setTags(const std::vector<ListTrafficMirrorSessionsRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

int ListTrafficMirrorSessionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTrafficMirrorSessionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

int ListTrafficMirrorSessionsRequest::getVirtualNetworkId() const {
  return virtualNetworkId_;
}

void ListTrafficMirrorSessionsRequest::setVirtualNetworkId(int virtualNetworkId) {
  virtualNetworkId_ = virtualNetworkId;
  setParameter(std::string("VirtualNetworkId"), std::to_string(virtualNetworkId));
}

