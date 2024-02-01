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

#include <alibabacloud/eventbridge/model/CreateEventBusRequest.h>

using AlibabaCloud::Eventbridge::Model::CreateEventBusRequest;

CreateEventBusRequest::CreateEventBusRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "CreateEventBus") {
  setMethod(HttpRequest::Method::Post);
}

CreateEventBusRequest::~CreateEventBusRequest() {}

std::string CreateEventBusRequest::getClientToken() const {
  return clientToken_;
}

void CreateEventBusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateEventBusRequest::getDescription() const {
  return description_;
}

void CreateEventBusRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateEventBusRequest::getEventBusName() const {
  return eventBusName_;
}

void CreateEventBusRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

