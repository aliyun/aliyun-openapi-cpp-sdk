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

#include <alibabacloud/live/model/AddCustomLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::AddCustomLiveStreamTranscodeRequest;

AddCustomLiveStreamTranscodeRequest::AddCustomLiveStreamTranscodeRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddCustomLiveStreamTranscode") {
  setMethod(HttpRequest::Method::Post);
}

AddCustomLiveStreamTranscodeRequest::~AddCustomLiveStreamTranscodeRequest() {}

std::string AddCustomLiveStreamTranscodeRequest::getResWithSource() const {
  return resWithSource_;
}

void AddCustomLiveStreamTranscodeRequest::setResWithSource(const std::string &resWithSource) {
  resWithSource_ = resWithSource;
  setParameter(std::string("ResWithSource"), resWithSource);
}

std::string AddCustomLiveStreamTranscodeRequest::getGop() const {
  return gop_;
}

void AddCustomLiveStreamTranscodeRequest::setGop(const std::string &gop) {
  gop_ = gop;
  setParameter(std::string("Gop"), gop);
}

std::string AddCustomLiveStreamTranscodeRequest::getAudioCodec() const {
  return audioCodec_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioCodec(const std::string &audioCodec) {
  audioCodec_ = audioCodec;
  setParameter(std::string("AudioCodec"), audioCodec);
}

std::string AddCustomLiveStreamTranscodeRequest::getKmsUID() const {
  return kmsUID_;
}

void AddCustomLiveStreamTranscodeRequest::setKmsUID(const std::string &kmsUID) {
  kmsUID_ = kmsUID;
  setParameter(std::string("KmsUID"), kmsUID);
}

int AddCustomLiveStreamTranscodeRequest::getHeight() const {
  return height_;
}

void AddCustomLiveStreamTranscodeRequest::setHeight(int height) {
  height_ = height;
  setParameter(std::string("Height"), std::to_string(height));
}

std::string AddCustomLiveStreamTranscodeRequest::getApp() const {
  return app_;
}

void AddCustomLiveStreamTranscodeRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

int AddCustomLiveStreamTranscodeRequest::getProfile() const {
  return profile_;
}

void AddCustomLiveStreamTranscodeRequest::setProfile(int profile) {
  profile_ = profile;
  setParameter(std::string("Profile"), std::to_string(profile));
}

long AddCustomLiveStreamTranscodeRequest::getOwnerId() const {
  return ownerId_;
}

void AddCustomLiveStreamTranscodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddCustomLiveStreamTranscodeRequest::getExtWithSource() const {
  return extWithSource_;
}

void AddCustomLiveStreamTranscodeRequest::setExtWithSource(const std::string &extWithSource) {
  extWithSource_ = extWithSource;
  setParameter(std::string("ExtWithSource"), extWithSource);
}

std::string AddCustomLiveStreamTranscodeRequest::getBitrateWithSource() const {
  return bitrateWithSource_;
}

void AddCustomLiveStreamTranscodeRequest::setBitrateWithSource(const std::string &bitrateWithSource) {
  bitrateWithSource_ = bitrateWithSource;
  setParameter(std::string("BitrateWithSource"), bitrateWithSource);
}

std::string AddCustomLiveStreamTranscodeRequest::getDomain() const {
  return domain_;
}

void AddCustomLiveStreamTranscodeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string AddCustomLiveStreamTranscodeRequest::get_Template() const {
  return _template_;
}

void AddCustomLiveStreamTranscodeRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string AddCustomLiveStreamTranscodeRequest::getLazy() const {
  return lazy_;
}

void AddCustomLiveStreamTranscodeRequest::setLazy(const std::string &lazy) {
  lazy_ = lazy;
  setParameter(std::string("Lazy"), lazy);
}

std::string AddCustomLiveStreamTranscodeRequest::getKmsKeyExpireInterval() const {
  return kmsKeyExpireInterval_;
}

void AddCustomLiveStreamTranscodeRequest::setKmsKeyExpireInterval(const std::string &kmsKeyExpireInterval) {
  kmsKeyExpireInterval_ = kmsKeyExpireInterval;
  setParameter(std::string("KmsKeyExpireInterval"), kmsKeyExpireInterval);
}

std::string AddCustomLiveStreamTranscodeRequest::getRegionId() const {
  return regionId_;
}

void AddCustomLiveStreamTranscodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddCustomLiveStreamTranscodeRequest::getTemplateType() const {
  return templateType_;
}

void AddCustomLiveStreamTranscodeRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string AddCustomLiveStreamTranscodeRequest::getAudioProfile() const {
  return audioProfile_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioProfile(const std::string &audioProfile) {
  audioProfile_ = audioProfile;
  setParameter(std::string("AudioProfile"), audioProfile);
}

std::string AddCustomLiveStreamTranscodeRequest::getEncryptParameters() const {
  return encryptParameters_;
}

void AddCustomLiveStreamTranscodeRequest::setEncryptParameters(const std::string &encryptParameters) {
  encryptParameters_ = encryptParameters;
  setParameter(std::string("EncryptParameters"), encryptParameters);
}

int AddCustomLiveStreamTranscodeRequest::getAudioChannelNum() const {
  return audioChannelNum_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioChannelNum(int audioChannelNum) {
  audioChannelNum_ = audioChannelNum;
  setParameter(std::string("AudioChannelNum"), std::to_string(audioChannelNum));
}

int AddCustomLiveStreamTranscodeRequest::getFPS() const {
  return fPS_;
}

void AddCustomLiveStreamTranscodeRequest::setFPS(int fPS) {
  fPS_ = fPS;
  setParameter(std::string("FPS"), std::to_string(fPS));
}

int AddCustomLiveStreamTranscodeRequest::getAudioRate() const {
  return audioRate_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioRate(int audioRate) {
  audioRate_ = audioRate;
  setParameter(std::string("AudioRate"), std::to_string(audioRate));
}

std::string AddCustomLiveStreamTranscodeRequest::getFpsWithSource() const {
  return fpsWithSource_;
}

void AddCustomLiveStreamTranscodeRequest::setFpsWithSource(const std::string &fpsWithSource) {
  fpsWithSource_ = fpsWithSource;
  setParameter(std::string("FpsWithSource"), fpsWithSource);
}

int AddCustomLiveStreamTranscodeRequest::getAudioBitrate() const {
  return audioBitrate_;
}

void AddCustomLiveStreamTranscodeRequest::setAudioBitrate(int audioBitrate) {
  audioBitrate_ = audioBitrate;
  setParameter(std::string("AudioBitrate"), std::to_string(audioBitrate));
}

int AddCustomLiveStreamTranscodeRequest::getWidth() const {
  return width_;
}

void AddCustomLiveStreamTranscodeRequest::setWidth(int width) {
  width_ = width;
  setParameter(std::string("Width"), std::to_string(width));
}

int AddCustomLiveStreamTranscodeRequest::getVideoBitrate() const {
  return videoBitrate_;
}

void AddCustomLiveStreamTranscodeRequest::setVideoBitrate(int videoBitrate) {
  videoBitrate_ = videoBitrate;
  setParameter(std::string("VideoBitrate"), std::to_string(videoBitrate));
}

std::string AddCustomLiveStreamTranscodeRequest::getKmsKeyID() const {
  return kmsKeyID_;
}

void AddCustomLiveStreamTranscodeRequest::setKmsKeyID(const std::string &kmsKeyID) {
  kmsKeyID_ = kmsKeyID;
  setParameter(std::string("KmsKeyID"), kmsKeyID);
}

