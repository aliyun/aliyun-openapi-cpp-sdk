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

#include <alibabacloud/selectdb/model/ModifyDBInstanceAttributeRequest.h>

using AlibabaCloud::Selectdb::Model::ModifyDBInstanceAttributeRequest;

ModifyDBInstanceAttributeRequest::ModifyDBInstanceAttributeRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "ModifyDBInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceAttributeRequest::~ModifyDBInstanceAttributeRequest() {}

long ModifyDBInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceAttributeRequest::getValue() const {
  return value_;
}

void ModifyDBInstanceAttributeRequest::setValue(const std::string &value) {
  value_ = value;
  setParameter(std::string("Value"), value);
}

std::string ModifyDBInstanceAttributeRequest::getInstanceAttributeType() const {
  return instanceAttributeType_;
}

void ModifyDBInstanceAttributeRequest::setInstanceAttributeType(const std::string &instanceAttributeType) {
  instanceAttributeType_ = instanceAttributeType;
  setParameter(std::string("InstanceAttributeType"), instanceAttributeType);
}

