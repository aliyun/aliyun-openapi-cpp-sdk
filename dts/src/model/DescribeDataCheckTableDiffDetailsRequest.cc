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

#include <alibabacloud/dts/model/DescribeDataCheckTableDiffDetailsRequest.h>

using AlibabaCloud::Dts::Model::DescribeDataCheckTableDiffDetailsRequest;

DescribeDataCheckTableDiffDetailsRequest::DescribeDataCheckTableDiffDetailsRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDataCheckTableDiffDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataCheckTableDiffDetailsRequest::~DescribeDataCheckTableDiffDetailsRequest() {}

long DescribeDataCheckTableDiffDetailsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDataCheckTableDiffDetailsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeDataCheckTableDiffDetailsRequest::getCheckType() const {
  return checkType_;
}

void DescribeDataCheckTableDiffDetailsRequest::setCheckType(int checkType) {
  checkType_ = checkType;
  setParameter(std::string("CheckType"), std::to_string(checkType));
}

long DescribeDataCheckTableDiffDetailsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataCheckTableDiffDetailsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataCheckTableDiffDetailsRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeDataCheckTableDiffDetailsRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeDataCheckTableDiffDetailsRequest::getTbName() const {
  return tbName_;
}

void DescribeDataCheckTableDiffDetailsRequest::setTbName(const std::string &tbName) {
  tbName_ = tbName;
  setParameter(std::string("TbName"), tbName);
}

std::string DescribeDataCheckTableDiffDetailsRequest::getDbName() const {
  return dbName_;
}

void DescribeDataCheckTableDiffDetailsRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

