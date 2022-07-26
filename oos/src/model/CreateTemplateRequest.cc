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

#include <alibabacloud/oos/model/CreateTemplateRequest.h>

using AlibabaCloud::Oos::Model::CreateTemplateRequest;

CreateTemplateRequest::CreateTemplateRequest()
    : RpcServiceRequest("oos", "2019-06-01", "CreateTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateTemplateRequest::~CreateTemplateRequest() {}

std::string CreateTemplateRequest::getContent() const {
  return content_;
}

void CreateTemplateRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::map<std::string, std::string> CreateTemplateRequest::getTags() const {
  return tags_;
}

void CreateTemplateRequest::setTags(std::map<std::string, std::string> tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string CreateTemplateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTemplateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateTemplateRequest::getRegionId() const {
  return regionId_;
}

void CreateTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTemplateRequest::getTemplateName() const {
  return templateName_;
}

void CreateTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string CreateTemplateRequest::getVersionName() const {
  return versionName_;
}

void CreateTemplateRequest::setVersionName(const std::string &versionName) {
  versionName_ = versionName;
  setParameter(std::string("VersionName"), versionName);
}

