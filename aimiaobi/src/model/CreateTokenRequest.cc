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

#include <alibabacloud/aimiaobi/model/CreateTokenRequest.h>

using AlibabaCloud::AiMiaoBi::Model::CreateTokenRequest;

CreateTokenRequest::CreateTokenRequest()
    : RpcServiceRequest("aimiaobi", "2023-08-01", "CreateToken") {
  setMethod(HttpRequest::Method::Post);
}

CreateTokenRequest::~CreateTokenRequest() {}

std::string CreateTokenRequest::getAgentKey() const {
  return agentKey_;
}

void CreateTokenRequest::setAgentKey(const std::string &agentKey) {
  agentKey_ = agentKey;
  setParameter(std::string("AgentKey"), agentKey);
}

