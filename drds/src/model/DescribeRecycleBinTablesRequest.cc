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

#include <alibabacloud/drds/model/DescribeRecycleBinTablesRequest.h>

using AlibabaCloud::Drds::Model::DescribeRecycleBinTablesRequest;

DescribeRecycleBinTablesRequest::DescribeRecycleBinTablesRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeRecycleBinTables") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecycleBinTablesRequest::~DescribeRecycleBinTablesRequest() {}

std::string DescribeRecycleBinTablesRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeRecycleBinTablesRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeRecycleBinTablesRequest::getDbName() const {
  return dbName_;
}

void DescribeRecycleBinTablesRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string DescribeRecycleBinTablesRequest::getRegionId() const {
  return regionId_;
}

void DescribeRecycleBinTablesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

