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

#include <alibabacloud/smartag/model/ListDpiGroupsRequest.h>

using AlibabaCloud::Smartag::Model::ListDpiGroupsRequest;

ListDpiGroupsRequest::ListDpiGroupsRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ListDpiGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListDpiGroupsRequest::~ListDpiGroupsRequest() {}

std::vector<std::string> ListDpiGroupsRequest::getDpiGroupIds() const {
  return dpiGroupIds_;
}

void ListDpiGroupsRequest::setDpiGroupIds(const std::vector<std::string> &dpiGroupIds) {
  dpiGroupIds_ = dpiGroupIds;
}

long ListDpiGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListDpiGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListDpiGroupsRequest::getRegionId() const {
  return regionId_;
}

void ListDpiGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListDpiGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListDpiGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListDpiGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListDpiGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListDpiGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListDpiGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListDpiGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void ListDpiGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> ListDpiGroupsRequest::getDpiGroupNames() const {
  return dpiGroupNames_;
}

void ListDpiGroupsRequest::setDpiGroupNames(const std::vector<std::string> &dpiGroupNames) {
  dpiGroupNames_ = dpiGroupNames;
}

int ListDpiGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListDpiGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

