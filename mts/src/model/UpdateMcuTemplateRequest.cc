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

#include <alibabacloud/mts/model/UpdateMcuTemplateRequest.h>

using AlibabaCloud::Mts::Model::UpdateMcuTemplateRequest;

UpdateMcuTemplateRequest::UpdateMcuTemplateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UpdateMcuTemplate") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMcuTemplateRequest::~UpdateMcuTemplateRequest() {}

std::string UpdateMcuTemplateRequest::get_Template() const {
  return _template_;
}

void UpdateMcuTemplateRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

long UpdateMcuTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateMcuTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateMcuTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateMcuTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateMcuTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateMcuTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateMcuTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateMcuTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateMcuTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateMcuTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateMcuTemplateRequest::getTemplateId() const {
  return templateId_;
}

void UpdateMcuTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

