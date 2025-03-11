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

#include <alibabacloud/drds/model/DescribeDbInstanceDbsRequest.h>

using AlibabaCloud::Drds::Model::DescribeDbInstanceDbsRequest;

DescribeDbInstanceDbsRequest::DescribeDbInstanceDbsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeDbInstanceDbs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDbInstanceDbsRequest::~DescribeDbInstanceDbsRequest() {}

std::string DescribeDbInstanceDbsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeDbInstanceDbsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeDbInstanceDbsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDbInstanceDbsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDbInstanceDbsRequest::getPassword() const {
  return password_;
}

void DescribeDbInstanceDbsRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string DescribeDbInstanceDbsRequest::getAccountName() const {
  return accountName_;
}

void DescribeDbInstanceDbsRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string DescribeDbInstanceDbsRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void DescribeDbInstanceDbsRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

std::string DescribeDbInstanceDbsRequest::getDbInstType() const {
  return dbInstType_;
}

void DescribeDbInstanceDbsRequest::setDbInstType(const std::string &dbInstType) {
  dbInstType_ = dbInstType;
  setParameter(std::string("DbInstType"), dbInstType);
}

