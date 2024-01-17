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

#include <alibabacloud/avatar/model/SubmitAudioTo2DAvatarVideoTaskRequest.h>

using AlibabaCloud::Avatar::Model::SubmitAudioTo2DAvatarVideoTaskRequest;

SubmitAudioTo2DAvatarVideoTaskRequest::SubmitAudioTo2DAvatarVideoTaskRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SubmitAudioTo2DAvatarVideoTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAudioTo2DAvatarVideoTaskRequest::~SubmitAudioTo2DAvatarVideoTaskRequest() {}

SubmitAudioTo2DAvatarVideoTaskRequest::App SubmitAudioTo2DAvatarVideoTaskRequest::getApp() const {
  return app_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setApp(const SubmitAudioTo2DAvatarVideoTaskRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

SubmitAudioTo2DAvatarVideoTaskRequest::AudioInfo SubmitAudioTo2DAvatarVideoTaskRequest::getAudioInfo() const {
  return audioInfo_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setAudioInfo(const SubmitAudioTo2DAvatarVideoTaskRequest::AudioInfo &audioInfo) {
  audioInfo_ = audioInfo;
  setParameter(std::string("AudioInfo") + ".SampleRate", std::to_string(audioInfo.sampleRate));
}

SubmitAudioTo2DAvatarVideoTaskRequest::AvatarInfo SubmitAudioTo2DAvatarVideoTaskRequest::getAvatarInfo() const {
  return avatarInfo_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setAvatarInfo(const SubmitAudioTo2DAvatarVideoTaskRequest::AvatarInfo &avatarInfo) {
  avatarInfo_ = avatarInfo;
  setParameter(std::string("AvatarInfo") + ".Code", avatarInfo.code);
  setParameter(std::string("AvatarInfo") + ".X", std::to_string(avatarInfo.x));
  setParameter(std::string("AvatarInfo") + ".Width", std::to_string(avatarInfo.width));
  setParameter(std::string("AvatarInfo") + ".Y", std::to_string(avatarInfo.y));
  setParameter(std::string("AvatarInfo") + ".Height", std::to_string(avatarInfo.height));
}

std::string SubmitAudioTo2DAvatarVideoTaskRequest::getTitle() const {
  return title_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitAudioTo2DAvatarVideoTaskRequest::getExtParams() const {
  return extParams_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

std::string SubmitAudioTo2DAvatarVideoTaskRequest::getUrl() const {
  return url_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

SubmitAudioTo2DAvatarVideoTaskRequest::VideoInfo SubmitAudioTo2DAvatarVideoTaskRequest::getVideoInfo() const {
  return videoInfo_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setVideoInfo(const SubmitAudioTo2DAvatarVideoTaskRequest::VideoInfo &videoInfo) {
  videoInfo_ = videoInfo;
  setParameter(std::string("VideoInfo") + ".IsAlpha", videoInfo.isAlpha ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".BackgroundImageUrl", videoInfo.backgroundImageUrl);
  setParameter(std::string("VideoInfo") + ".Resolution", std::to_string(videoInfo.resolution));
  setParameter(std::string("VideoInfo") + ".AlphaFormat", std::to_string(videoInfo.alphaFormat));
}

std::string SubmitAudioTo2DAvatarVideoTaskRequest::getCallbackParams() const {
  return callbackParams_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setCallbackParams(const std::string &callbackParams) {
  callbackParams_ = callbackParams;
  setParameter(std::string("CallbackParams"), callbackParams);
}

long SubmitAudioTo2DAvatarVideoTaskRequest::getTenantId() const {
  return tenantId_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

bool SubmitAudioTo2DAvatarVideoTaskRequest::getCallback() const {
  return callback_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setCallback(bool callback) {
  callback_ = callback;
  setParameter(std::string("Callback"), callback ? "true" : "false");
}

std::string SubmitAudioTo2DAvatarVideoTaskRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

std::string SubmitAudioTo2DAvatarVideoTaskRequest::getCallbackParams_CLS() const {
  return callbackParams_CLS_;
}

void SubmitAudioTo2DAvatarVideoTaskRequest::setCallbackParams_CLS(const std::string &callbackParams_CLS) {
  callbackParams_CLS_ = callbackParams_CLS;
  setParameter(std::string("CallbackParams_CLS"), callbackParams_CLS);
}

