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

#include <alibabacloud/resourcesharing/model/ListSharedResourcesRequest.h>

using AlibabaCloud::ResourceSharing::Model::ListSharedResourcesRequest;

ListSharedResourcesRequest::ListSharedResourcesRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "ListSharedResources") {
  setMethod(HttpRequest::Method::Post);
}

ListSharedResourcesRequest::~ListSharedResourcesRequest() {}

std::string ListSharedResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListSharedResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListSharedResourcesRequest::getResourceShareIds() const {
  return resourceShareIds_;
}

void ListSharedResourcesRequest::setResourceShareIds(const std::vector<std::string> &resourceShareIds) {
  resourceShareIds_ = resourceShareIds;
}

std::string ListSharedResourcesRequest::getResourceOwner() const {
  return resourceOwner_;
}

void ListSharedResourcesRequest::setResourceOwner(const std::string &resourceOwner) {
  resourceOwner_ = resourceOwner;
  setParameter(std::string("ResourceOwner"), resourceOwner);
}

std::string ListSharedResourcesRequest::getResourceType() const {
  return resourceType_;
}

void ListSharedResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListSharedResourcesRequest::getTarget() const {
  return target_;
}

void ListSharedResourcesRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

int ListSharedResourcesRequest::getMaxResults() const {
  return maxResults_;
}

void ListSharedResourcesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> ListSharedResourcesRequest::getResourceIds() const {
  return resourceIds_;
}

void ListSharedResourcesRequest::setResourceIds(const std::vector<std::string> &resourceIds) {
  resourceIds_ = resourceIds;
}

