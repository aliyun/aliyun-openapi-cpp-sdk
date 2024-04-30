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

#include <alibabacloud/rds/model/DescribeWhitelistTemplateLinkedInstanceRequest.h>

using AlibabaCloud::Rds::Model::DescribeWhitelistTemplateLinkedInstanceRequest;

DescribeWhitelistTemplateLinkedInstanceRequest::DescribeWhitelistTemplateLinkedInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeWhitelistTemplateLinkedInstance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWhitelistTemplateLinkedInstanceRequest::~DescribeWhitelistTemplateLinkedInstanceRequest() {}

long DescribeWhitelistTemplateLinkedInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeWhitelistTemplateLinkedInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeWhitelistTemplateLinkedInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeWhitelistTemplateLinkedInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int DescribeWhitelistTemplateLinkedInstanceRequest::getTemplateId() const {
  return templateId_;
}

void DescribeWhitelistTemplateLinkedInstanceRequest::setTemplateId(int templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), std::to_string(templateId));
}

std::string DescribeWhitelistTemplateLinkedInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeWhitelistTemplateLinkedInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeWhitelistTemplateLinkedInstanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeWhitelistTemplateLinkedInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

