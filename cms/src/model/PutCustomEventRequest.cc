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

#include <alibabacloud/cms/model/PutCustomEventRequest.h>

using AlibabaCloud::Cms::Model::PutCustomEventRequest;

PutCustomEventRequest::PutCustomEventRequest()
    : RpcServiceRequest("cms", "2019-01-01", "PutCustomEvent") {
  setMethod(HttpRequest::Method::Post);
}

PutCustomEventRequest::~PutCustomEventRequest() {}

std::vector<PutCustomEventRequest::EventInfo> PutCustomEventRequest::getEventInfo() const {
  return eventInfo_;
}

void PutCustomEventRequest::setEventInfo(const std::vector<PutCustomEventRequest::EventInfo> &eventInfo) {
  eventInfo_ = eventInfo;
  for(int dep1 = 0; dep1 != eventInfo.size(); dep1++) {
  auto eventInfoObj = eventInfo.at(dep1);
  std::string eventInfoObjStr = std::string("EventInfo") + "." + std::to_string(dep1 + 1);
    setParameter(eventInfoObjStr + ".GroupId", eventInfoObj.groupId);
    setParameter(eventInfoObjStr + ".Time", eventInfoObj.time);
    setParameter(eventInfoObjStr + ".EventName", eventInfoObj.eventName);
    setParameter(eventInfoObjStr + ".Content", eventInfoObj.content);
  }
}

