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

#include <alibabacloud/rds/model/CreateGadInstanceMemberRequest.h>

using AlibabaCloud::Rds::Model::CreateGadInstanceMemberRequest;

CreateGadInstanceMemberRequest::CreateGadInstanceMemberRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateGadInstanceMember") {
  setMethod(HttpRequest::Method::Post);
}

CreateGadInstanceMemberRequest::~CreateGadInstanceMemberRequest() {}

std::string CreateGadInstanceMemberRequest::getCentralRdsDtsAdminAccount() const {
  return centralRdsDtsAdminAccount_;
}

void CreateGadInstanceMemberRequest::setCentralRdsDtsAdminAccount(const std::string &centralRdsDtsAdminAccount) {
  centralRdsDtsAdminAccount_ = centralRdsDtsAdminAccount;
  setParameter(std::string("CentralRdsDtsAdminAccount"), centralRdsDtsAdminAccount);
}

std::string CreateGadInstanceMemberRequest::getCentralRegionId() const {
  return centralRegionId_;
}

void CreateGadInstanceMemberRequest::setCentralRegionId(const std::string &centralRegionId) {
  centralRegionId_ = centralRegionId;
  setParameter(std::string("CentralRegionId"), centralRegionId);
}

std::string CreateGadInstanceMemberRequest::getRegionId() const {
  return regionId_;
}

void CreateGadInstanceMemberRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateGadInstanceMemberRequest::getGadInstanceId() const {
  return gadInstanceId_;
}

void CreateGadInstanceMemberRequest::setGadInstanceId(const std::string &gadInstanceId) {
  gadInstanceId_ = gadInstanceId;
  setParameter(std::string("GadInstanceId"), gadInstanceId);
}

std::vector<CreateGadInstanceMemberRequest::UnitNode> CreateGadInstanceMemberRequest::getUnitNode() const {
  return unitNode_;
}

void CreateGadInstanceMemberRequest::setUnitNode(const std::vector<CreateGadInstanceMemberRequest::UnitNode> &unitNode) {
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
  }
}

std::string CreateGadInstanceMemberRequest::getDBList() const {
  return dBList_;
}

void CreateGadInstanceMemberRequest::setDBList(const std::string &dBList) {
  dBList_ = dBList;
  setParameter(std::string("DBList"), dBList);
}

std::string CreateGadInstanceMemberRequest::getCentralDBInstanceId() const {
  return centralDBInstanceId_;
}

void CreateGadInstanceMemberRequest::setCentralDBInstanceId(const std::string &centralDBInstanceId) {
  centralDBInstanceId_ = centralDBInstanceId;
  setParameter(std::string("CentralDBInstanceId"), centralDBInstanceId);
}

std::string CreateGadInstanceMemberRequest::getCentralRdsDtsAdminPassword() const {
  return centralRdsDtsAdminPassword_;
}

void CreateGadInstanceMemberRequest::setCentralRdsDtsAdminPassword(const std::string &centralRdsDtsAdminPassword) {
  centralRdsDtsAdminPassword_ = centralRdsDtsAdminPassword;
  setParameter(std::string("CentralRdsDtsAdminPassword"), centralRdsDtsAdminPassword);
}

