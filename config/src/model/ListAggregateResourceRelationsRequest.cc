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

#include <alibabacloud/config/model/ListAggregateResourceRelationsRequest.h>

using AlibabaCloud::Config::Model::ListAggregateResourceRelationsRequest;

ListAggregateResourceRelationsRequest::ListAggregateResourceRelationsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListAggregateResourceRelations") {
  setMethod(HttpRequest::Method::Post);
}

ListAggregateResourceRelationsRequest::~ListAggregateResourceRelationsRequest() {}

std::string ListAggregateResourceRelationsRequest::getTargetResourceId() const {
  return targetResourceId_;
}

void ListAggregateResourceRelationsRequest::setTargetResourceId(const std::string &targetResourceId) {
  targetResourceId_ = targetResourceId;
  setParameter(std::string("TargetResourceId"), targetResourceId);
}

std::string ListAggregateResourceRelationsRequest::getAggregatorId() const {
  return aggregatorId_;
}

void ListAggregateResourceRelationsRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string ListAggregateResourceRelationsRequest::getRelationType() const {
  return relationType_;
}

void ListAggregateResourceRelationsRequest::setRelationType(const std::string &relationType) {
  relationType_ = relationType;
  setParameter(std::string("RelationType"), relationType);
}

long ListAggregateResourceRelationsRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void ListAggregateResourceRelationsRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

std::string ListAggregateResourceRelationsRequest::getNextToken() const {
  return nextToken_;
}

void ListAggregateResourceRelationsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListAggregateResourceRelationsRequest::getTargetResourceType() const {
  return targetResourceType_;
}

void ListAggregateResourceRelationsRequest::setTargetResourceType(const std::string &targetResourceType) {
  targetResourceType_ = targetResourceType;
  setParameter(std::string("TargetResourceType"), targetResourceType);
}

std::string ListAggregateResourceRelationsRequest::getResourceId() const {
  return resourceId_;
}

void ListAggregateResourceRelationsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListAggregateResourceRelationsRequest::getResourceType() const {
  return resourceType_;
}

void ListAggregateResourceRelationsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int ListAggregateResourceRelationsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAggregateResourceRelationsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListAggregateResourceRelationsRequest::getRegion() const {
  return region_;
}

void ListAggregateResourceRelationsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

