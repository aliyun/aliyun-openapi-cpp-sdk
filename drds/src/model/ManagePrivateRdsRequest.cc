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

#include <alibabacloud/drds/model/ManagePrivateRdsRequest.h>

using AlibabaCloud::Drds::Model::ManagePrivateRdsRequest;

ManagePrivateRdsRequest::ManagePrivateRdsRequest()
    : RpcServiceRequest("drds", "2019-01-23", "ManagePrivateRds") {
  setMethod(HttpRequest::Method::Post);
}

ManagePrivateRdsRequest::~ManagePrivateRdsRequest() {}

std::string ManagePrivateRdsRequest::getParams() const {
  return params_;
}

void ManagePrivateRdsRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string ManagePrivateRdsRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void ManagePrivateRdsRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string ManagePrivateRdsRequest::getRegionId() const {
  return regionId_;
}

void ManagePrivateRdsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ManagePrivateRdsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ManagePrivateRdsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ManagePrivateRdsRequest::getRdsAction() const {
  return rdsAction_;
}

void ManagePrivateRdsRequest::setRdsAction(const std::string &rdsAction) {
  rdsAction_ = rdsAction;
  setParameter(std::string("RdsAction"), rdsAction);
}

