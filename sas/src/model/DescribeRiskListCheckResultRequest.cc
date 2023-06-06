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

#include <alibabacloud/sas/model/DescribeRiskListCheckResultRequest.h>

using AlibabaCloud::Sas::Model::DescribeRiskListCheckResultRequest;

DescribeRiskListCheckResultRequest::DescribeRiskListCheckResultRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeRiskListCheckResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRiskListCheckResultRequest::~DescribeRiskListCheckResultRequest() {}

long DescribeRiskListCheckResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRiskListCheckResultRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRiskListCheckResultRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeRiskListCheckResultRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeRiskListCheckResultRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRiskListCheckResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRiskListCheckResultRequest::getLang() const {
  return lang_;
}

void DescribeRiskListCheckResultRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

int DescribeRiskListCheckResultRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeRiskListCheckResultRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<std::string> DescribeRiskListCheckResultRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeRiskListCheckResultRequest::setInstanceIds(const std::vector<std::string> &instanceIds) {
  instanceIds_ = instanceIds;
}

