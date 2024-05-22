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

#include <alibabacloud/polardbx/model/RestartDBInstanceRequest.h>

using AlibabaCloud::Polardbx::Model::RestartDBInstanceRequest;

RestartDBInstanceRequest::RestartDBInstanceRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "RestartDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

RestartDBInstanceRequest::~RestartDBInstanceRequest() {}

std::string RestartDBInstanceRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void RestartDBInstanceRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string RestartDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void RestartDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

