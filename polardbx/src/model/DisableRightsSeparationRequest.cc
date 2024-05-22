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

#include <alibabacloud/polardbx/model/DisableRightsSeparationRequest.h>

using AlibabaCloud::Polardbx::Model::DisableRightsSeparationRequest;

DisableRightsSeparationRequest::DisableRightsSeparationRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DisableRightsSeparation") {
  setMethod(HttpRequest::Method::Post);
}

DisableRightsSeparationRequest::~DisableRightsSeparationRequest() {}

std::string DisableRightsSeparationRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DisableRightsSeparationRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DisableRightsSeparationRequest::getDbaAccountPassword() const {
  return dbaAccountPassword_;
}

void DisableRightsSeparationRequest::setDbaAccountPassword(const std::string &dbaAccountPassword) {
  dbaAccountPassword_ = dbaAccountPassword;
  setParameter(std::string("DbaAccountPassword"), dbaAccountPassword);
}

std::string DisableRightsSeparationRequest::getDbaAccountName() const {
  return dbaAccountName_;
}

void DisableRightsSeparationRequest::setDbaAccountName(const std::string &dbaAccountName) {
  dbaAccountName_ = dbaAccountName;
  setParameter(std::string("DbaAccountName"), dbaAccountName);
}

std::string DisableRightsSeparationRequest::getRegionId() const {
  return regionId_;
}

void DisableRightsSeparationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

