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

#include <alibabacloud/live/model/UpdateLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveStreamTranscodeRequest;

UpdateLiveStreamTranscodeRequest::UpdateLiveStreamTranscodeRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveStreamTranscode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveStreamTranscodeRequest::~UpdateLiveStreamTranscodeRequest() {}

std::string UpdateLiveStreamTranscodeRequest::get_Template() const {
  return _template_;
}

void UpdateLiveStreamTranscodeRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string UpdateLiveStreamTranscodeRequest::getLazy() const {
  return lazy_;
}

void UpdateLiveStreamTranscodeRequest::setLazy(const std::string &lazy) {
  lazy_ = lazy;
  setParameter(std::string("Lazy"), lazy);
}

std::string UpdateLiveStreamTranscodeRequest::getRegionId() const {
  return regionId_;
}

void UpdateLiveStreamTranscodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLiveStreamTranscodeRequest::getMix() const {
  return mix_;
}

void UpdateLiveStreamTranscodeRequest::setMix(const std::string &mix) {
  mix_ = mix;
  setParameter(std::string("Mix"), mix);
}

std::string UpdateLiveStreamTranscodeRequest::getApp() const {
  return app_;
}

void UpdateLiveStreamTranscodeRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

std::string UpdateLiveStreamTranscodeRequest::getEncryptParameters() const {
  return encryptParameters_;
}

void UpdateLiveStreamTranscodeRequest::setEncryptParameters(const std::string &encryptParameters) {
  encryptParameters_ = encryptParameters;
  setParameter(std::string("EncryptParameters"), encryptParameters);
}

std::string UpdateLiveStreamTranscodeRequest::getWatermark() const {
  return watermark_;
}

void UpdateLiveStreamTranscodeRequest::setWatermark(const std::string &watermark) {
  watermark_ = watermark;
  setParameter(std::string("Watermark"), watermark);
}

long UpdateLiveStreamTranscodeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveStreamTranscodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateLiveStreamTranscodeRequest::getDomain() const {
  return domain_;
}

void UpdateLiveStreamTranscodeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string UpdateLiveStreamTranscodeRequest::getWaterPattern() const {
  return waterPattern_;
}

void UpdateLiveStreamTranscodeRequest::setWaterPattern(const std::string &waterPattern) {
  waterPattern_ = waterPattern;
  setParameter(std::string("WaterPattern"), waterPattern);
}

std::string UpdateLiveStreamTranscodeRequest::getOnlyAudio() const {
  return onlyAudio_;
}

void UpdateLiveStreamTranscodeRequest::setOnlyAudio(const std::string &onlyAudio) {
  onlyAudio_ = onlyAudio;
  setParameter(std::string("OnlyAudio"), onlyAudio);
}

