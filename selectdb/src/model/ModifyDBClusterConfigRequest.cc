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

#include <alibabacloud/selectdb/model/ModifyDBClusterConfigRequest.h>

using AlibabaCloud::Selectdb::Model::ModifyDBClusterConfigRequest;

ModifyDBClusterConfigRequest::ModifyDBClusterConfigRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "ModifyDBClusterConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterConfigRequest::~ModifyDBClusterConfigRequest() {}

std::string ModifyDBClusterConfigRequest::getConfigKey() const {
  return configKey_;
}

void ModifyDBClusterConfigRequest::setConfigKey(const std::string &configKey) {
  configKey_ = configKey;
  setParameter(std::string("ConfigKey"), configKey);
}

std::string ModifyDBClusterConfigRequest::getSwitchTimeMode() const {
  return switchTimeMode_;
}

void ModifyDBClusterConfigRequest::setSwitchTimeMode(const std::string &switchTimeMode) {
  switchTimeMode_ = switchTimeMode;
  setParameter(std::string("SwitchTimeMode"), switchTimeMode);
}

std::string ModifyDBClusterConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBClusterConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBClusterConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBClusterConfigRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterConfigRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterConfigRequest::getParameters() const {
  return parameters_;
}

void ModifyDBClusterConfigRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

