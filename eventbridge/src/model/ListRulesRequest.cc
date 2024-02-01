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

#include <alibabacloud/eventbridge/model/ListRulesRequest.h>

using AlibabaCloud::Eventbridge::Model::ListRulesRequest;

ListRulesRequest::ListRulesRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "ListRules") {
  setMethod(HttpRequest::Method::Post);
}

ListRulesRequest::~ListRulesRequest() {}

std::string ListRulesRequest::getRuleNamePrefix() const {
  return ruleNamePrefix_;
}

void ListRulesRequest::setRuleNamePrefix(const std::string &ruleNamePrefix) {
  ruleNamePrefix_ = ruleNamePrefix;
  setParameter(std::string("RuleNamePrefix"), ruleNamePrefix);
}

std::string ListRulesRequest::getEventBusName() const {
  return eventBusName_;
}

void ListRulesRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::string ListRulesRequest::getNextToken() const {
  return nextToken_;
}

void ListRulesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListRulesRequest::getLimit() const {
  return limit_;
}

void ListRulesRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

