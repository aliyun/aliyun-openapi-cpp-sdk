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

#include <alibabacloud/ice/model/UpdateCustomTemplateRequest.h>

using AlibabaCloud::ICE::Model::UpdateCustomTemplateRequest;

UpdateCustomTemplateRequest::UpdateCustomTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdateCustomTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCustomTemplateRequest::~UpdateCustomTemplateRequest() {}

long UpdateCustomTemplateRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void UpdateCustomTemplateRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string UpdateCustomTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateCustomTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string UpdateCustomTemplateRequest::getTemplateConfig() const {
  return templateConfig_;
}

void UpdateCustomTemplateRequest::setTemplateConfig(const std::string &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig"), templateConfig);
}

std::string UpdateCustomTemplateRequest::getName() const {
  return name_;
}

void UpdateCustomTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

