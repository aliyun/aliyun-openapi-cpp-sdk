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

#include <alibabacloud/outboundbot/model/GetAgentProfileRequest.h>

using AlibabaCloud::OutboundBot::Model::GetAgentProfileRequest;

GetAgentProfileRequest::GetAgentProfileRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "GetAgentProfile") {
  setMethod(HttpRequest::Method::Post);
}

GetAgentProfileRequest::~GetAgentProfileRequest() {}

std::string GetAgentProfileRequest::getAppIp() const {
  return appIp_;
}

void GetAgentProfileRequest::setAppIp(const std::string &appIp) {
  appIp_ = appIp;
  setBodyParameter(std::string("AppIp"), appIp);
}

std::string GetAgentProfileRequest::getAgentProfileId() const {
  return agentProfileId_;
}

void GetAgentProfileRequest::setAgentProfileId(const std::string &agentProfileId) {
  agentProfileId_ = agentProfileId;
  setBodyParameter(std::string("AgentProfileId"), agentProfileId);
}

std::string GetAgentProfileRequest::getInstanceId() const {
  return instanceId_;
}

void GetAgentProfileRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

