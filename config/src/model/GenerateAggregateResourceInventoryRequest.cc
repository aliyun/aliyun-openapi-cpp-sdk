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

#include <alibabacloud/config/model/GenerateAggregateResourceInventoryRequest.h>

using AlibabaCloud::Config::Model::GenerateAggregateResourceInventoryRequest;

GenerateAggregateResourceInventoryRequest::GenerateAggregateResourceInventoryRequest()
    : RpcServiceRequest("config", "2020-09-07", "GenerateAggregateResourceInventory") {
  setMethod(HttpRequest::Method::Post);
}

GenerateAggregateResourceInventoryRequest::~GenerateAggregateResourceInventoryRequest() {}

std::string GenerateAggregateResourceInventoryRequest::getRegions() const {
  return regions_;
}

void GenerateAggregateResourceInventoryRequest::setRegions(const std::string &regions) {
  regions_ = regions;
  setParameter(std::string("Regions"), regions);
}

std::string GenerateAggregateResourceInventoryRequest::getResourceTypes() const {
  return resourceTypes_;
}

void GenerateAggregateResourceInventoryRequest::setResourceTypes(const std::string &resourceTypes) {
  resourceTypes_ = resourceTypes;
  setParameter(std::string("ResourceTypes"), resourceTypes);
}

std::string GenerateAggregateResourceInventoryRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GenerateAggregateResourceInventoryRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string GenerateAggregateResourceInventoryRequest::getAccountIds() const {
  return accountIds_;
}

void GenerateAggregateResourceInventoryRequest::setAccountIds(const std::string &accountIds) {
  accountIds_ = accountIds;
  setParameter(std::string("AccountIds"), accountIds);
}

