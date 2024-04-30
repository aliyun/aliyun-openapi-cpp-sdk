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

#include <alibabacloud/rds/model/AttachWhitelistTemplateToInstanceRequest.h>

using AlibabaCloud::Rds::Model::AttachWhitelistTemplateToInstanceRequest;

AttachWhitelistTemplateToInstanceRequest::AttachWhitelistTemplateToInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "AttachWhitelistTemplateToInstance") {
  setMethod(HttpRequest::Method::Post);
}

AttachWhitelistTemplateToInstanceRequest::~AttachWhitelistTemplateToInstanceRequest() {}

long AttachWhitelistTemplateToInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AttachWhitelistTemplateToInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AttachWhitelistTemplateToInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachWhitelistTemplateToInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int AttachWhitelistTemplateToInstanceRequest::getTemplateId() const {
  return templateId_;
}

void AttachWhitelistTemplateToInstanceRequest::setTemplateId(int templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string AttachWhitelistTemplateToInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void AttachWhitelistTemplateToInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string AttachWhitelistTemplateToInstanceRequest::getInsName() const {
  return insName_;
}

void AttachWhitelistTemplateToInstanceRequest::setInsName(const std::string &insName) {
  insName_ = insName;
  setParameter(std::string("InsName"), insName);
}

std::string AttachWhitelistTemplateToInstanceRequest::getRegionId() const {
  return regionId_;
}

void AttachWhitelistTemplateToInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

