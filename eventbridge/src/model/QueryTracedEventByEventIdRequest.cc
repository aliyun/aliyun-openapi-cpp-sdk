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

#include <alibabacloud/eventbridge/model/QueryTracedEventByEventIdRequest.h>

using AlibabaCloud::Eventbridge::Model::QueryTracedEventByEventIdRequest;

QueryTracedEventByEventIdRequest::QueryTracedEventByEventIdRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "QueryTracedEventByEventId") {
  setMethod(HttpRequest::Method::Post);
}

QueryTracedEventByEventIdRequest::~QueryTracedEventByEventIdRequest() {}

std::string QueryTracedEventByEventIdRequest::getEventId() const {
  return eventId_;
}

void QueryTracedEventByEventIdRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string QueryTracedEventByEventIdRequest::getEventBusName() const {
  return eventBusName_;
}

void QueryTracedEventByEventIdRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

std::string QueryTracedEventByEventIdRequest::getEventSource() const {
  return eventSource_;
}

void QueryTracedEventByEventIdRequest::setEventSource(const std::string &eventSource) {
  eventSource_ = eventSource;
  setParameter(std::string("EventSource"), eventSource);
}

