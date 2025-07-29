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

#include <alibabacloud/live/model/CreateCustomTemplateRequest.h>

using AlibabaCloud::Live::Model::CreateCustomTemplateRequest;

CreateCustomTemplateRequest::CreateCustomTemplateRequest()
    : RpcServiceRequest("live", "2016-11-01", "CreateCustomTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomTemplateRequest::~CreateCustomTemplateRequest() {}

std::string CreateCustomTemplateRequest::get_Template() const {
  return _template_;
}

void CreateCustomTemplateRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string CreateCustomTemplateRequest::getRegionId() const {
  return regionId_;
}

void CreateCustomTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCustomTemplateRequest::getCustomTemplate() const {
  return customTemplate_;
}

void CreateCustomTemplateRequest::setCustomTemplate(const std::string &customTemplate) {
  customTemplate_ = customTemplate;
  setParameter(std::string("CustomTemplate"), customTemplate);
}

long CreateCustomTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCustomTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

