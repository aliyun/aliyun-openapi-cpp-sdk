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

#include <alibabacloud/mts/model/CreateMcuTemplateRequest.h>

using AlibabaCloud::Mts::Model::CreateMcuTemplateRequest;

CreateMcuTemplateRequest::CreateMcuTemplateRequest()
    : RpcServiceRequest("mts", "2014-06-18", "CreateMcuTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateMcuTemplateRequest::~CreateMcuTemplateRequest() {}

std::string CreateMcuTemplateRequest::get_Template() const {
  return _template_;
}

void CreateMcuTemplateRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

long CreateMcuTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateMcuTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateMcuTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateMcuTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateMcuTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateMcuTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateMcuTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void CreateMcuTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateMcuTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateMcuTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

