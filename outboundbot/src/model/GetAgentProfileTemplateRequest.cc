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

#include <alibabacloud/outboundbot/model/GetAgentProfileTemplateRequest.h>

using AlibabaCloud::OutboundBot::Model::GetAgentProfileTemplateRequest;

GetAgentProfileTemplateRequest::GetAgentProfileTemplateRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "GetAgentProfileTemplate") {
  setMethod(HttpRequest::Method::Post);
}

GetAgentProfileTemplateRequest::~GetAgentProfileTemplateRequest() {}

std::string GetAgentProfileTemplateRequest::getAppIp() const {
  return appIp_;
}

void GetAgentProfileTemplateRequest::setAppIp(const std::string &appIp) {
  appIp_ = appIp;
  setBodyParameter(std::string("AppIp"), appIp);
}

std::string GetAgentProfileTemplateRequest::getAgentProfileTemplateId() const {
  return agentProfileTemplateId_;
}

void GetAgentProfileTemplateRequest::setAgentProfileTemplateId(const std::string &agentProfileTemplateId) {
  agentProfileTemplateId_ = agentProfileTemplateId;
  setBodyParameter(std::string("AgentProfileTemplateId"), agentProfileTemplateId);
}

