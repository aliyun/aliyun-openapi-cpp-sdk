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

#include <alibabacloud/eventbridge/model/QueryTracedEventsRequest.h>

using AlibabaCloud::Eventbridge::Model::QueryTracedEventsRequest;

QueryTracedEventsRequest::QueryTracedEventsRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "QueryTracedEvents") {
  setMethod(HttpRequest::Method::Post);
}

QueryTracedEventsRequest::~QueryTracedEventsRequest() {}

std::string QueryTracedEventsRequest::getMatchedRule() const {
  return matchedRule_;
}

void QueryTracedEventsRequest::setMatchedRule(const std::string &matchedRule) {
  matchedRule_ = matchedRule;
  setParameter(std::string("MatchedRule"), matchedRule);
}

long QueryTracedEventsRequest::getStartTime() const {
  return startTime_;
}

void QueryTracedEventsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string QueryTracedEventsRequest::getEventBusName() const {
  return eventBusName_;
}

void QueryTracedEventsRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::string QueryTracedEventsRequest::getEventSource() const {
  return eventSource_;
}

void QueryTracedEventsRequest::setEventSource(const std::string &eventSource) {
  eventSource_ = eventSource;
  setParameter(std::string("EventSource"), eventSource);
}

std::string QueryTracedEventsRequest::getNextToken() const {
  return nextToken_;
}

void QueryTracedEventsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int QueryTracedEventsRequest::getLimit() const {
  return limit_;
}

void QueryTracedEventsRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

long QueryTracedEventsRequest::getEndTime() const {
  return endTime_;
}

void QueryTracedEventsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string QueryTracedEventsRequest::getEventType() const {
  return eventType_;
}

void QueryTracedEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

