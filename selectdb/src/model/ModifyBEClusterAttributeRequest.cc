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

#include <alibabacloud/selectdb/model/ModifyBEClusterAttributeRequest.h>

using AlibabaCloud::Selectdb::Model::ModifyBEClusterAttributeRequest;

ModifyBEClusterAttributeRequest::ModifyBEClusterAttributeRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "ModifyBEClusterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBEClusterAttributeRequest::~ModifyBEClusterAttributeRequest() {}

long ModifyBEClusterAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyBEClusterAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyBEClusterAttributeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyBEClusterAttributeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyBEClusterAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyBEClusterAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyBEClusterAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyBEClusterAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyBEClusterAttributeRequest::getValue() const {
  return value_;
}

void ModifyBEClusterAttributeRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string ModifyBEClusterAttributeRequest::getInstanceAttributeType() const {
  return instanceAttributeType_;
}

void ModifyBEClusterAttributeRequest::setInstanceAttributeType(const std::string &instanceAttributeType) {
  instanceAttributeType_ = instanceAttributeType;
  setParameter(std::string("InstanceAttributeType"), instanceAttributeType);
}

