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

#include <alibabacloud/clickhouse/model/ModifyDBClusterConfigInXMLRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyDBClusterConfigInXMLRequest;

ModifyDBClusterConfigInXMLRequest::ModifyDBClusterConfigInXMLRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyDBClusterConfigInXML") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterConfigInXMLRequest::~ModifyDBClusterConfigInXMLRequest() {}

std::string ModifyDBClusterConfigInXMLRequest::getReason() const {
  return reason_;
}

void ModifyDBClusterConfigInXMLRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

std::string ModifyDBClusterConfigInXMLRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterConfigInXMLRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterConfigInXMLRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterConfigInXMLRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBClusterConfigInXMLRequest::getConfig() const {
  return config_;
}

void ModifyDBClusterConfigInXMLRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

