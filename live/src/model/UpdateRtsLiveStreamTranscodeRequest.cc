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

#include <alibabacloud/live/model/UpdateRtsLiveStreamTranscodeRequest.h>

using AlibabaCloud::Live::Model::UpdateRtsLiveStreamTranscodeRequest;

UpdateRtsLiveStreamTranscodeRequest::UpdateRtsLiveStreamTranscodeRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateRtsLiveStreamTranscode") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRtsLiveStreamTranscodeRequest::~UpdateRtsLiveStreamTranscodeRequest() {}

std::string UpdateRtsLiveStreamTranscodeRequest::get_Template() const {
  return _template_;
}

void UpdateRtsLiveStreamTranscodeRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

bool UpdateRtsLiveStreamTranscodeRequest::getDeleteBframes() const {
  return deleteBframes_;
}

void UpdateRtsLiveStreamTranscodeRequest::setDeleteBframes(bool deleteBframes) {
  deleteBframes_ = deleteBframes;
  setParameter(std::string("DeleteBframes"), deleteBframes ? "true" : "false");
}

std::string UpdateRtsLiveStreamTranscodeRequest::getLazy() const {
  return lazy_;
}

void UpdateRtsLiveStreamTranscodeRequest::setLazy(const std::string &lazy) {
  lazy_ = lazy;
  setParameter(std::string("Lazy"), lazy);
}

std::string UpdateRtsLiveStreamTranscodeRequest::getGop() const {
  return gop_;
}

void UpdateRtsLiveStreamTranscodeRequest::setGop(const std::string &gop) {
  gop_ = gop;
  setParameter(std::string("Gop"), gop);
}

bool UpdateRtsLiveStreamTranscodeRequest::getOpus() const {
  return opus_;
}

void UpdateRtsLiveStreamTranscodeRequest::setOpus(bool opus) {
  opus_ = opus;
  setParameter(std::string("Opus"), opus ? "true" : "false");
}

std::string UpdateRtsLiveStreamTranscodeRequest::getAudioCodec() const {
  return audioCodec_;
}

void UpdateRtsLiveStreamTranscodeRequest::setAudioCodec(const std::string &audioCodec) {
  audioCodec_ = audioCodec;
  setParameter(std::string("AudioCodec"), audioCodec);
}

std::string UpdateRtsLiveStreamTranscodeRequest::getRegionId() const {
  return regionId_;
}

void UpdateRtsLiveStreamTranscodeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateRtsLiveStreamTranscodeRequest::getTemplateType() const {
  return templateType_;
}

void UpdateRtsLiveStreamTranscodeRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string UpdateRtsLiveStreamTranscodeRequest::getAudioProfile() const {
  return audioProfile_;
}

void UpdateRtsLiveStreamTranscodeRequest::setAudioProfile(const std::string &audioProfile) {
  audioProfile_ = audioProfile;
  setParameter(std::string("AudioProfile"), audioProfile);
}

int UpdateRtsLiveStreamTranscodeRequest::getHeight() const {
  return height_;
}

void UpdateRtsLiveStreamTranscodeRequest::setHeight(int height) {
  height_ = height;
  setParameter(std::string("Height"), std::to_string(height));
}

std::string UpdateRtsLiveStreamTranscodeRequest::getApp() const {
  return app_;
}

void UpdateRtsLiveStreamTranscodeRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

int UpdateRtsLiveStreamTranscodeRequest::getAudioChannelNum() const {
  return audioChannelNum_;
}

void UpdateRtsLiveStreamTranscodeRequest::setAudioChannelNum(int audioChannelNum) {
  audioChannelNum_ = audioChannelNum;
  setParameter(std::string("AudioChannelNum"), std::to_string(audioChannelNum));
}

int UpdateRtsLiveStreamTranscodeRequest::getProfile() const {
  return profile_;
}

void UpdateRtsLiveStreamTranscodeRequest::setProfile(int profile) {
  profile_ = profile;
  setParameter(std::string("Profile"), std::to_string(profile));
}

int UpdateRtsLiveStreamTranscodeRequest::getFPS() const {
  return fPS_;
}

void UpdateRtsLiveStreamTranscodeRequest::setFPS(int fPS) {
  fPS_ = fPS;
  setParameter(std::string("FPS"), std::to_string(fPS));
}

long UpdateRtsLiveStreamTranscodeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateRtsLiveStreamTranscodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int UpdateRtsLiveStreamTranscodeRequest::getAudioRate() const {
  return audioRate_;
}

void UpdateRtsLiveStreamTranscodeRequest::setAudioRate(int audioRate) {
  audioRate_ = audioRate;
  setParameter(std::string("AudioRate"), std::to_string(audioRate));
}

int UpdateRtsLiveStreamTranscodeRequest::getAudioBitrate() const {
  return audioBitrate_;
}

void UpdateRtsLiveStreamTranscodeRequest::setAudioBitrate(int audioBitrate) {
  audioBitrate_ = audioBitrate;
  setParameter(std::string("AudioBitrate"), std::to_string(audioBitrate));
}

std::string UpdateRtsLiveStreamTranscodeRequest::getDomain() const {
  return domain_;
}

void UpdateRtsLiveStreamTranscodeRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int UpdateRtsLiveStreamTranscodeRequest::getWidth() const {
  return width_;
}

void UpdateRtsLiveStreamTranscodeRequest::setWidth(int width) {
  width_ = width;
  setParameter(std::string("Width"), std::to_string(width));
}

int UpdateRtsLiveStreamTranscodeRequest::getVideoBitrate() const {
  return videoBitrate_;
}

void UpdateRtsLiveStreamTranscodeRequest::setVideoBitrate(int videoBitrate) {
  videoBitrate_ = videoBitrate;
  setParameter(std::string("VideoBitrate"), std::to_string(videoBitrate));
}

