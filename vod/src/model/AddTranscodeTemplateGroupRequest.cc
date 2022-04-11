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

#include <alibabacloud/vod/model/AddTranscodeTemplateGroupRequest.h>

using AlibabaCloud::Vod::Model::AddTranscodeTemplateGroupRequest;

AddTranscodeTemplateGroupRequest::AddTranscodeTemplateGroupRequest()
    : RpcServiceRequest("vod", "2017-03-21", "AddTranscodeTemplateGroup") {
  setMethod(HttpRequest::Method::Post);
}

AddTranscodeTemplateGroupRequest::~AddTranscodeTemplateGroupRequest() {}

std::string AddTranscodeTemplateGroupRequest::getTranscodeTemplateList() const {
  return transcodeTemplateList_;
}

void AddTranscodeTemplateGroupRequest::setTranscodeTemplateList(const std::string &transcodeTemplateList) {
  transcodeTemplateList_ = transcodeTemplateList;
  setParameter(std::string("TranscodeTemplateList"), transcodeTemplateList);
}

std::string AddTranscodeTemplateGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddTranscodeTemplateGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddTranscodeTemplateGroupRequest::getTranscodeTemplateGroupId() const {
  return transcodeTemplateGroupId_;
}

void AddTranscodeTemplateGroupRequest::setTranscodeTemplateGroupId(const std::string &transcodeTemplateGroupId) {
  transcodeTemplateGroupId_ = transcodeTemplateGroupId;
  setParameter(std::string("TranscodeTemplateGroupId"), transcodeTemplateGroupId);
}

std::string AddTranscodeTemplateGroupRequest::getAppId() const {
  return appId_;
}

void AddTranscodeTemplateGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string AddTranscodeTemplateGroupRequest::getName() const {
  return name_;
}

void AddTranscodeTemplateGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

