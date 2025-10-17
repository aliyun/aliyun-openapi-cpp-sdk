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

#include <alibabacloud/polardb/model/ModifyDBClusterArchRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterArchRequest;

ModifyDBClusterArchRequest::ModifyDBClusterArchRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterArch") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterArchRequest::~ModifyDBClusterArchRequest() {}

std::string ModifyDBClusterArchRequest::getStandbyAZ() const {
  return standbyAZ_;
}

void ModifyDBClusterArchRequest::setStandbyAZ(const std::string &standbyAZ) {
  standbyAZ_ = standbyAZ;
  setParameter(std::string("StandbyAZ"), standbyAZ);
}

std::string ModifyDBClusterArchRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterArchRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBClusterArchRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterArchRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterArchRequest::getHotStandbyCluster() const {
  return hotStandbyCluster_;
}

void ModifyDBClusterArchRequest::setHotStandbyCluster(const std::string &hotStandbyCluster) {
  hotStandbyCluster_ = hotStandbyCluster;
  setParameter(std::string("HotStandbyCluster"), hotStandbyCluster);
}

