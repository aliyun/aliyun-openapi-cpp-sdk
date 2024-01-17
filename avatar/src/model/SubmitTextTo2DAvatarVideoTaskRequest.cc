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

#include <alibabacloud/avatar/model/SubmitTextTo2DAvatarVideoTaskRequest.h>

using AlibabaCloud::Avatar::Model::SubmitTextTo2DAvatarVideoTaskRequest;

SubmitTextTo2DAvatarVideoTaskRequest::SubmitTextTo2DAvatarVideoTaskRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SubmitTextTo2DAvatarVideoTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTextTo2DAvatarVideoTaskRequest::~SubmitTextTo2DAvatarVideoTaskRequest() {}

SubmitTextTo2DAvatarVideoTaskRequest::App SubmitTextTo2DAvatarVideoTaskRequest::getApp() const {
  return app_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setApp(const SubmitTextTo2DAvatarVideoTaskRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

SubmitTextTo2DAvatarVideoTaskRequest::AudioInfo SubmitTextTo2DAvatarVideoTaskRequest::getAudioInfo() const {
  return audioInfo_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setAudioInfo(const SubmitTextTo2DAvatarVideoTaskRequest::AudioInfo &audioInfo) {
  audioInfo_ = audioInfo;
  setParameter(std::string("AudioInfo") + ".Voice", audioInfo.voice);
  setParameter(std::string("AudioInfo") + ".Volume", std::to_string(audioInfo.volume));
  setParameter(std::string("AudioInfo") + ".SpeechRate", std::to_string(audioInfo.speechRate));
  setParameter(std::string("AudioInfo") + ".PitchRate", std::to_string(audioInfo.pitchRate));
  setParameter(std::string("AudioInfo") + ".SampleRate", std::to_string(audioInfo.sampleRate));
}

SubmitTextTo2DAvatarVideoTaskRequest::AvatarInfo SubmitTextTo2DAvatarVideoTaskRequest::getAvatarInfo() const {
  return avatarInfo_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setAvatarInfo(const SubmitTextTo2DAvatarVideoTaskRequest::AvatarInfo &avatarInfo) {
  avatarInfo_ = avatarInfo;
  setParameter(std::string("AvatarInfo") + ".Code", avatarInfo.code);
  setParameter(std::string("AvatarInfo") + ".X", std::to_string(avatarInfo.x));
  setParameter(std::string("AvatarInfo") + ".Width", std::to_string(avatarInfo.width));
  setParameter(std::string("AvatarInfo") + ".Y", std::to_string(avatarInfo.y));
  setParameter(std::string("AvatarInfo") + ".Height", std::to_string(avatarInfo.height));
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getTitle() const {
  return title_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getExtParams() const {
  return extParams_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

SubmitTextTo2DAvatarVideoTaskRequest::VideoInfo SubmitTextTo2DAvatarVideoTaskRequest::getVideoInfo() const {
  return videoInfo_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setVideoInfo(const SubmitTextTo2DAvatarVideoTaskRequest::VideoInfo &videoInfo) {
  videoInfo_ = videoInfo;
  setParameter(std::string("VideoInfo") + ".IsAlpha", videoInfo.isAlpha ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".BackgroundImageUrl", videoInfo.backgroundImageUrl);
  setParameter(std::string("VideoInfo") + ".IsSubtitles", videoInfo.isSubtitles ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".SubtitleEmbedded", videoInfo.subtitleEmbedded ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".SubtitleStyle.Color", videoInfo.subtitleStyle.color);
  setParameter(std::string("VideoInfo") + ".SubtitleStyle.Size", std::to_string(videoInfo.subtitleStyle.size));
  setParameter(std::string("VideoInfo") + ".SubtitleStyle.Name", videoInfo.subtitleStyle.name);
  setParameter(std::string("VideoInfo") + ".SubtitleStyle.Y", std::to_string(videoInfo.subtitleStyle.y));
  setParameter(std::string("VideoInfo") + ".SubtitleStyle.OutlineColor", videoInfo.subtitleStyle.outlineColor);
  setParameter(std::string("VideoInfo") + ".Resolution", std::to_string(videoInfo.resolution));
  setParameter(std::string("VideoInfo") + ".AlphaFormat", std::to_string(videoInfo.alphaFormat));
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getCallbackParams() const {
  return callbackParams_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setCallbackParams(const std::string &callbackParams) {
  callbackParams_ = callbackParams;
  setParameter(std::string("CallbackParams"), callbackParams);
}

long SubmitTextTo2DAvatarVideoTaskRequest::getTenantId() const {
  return tenantId_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

bool SubmitTextTo2DAvatarVideoTaskRequest::getCallback() const {
  return callback_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setCallback(bool callback) {
  callback_ = callback;
  setParameter(std::string("Callback"), callback ? "true" : "false");
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getText() const {
  return text_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getCallbackParams_CLS() const {
  return callbackParams_CLS_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setCallbackParams_CLS(const std::string &callbackParams_CLS) {
  callbackParams_CLS_ = callbackParams_CLS;
  setParameter(std::string("CallbackParams_CLS"), callbackParams_CLS);
}

