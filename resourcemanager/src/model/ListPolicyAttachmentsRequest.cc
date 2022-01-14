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

#include <alibabacloud/resourcemanager/model/ListPolicyAttachmentsRequest.h>

using AlibabaCloud::ResourceManager::Model::ListPolicyAttachmentsRequest;

ListPolicyAttachmentsRequest::ListPolicyAttachmentsRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListPolicyAttachments") {
  setMethod(HttpRequest::Method::Post);
}

ListPolicyAttachmentsRequest::~ListPolicyAttachmentsRequest() {}

std::string ListPolicyAttachmentsRequest::getLanguage() const {
  return language_;
}

void ListPolicyAttachmentsRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

int ListPolicyAttachmentsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPolicyAttachmentsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListPolicyAttachmentsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListPolicyAttachmentsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int ListPolicyAttachmentsRequest::getPageSize() const {
  return pageSize_;
}

void ListPolicyAttachmentsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPolicyAttachmentsRequest::getPolicyType() const {
  return policyType_;
}

void ListPolicyAttachmentsRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string ListPolicyAttachmentsRequest::getPrincipalType() const {
  return principalType_;
}

void ListPolicyAttachmentsRequest::setPrincipalType(const std::string &principalType) {
  principalType_ = principalType;
  setParameter(std::string("PrincipalType"), principalType);
}

std::string ListPolicyAttachmentsRequest::getPolicyName() const {
  return policyName_;
}

void ListPolicyAttachmentsRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

std::string ListPolicyAttachmentsRequest::getPrincipalName() const {
  return principalName_;
}

void ListPolicyAttachmentsRequest::setPrincipalName(const std::string &principalName) {
  principalName_ = principalName;
  setParameter(std::string("PrincipalName"), principalName);
}

