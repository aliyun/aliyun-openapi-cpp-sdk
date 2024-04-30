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

#include <alibabacloud/rds/model/DescribeAllWhitelistTemplateRequest.h>

using AlibabaCloud::Rds::Model::DescribeAllWhitelistTemplateRequest;

DescribeAllWhitelistTemplateRequest::DescribeAllWhitelistTemplateRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeAllWhitelistTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAllWhitelistTemplateRequest::~DescribeAllWhitelistTemplateRequest() {}

long DescribeAllWhitelistTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAllWhitelistTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAllWhitelistTemplateRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeAllWhitelistTemplateRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeAllWhitelistTemplateRequest::getRegionId() const {
  return regionId_;
}

void DescribeAllWhitelistTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAllWhitelistTemplateRequest::getPageNumbers() const {
  return pageNumbers_;
}

void DescribeAllWhitelistTemplateRequest::setPageNumbers(int pageNumbers) {
  pageNumbers_ = pageNumbers;
  setParameter(std::string("PageNumbers"), std::to_string(pageNumbers));
}

std::string DescribeAllWhitelistTemplateRequest::getTemplateName() const {
  return templateName_;
}

void DescribeAllWhitelistTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

bool DescribeAllWhitelistTemplateRequest::getFuzzySearch() const {
  return fuzzySearch_;
}

void DescribeAllWhitelistTemplateRequest::setFuzzySearch(bool fuzzySearch) {
  fuzzySearch_ = fuzzySearch;
  setParameter(std::string("FuzzySearch"), fuzzySearch ? "true" : "false");
}

std::string DescribeAllWhitelistTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAllWhitelistTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int DescribeAllWhitelistTemplateRequest::getMaxRecordsPerPage() const {
  return maxRecordsPerPage_;
}

void DescribeAllWhitelistTemplateRequest::setMaxRecordsPerPage(int maxRecordsPerPage) {
  maxRecordsPerPage_ = maxRecordsPerPage;
  setParameter(std::string("MaxRecordsPerPage"), std::to_string(maxRecordsPerPage));
}

