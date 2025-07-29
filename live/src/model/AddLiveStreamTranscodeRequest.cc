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

#include <alibabacloud/live/model/AddLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::AddLiveStreamTranscodeRequest;

AddLiveStreamTranscodeRequest::AddLiveStreamTranscodeRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveStreamTranscode") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveStreamTranscodeRequest::~AddLiveStreamTranscodeRequest() {}

std::string AddLiveStreamTranscodeRequest::get_Template() const {
  return _template_;
}

void AddLiveStreamTranscodeRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string AddLiveStreamTranscodeRequest::getLazy() const {
  return lazy_;
}

void AddLiveStreamTranscodeRequest::setLazy(const std::string &lazy) {
  lazy_ = lazy;
  setParameter(std::string("Lazy"), lazy);
}

std::string AddLiveStreamTranscodeRequest::getRegionId() const {
  return regionId_;
}

void AddLiveStreamTranscodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddLiveStreamTranscodeRequest::getMix() const {
  return mix_;
}

void AddLiveStreamTranscodeRequest::setMix(const std::string &mix) {
  mix_ = mix;
  setParameter(std::string("Mix"), mix);
}

std::string AddLiveStreamTranscodeRequest::getApp() const {
  return app_;
}

void AddLiveStreamTranscodeRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

std::string AddLiveStreamTranscodeRequest::getEncryptParameters() const {
  return encryptParameters_;
}

void AddLiveStreamTranscodeRequest::setEncryptParameters(const std::string &encryptParameters) {
  encryptParameters_ = encryptParameters;
  setParameter(std::string("EncryptParameters"), encryptParameters);
}

std::string AddLiveStreamTranscodeRequest::getWatermark() const {
  return watermark_;
}

void AddLiveStreamTranscodeRequest::setWatermark(const std::string &watermark) {
  watermark_ = watermark;
  setParameter(std::string("Watermark"), watermark);
}

long AddLiveStreamTranscodeRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveStreamTranscodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddLiveStreamTranscodeRequest::getDomain() const {
  return domain_;
}

void AddLiveStreamTranscodeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string AddLiveStreamTranscodeRequest::getWaterPattern() const {
  return waterPattern_;
}

void AddLiveStreamTranscodeRequest::setWaterPattern(const std::string &waterPattern) {
  waterPattern_ = waterPattern;
  setParameter(std::string("WaterPattern"), waterPattern);
}

std::string AddLiveStreamTranscodeRequest::getOnlyAudio() const {
  return onlyAudio_;
}

void AddLiveStreamTranscodeRequest::setOnlyAudio(const std::string &onlyAudio) {
  onlyAudio_ = onlyAudio;
  setParameter(std::string("OnlyAudio"), onlyAudio);
}

