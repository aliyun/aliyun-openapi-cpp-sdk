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

#include <alibabacloud/resourcesharing/model/ListResourceSharesRequest.h>

using AlibabaCloud::ResourceSharing::Model::ListResourceSharesRequest;

ListResourceSharesRequest::ListResourceSharesRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "ListResourceShares") {
  setMethod(HttpRequest::Method::Post);
}

ListResourceSharesRequest::~ListResourceSharesRequest() {}

std::string ListResourceSharesRequest::getResourceShareName() const {
  return resourceShareName_;
}

void ListResourceSharesRequest::setResourceShareName(const std::string &resourceShareName) {
  resourceShareName_ = resourceShareName;
  setParameter(std::string("ResourceShareName"), resourceShareName);
}

std::string ListResourceSharesRequest::getPermissionName() const {
  return permissionName_;
}

void ListResourceSharesRequest::setPermissionName(const std::string &permissionName) {
  permissionName_ = permissionName;
  setParameter(std::string("PermissionName"), permissionName);
}

std::string ListResourceSharesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListResourceSharesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListResourceSharesRequest::getNextToken() const {
  return nextToken_;
}

void ListResourceSharesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListResourceSharesRequest::getResourceShareIds() const {
  return resourceShareIds_;
}

void ListResourceSharesRequest::setResourceShareIds(const std::vector<std::string> &resourceShareIds) {
  resourceShareIds_ = resourceShareIds;
}

std::string ListResourceSharesRequest::getResourceOwner() const {
  return resourceOwner_;
}

void ListResourceSharesRequest::setResourceOwner(const std::string &resourceOwner) {
  resourceOwner_ = resourceOwner;
  setParameter(std::string("ResourceOwner"), resourceOwner);
}

std::string ListResourceSharesRequest::getResourceShareStatus() const {
  return resourceShareStatus_;
}

void ListResourceSharesRequest::setResourceShareStatus(const std::string &resourceShareStatus) {
  resourceShareStatus_ = resourceShareStatus;
  setParameter(std::string("ResourceShareStatus"), resourceShareStatus);
}

int ListResourceSharesRequest::getMaxResults() const {
  return maxResults_;
}

void ListResourceSharesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

