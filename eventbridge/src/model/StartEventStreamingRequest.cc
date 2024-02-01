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

#include <alibabacloud/eventbridge/model/StartEventStreamingRequest.h>

using AlibabaCloud::Eventbridge::Model::StartEventStreamingRequest;

StartEventStreamingRequest::StartEventStreamingRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "StartEventStreaming") {
  setMethod(HttpRequest::Method::Post);
}

StartEventStreamingRequest::~StartEventStreamingRequest() {}

std::string StartEventStreamingRequest::getEventStreamingName() const {
  return eventStreamingName_;
}

void StartEventStreamingRequest::setEventStreamingName(const std::string &eventStreamingName) {
  eventStreamingName_ = eventStreamingName;
  setBodyParameter(std::string("EventStreamingName"), eventStreamingName);
}

