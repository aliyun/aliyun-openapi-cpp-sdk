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

#include <alibabacloud/sas/model/DescribeAttackAnalysisDataRequest.h>

using AlibabaCloud::Sas::Model::DescribeAttackAnalysisDataRequest;

DescribeAttackAnalysisDataRequest::DescribeAttackAnalysisDataRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeAttackAnalysisData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAttackAnalysisDataRequest::~DescribeAttackAnalysisDataRequest() {}

std::string DescribeAttackAnalysisDataRequest::getData() const {
  return data_;
}

void DescribeAttackAnalysisDataRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string DescribeAttackAnalysisDataRequest::getBase64() const {
  return base64_;
}

void DescribeAttackAnalysisDataRequest::setBase64(const std::string &base64) {
  base64_ = base64;
  setParameter(std::string("Base64"), base64);
}

long DescribeAttackAnalysisDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeAttackAnalysisDataRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string DescribeAttackAnalysisDataRequest::getType() const {
  return type_;
}

void DescribeAttackAnalysisDataRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DescribeAttackAnalysisDataRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAttackAnalysisDataRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeAttackAnalysisDataRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAttackAnalysisDataRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAttackAnalysisDataRequest::getLang() const {
  return lang_;
}

void DescribeAttackAnalysisDataRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

long DescribeAttackAnalysisDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeAttackAnalysisDataRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int DescribeAttackAnalysisDataRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeAttackAnalysisDataRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

