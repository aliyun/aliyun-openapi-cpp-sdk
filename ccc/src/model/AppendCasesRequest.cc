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

#include <alibabacloud/ccc/model/AppendCasesRequest.h>

using AlibabaCloud::CCC::Model::AppendCasesRequest;

AppendCasesRequest::AppendCasesRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "AppendCases") {
  setMethod(HttpRequest::Method::Post);
}

AppendCasesRequest::~AppendCasesRequest() {}

std::string AppendCasesRequest::getInstanceId() const {
  return instanceId_;
}

void AppendCasesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AppendCasesRequest::getCampaignId() const {
  return campaignId_;
}

void AppendCasesRequest::setCampaignId(const std::string &campaignId) {
  campaignId_ = campaignId;
  setParameter(std::string("CampaignId"), campaignId);
}

std::vector<AppendCasesRequest::body> AppendCasesRequest::getBody() const {
  return body_;
}

void AppendCasesRequest::setBody(const std::vector<AppendCasesRequest::body> &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.size(); dep1++) {
    setBodyParameter(std::string("body") + "." + std::to_string(dep1 + 1) + ".CustomVariables", body[dep1].customVariables);
    setBodyParameter(std::string("body") + "." + std::to_string(dep1 + 1) + ".Caller", body[dep1].caller);
    setBodyParameter(std::string("body") + "." + std::to_string(dep1 + 1) + ".AgentId", body[dep1].agentId);
    setBodyParameter(std::string("body") + "." + std::to_string(dep1 + 1) + ".PhoneNumber", body[dep1].phoneNumber);
    setBodyParameter(std::string("body") + "." + std::to_string(dep1 + 1) + ".MaskedCallee", body[dep1].maskedCallee);
    setBodyParameter(std::string("body") + "." + std::to_string(dep1 + 1) + ".ReferenceId", body[dep1].referenceId);
  }
}

