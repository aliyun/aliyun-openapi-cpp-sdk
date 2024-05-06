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

#include <alibabacloud/eflo/model/ListVccGrantRulesRequest.h>

using AlibabaCloud::Eflo::Model::ListVccGrantRulesRequest;

ListVccGrantRulesRequest::ListVccGrantRulesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListVccGrantRules") {
  setMethod(HttpRequest::Method::Post);
}

ListVccGrantRulesRequest::~ListVccGrantRulesRequest() {}

std::string ListVccGrantRulesRequest::getGrantTenantId() const {
  return grantTenantId_;
}

void ListVccGrantRulesRequest::setGrantTenantId(const std::string &grantTenantId) {
  grantTenantId_ = grantTenantId;
  setBodyParameter(std::string("GrantTenantId"), grantTenantId);
}

int ListVccGrantRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListVccGrantRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListVccGrantRulesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVccGrantRulesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVccGrantRulesRequest::getRegionId() const {
  return regionId_;
}

void ListVccGrantRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ListVccGrantRulesRequest::getGrantRuleId() const {
  return grantRuleId_;
}

void ListVccGrantRulesRequest::setGrantRuleId(const std::string &grantRuleId) {
  grantRuleId_ = grantRuleId;
  setBodyParameter(std::string("GrantRuleId"), grantRuleId);
}

int ListVccGrantRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListVccGrantRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListVccGrantRulesRequest::getErId() const {
  return erId_;
}

void ListVccGrantRulesRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

bool ListVccGrantRulesRequest::getForSelect() const {
  return forSelect_;
}

void ListVccGrantRulesRequest::setForSelect(bool forSelect) {
  forSelect_ = forSelect;
  setBodyParameter(std::string("ForSelect"), forSelect ? "true" : "false");
}

std::string ListVccGrantRulesRequest::getInstanceId() const {
  return instanceId_;
}

void ListVccGrantRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ListVccGrantRulesRequest::getInstanceName() const {
  return instanceName_;
}

void ListVccGrantRulesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setBodyParameter(std::string("InstanceName"), instanceName);
}

bool ListVccGrantRulesRequest::getEnablePage() const {
  return enablePage_;
}

void ListVccGrantRulesRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

