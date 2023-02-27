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

#include <alibabacloud/ice/model/SetEventCallbackRequest.h>

using AlibabaCloud::ICE::Model::SetEventCallbackRequest;

SetEventCallbackRequest::SetEventCallbackRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SetEventCallback") {
  setMethod(HttpRequest::Method::Post);
}

SetEventCallbackRequest::~SetEventCallbackRequest() {}

std::string SetEventCallbackRequest::getAuthKey() const {
  return authKey_;
}

void SetEventCallbackRequest::setAuthKey(const std::string &authKey) {
  authKey_ = authKey;
  setParameter(std::string("AuthKey"), authKey);
}

std::string SetEventCallbackRequest::getCallbackType() const {
  return callbackType_;
}

void SetEventCallbackRequest::setCallbackType(const std::string &callbackType) {
  callbackType_ = callbackType;
  setParameter(std::string("CallbackType"), callbackType);
}

std::string SetEventCallbackRequest::getCallbackQueueName() const {
  return callbackQueueName_;
}

void SetEventCallbackRequest::setCallbackQueueName(const std::string &callbackQueueName) {
  callbackQueueName_ = callbackQueueName;
  setParameter(std::string("CallbackQueueName"), callbackQueueName);
}

std::string SetEventCallbackRequest::getEventTypeList() const {
  return eventTypeList_;
}

void SetEventCallbackRequest::setEventTypeList(const std::string &eventTypeList) {
  eventTypeList_ = eventTypeList;
  setParameter(std::string("EventTypeList"), eventTypeList);
}

std::string SetEventCallbackRequest::getAuthSwitch() const {
  return authSwitch_;
}

void SetEventCallbackRequest::setAuthSwitch(const std::string &authSwitch) {
  authSwitch_ = authSwitch;
  setParameter(std::string("AuthSwitch"), authSwitch);
}

std::string SetEventCallbackRequest::getCallbackURL() const {
  return callbackURL_;
}

void SetEventCallbackRequest::setCallbackURL(const std::string &callbackURL) {
  callbackURL_ = callbackURL;
  setParameter(std::string("CallbackURL"), callbackURL);
}

