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

#include <alibabacloud/outboundbot/model/ModifyTTSConfigRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyTTSConfigRequest;

ModifyTTSConfigRequest::ModifyTTSConfigRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyTTSConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTTSConfigRequest::~ModifyTTSConfigRequest() {}

std::string ModifyTTSConfigRequest::getVoice() const {
  return voice_;
}

void ModifyTTSConfigRequest::setVoice(const std::string &voice) {
  voice_ = voice;
  setParameter(std::string("Voice"), voice);
}

std::string ModifyTTSConfigRequest::getNlsServiceType() const {
  return nlsServiceType_;
}

void ModifyTTSConfigRequest::setNlsServiceType(const std::string &nlsServiceType) {
  nlsServiceType_ = nlsServiceType;
  setParameter(std::string("NlsServiceType"), nlsServiceType);
}

std::string ModifyTTSConfigRequest::getVolume() const {
  return volume_;
}

void ModifyTTSConfigRequest::setVolume(const std::string &volume) {
  volume_ = volume;
  setParameter(std::string("Volume"), volume);
}

std::string ModifyTTSConfigRequest::getScriptId() const {
  return scriptId_;
}

void ModifyTTSConfigRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyTTSConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTTSConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTTSConfigRequest::getAppKey() const {
  return appKey_;
}

void ModifyTTSConfigRequest::setAppKey(const std::string &appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), appKey);
}

std::string ModifyTTSConfigRequest::getSpeechRate() const {
  return speechRate_;
}

void ModifyTTSConfigRequest::setSpeechRate(const std::string &speechRate) {
  speechRate_ = speechRate;
  setParameter(std::string("SpeechRate"), speechRate);
}

