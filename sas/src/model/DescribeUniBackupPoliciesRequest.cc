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

#include <alibabacloud/sas/model/DescribeUniBackupPoliciesRequest.h>

using AlibabaCloud::Sas::Model::DescribeUniBackupPoliciesRequest;

DescribeUniBackupPoliciesRequest::DescribeUniBackupPoliciesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeUniBackupPolicies") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUniBackupPoliciesRequest::~DescribeUniBackupPoliciesRequest() {}

long DescribeUniBackupPoliciesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUniBackupPoliciesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeUniBackupPoliciesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeUniBackupPoliciesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeUniBackupPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUniBackupPoliciesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeUniBackupPoliciesRequest::getLang() const {
  return lang_;
}

void DescribeUniBackupPoliciesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeUniBackupPoliciesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeUniBackupPoliciesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeUniBackupPoliciesRequest::getPolicyName() const {
  return policyName_;
}

void DescribeUniBackupPoliciesRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

