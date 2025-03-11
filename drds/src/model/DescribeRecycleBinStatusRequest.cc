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

#include <alibabacloud/drds/model/DescribeRecycleBinStatusRequest.h>

using AlibabaCloud::Drds::Model::DescribeRecycleBinStatusRequest;

DescribeRecycleBinStatusRequest::DescribeRecycleBinStatusRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeRecycleBinStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRecycleBinStatusRequest::~DescribeRecycleBinStatusRequest() {}

std::string DescribeRecycleBinStatusRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeRecycleBinStatusRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeRecycleBinStatusRequest::getDbName() const {
  return dbName_;
}

void DescribeRecycleBinStatusRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string DescribeRecycleBinStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeRecycleBinStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

