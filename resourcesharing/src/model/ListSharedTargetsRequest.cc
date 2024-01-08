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

#include <alibabacloud/resourcesharing/model/ListSharedTargetsRequest.h>

using AlibabaCloud::ResourceSharing::Model::ListSharedTargetsRequest;

ListSharedTargetsRequest::ListSharedTargetsRequest()
    : RpcServiceRequest("resourcesharing", "2020-01-10", "ListSharedTargets") {
  setMethod(HttpRequest::Method::Post);
}

ListSharedTargetsRequest::~ListSharedTargetsRequest() {}

std::vector<std::string> ListSharedTargetsRequest::getTargets() const {
  return targets_;
}

void ListSharedTargetsRequest::setTargets(const std::vector<std::string> &targets) {
  targets_ = targets;
}

std::string ListSharedTargetsRequest::getNextToken() const {
  return nextToken_;
}

void ListSharedTargetsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<std::string> ListSharedTargetsRequest::getResourceShareIds() const {
  return resourceShareIds_;
}

void ListSharedTargetsRequest::setResourceShareIds(const std::vector<std::string> &resourceShareIds) {
  resourceShareIds_ = resourceShareIds;
}

std::string ListSharedTargetsRequest::getResourceId() const {
  return resourceId_;
}

void ListSharedTargetsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListSharedTargetsRequest::getResourceOwner() const {
  return resourceOwner_;
}

void ListSharedTargetsRequest::setResourceOwner(const std::string &resourceOwner) {
  resourceOwner_ = resourceOwner;
  setParameter(std::string("ResourceOwner"), resourceOwner);
}

std::string ListSharedTargetsRequest::getResourceType() const {
  return resourceType_;
}

void ListSharedTargetsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int ListSharedTargetsRequest::getMaxResults() const {
  return maxResults_;
}

void ListSharedTargetsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

