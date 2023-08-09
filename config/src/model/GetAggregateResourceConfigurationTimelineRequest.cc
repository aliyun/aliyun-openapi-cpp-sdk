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

#include <alibabacloud/config/model/GetAggregateResourceConfigurationTimelineRequest.h>

using AlibabaCloud::Config::Model::GetAggregateResourceConfigurationTimelineRequest;

GetAggregateResourceConfigurationTimelineRequest::GetAggregateResourceConfigurationTimelineRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetAggregateResourceConfigurationTimeline") {
  setMethod(HttpRequest::Method::Get);
}

GetAggregateResourceConfigurationTimelineRequest::~GetAggregateResourceConfigurationTimelineRequest() {}

long GetAggregateResourceConfigurationTimelineRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetAggregateResourceConfigurationTimelineRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetAggregateResourceConfigurationTimelineRequest::getAggregatorId() const {
  return aggregatorId_;
}

void GetAggregateResourceConfigurationTimelineRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

long GetAggregateResourceConfigurationTimelineRequest::getStartTime() const {
  return startTime_;
}

void GetAggregateResourceConfigurationTimelineRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long GetAggregateResourceConfigurationTimelineRequest::getResourceAccountId() const {
  return resourceAccountId_;
}

void GetAggregateResourceConfigurationTimelineRequest::setResourceAccountId(long resourceAccountId) {
  resourceAccountId_ = resourceAccountId;
  setParameter(std::string("ResourceAccountId"), std::to_string(resourceAccountId));
}

std::string GetAggregateResourceConfigurationTimelineRequest::getNextToken() const {
  return nextToken_;
}

void GetAggregateResourceConfigurationTimelineRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string GetAggregateResourceConfigurationTimelineRequest::getResourceId() const {
  return resourceId_;
}

void GetAggregateResourceConfigurationTimelineRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

long GetAggregateResourceConfigurationTimelineRequest::getEndTime() const {
  return endTime_;
}

void GetAggregateResourceConfigurationTimelineRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetAggregateResourceConfigurationTimelineRequest::getResourceType() const {
  return resourceType_;
}

void GetAggregateResourceConfigurationTimelineRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int GetAggregateResourceConfigurationTimelineRequest::getMaxResults() const {
  return maxResults_;
}

void GetAggregateResourceConfigurationTimelineRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string GetAggregateResourceConfigurationTimelineRequest::getRegion() const {
  return region_;
}

void GetAggregateResourceConfigurationTimelineRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

