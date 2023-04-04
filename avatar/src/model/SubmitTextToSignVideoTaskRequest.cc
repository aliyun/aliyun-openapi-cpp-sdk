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

#include <alibabacloud/avatar/model/SubmitTextToSignVideoTaskRequest.h>

using AlibabaCloud::Avatar::Model::SubmitTextToSignVideoTaskRequest;

SubmitTextToSignVideoTaskRequest::SubmitTextToSignVideoTaskRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SubmitTextToSignVideoTask") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTextToSignVideoTaskRequest::~SubmitTextToSignVideoTaskRequest() {}

SubmitTextToSignVideoTaskRequest::App SubmitTextToSignVideoTaskRequest::getApp() const {
  return app_;
}

void SubmitTextToSignVideoTaskRequest::setApp(const SubmitTextToSignVideoTaskRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

SubmitTextToSignVideoTaskRequest::VideoInfo SubmitTextToSignVideoTaskRequest::getVideoInfo() const {
  return videoInfo_;
}

void SubmitTextToSignVideoTaskRequest::setVideoInfo(const SubmitTextToSignVideoTaskRequest::VideoInfo &videoInfo) {
  videoInfo_ = videoInfo;
  setParameter(std::string("VideoInfo") + ".IsAlpha", videoInfo.isAlpha ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".IsSubtitles", videoInfo.isSubtitles ? "true" : "false");
  setParameter(std::string("VideoInfo") + ".Resolution", std::to_string(videoInfo.resolution));
}

long SubmitTextToSignVideoTaskRequest::getTenantId() const {
  return tenantId_;
}

void SubmitTextToSignVideoTaskRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string SubmitTextToSignVideoTaskRequest::getText() const {
  return text_;
}

void SubmitTextToSignVideoTaskRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

std::string SubmitTextToSignVideoTaskRequest::getTitle() const {
  return title_;
}

void SubmitTextToSignVideoTaskRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

