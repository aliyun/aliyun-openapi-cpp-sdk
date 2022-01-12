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

#include <alibabacloud/config/model/GetResourceComplianceTimelineRequest.h>

using AlibabaCloud::Config::Model::GetResourceComplianceTimelineRequest;

GetResourceComplianceTimelineRequest::GetResourceComplianceTimelineRequest()
    : RpcServiceRequest("config", "2020-09-07", "GetResourceComplianceTimeline") {
  setMethod(HttpRequest::Method::Get);
}

GetResourceComplianceTimelineRequest::~GetResourceComplianceTimelineRequest() {}

std::string GetResourceComplianceTimelineRequest::getResourceId() const {
  return resourceId_;
}

void GetResourceComplianceTimelineRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

long GetResourceComplianceTimelineRequest::getEndTime() const {
  return endTime_;
}

void GetResourceComplianceTimelineRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetResourceComplianceTimelineRequest::getStartTime() const {
  return startTime_;
}

void GetResourceComplianceTimelineRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetResourceComplianceTimelineRequest::getResourceType() const {
  return resourceType_;
}

void GetResourceComplianceTimelineRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string GetResourceComplianceTimelineRequest::getNextToken() const {
  return nextToken_;
}

void GetResourceComplianceTimelineRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int GetResourceComplianceTimelineRequest::getMaxResults() const {
  return maxResults_;
}

void GetResourceComplianceTimelineRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string GetResourceComplianceTimelineRequest::getRegion() const {
  return region_;
}

void GetResourceComplianceTimelineRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

