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

#include <alibabacloud/outboundbot/model/DeleteGlobalQuestionRequest.h>

using AlibabaCloud::OutboundBot::Model::DeleteGlobalQuestionRequest;

DeleteGlobalQuestionRequest::DeleteGlobalQuestionRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DeleteGlobalQuestion") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGlobalQuestionRequest::~DeleteGlobalQuestionRequest() {}

std::string DeleteGlobalQuestionRequest::getGlobalQuestionId() const {
  return globalQuestionId_;
}

void DeleteGlobalQuestionRequest::setGlobalQuestionId(const std::string &globalQuestionId) {
  globalQuestionId_ = globalQuestionId;
  setParameter(std::string("GlobalQuestionId"), globalQuestionId);
}

std::string DeleteGlobalQuestionRequest::getScriptId() const {
  return scriptId_;
}

void DeleteGlobalQuestionRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string DeleteGlobalQuestionRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteGlobalQuestionRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

