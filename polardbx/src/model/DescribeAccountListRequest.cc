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

#include <alibabacloud/polardbx/model/DescribeAccountListRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeAccountListRequest;

DescribeAccountListRequest::DescribeAccountListRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeAccountList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccountListRequest::~DescribeAccountListRequest() {}

std::string DescribeAccountListRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeAccountListRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeAccountListRequest::getAccountType() const {
  return accountType_;
}

void DescribeAccountListRequest::setAccountType(const std::string &accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), accountType);
}

std::string DescribeAccountListRequest::getAccountName() const {
  return accountName_;
}

void DescribeAccountListRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string DescribeAccountListRequest::getRegionId() const {
  return regionId_;
}

void DescribeAccountListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

