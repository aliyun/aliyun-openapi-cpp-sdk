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

#include <alibabacloud/ice/model/GetCustomTemplateRequest.h>

using AlibabaCloud::ICE::Model::GetCustomTemplateRequest;

GetCustomTemplateRequest::GetCustomTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetCustomTemplate") {
  setMethod(HttpRequest::Method::Post);
}

GetCustomTemplateRequest::~GetCustomTemplateRequest() {}

long GetCustomTemplateRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void GetCustomTemplateRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

int GetCustomTemplateRequest::getType() const {
  return type_;
}

void GetCustomTemplateRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

int GetCustomTemplateRequest::getSubtype() const {
  return subtype_;
}

void GetCustomTemplateRequest::setSubtype(int subtype) {
  subtype_ = subtype;
  setParameter(std::string("Subtype"), std::to_string(subtype));
}

std::string GetCustomTemplateRequest::getTemplateId() const {
  return templateId_;
}

void GetCustomTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string GetCustomTemplateRequest::getAppId() const {
  return appId_;
}

void GetCustomTemplateRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

