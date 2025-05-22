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

#include <alibabacloud/rds/model/ModifyDBInstanceReplicationSwitchRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceReplicationSwitchRequest;

ModifyDBInstanceReplicationSwitchRequest::ModifyDBInstanceReplicationSwitchRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceReplicationSwitch") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceReplicationSwitchRequest::~ModifyDBInstanceReplicationSwitchRequest() {}

long ModifyDBInstanceReplicationSwitchRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceReplicationSwitchRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceReplicationSwitchRequest::getExternalReplication() const {
  return externalReplication_;
}

void ModifyDBInstanceReplicationSwitchRequest::setExternalReplication(const std::string &externalReplication) {
  externalReplication_ = externalReplication;
  setParameter(std::string("ExternalReplication"), externalReplication);
}

std::string ModifyDBInstanceReplicationSwitchRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDBInstanceReplicationSwitchRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyDBInstanceReplicationSwitchRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBInstanceReplicationSwitchRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBInstanceReplicationSwitchRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceReplicationSwitchRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

