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

#include <alibabacloud/eventbridge/model/ListUserDefinedEventSourcesRequest.h>

using AlibabaCloud::Eventbridge::Model::ListUserDefinedEventSourcesRequest;

ListUserDefinedEventSourcesRequest::ListUserDefinedEventSourcesRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "ListUserDefinedEventSources") {
  setMethod(HttpRequest::Method::Post);
}

ListUserDefinedEventSourcesRequest::~ListUserDefinedEventSourcesRequest() {}

std::string ListUserDefinedEventSourcesRequest::getType() const {
  return type_;
}

void ListUserDefinedEventSourcesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListUserDefinedEventSourcesRequest::getEventBusName() const {
  return eventBusName_;
}

void ListUserDefinedEventSourcesRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::string ListUserDefinedEventSourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListUserDefinedEventSourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListUserDefinedEventSourcesRequest::getLimit() const {
  return limit_;
}

void ListUserDefinedEventSourcesRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListUserDefinedEventSourcesRequest::getNamePrefix() const {
  return namePrefix_;
}

void ListUserDefinedEventSourcesRequest::setNamePrefix(const std::string &namePrefix) {
  namePrefix_ = namePrefix;
  setParameter(std::string("NamePrefix"), namePrefix);
}

