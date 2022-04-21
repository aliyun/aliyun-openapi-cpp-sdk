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

#include <alibabacloud/outboundbot/model/ModifyScriptVoiceConfigRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyScriptVoiceConfigRequest;

ModifyScriptVoiceConfigRequest::ModifyScriptVoiceConfigRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyScriptVoiceConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyScriptVoiceConfigRequest::~ModifyScriptVoiceConfigRequest() {}

std::string ModifyScriptVoiceConfigRequest::getType() const {
  return type_;
}

void ModifyScriptVoiceConfigRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ModifyScriptVoiceConfigRequest::getScriptId() const {
  return scriptId_;
}

void ModifyScriptVoiceConfigRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyScriptVoiceConfigRequest::getScriptVoiceConfigId() const {
  return scriptVoiceConfigId_;
}

void ModifyScriptVoiceConfigRequest::setScriptVoiceConfigId(const std::string &scriptVoiceConfigId) {
  scriptVoiceConfigId_ = scriptVoiceConfigId;
  setParameter(std::string("ScriptVoiceConfigId"), scriptVoiceConfigId);
}

std::string ModifyScriptVoiceConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyScriptVoiceConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyScriptVoiceConfigRequest::getScriptWaveformRelation() const {
  return scriptWaveformRelation_;
}

void ModifyScriptVoiceConfigRequest::setScriptWaveformRelation(const std::string &scriptWaveformRelation) {
  scriptWaveformRelation_ = scriptWaveformRelation;
  setParameter(std::string("ScriptWaveformRelation"), scriptWaveformRelation);
}

