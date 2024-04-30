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

#include <alibabacloud/rds/model/ModifyWhitelistTemplateRequest.h>

using AlibabaCloud::Rds::Model::ModifyWhitelistTemplateRequest;

ModifyWhitelistTemplateRequest::ModifyWhitelistTemplateRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyWhitelistTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWhitelistTemplateRequest::~ModifyWhitelistTemplateRequest() {}

long ModifyWhitelistTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyWhitelistTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyWhitelistTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyWhitelistTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifyWhitelistTemplateRequest::getTemplateId() const {
  return templateId_;
}

void ModifyWhitelistTemplateRequest::setTemplateId(int templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string ModifyWhitelistTemplateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyWhitelistTemplateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyWhitelistTemplateRequest::getRegionId() const {
  return regionId_;
}

void ModifyWhitelistTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyWhitelistTemplateRequest::getTemplateName() const {
  return templateName_;
}

void ModifyWhitelistTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

std::string ModifyWhitelistTemplateRequest::getIpWhitelist() const {
  return ipWhitelist_;
}

void ModifyWhitelistTemplateRequest::setIpWhitelist(const std::string &ipWhitelist) {
  ipWhitelist_ = ipWhitelist;
  setParameter(std::string("IpWhitelist"), ipWhitelist);
}

