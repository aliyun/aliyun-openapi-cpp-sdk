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

#include <alibabacloud/drds/model/SetupRecycleBinStatusRequest.h>

using AlibabaCloud::Drds::Model::SetupRecycleBinStatusRequest;

SetupRecycleBinStatusRequest::SetupRecycleBinStatusRequest()
    : RpcServiceRequest("drds", "2019-01-23", "SetupRecycleBinStatus") {
  setMethod(HttpRequest::Method::Post);
}

SetupRecycleBinStatusRequest::~SetupRecycleBinStatusRequest() {}

std::string SetupRecycleBinStatusRequest::getStatusAction() const {
  return statusAction_;
}

void SetupRecycleBinStatusRequest::setStatusAction(const std::string &statusAction) {
  statusAction_ = statusAction;
  setParameter(std::string("StatusAction"), statusAction);
}

std::string SetupRecycleBinStatusRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void SetupRecycleBinStatusRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string SetupRecycleBinStatusRequest::getDbName() const {
  return dbName_;
}

void SetupRecycleBinStatusRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string SetupRecycleBinStatusRequest::getRegionId() const {
  return regionId_;
}

void SetupRecycleBinStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

