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

#include <alibabacloud/ice/model/CreateCustomTemplateRequest.h>

using AlibabaCloud::ICE::Model::CreateCustomTemplateRequest;

CreateCustomTemplateRequest::CreateCustomTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateCustomTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomTemplateRequest::~CreateCustomTemplateRequest() {}

long CreateCustomTemplateRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void CreateCustomTemplateRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

int CreateCustomTemplateRequest::getType() const {
  return type_;
}

void CreateCustomTemplateRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

int CreateCustomTemplateRequest::getSubtype() const {
  return subtype_;
}

void CreateCustomTemplateRequest::setSubtype(int subtype) {
  subtype_ = subtype;
  setParameter(std::string("Subtype"), std::to_string(subtype));
}

std::string CreateCustomTemplateRequest::getTemplateConfig() const {
  return templateConfig_;
}

void CreateCustomTemplateRequest::setTemplateConfig(const std::string &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig"), templateConfig);
}

std::string CreateCustomTemplateRequest::getAppId() const {
  return appId_;
}

void CreateCustomTemplateRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string CreateCustomTemplateRequest::getName() const {
  return name_;
}

void CreateCustomTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

