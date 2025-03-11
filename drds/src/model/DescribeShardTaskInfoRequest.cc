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

#include <alibabacloud/drds/model/DescribeShardTaskInfoRequest.h>

using AlibabaCloud::Drds::Model::DescribeShardTaskInfoRequest;

DescribeShardTaskInfoRequest::DescribeShardTaskInfoRequest()
    : RpcServiceRequest("drds", "2019-01-23", "DescribeShardTaskInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeShardTaskInfoRequest::~DescribeShardTaskInfoRequest() {}

std::string DescribeShardTaskInfoRequest::getTargetTableName() const {
  return targetTableName_;
}

void DescribeShardTaskInfoRequest::setTargetTableName(const std::string &targetTableName) {
  targetTableName_ = targetTableName;
  setParameter(std::string("TargetTableName"), targetTableName);
}

std::string DescribeShardTaskInfoRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void DescribeShardTaskInfoRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string DescribeShardTaskInfoRequest::getDbName() const {
  return dbName_;
}

void DescribeShardTaskInfoRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string DescribeShardTaskInfoRequest::getRegionId() const {
  return regionId_;
}

void DescribeShardTaskInfoRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeShardTaskInfoRequest::getSourceTableName() const {
  return sourceTableName_;
}

void DescribeShardTaskInfoRequest::setSourceTableName(const std::string &sourceTableName) {
  sourceTableName_ = sourceTableName;
  setParameter(std::string("SourceTableName"), sourceTableName);
}

