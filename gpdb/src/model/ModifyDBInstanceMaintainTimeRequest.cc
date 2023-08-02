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

#include <alibabacloud/gpdb/model/ModifyDBInstanceMaintainTimeRequest.h>

using AlibabaCloud::Gpdb::Model::ModifyDBInstanceMaintainTimeRequest;

ModifyDBInstanceMaintainTimeRequest::ModifyDBInstanceMaintainTimeRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "ModifyDBInstanceMaintainTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceMaintainTimeRequest::~ModifyDBInstanceMaintainTimeRequest() {}

std::string ModifyDBInstanceMaintainTimeRequest::getStartTime() const {
  return startTime_;
}

void ModifyDBInstanceMaintainTimeRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ModifyDBInstanceMaintainTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceMaintainTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceMaintainTimeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDBInstanceMaintainTimeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDBInstanceMaintainTimeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceMaintainTimeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceMaintainTimeRequest::getEndTime() const {
  return endTime_;
}

void ModifyDBInstanceMaintainTimeRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

