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

#include <alibabacloud/live/model/AddRtsLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::AddRtsLiveStreamTranscodeRequest;

AddRtsLiveStreamTranscodeRequest::AddRtsLiveStreamTranscodeRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddRtsLiveStreamTranscode") {
  setMethod(HttpRequest::Method::Post);
}

AddRtsLiveStreamTranscodeRequest::~AddRtsLiveStreamTranscodeRequest() {}

std::string AddRtsLiveStreamTranscodeRequest::get_Template() const {
  return _template_;
}

void AddRtsLiveStreamTranscodeRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

bool AddRtsLiveStreamTranscodeRequest::getDeleteBframes() const {
  return deleteBframes_;
}

void AddRtsLiveStreamTranscodeRequest::setDeleteBframes(bool deleteBframes) {
  deleteBframes_ = deleteBframes;
  setParameter(std::string("DeleteBframes"), deleteBframes ? "true" : "false");
}

std::string AddRtsLiveStreamTranscodeRequest::getLazy() const {
  return lazy_;
}

void AddRtsLiveStreamTranscodeRequest::setLazy(const std::string &lazy) {
  lazy_ = lazy;
  setParameter(std::string("Lazy"), lazy);
}

std::string AddRtsLiveStreamTranscodeRequest::getGop() const {
  return gop_;
}

void AddRtsLiveStreamTranscodeRequest::setGop(const std::string &gop) {
  gop_ = gop;
  setParameter(std::string("Gop"), gop);
}

bool AddRtsLiveStreamTranscodeRequest::getOpus() const {
  return opus_;
}

void AddRtsLiveStreamTranscodeRequest::setOpus(bool opus) {
  opus_ = opus;
  setParameter(std::string("Opus"), opus ? "true" : "false");
}

std::string AddRtsLiveStreamTranscodeRequest::getAudioCodec() const {
  return audioCodec_;
}

void AddRtsLiveStreamTranscodeRequest::setAudioCodec(const std::string &audioCodec) {
  audioCodec_ = audioCodec;
  setParameter(std::string("AudioCodec"), audioCodec);
}

std::string AddRtsLiveStreamTranscodeRequest::getRegionId() const {
  return regionId_;
}

void AddRtsLiveStreamTranscodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddRtsLiveStreamTranscodeRequest::getTemplateType() const {
  return templateType_;
}

void AddRtsLiveStreamTranscodeRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string AddRtsLiveStreamTranscodeRequest::getAudioProfile() const {
  return audioProfile_;
}

void AddRtsLiveStreamTranscodeRequest::setAudioProfile(const std::string &audioProfile) {
  audioProfile_ = audioProfile;
  setParameter(std::string("AudioProfile"), audioProfile);
}

int AddRtsLiveStreamTranscodeRequest::getHeight() const {
  return height_;
}

void AddRtsLiveStreamTranscodeRequest::setHeight(int height) {
  height_ = height;
  setParameter(std::string("Height"), std::to_string(height));
}

std::string AddRtsLiveStreamTranscodeRequest::getApp() const {
  return app_;
}

void AddRtsLiveStreamTranscodeRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

int AddRtsLiveStreamTranscodeRequest::getAudioChannelNum() const {
  return audioChannelNum_;
}

void AddRtsLiveStreamTranscodeRequest::setAudioChannelNum(int audioChannelNum) {
  audioChannelNum_ = audioChannelNum;
  setParameter(std::string("AudioChannelNum"), std::to_string(audioChannelNum));
}

int AddRtsLiveStreamTranscodeRequest::getProfile() const {
  return profile_;
}

void AddRtsLiveStreamTranscodeRequest::setProfile(int profile) {
  profile_ = profile;
  setParameter(std::string("Profile"), std::to_string(profile));
}

int AddRtsLiveStreamTranscodeRequest::getFPS() const {
  return fPS_;
}

void AddRtsLiveStreamTranscodeRequest::setFPS(int fPS) {
  fPS_ = fPS;
  setParameter(std::string("FPS"), std::to_string(fPS));
}

long AddRtsLiveStreamTranscodeRequest::getOwnerId() const {
  return ownerId_;
}

void AddRtsLiveStreamTranscodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int AddRtsLiveStreamTranscodeRequest::getAudioRate() const {
  return audioRate_;
}

void AddRtsLiveStreamTranscodeRequest::setAudioRate(int audioRate) {
  audioRate_ = audioRate;
  setParameter(std::string("AudioRate"), std::to_string(audioRate));
}

int AddRtsLiveStreamTranscodeRequest::getAudioBitrate() const {
  return audioBitrate_;
}

void AddRtsLiveStreamTranscodeRequest::setAudioBitrate(int audioBitrate) {
  audioBitrate_ = audioBitrate;
  setParameter(std::string("AudioBitrate"), std::to_string(audioBitrate));
}

std::string AddRtsLiveStreamTranscodeRequest::getDomain() const {
  return domain_;
}

void AddRtsLiveStreamTranscodeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int AddRtsLiveStreamTranscodeRequest::getWidth() const {
  return width_;
}

void AddRtsLiveStreamTranscodeRequest::setWidth(int width) {
  width_ = width;
  setParameter(std::string("Width"), std::to_string(width));
}

int AddRtsLiveStreamTranscodeRequest::getVideoBitrate() const {
  return videoBitrate_;
}

void AddRtsLiveStreamTranscodeRequest::setVideoBitrate(int videoBitrate) {
  videoBitrate_ = videoBitrate;
  setParameter(std::string("VideoBitrate"), std::to_string(videoBitrate));
}

