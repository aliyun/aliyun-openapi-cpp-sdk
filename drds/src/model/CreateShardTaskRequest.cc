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

#include <alibabacloud/drds/model/CreateShardTaskRequest.h>

using AlibabaCloud::Drds::Model::CreateShardTaskRequest;

CreateShardTaskRequest::CreateShardTaskRequest()
    : RpcServiceRequest("drds", "2019-01-23", "CreateShardTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateShardTaskRequest::~CreateShardTaskRequest() {}

std::string CreateShardTaskRequest::getTaskType() const {
  return taskType_;
}

void CreateShardTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string CreateShardTaskRequest::getTargetTableName() const {
  return targetTableName_;
}

void CreateShardTaskRequest::setTargetTableName(const std::string &targetTableName) {
  targetTableName_ = targetTableName;
  setParameter(std::string("TargetTableName"), targetTableName);
}

std::string CreateShardTaskRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void CreateShardTaskRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string CreateShardTaskRequest::getDbName() const {
  return dbName_;
}

void CreateShardTaskRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string CreateShardTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateShardTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateShardTaskRequest::getSourceTableName() const {
  return sourceTableName_;
}

void CreateShardTaskRequest::setSourceTableName(const std::string &sourceTableName) {
  sourceTableName_ = sourceTableName;
  setParameter(std::string("SourceTableName"), sourceTableName);
}

