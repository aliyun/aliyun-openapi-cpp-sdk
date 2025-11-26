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

#include <alibabacloud/outboundbot/model/DescribeTTSDemoRequest.h>

using AlibabaCloud::OutboundBot::Model::DescribeTTSDemoRequest;

DescribeTTSDemoRequest::DescribeTTSDemoRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DescribeTTSDemo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTTSDemoRequest::~DescribeTTSDemoRequest() {}

std::string DescribeTTSDemoRequest::getVoice() const {
  return voice_;
}

void DescribeTTSDemoRequest::setVoice(const std::string &voice) {
  voice_ = voice;
  setParameter(std::string("Voice"), voice);
}

std::string DescribeTTSDemoRequest::getSecretKey() const {
  return secretKey_;
}

void DescribeTTSDemoRequest::setSecretKey(const std::string &secretKey) {
  secretKey_ = secretKey;
  setParameter(std::string("SecretKey"), secretKey);
}

std::string DescribeTTSDemoRequest::getScriptId() const {
  return scriptId_;
}

void DescribeTTSDemoRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string DescribeTTSDemoRequest::getAccessKey() const {
  return accessKey_;
}

void DescribeTTSDemoRequest::setAccessKey(const std::string &accessKey) {
  accessKey_ = accessKey;
  setParameter(std::string("AccessKey"), accessKey);
}

std::string DescribeTTSDemoRequest::getEngine() const {
  return engine_;
}

void DescribeTTSDemoRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeTTSDemoRequest::getText() const {
  return text_;
}

void DescribeTTSDemoRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

int DescribeTTSDemoRequest::getPitchRate() const {
  return pitchRate_;
}

void DescribeTTSDemoRequest::setPitchRate(int pitchRate) {
  pitchRate_ = pitchRate;
  setParameter(std::string("PitchRate"), std::to_string(pitchRate));
}

std::string DescribeTTSDemoRequest::getAliCustomizedVoice() const {
  return aliCustomizedVoice_;
}

void DescribeTTSDemoRequest::setAliCustomizedVoice(const std::string &aliCustomizedVoice) {
  aliCustomizedVoice_ = aliCustomizedVoice;
  setParameter(std::string("AliCustomizedVoice"), aliCustomizedVoice);
}

std::string DescribeTTSDemoRequest::getNlsServiceType() const {
  return nlsServiceType_;
}

void DescribeTTSDemoRequest::setNlsServiceType(const std::string &nlsServiceType) {
  nlsServiceType_ = nlsServiceType;
  setParameter(std::string("NlsServiceType"), nlsServiceType);
}

int DescribeTTSDemoRequest::getVolume() const {
  return volume_;
}

void DescribeTTSDemoRequest::setVolume(int volume) {
  volume_ = volume;
  setParameter(std::string("Volume"), std::to_string(volume));
}

std::string DescribeTTSDemoRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTTSDemoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeTTSDemoRequest::getAppKey() const {
  return appKey_;
}

void DescribeTTSDemoRequest::setAppKey(const std::string &appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), appKey);
}

int DescribeTTSDemoRequest::getSpeechRate() const {
  return speechRate_;
}

void DescribeTTSDemoRequest::setSpeechRate(int speechRate) {
  speechRate_ = speechRate;
  setParameter(std::string("SpeechRate"), std::to_string(speechRate));
}

