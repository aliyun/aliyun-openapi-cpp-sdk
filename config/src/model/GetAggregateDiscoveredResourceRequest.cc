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

#include <alibabacloud/config/model/GetAggregateDiscoveredResourceRequest.h>

using AlibabaCloud::Config::Model::GetAggregateDiscoveredResourceRequest;

GetAggregateDiscoveredResourceRequest::GetAggregateDiscoveredResourceRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetAggregateDiscoveredResource") {
  setMethod(HttpRequest::Method::Get);
}

GetAggregateDiscoveredResourceRequest::~GetAggregateDiscoveredResourceRequest() {}

std::string GetAggregateDiscoveredResourceRequest::getResourceId() const {
  return resourceId_;
}

void GetAggregateDiscoveredResourceRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

long GetAggregateDiscoveredResourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetAggregateDiscoveredResourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetAggregateDiscoveredResourceRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GetAggregateDiscoveredResourceRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string GetAggregateDiscoveredResourceRequest::getResourceType() const {
  return resourceType_;
}

void GetAggregateDiscoveredResourceRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

long GetAggregateDiscoveredResourceRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void GetAggregateDiscoveredResourceRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

std::string GetAggregateDiscoveredResourceRequest::getRegion() const {
  return region_;
}

void GetAggregateDiscoveredResourceRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

