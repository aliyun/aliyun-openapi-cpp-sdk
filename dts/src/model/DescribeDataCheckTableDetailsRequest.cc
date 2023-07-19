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

#include <alibabacloud/dts/model/DescribeDataCheckTableDetailsRequest.h>

using AlibabaCloud::Dts::Model::DescribeDataCheckTableDetailsRequest;

DescribeDataCheckTableDetailsRequest::DescribeDataCheckTableDetailsRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeDataCheckTableDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataCheckTableDetailsRequest::~DescribeDataCheckTableDetailsRequest() {}

int DescribeDataCheckTableDetailsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDataCheckTableDetailsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeDataCheckTableDetailsRequest::getCheckType() const {
  return checkType_;
}

void DescribeDataCheckTableDetailsRequest::setCheckType(int checkType) {
  checkType_ = checkType;
  setParameter(std::string("CheckType"), std::to_string(checkType));
}

int DescribeDataCheckTableDetailsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataCheckTableDetailsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataCheckTableDetailsRequest::getDtsJobId() const {
  return dtsJobId_;
}

void DescribeDataCheckTableDetailsRequest::setDtsJobId(const std::string &dtsJobId) {
  dtsJobId_ = dtsJobId;
  setParameter(std::string("DtsJobId"), dtsJobId);
}

std::string DescribeDataCheckTableDetailsRequest::getTableName() const {
  return tableName_;
}

void DescribeDataCheckTableDetailsRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeDataCheckTableDetailsRequest::getStatus() const {
  return status_;
}

void DescribeDataCheckTableDetailsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

