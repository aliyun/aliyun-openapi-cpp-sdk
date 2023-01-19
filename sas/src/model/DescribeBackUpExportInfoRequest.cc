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

#include <alibabacloud/sas/model/DescribeBackUpExportInfoRequest.h>

using AlibabaCloud::Sas::Model::DescribeBackUpExportInfoRequest;

DescribeBackUpExportInfoRequest::DescribeBackUpExportInfoRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeBackUpExportInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackUpExportInfoRequest::~DescribeBackUpExportInfoRequest() {}

std::string DescribeBackUpExportInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeBackUpExportInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeBackUpExportInfoRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackUpExportInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBackUpExportInfoRequest::getLang() const {
  return lang_;
}

void DescribeBackUpExportInfoRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeBackUpExportInfoRequest::getExportType() const {
  return exportType_;
}

void DescribeBackUpExportInfoRequest::setExportType(const std::string &exportType) {
  exportType_ = exportType;
  setParameter(std::string("ExportType"), exportType);
}

int DescribeBackUpExportInfoRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeBackUpExportInfoRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

