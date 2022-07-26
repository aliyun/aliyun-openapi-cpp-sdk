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

#include <alibabacloud/oos/model/UpdateTemplateRequest.h>

using AlibabaCloud::Oos::Model::UpdateTemplateRequest;

UpdateTemplateRequest::UpdateTemplateRequest()
    : RpcServiceRequest("oos", "2019-06-01", "UpdateTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTemplateRequest::~UpdateTemplateRequest() {}

std::string UpdateTemplateRequest::getContent() const {
  return content_;
}

void UpdateTemplateRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::map<std::string, std::string> UpdateTemplateRequest::getTags() const {
  return tags_;
}

void UpdateTemplateRequest::setTags(std::map<std::string, std::string> tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string UpdateTemplateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void UpdateTemplateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string UpdateTemplateRequest::getRegionId() const {
  return regionId_;
}

void UpdateTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateTemplateRequest::getTemplateName() const {
  return templateName_;
}

void UpdateTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string UpdateTemplateRequest::getVersionName() const {
  return versionName_;
}

void UpdateTemplateRequest::setVersionName(const std::string &versionName) {
  versionName_ = versionName;
  setParameter(std::string("VersionName"), versionName);
}

