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

#include <alibabacloud/outboundbot/model/ListAgentProfilesRequest.h>

using AlibabaCloud::OutboundBot::Model::ListAgentProfilesRequest;

ListAgentProfilesRequest::ListAgentProfilesRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListAgentProfiles") {
  setMethod(HttpRequest::Method::Post);
}

ListAgentProfilesRequest::~ListAgentProfilesRequest() {}

std::string ListAgentProfilesRequest::getAppIp() const {
  return appIp_;
}

void ListAgentProfilesRequest::setAppIp(const std::string &appIp) {
  appIp_ = appIp;
  setBodyParameter(std::string("AppIp"), appIp);
}

std::string ListAgentProfilesRequest::getScriptId() const {
  return scriptId_;
}

void ListAgentProfilesRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setBodyParameter(std::string("ScriptId"), scriptId);
}

std::string ListAgentProfilesRequest::getInstanceId() const {
  return instanceId_;
}

void ListAgentProfilesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

