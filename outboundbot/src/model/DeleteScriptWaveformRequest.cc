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

#include <alibabacloud/outboundbot/model/DeleteScriptWaveformRequest.h>

using AlibabaCloud::OutboundBot::Model::DeleteScriptWaveformRequest;

DeleteScriptWaveformRequest::DeleteScriptWaveformRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DeleteScriptWaveform") {
  setMethod(HttpRequest::Method::Post);
}

DeleteScriptWaveformRequest::~DeleteScriptWaveformRequest() {}

std::string DeleteScriptWaveformRequest::getScriptWaveformId() const {
  return scriptWaveformId_;
}

void DeleteScriptWaveformRequest::setScriptWaveformId(const std::string &scriptWaveformId) {
  scriptWaveformId_ = scriptWaveformId;
  setParameter(std::string("ScriptWaveformId"), scriptWaveformId);
}

std::string DeleteScriptWaveformRequest::getScriptId() const {
  return scriptId_;
}

void DeleteScriptWaveformRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string DeleteScriptWaveformRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteScriptWaveformRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

