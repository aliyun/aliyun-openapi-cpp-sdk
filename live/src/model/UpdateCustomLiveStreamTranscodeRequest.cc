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

#include <alibabacloud/live/model/UpdateCustomLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::UpdateCustomLiveStreamTranscodeRequest;

UpdateCustomLiveStreamTranscodeRequest::UpdateCustomLiveStreamTranscodeRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateCustomLiveStreamTranscode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomLiveStreamTranscodeRequest::~UpdateCustomLiveStreamTranscodeRequest() {}

std::string UpdateCustomLiveStreamTranscodeRequest::get_Template() const {
  return _template_;
}

void UpdateCustomLiveStreamTranscodeRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getResWithSource() const {
  return resWithSource_;
}

void UpdateCustomLiveStreamTranscodeRequest::setResWithSource(const std::string &resWithSource) {
  resWithSource_ = resWithSource;
  setParameter(std::string("ResWithSource"), resWithSource);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getLazy() const {
  return lazy_;
}

void UpdateCustomLiveStreamTranscodeRequest::setLazy(const std::string &lazy) {
  lazy_ = lazy;
  setParameter(std::string("Lazy"), lazy);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getGop() const {
  return gop_;
}

void UpdateCustomLiveStreamTranscodeRequest::setGop(const std::string &gop) {
  gop_ = gop;
  setParameter(std::string("Gop"), gop);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getAudioCodec() const {
  return audioCodec_;
}

void UpdateCustomLiveStreamTranscodeRequest::setAudioCodec(const std::string &audioCodec) {
  audioCodec_ = audioCodec;
  setParameter(std::string("AudioCodec"), audioCodec);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getRegionId() const {
  return regionId_;
}

void UpdateCustomLiveStreamTranscodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getTemplateType() const {
  return templateType_;
}

void UpdateCustomLiveStreamTranscodeRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getAudioProfile() const {
  return audioProfile_;
}

void UpdateCustomLiveStreamTranscodeRequest::setAudioProfile(const std::string &audioProfile) {
  audioProfile_ = audioProfile;
  setParameter(std::string("AudioProfile"), audioProfile);
}

int UpdateCustomLiveStreamTranscodeRequest::getHeight() const {
  return height_;
}

void UpdateCustomLiveStreamTranscodeRequest::setHeight(int height) {
  height_ = height;
  setParameter(std::string("Height"), std::to_string(height));
}

std::string UpdateCustomLiveStreamTranscodeRequest::getApp() const {
  return app_;
}

void UpdateCustomLiveStreamTranscodeRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getEncryptParameters() const {
  return encryptParameters_;
}

void UpdateCustomLiveStreamTranscodeRequest::setEncryptParameters(const std::string &encryptParameters) {
  encryptParameters_ = encryptParameters;
  setParameter(std::string("EncryptParameters"), encryptParameters);
}

int UpdateCustomLiveStreamTranscodeRequest::getAudioChannelNum() const {
  return audioChannelNum_;
}

void UpdateCustomLiveStreamTranscodeRequest::setAudioChannelNum(int audioChannelNum) {
  audioChannelNum_ = audioChannelNum;
  setParameter(std::string("AudioChannelNum"), std::to_string(audioChannelNum));
}

int UpdateCustomLiveStreamTranscodeRequest::getProfile() const {
  return profile_;
}

void UpdateCustomLiveStreamTranscodeRequest::setProfile(int profile) {
  profile_ = profile;
  setParameter(std::string("Profile"), std::to_string(profile));
}

int UpdateCustomLiveStreamTranscodeRequest::getFPS() const {
  return fPS_;
}

void UpdateCustomLiveStreamTranscodeRequest::setFPS(int fPS) {
  fPS_ = fPS;
  setParameter(std::string("FPS"), std::to_string(fPS));
}

long UpdateCustomLiveStreamTranscodeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateCustomLiveStreamTranscodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateCustomLiveStreamTranscodeRequest::getExtWithSource() const {
  return extWithSource_;
}

void UpdateCustomLiveStreamTranscodeRequest::setExtWithSource(const std::string &extWithSource) {
  extWithSource_ = extWithSource;
  setParameter(std::string("ExtWithSource"), extWithSource);
}

std::string UpdateCustomLiveStreamTranscodeRequest::getBitrateWithSource() const {
  return bitrateWithSource_;
}

void UpdateCustomLiveStreamTranscodeRequest::setBitrateWithSource(const std::string &bitrateWithSource) {
  bitrateWithSource_ = bitrateWithSource;
  setParameter(std::string("BitrateWithSource"), bitrateWithSource);
}

int UpdateCustomLiveStreamTranscodeRequest::getAudioRate() const {
  return audioRate_;
}

void UpdateCustomLiveStreamTranscodeRequest::setAudioRate(int audioRate) {
  audioRate_ = audioRate;
  setParameter(std::string("AudioRate"), std::to_string(audioRate));
}

std::string UpdateCustomLiveStreamTranscodeRequest::getFpsWithSource() const {
  return fpsWithSource_;
}

void UpdateCustomLiveStreamTranscodeRequest::setFpsWithSource(const std::string &fpsWithSource) {
  fpsWithSource_ = fpsWithSource;
  setParameter(std::string("FpsWithSource"), fpsWithSource);
}

int UpdateCustomLiveStreamTranscodeRequest::getAudioBitrate() const {
  return audioBitrate_;
}

void UpdateCustomLiveStreamTranscodeRequest::setAudioBitrate(int audioBitrate) {
  audioBitrate_ = audioBitrate;
  setParameter(std::string("AudioBitrate"), std::to_string(audioBitrate));
}

std::string UpdateCustomLiveStreamTranscodeRequest::getDomain() const {
  return domain_;
}

void UpdateCustomLiveStreamTranscodeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int UpdateCustomLiveStreamTranscodeRequest::getWidth() const {
  return width_;
}

void UpdateCustomLiveStreamTranscodeRequest::setWidth(int width) {
  width_ = width;
  setParameter(std::string("Width"), std::to_string(width));
}

int UpdateCustomLiveStreamTranscodeRequest::getVideoBitrate() const {
  return videoBitrate_;
}

void UpdateCustomLiveStreamTranscodeRequest::setVideoBitrate(int videoBitrate) {
  videoBitrate_ = videoBitrate;
  setParameter(std::string("VideoBitrate"), std::to_string(videoBitrate));
}

