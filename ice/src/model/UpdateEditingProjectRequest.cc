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

#include <alibabacloud/ice/model/UpdateEditingProjectRequest.h>

using AlibabaCloud::ICE::Model::UpdateEditingProjectRequest;

UpdateEditingProjectRequest::UpdateEditingProjectRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdateEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

UpdateEditingProjectRequest::~UpdateEditingProjectRequest() {}

std::string UpdateEditingProjectRequest::getDescription() const {
  return description_;
}

void UpdateEditingProjectRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateEditingProjectRequest::getSource() const {
  return source_;
}

void UpdateEditingProjectRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string UpdateEditingProjectRequest::getTitle() const {
  return title_;
}

void UpdateEditingProjectRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string UpdateEditingProjectRequest::getCoverURL() const {
  return coverURL_;
}

void UpdateEditingProjectRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string UpdateEditingProjectRequest::getProjectId() const {
  return projectId_;
}

void UpdateEditingProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string UpdateEditingProjectRequest::getFEExtend() const {
  return fEExtend_;
}

void UpdateEditingProjectRequest::setFEExtend(const std::string &fEExtend) {
  fEExtend_ = fEExtend;
  setParameter(std::string("FEExtend"), fEExtend);
}

std::string UpdateEditingProjectRequest::getBusinessStatus() const {
  return businessStatus_;
}

void UpdateEditingProjectRequest::setBusinessStatus(const std::string &businessStatus) {
  businessStatus_ = businessStatus;
  setParameter(std::string("BusinessStatus"), businessStatus);
}

std::string UpdateEditingProjectRequest::getTemplateId() const {
  return templateId_;
}

void UpdateEditingProjectRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string UpdateEditingProjectRequest::getTimeline() const {
  return timeline_;
}

void UpdateEditingProjectRequest::setTimeline(const std::string &timeline) {
  timeline_ = timeline;
  setParameter(std::string("Timeline"), timeline);
}

std::string UpdateEditingProjectRequest::getClipsParam() const {
  return clipsParam_;
}

void UpdateEditingProjectRequest::setClipsParam(const std::string &clipsParam) {
  clipsParam_ = clipsParam;
  setParameter(std::string("ClipsParam"), clipsParam);
}

