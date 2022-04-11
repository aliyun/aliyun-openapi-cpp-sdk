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

#include <alibabacloud/vod/model/AddAITemplateRequest.h>

using AlibabaCloud::Vod::Model::AddAITemplateRequest;

AddAITemplateRequest::AddAITemplateRequest()
    : RpcServiceRequest("vod", "2017-03-21", "AddAITemplate") {
  setMethod(HttpRequest::Method::Post);
}

AddAITemplateRequest::~AddAITemplateRequest() {}

std::string AddAITemplateRequest::getTemplateConfig() const {
  return templateConfig_;
}

void AddAITemplateRequest::setTemplateConfig(const std::string &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig"), templateConfig);
}

std::string AddAITemplateRequest::getTemplateType() const {
  return templateType_;
}

void AddAITemplateRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

std::string AddAITemplateRequest::getTemplateName() const {
  return templateName_;
}

void AddAITemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

