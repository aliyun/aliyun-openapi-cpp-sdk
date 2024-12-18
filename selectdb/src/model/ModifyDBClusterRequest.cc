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

#include <alibabacloud/selectdb/model/ModifyDBClusterRequest.h>

using AlibabaCloud::Selectdb::Model::ModifyDBClusterRequest;

ModifyDBClusterRequest::ModifyDBClusterRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "ModifyDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterRequest::~ModifyDBClusterRequest() {}

long ModifyDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterRequest::getDBClusterClass() const {
  return dBClusterClass_;
}

void ModifyDBClusterRequest::setDBClusterClass(const std::string &dBClusterClass) {
  dBClusterClass_ = dBClusterClass;
  setParameter(std::string("DBClusterClass"), dBClusterClass);
}

std::string ModifyDBClusterRequest::getCacheSize() const {
  return cacheSize_;
}

void ModifyDBClusterRequest::setCacheSize(const std::string &cacheSize) {
  cacheSize_ = cacheSize;
  setParameter(std::string("CacheSize"), cacheSize);
}

std::string ModifyDBClusterRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBClusterRequest::getEngine() const {
  return engine_;
}

void ModifyDBClusterRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string ModifyDBClusterRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBClusterRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

