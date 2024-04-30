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

#include <alibabacloud/rds/model/DetachWhitelistTemplateToInstanceRequest.h>

using AlibabaCloud::Rds::Model::DetachWhitelistTemplateToInstanceRequest;

DetachWhitelistTemplateToInstanceRequest::DetachWhitelistTemplateToInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DetachWhitelistTemplateToInstance") {
  setMethod(HttpRequest::Method::Post);
}

DetachWhitelistTemplateToInstanceRequest::~DetachWhitelistTemplateToInstanceRequest() {}

long DetachWhitelistTemplateToInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DetachWhitelistTemplateToInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DetachWhitelistTemplateToInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachWhitelistTemplateToInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int DetachWhitelistTemplateToInstanceRequest::getTemplateId() const {
  return templateId_;
}

void DetachWhitelistTemplateToInstanceRequest::setTemplateId(int templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string DetachWhitelistTemplateToInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DetachWhitelistTemplateToInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DetachWhitelistTemplateToInstanceRequest::getInsName() const {
  return insName_;
}

void DetachWhitelistTemplateToInstanceRequest::setInsName(const std::string &insName) {
  insName_ = insName;
  setParameter(std::string("InsName"), insName);
}

std::string DetachWhitelistTemplateToInstanceRequest::getRegionId() const {
  return regionId_;
}

void DetachWhitelistTemplateToInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

