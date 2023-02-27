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

#include <alibabacloud/ice/model/CreateEditingProjectRequest.h>

using AlibabaCloud::ICE::Model::CreateEditingProjectRequest;

CreateEditingProjectRequest::CreateEditingProjectRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

CreateEditingProjectRequest::~CreateEditingProjectRequest() {}

std::string CreateEditingProjectRequest::getBusinessConfig() const {
  return businessConfig_;
}

void CreateEditingProjectRequest::setBusinessConfig(const std::string &businessConfig) {
  businessConfig_ = businessConfig;
  setParameter(std::string("BusinessConfig"), businessConfig);
}

std::string CreateEditingProjectRequest::getDescription() const {
  return description_;
}

void CreateEditingProjectRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateEditingProjectRequest::getSource() const {
  return source_;
}

void CreateEditingProjectRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string CreateEditingProjectRequest::getTitle() const {
  return title_;
}

void CreateEditingProjectRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string CreateEditingProjectRequest::getMaterialMaps() const {
  return materialMaps_;
}

void CreateEditingProjectRequest::setMaterialMaps(const std::string &materialMaps) {
  materialMaps_ = materialMaps;
  setParameter(std::string("MaterialMaps"), materialMaps);
}

std::string CreateEditingProjectRequest::getCoverURL() const {
  return coverURL_;
}

void CreateEditingProjectRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string CreateEditingProjectRequest::getTemplateType() const {
  return templateType_;
}

void CreateEditingProjectRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string CreateEditingProjectRequest::getProjectType() const {
  return projectType_;
}

void CreateEditingProjectRequest::setProjectType(const std::string &projectType) {
  projectType_ = projectType;
  setParameter(std::string("ProjectType"), projectType);
}

std::string CreateEditingProjectRequest::getFEExtend() const {
  return fEExtend_;
}

void CreateEditingProjectRequest::setFEExtend(const std::string &fEExtend) {
  fEExtend_ = fEExtend;
  setParameter(std::string("FEExtend"), fEExtend);
}

std::string CreateEditingProjectRequest::getTemplateId() const {
  return templateId_;
}

void CreateEditingProjectRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string CreateEditingProjectRequest::getTimeline() const {
  return timeline_;
}

void CreateEditingProjectRequest::setTimeline(const std::string &timeline) {
  timeline_ = timeline;
  setParameter(std::string("Timeline"), timeline);
}

std::string CreateEditingProjectRequest::getClipsParam() const {
  return clipsParam_;
}

void CreateEditingProjectRequest::setClipsParam(const std::string &clipsParam) {
  clipsParam_ = clipsParam;
  setParameter(std::string("ClipsParam"), clipsParam);
}

