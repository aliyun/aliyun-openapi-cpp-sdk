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

#include <alibabacloud/eflo/model/ListVpdGrantRulesRequest.h>

using AlibabaCloud::Eflo::Model::ListVpdGrantRulesRequest;

ListVpdGrantRulesRequest::ListVpdGrantRulesRequest()
    : RpcServiceRequest("eflo", "2022-05-30", "ListVpdGrantRules") {
  setMethod(HttpRequest::Method::Post);
}

ListVpdGrantRulesRequest::~ListVpdGrantRulesRequest() {}

std::string ListVpdGrantRulesRequest::getGrantTenantId() const {
  return grantTenantId_;
}

void ListVpdGrantRulesRequest::setGrantTenantId(const std::string &grantTenantId) {
  grantTenantId_ = grantTenantId;
  setBodyParameter(std::string("GrantTenantId"), grantTenantId);
}

int ListVpdGrantRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListVpdGrantRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListVpdGrantRulesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListVpdGrantRulesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListVpdGrantRulesRequest::getRegionId() const {
  return regionId_;
}

void ListVpdGrantRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string ListVpdGrantRulesRequest::getGrantRuleId() const {
  return grantRuleId_;
}

void ListVpdGrantRulesRequest::setGrantRuleId(const std::string &grantRuleId) {
  grantRuleId_ = grantRuleId;
  setBodyParameter(std::string("GrantRuleId"), grantRuleId);
}

int ListVpdGrantRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListVpdGrantRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListVpdGrantRulesRequest::getErId() const {
  return erId_;
}

void ListVpdGrantRulesRequest::setErId(const std::string &erId) {
  erId_ = erId;
  setBodyParameter(std::string("ErId"), erId);
}

bool ListVpdGrantRulesRequest::getForSelect() const {
  return forSelect_;
}

void ListVpdGrantRulesRequest::setForSelect(bool forSelect) {
  forSelect_ = forSelect;
  setBodyParameter(std::string("ForSelect"), forSelect ? "true" : "false");
}

std::string ListVpdGrantRulesRequest::getInstanceId() const {
  return instanceId_;
}

void ListVpdGrantRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ListVpdGrantRulesRequest::getInstanceName() const {
  return instanceName_;
}

void ListVpdGrantRulesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setBodyParameter(std::string("InstanceName"), instanceName);
}

bool ListVpdGrantRulesRequest::getEnablePage() const {
  return enablePage_;
}

void ListVpdGrantRulesRequest::setEnablePage(bool enablePage) {
  enablePage_ = enablePage;
  setBodyParameter(std::string("EnablePage"), enablePage ? "true" : "false");
}

