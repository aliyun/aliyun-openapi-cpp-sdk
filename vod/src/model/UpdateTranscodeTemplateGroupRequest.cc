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

#include <alibabacloud/vod/model/UpdateTranscodeTemplateGroupRequest.h>

using AlibabaCloud::Vod::Model::UpdateTranscodeTemplateGroupRequest;

UpdateTranscodeTemplateGroupRequest::UpdateTranscodeTemplateGroupRequest()
    : RpcServiceRequest("vod", "2017-03-21", "UpdateTranscodeTemplateGroup") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTranscodeTemplateGroupRequest::~UpdateTranscodeTemplateGroupRequest() {}

std::string UpdateTranscodeTemplateGroupRequest::getTranscodeTemplateList() const {
  return transcodeTemplateList_;
}

void UpdateTranscodeTemplateGroupRequest::setTranscodeTemplateList(const std::string &transcodeTemplateList) {
  transcodeTemplateList_ = transcodeTemplateList;
  setParameter(std::string("TranscodeTemplateList"), transcodeTemplateList);
}

std::string UpdateTranscodeTemplateGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateTranscodeTemplateGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateTranscodeTemplateGroupRequest::getTranscodeTemplateGroupId() const {
  return transcodeTemplateGroupId_;
}

void UpdateTranscodeTemplateGroupRequest::setTranscodeTemplateGroupId(const std::string &transcodeTemplateGroupId) {
  transcodeTemplateGroupId_ = transcodeTemplateGroupId;
  setParameter(std::string("TranscodeTemplateGroupId"), transcodeTemplateGroupId);
}

std::string UpdateTranscodeTemplateGroupRequest::getName() const {
  return name_;
}

void UpdateTranscodeTemplateGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateTranscodeTemplateGroupRequest::getLocked() const {
  return locked_;
}

void UpdateTranscodeTemplateGroupRequest::setLocked(const std::string &locked) {
  locked_ = locked;
  setParameter(std::string("Locked"), locked);
}

