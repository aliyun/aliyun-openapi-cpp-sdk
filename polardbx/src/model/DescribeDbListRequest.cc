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

#include <alibabacloud/polardbx/model/DescribeDbListRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeDbListRequest;

DescribeDbListRequest::DescribeDbListRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeDbList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDbListRequest::~DescribeDbListRequest() {}

std::string DescribeDbListRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeDbListRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeDbListRequest::getDBName() const {
  return dBName_;
}

void DescribeDbListRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string DescribeDbListRequest::getRegionId() const {
  return regionId_;
}

void DescribeDbListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

