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

SubmitTextTo2DAvatarVideoTaskRequest::VideoInfo SubmitTextTo2DAvatarVideoTaskRequest::getVideoInfo() const {
  return videoInfo_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setVideoInfo(const SubmitTextTo2DAvatarVideoTaskRequest::VideoInfo &videoInfo) {
  videoInfo_ = videoInfo;
  setParameter(std::string("VideoInfo") + ".IsAlpha", videoInfo.isAlpha ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".BackgroundImageUrl", videoInfo.backgroundImageUrl);
  setParameter(std::string("VideoInfo") + ".IsSubtitles", videoInfo.isSubtitles ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".Resolution", std::to_string(videoInfo.resolution));
  setParameter(std::string("VideoInfo") + ".AlphaFormat", std::to_string(videoInfo.alphaFormat));
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
}

SubmitTextTo2DAvatarVideoTaskRequest::AvatarInfo SubmitTextTo2DAvatarVideoTaskRequest::getAvatarInfo() const {
  return avatarInfo_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setAvatarInfo(const SubmitTextTo2DAvatarVideoTaskRequest::AvatarInfo &avatarInfo) {
  avatarInfo_ = avatarInfo;
  setParameter(std::string("AvatarInfo") + ".Code", avatarInfo.code);
}

long SubmitTextTo2DAvatarVideoTaskRequest::getTenantId() const {
  return tenantId_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getText() const {
  return text_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

std::string SubmitTextTo2DAvatarVideoTaskRequest::getTitle() const {
  return title_;
}

void SubmitTextTo2DAvatarVideoTaskRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

