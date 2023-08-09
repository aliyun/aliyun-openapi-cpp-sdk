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

#include <alibabacloud/config/model/ListAggregateDiscoveredResourcesRequest.h>

using AlibabaCloud::Config::Model::ListAggregateDiscoveredResourcesRequest;

ListAggregateDiscoveredResourcesRequest::ListAggregateDiscoveredResourcesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListAggregateDiscoveredResources") {
  setMethod(HttpRequest::Method::Post);
}

ListAggregateDiscoveredResourcesRequest::~ListAggregateDiscoveredResourcesRequest() {}

int ListAggregateDiscoveredResourcesRequest::getResourceDeleted() const {
  return resourceDeleted_;
}

void ListAggregateDiscoveredResourcesRequest::setResourceDeleted(int resourceDeleted) {
  resourceDeleted_ = resourceDeleted;
  setParameter(std::string("ResourceDeleted"), std::to_string(resourceDeleted));
}

long ListAggregateDiscoveredResourcesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListAggregateDiscoveredResourcesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListAggregateDiscoveredResourcesRequest::getRegions() const {
  return regions_;
}

void ListAggregateDiscoveredResourcesRequest::setRegions(const std::string &regions) {
  regions_ = regions;
  setParameter(std::string("Regions"), regions);
}

std::string ListAggregateDiscoveredResourcesRequest::getAggregatorId() const {
  return aggregatorId_;
}

void ListAggregateDiscoveredResourcesRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string ListAggregateDiscoveredResourcesRequest::getFolderId() const {
  return folderId_;
}

void ListAggregateDiscoveredResourcesRequest::setFolderId(const std::string &folderId) {
  folderId_ = folderId;
  setParameter(std::string("FolderId"), folderId);
}

long ListAggregateDiscoveredResourcesRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void ListAggregateDiscoveredResourcesRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

std::string ListAggregateDiscoveredResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListAggregateDiscoveredResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListAggregateDiscoveredResourcesRequest::getResourceId() const {
  return resourceId_;
}

void ListAggregateDiscoveredResourcesRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListAggregateDiscoveredResourcesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListAggregateDiscoveredResourcesRequest::setResourceTypes(const std::string &resourceTypes) {
  resourceTypes_ = resourceTypes;
  setParameter(std::string("ResourceTypes"), resourceTypes);
}

int ListAggregateDiscoveredResourcesRequest::getMaxResults() const {
  return maxResults_;
}

void ListAggregateDiscoveredResourcesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

