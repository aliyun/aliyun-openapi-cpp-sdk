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

#include <alibabacloud/outboundbot/model/ListDialogueFlowsRequest.h>

using AlibabaCloud::OutboundBot::Model::ListDialogueFlowsRequest;

ListDialogueFlowsRequest::ListDialogueFlowsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListDialogueFlows") {
  setMethod(HttpRequest::Method::Post);
}

ListDialogueFlowsRequest::~ListDialogueFlowsRequest() {}

std::string ListDialogueFlowsRequest::getScriptId() const {
  return scriptId_;
}

void ListDialogueFlowsRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ListDialogueFlowsRequest::getInstanceId() const {
  return instanceId_;
}

void ListDialogueFlowsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

