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

#include <alibabacloud/ice/model/UpdateTemplateRequest.h>

using AlibabaCloud::ICE::Model::UpdateTemplateRequest;

UpdateTemplateRequest::UpdateTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdateTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTemplateRequest::~UpdateTemplateRequest() {}

std::string UpdateTemplateRequest::getSource() const {
  return source_;
}

void UpdateTemplateRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string UpdateTemplateRequest::getRelatedMediaids() const {
  return relatedMediaids_;
}

void UpdateTemplateRequest::setRelatedMediaids(const std::string &relatedMediaids) {
  relatedMediaids_ = relatedMediaids;
  setParameter(std::string("RelatedMediaids"), relatedMediaids);
}

std::string UpdateTemplateRequest::getCoverUrl() const {
  return coverUrl_;
}

void UpdateTemplateRequest::setCoverUrl(const std::string &coverUrl) {
  coverUrl_ = coverUrl;
  setParameter(std::string("CoverUrl"), coverUrl);
}

std::string UpdateTemplateRequest::getPreviewMedia() const {
  return previewMedia_;
}

void UpdateTemplateRequest::setPreviewMedia(const std::string &previewMedia) {
  previewMedia_ = previewMedia;
  setParameter(std::string("PreviewMedia"), previewMedia);
}

std::string UpdateTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string UpdateTemplateRequest::getName() const {
  return name_;
}

void UpdateTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateTemplateRequest::getConfig() const {
  return config_;
}

void UpdateTemplateRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

std::string UpdateTemplateRequest::getStatus() const {
  return status_;
}

void UpdateTemplateRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

