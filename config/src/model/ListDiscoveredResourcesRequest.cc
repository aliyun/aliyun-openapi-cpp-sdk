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

#include <alibabacloud/config/model/ListDiscoveredResourcesRequest.h>

using AlibabaCloud::Config::Model::ListDiscoveredResourcesRequest;

ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListDiscoveredResources") {
  setMethod(HttpRequest::Method::Post);
}

ListDiscoveredResourcesRequest::~ListDiscoveredResourcesRequest() {}

int ListDiscoveredResourcesRequest::getResourceDeleted() const {
  return resourceDeleted_;
}

void ListDiscoveredResourcesRequest::setResourceDeleted(int resourceDeleted) {
  resourceDeleted_ = resourceDeleted;
  setParameter(std::string("ResourceDeleted"), std::to_string(resourceDeleted));
}

std::string ListDiscoveredResourcesRequest::getResourceId() const {
  return resourceId_;
}

void ListDiscoveredResourcesRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListDiscoveredResourcesRequest::getRegions() const {
  return regions_;
}

void ListDiscoveredResourcesRequest::setRegions(const std::string &regions) {
  regions_ = regions;
  setParameter(std::string("Regions"), regions);
}

std::string ListDiscoveredResourcesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListDiscoveredResourcesRequest::setResourceTypes(const std::string &resourceTypes) {
  resourceTypes_ = resourceTypes;
  setParameter(std::string("ResourceTypes"), resourceTypes);
}

std::string ListDiscoveredResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListDiscoveredResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListDiscoveredResourcesRequest::getMaxResults() const {
  return maxResults_;
}

void ListDiscoveredResourcesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

