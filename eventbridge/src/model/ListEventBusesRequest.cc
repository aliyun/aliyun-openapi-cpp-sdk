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

#include <alibabacloud/eventbridge/model/ListEventBusesRequest.h>

using AlibabaCloud::Eventbridge::Model::ListEventBusesRequest;

ListEventBusesRequest::ListEventBusesRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "ListEventBuses") {
  setMethod(HttpRequest::Method::Post);
}

ListEventBusesRequest::~ListEventBusesRequest() {}

std::string ListEventBusesRequest::getNextToken() const {
  return nextToken_;
}

void ListEventBusesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListEventBusesRequest::getLimit() const {
  return limit_;
}

void ListEventBusesRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListEventBusesRequest::getNamePrefix() const {
  return namePrefix_;
}

void ListEventBusesRequest::setNamePrefix(const std::string &namePrefix) {
  namePrefix_ = namePrefix;
  setParameter(std::string("NamePrefix"), namePrefix);
}

std::string ListEventBusesRequest::getEventBusType() const {
  return eventBusType_;
}

void ListEventBusesRequest::setEventBusType(const std::string &eventBusType) {
  eventBusType_ = eventBusType;
  setParameter(std::string("EventBusType"), eventBusType);
}

