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

#include <alibabacloud/voicenavigator/model/AuditTTSVoiceRequest.h>

using AlibabaCloud::VoiceNavigator::Model::AuditTTSVoiceRequest;

AuditTTSVoiceRequest::AuditTTSVoiceRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "AuditTTSVoice") {
  setMethod(HttpRequest::Method::Post);
}

AuditTTSVoiceRequest::~AuditTTSVoiceRequest() {}

std::string AuditTTSVoiceRequest::getVoice() const {
  return voice_;
}

void AuditTTSVoiceRequest::setVoice(const std::string &voice) {
  voice_ = voice;
  setParameter(std::string("Voice"), voice);
}

std::string AuditTTSVoiceRequest::getVolume() const {
  return volume_;
}

void AuditTTSVoiceRequest::setVolume(const std::string &volume) {
  volume_ = volume;
  setParameter(std::string("Volume"), volume);
}

std::string AuditTTSVoiceRequest::getInstanceId() const {
  return instanceId_;
}

void AuditTTSVoiceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AuditTTSVoiceRequest::getText() const {
  return text_;
}

void AuditTTSVoiceRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

std::string AuditTTSVoiceRequest::getSpeechRate() const {
  return speechRate_;
}

void AuditTTSVoiceRequest::setSpeechRate(const std::string &speechRate) {
  speechRate_ = speechRate;
  setParameter(std::string("SpeechRate"), speechRate);
}

