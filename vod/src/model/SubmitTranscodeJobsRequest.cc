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

#include <alibabacloud/vod/model/SubmitTranscodeJobsRequest.h>

using AlibabaCloud::Vod::Model::SubmitTranscodeJobsRequest;

SubmitTranscodeJobsRequest::SubmitTranscodeJobsRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitTranscodeJobs") {
  setMethod(HttpRequest::Method::Post);
}

SubmitTranscodeJobsRequest::~SubmitTranscodeJobsRequest() {}

std::string SubmitTranscodeJobsRequest::getSessionId() const {
  return sessionId_;
}

void SubmitTranscodeJobsRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string SubmitTranscodeJobsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitTranscodeJobsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitTranscodeJobsRequest::getUserData() const {
  return userData_;
}

void SubmitTranscodeJobsRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitTranscodeJobsRequest::getVideoId() const {
  return videoId_;
}

void SubmitTranscodeJobsRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

std::string SubmitTranscodeJobsRequest::getOverrideParams() const {
  return overrideParams_;
}

void SubmitTranscodeJobsRequest::setOverrideParams(const std::string &overrideParams) {
  overrideParams_ = overrideParams;
  setParameter(std::string("OverrideParams"), overrideParams);
}

std::string SubmitTranscodeJobsRequest::getPriority() const {
  return priority_;
}

void SubmitTranscodeJobsRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string SubmitTranscodeJobsRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitTranscodeJobsRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitTranscodeJobsRequest::getTemplateGroupId() const {
  return templateGroupId_;
}

void SubmitTranscodeJobsRequest::setTemplateGroupId(const std::string &templateGroupId) {
  templateGroupId_ = templateGroupId;
  setParameter(std::string("TemplateGroupId"), templateGroupId);
}

std::string SubmitTranscodeJobsRequest::getFileUrl() const {
  return fileUrl_;
}

void SubmitTranscodeJobsRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setParameter(std::string("FileUrl"), fileUrl);
}

std::string SubmitTranscodeJobsRequest::getEncryptConfig() const {
  return encryptConfig_;
}

void SubmitTranscodeJobsRequest::setEncryptConfig(const std::string &encryptConfig) {
  encryptConfig_ = encryptConfig;
  setParameter(std::string("EncryptConfig"), encryptConfig);
}

