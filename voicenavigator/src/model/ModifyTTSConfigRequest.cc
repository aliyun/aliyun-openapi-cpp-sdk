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

#include <alibabacloud/voicenavigator/model/ModifyTTSConfigRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ModifyTTSConfigRequest;

ModifyTTSConfigRequest::ModifyTTSConfigRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ModifyTTSConfig") {
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

std::string ModifyTTSConfigRequest::getVolume() const {
  return volume_;
}

void ModifyTTSConfigRequest::setVolume(const std::string &volume) {
  volume_ = volume;
  setParameter(std::string("Volume"), volume);
}

std::string ModifyTTSConfigRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTTSConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTTSConfigRequest::getSpeechRate() const {
  return speechRate_;
}

void ModifyTTSConfigRequest::setSpeechRate(const std::string &speechRate) {
  speechRate_ = speechRate;
  setParameter(std::string("SpeechRate"), speechRate);
}

