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

#include <alibabacloud/config/model/GetAggregateResourceCountsGroupByResourceTypeRequest.h>

using AlibabaCloud::Config::Model::GetAggregateResourceCountsGroupByResourceTypeRequest;

GetAggregateResourceCountsGroupByResourceTypeRequest::GetAggregateResourceCountsGroupByResourceTypeRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetAggregateResourceCountsGroupByResourceType") {
  setMethod(HttpRequest::Method::Post);
}

GetAggregateResourceCountsGroupByResourceTypeRequest::~GetAggregateResourceCountsGroupByResourceTypeRequest() {}

long GetAggregateResourceCountsGroupByResourceTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetAggregateResourceCountsGroupByResourceTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetAggregateResourceCountsGroupByResourceTypeRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GetAggregateResourceCountsGroupByResourceTypeRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string GetAggregateResourceCountsGroupByResourceTypeRequest::getFolderId() const {
  return folderId_;
}

void GetAggregateResourceCountsGroupByResourceTypeRequest::setFolderId(const std::string &folderId) {
  folderId_ = folderId;
  setParameter(std::string("FolderId"), folderId);
}

long GetAggregateResourceCountsGroupByResourceTypeRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void GetAggregateResourceCountsGroupByResourceTypeRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

std::string GetAggregateResourceCountsGroupByResourceTypeRequest::getRegion() const {
  return region_;
}

void GetAggregateResourceCountsGroupByResourceTypeRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

