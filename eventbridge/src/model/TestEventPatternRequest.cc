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

#include <alibabacloud/eventbridge/model/TestEventPatternRequest.h>

using AlibabaCloud::Eventbridge::Model::TestEventPatternRequest;

TestEventPatternRequest::TestEventPatternRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "TestEventPattern") {
  setMethod(HttpRequest::Method::Post);
}

TestEventPatternRequest::~TestEventPatternRequest() {}

std::string TestEventPatternRequest::getEventPattern() const {
  return eventPattern_;
}

void TestEventPatternRequest::setEventPattern(const std::string &eventPattern) {
  eventPattern_ = eventPattern;
  setBodyParameter(std::string("EventPattern"), eventPattern);
}

std::string TestEventPatternRequest::getEvent() const {
  return event_;
}

void TestEventPatternRequest::setEvent(const std::string &event) {
  event_ = event;
  setBodyParameter(std::string("Event"), event);
}

