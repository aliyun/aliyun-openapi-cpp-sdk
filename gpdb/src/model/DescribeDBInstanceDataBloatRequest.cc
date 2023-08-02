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

#include <alibabacloud/gpdb/model/DescribeDBInstanceDataBloatRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstanceDataBloatRequest;

DescribeDBInstanceDataBloatRequest::DescribeDBInstanceDataBloatRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstanceDataBloat") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceDataBloatRequest::~DescribeDBInstanceDataBloatRequest() {}

int DescribeDBInstanceDataBloatRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstanceDataBloatRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstanceDataBloatRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceDataBloatRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeDBInstanceDataBloatRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstanceDataBloatRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstanceDataBloatRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceDataBloatRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

