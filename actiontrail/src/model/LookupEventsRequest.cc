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

#include <alibabacloud/actiontrail/model/LookupEventsRequest.h>

using AlibabaCloud::Actiontrail::Model::LookupEventsRequest;

LookupEventsRequest::LookupEventsRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "LookupEvents") {
  setMethod(HttpRequest::Method::Post);
}

LookupEventsRequest::~LookupEventsRequest() {}

std::string LookupEventsRequest::getEndTime() const {
  return endTime_;
}

void LookupEventsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string LookupEventsRequest::getStartTime() const {
  return startTime_;
}

void LookupEventsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string LookupEventsRequest::getNextToken() const {
  return nextToken_;
}

void LookupEventsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<LookupEventsRequest::LookupAttribute> LookupEventsRequest::getLookupAttribute() const {
  return lookupAttribute_;
}

void LookupEventsRequest::setLookupAttribute(const std::vector<LookupEventsRequest::LookupAttribute> &lookupAttribute) {
  lookupAttribute_ = lookupAttribute;
  for(int dep1 = 0; dep1 != lookupAttribute.size(); dep1++) {
  auto lookupAttributeObj = lookupAttribute.at(dep1);
  std::string lookupAttributeObjStr = std::string("LookupAttribute") + "." + std::to_string(dep1 + 1);
    setParameter(lookupAttributeObjStr + ".Value", lookupAttributeObj.value);
    setParameter(lookupAttributeObjStr + ".Key", lookupAttributeObj.key);
  }
}

std::string LookupEventsRequest::getMaxResults() const {
  return maxResults_;
}

void LookupEventsRequest::setMaxResults(const std::string &maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), maxResults);
}

std::string LookupEventsRequest::getDirection() const {
  return direction_;
}

void LookupEventsRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

