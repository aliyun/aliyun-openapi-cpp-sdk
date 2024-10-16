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

#include <alibabacloud/gwlb/model/UpdateListenerAttributeRequest.h>

using AlibabaCloud::Gwlb::Model::UpdateListenerAttributeRequest;

UpdateListenerAttributeRequest::UpdateListenerAttributeRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "UpdateListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateListenerAttributeRequest::~UpdateListenerAttributeRequest() {}

std::string UpdateListenerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateListenerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateListenerAttributeRequest::getServerGroupId() const {
  return serverGroupId_;
}

void UpdateListenerAttributeRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::string UpdateListenerAttributeRequest::getListenerId() const {
  return listenerId_;
}

void UpdateListenerAttributeRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

bool UpdateListenerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateListenerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateListenerAttributeRequest::getListenerDescription() const {
  return listenerDescription_;
}

void UpdateListenerAttributeRequest::setListenerDescription(const std::string &listenerDescription) {
  listenerDescription_ = listenerDescription;
  setBodyParameter(std::string("ListenerDescription"), listenerDescription);
}

