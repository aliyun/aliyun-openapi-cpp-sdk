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

#include <alibabacloud/dms-enterprise/model/UpdateAuthorityTemplateRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateAuthorityTemplateRequest;

UpdateAuthorityTemplateRequest::UpdateAuthorityTemplateRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateAuthorityTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAuthorityTemplateRequest::~UpdateAuthorityTemplateRequest() {}

std::string UpdateAuthorityTemplateRequest::getDescription() const {
  return description_;
}

void UpdateAuthorityTemplateRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateAuthorityTemplateRequest::getTid() const {
  return tid_;
}

void UpdateAuthorityTemplateRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long UpdateAuthorityTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateAuthorityTemplateRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string UpdateAuthorityTemplateRequest::getName() const {
  return name_;
}

void UpdateAuthorityTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

