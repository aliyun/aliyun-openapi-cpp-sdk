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

#include <alibabacloud/vod/model/SubmitAIMediaAuditJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitAIMediaAuditJobRequest;

SubmitAIMediaAuditJobRequest::SubmitAIMediaAuditJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitAIMediaAuditJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAIMediaAuditJobRequest::~SubmitAIMediaAuditJobRequest() {}

std::string SubmitAIMediaAuditJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitAIMediaAuditJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitAIMediaAuditJobRequest::getUserData() const {
  return userData_;
}

void SubmitAIMediaAuditJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitAIMediaAuditJobRequest::getMediaId() const {
  return mediaId_;
}

void SubmitAIMediaAuditJobRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string SubmitAIMediaAuditJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitAIMediaAuditJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string SubmitAIMediaAuditJobRequest::getMediaAuditConfiguration() const {
  return mediaAuditConfiguration_;
}

void SubmitAIMediaAuditJobRequest::setMediaAuditConfiguration(const std::string &mediaAuditConfiguration) {
  mediaAuditConfiguration_ = mediaAuditConfiguration;
  setParameter(std::string("MediaAuditConfiguration"), mediaAuditConfiguration);
}

std::string SubmitAIMediaAuditJobRequest::getMediaType() const {
  return mediaType_;
}

void SubmitAIMediaAuditJobRequest::setMediaType(const std::string &mediaType) {
  mediaType_ = mediaType;
  setParameter(std::string("MediaType"), mediaType);
}

