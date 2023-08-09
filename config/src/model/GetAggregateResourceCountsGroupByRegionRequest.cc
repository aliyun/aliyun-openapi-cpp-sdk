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

#include <alibabacloud/config/model/GetAggregateResourceCountsGroupByRegionRequest.h>

using AlibabaCloud::Config::Model::GetAggregateResourceCountsGroupByRegionRequest;

GetAggregateResourceCountsGroupByRegionRequest::GetAggregateResourceCountsGroupByRegionRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetAggregateResourceCountsGroupByRegion") {
  setMethod(HttpRequest::Method::Post);
}

GetAggregateResourceCountsGroupByRegionRequest::~GetAggregateResourceCountsGroupByRegionRequest() {}

long GetAggregateResourceCountsGroupByRegionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetAggregateResourceCountsGroupByRegionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetAggregateResourceCountsGroupByRegionRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GetAggregateResourceCountsGroupByRegionRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string GetAggregateResourceCountsGroupByRegionRequest::getResourceType() const {
  return resourceType_;
}

void GetAggregateResourceCountsGroupByRegionRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string GetAggregateResourceCountsGroupByRegionRequest::getFolderId() const {
  return folderId_;
}

void GetAggregateResourceCountsGroupByRegionRequest::setFolderId(const std::string &folderId) {
  folderId_ = folderId;
  setParameter(std::string("FolderId"), folderId);
}

long GetAggregateResourceCountsGroupByRegionRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void GetAggregateResourceCountsGroupByRegionRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

