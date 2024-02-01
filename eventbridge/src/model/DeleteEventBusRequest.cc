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

#include <alibabacloud/eventbridge/model/DeleteEventBusRequest.h>

using AlibabaCloud::Eventbridge::Model::DeleteEventBusRequest;

DeleteEventBusRequest::DeleteEventBusRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "DeleteEventBus") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEventBusRequest::~DeleteEventBusRequest() {}

std::string DeleteEventBusRequest::getClientToken() const {
  return clientToken_;
}

void DeleteEventBusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteEventBusRequest::getEventBusName() const {
  return eventBusName_;
}

void DeleteEventBusRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setParameter(std::string("EventBusName"), eventBusName);
}

