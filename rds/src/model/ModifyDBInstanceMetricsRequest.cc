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

#include <alibabacloud/rds/model/ModifyDBInstanceMetricsRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceMetricsRequest;

ModifyDBInstanceMetricsRequest::ModifyDBInstanceMetricsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceMetrics") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceMetricsRequest::~ModifyDBInstanceMetricsRequest() {}

std::string ModifyDBInstanceMetricsRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifyDBInstanceMetricsRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long ModifyDBInstanceMetricsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceMetricsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceMetricsRequest::getMetricsConfig() const {
  return metricsConfig_;
}

void ModifyDBInstanceMetricsRequest::setMetricsConfig(const std::string &metricsConfig) {
  metricsConfig_ = metricsConfig;
  setParameter(std::string("MetricsConfig"), metricsConfig);
}

std::string ModifyDBInstanceMetricsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceMetricsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceMetricsRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceMetricsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceMetricsRequest::getScope() const {
  return scope_;
}

void ModifyDBInstanceMetricsRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string ModifyDBInstanceMetricsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceMetricsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyDBInstanceMetricsRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceMetricsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

