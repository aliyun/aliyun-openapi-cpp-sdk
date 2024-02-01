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

#include <alibabacloud/eventbridge/model/ListTargetsRequest.h>

using AlibabaCloud::Eventbridge::Model::ListTargetsRequest;

ListTargetsRequest::ListTargetsRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "ListTargets") {
  setMethod(HttpRequest::Method::Post);
}

ListTargetsRequest::~ListTargetsRequest() {}

std::string ListTargetsRequest::getRuleName() const {
  return ruleName_;
}

void ListTargetsRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ListTargetsRequest::getEventBusName() const {
  return eventBusName_;
}

void ListTargetsRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::string ListTargetsRequest::getNextToken() const {
  return nextToken_;
}

void ListTargetsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListTargetsRequest::getLimit() const {
  return limit_;
}

void ListTargetsRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListTargetsRequest::getArn() const {
  return arn_;
}

void ListTargetsRequest::setArn(const std::string &arn) {
  arn_ = arn;
  setParameter(std::string("Arn"), arn);
}

