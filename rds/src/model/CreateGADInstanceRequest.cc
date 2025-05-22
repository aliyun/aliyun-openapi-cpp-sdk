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

#include <alibabacloud/rds/model/CreateGADInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateGADInstanceRequest;

CreateGADInstanceRequest::CreateGADInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateGADInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateGADInstanceRequest::~CreateGADInstanceRequest() {}

std::string CreateGADInstanceRequest::getDescription() const {
  return description_;
}

void CreateGADInstanceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateGADInstanceRequest::getCentralRdsDtsAdminAccount() const {
  return centralRdsDtsAdminAccount_;
}

void CreateGADInstanceRequest::setCentralRdsDtsAdminAccount(const std::string &centralRdsDtsAdminAccount) {
  centralRdsDtsAdminAccount_ = centralRdsDtsAdminAccount;
  setParameter(std::string("CentralRdsDtsAdminAccount"), centralRdsDtsAdminAccount);
}

std::string CreateGADInstanceRequest::getCentralRegionId() const {
  return centralRegionId_;
}

void CreateGADInstanceRequest::setCentralRegionId(const std::string &centralRegionId) {
  centralRegionId_ = centralRegionId;
  setParameter(std::string("CentralRegionId"), centralRegionId);
}

std::string CreateGADInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateGADInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateGADInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateGADInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateGADInstanceRequest::Tag> CreateGADInstanceRequest::getTag() const {
  return tag_;
}

void CreateGADInstanceRequest::setTag(const std::vector<CreateGADInstanceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<CreateGADInstanceRequest::UnitNode> CreateGADInstanceRequest::getUnitNode() const {
  return unitNode_;
}

void CreateGADInstanceRequest::setUnitNode(const std::vector<CreateGADInstanceRequest::UnitNode> &unitNode) {
  unitNode_ = unitNode;
  for(int dep1 = 0; dep1 != unitNode.size(); dep1++) {
  auto unitNodeObj = unitNode.at(dep1);
  std::string unitNodeObjStr = std::string("UnitNode") + "." + std::to_string(dep1 + 1);
    setParameter(unitNodeObjStr + ".DBInstanceStorage", std::to_string(unitNodeObj.dBInstanceStorage));
    setParameter(unitNodeObjStr + ".ZoneIDSlave1", unitNodeObj.zoneIDSlave1);
    setParameter(unitNodeObjStr + ".ZoneIDSlave2", unitNodeObj.zoneIDSlave2);
    setParameter(unitNodeObjStr + ".EngineVersion", unitNodeObj.engineVersion);
    setParameter(unitNodeObjStr + ".DbInstanceClass", unitNodeObj.dbInstanceClass);
    setParameter(unitNodeObjStr + ".SecurityIPList", unitNodeObj.securityIPList);
    setParameter(unitNodeObjStr + ".VSwitchID", unitNodeObj.vSwitchID);
    setParameter(unitNodeObjStr + ".Engine", unitNodeObj.engine);
    setParameter(unitNodeObjStr + ".RegionID", unitNodeObj.regionID);
    setParameter(unitNodeObjStr + ".DtsInstanceClass", unitNodeObj.dtsInstanceClass);
    setParameter(unitNodeObjStr + ".VpcID", unitNodeObj.vpcID);
    setParameter(unitNodeObjStr + ".ZoneID", unitNodeObj.zoneID);
    setParameter(unitNodeObjStr + ".DBInstanceDescription", unitNodeObj.dBInstanceDescription);
    setParameter(unitNodeObjStr + ".DBInstanceStorageType", unitNodeObj.dBInstanceStorageType);
    setParameter(unitNodeObjStr + ".DtsConflict", unitNodeObj.dtsConflict);
    setParameter(unitNodeObjStr + ".PayType", unitNodeObj.payType);
  }
}

std::string CreateGADInstanceRequest::getDBList() const {
  return dBList_;
}

void CreateGADInstanceRequest::setDBList(const std::string &dBList) {
  dBList_ = dBList;
  setParameter(std::string("DBList"), dBList);
}

std::string CreateGADInstanceRequest::getCentralDBInstanceId() const {
  return centralDBInstanceId_;
}

void CreateGADInstanceRequest::setCentralDBInstanceId(const std::string &centralDBInstanceId) {
  centralDBInstanceId_ = centralDBInstanceId;
  setParameter(std::string("CentralDBInstanceId"), centralDBInstanceId);
}

std::string CreateGADInstanceRequest::getCentralRdsDtsAdminPassword() const {
  return centralRdsDtsAdminPassword_;
}

void CreateGADInstanceRequest::setCentralRdsDtsAdminPassword(const std::string &centralRdsDtsAdminPassword) {
  centralRdsDtsAdminPassword_ = centralRdsDtsAdminPassword;
  setParameter(std::string("CentralRdsDtsAdminPassword"), centralRdsDtsAdminPassword);
}

