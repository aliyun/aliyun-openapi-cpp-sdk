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

#include <alibabacloud/eventbridge/model/UpdateEventBusRequest.h>

using AlibabaCloud::Eventbridge::Model::UpdateEventBusRequest;

UpdateEventBusRequest::UpdateEventBusRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "UpdateEventBus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEventBusRequest::~UpdateEventBusRequest() {}

std::string UpdateEventBusRequest::getDescription() const {
  return description_;
}

void UpdateEventBusRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateEventBusRequest::getEventBusName() const {
  return eventBusName_;
}

void UpdateEventBusRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

