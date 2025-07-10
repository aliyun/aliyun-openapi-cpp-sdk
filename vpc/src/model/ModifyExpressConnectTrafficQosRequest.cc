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

#include <alibabacloud/vpc/model/ModifyExpressConnectTrafficQosRequest.h>

using AlibabaCloud::Vpc::Model::ModifyExpressConnectTrafficQosRequest;

ModifyExpressConnectTrafficQosRequest::ModifyExpressConnectTrafficQosRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyExpressConnectTrafficQos") {
  setMethod(HttpRequest::Method::Post);
}

ModifyExpressConnectTrafficQosRequest::~ModifyExpressConnectTrafficQosRequest() {}

std::string ModifyExpressConnectTrafficQosRequest::getClientToken() const {
  return clientToken_;
}

void ModifyExpressConnectTrafficQosRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList> ModifyExpressConnectTrafficQosRequest::getRemoveInstanceList() const {
  return removeInstanceList_;
}

void ModifyExpressConnectTrafficQosRequest::setRemoveInstanceList(const std::vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList> &removeInstanceList) {
  removeInstanceList_ = removeInstanceList;
  for(int dep1 = 0; dep1 != removeInstanceList.size(); dep1++) {
  auto removeInstanceListObj = removeInstanceList.at(dep1);
  std::string removeInstanceListObjStr = std::string("RemoveInstanceList") + "." + std::to_string(dep1 + 1);
    setParameter(removeInstanceListObjStr + ".InstanceId", removeInstanceListObj.instanceId);
    setParameter(removeInstanceListObjStr + ".InstanceType", removeInstanceListObj.instanceType);
  }
}

std::vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList> ModifyExpressConnectTrafficQosRequest::getAddInstanceList() const {
  return addInstanceList_;
}

void ModifyExpressConnectTrafficQosRequest::setAddInstanceList(const std::vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList> &addInstanceList) {
  addInstanceList_ = addInstanceList;
  for(int dep1 = 0; dep1 != addInstanceList.size(); dep1++) {
  auto addInstanceListObj = addInstanceList.at(dep1);
  std::string addInstanceListObjStr = std::string("AddInstanceList") + "." + std::to_string(dep1 + 1);
    setParameter(addInstanceListObjStr + ".InstanceId", addInstanceListObj.instanceId);
    setParameter(addInstanceListObjStr + ".InstanceType", addInstanceListObj.instanceType);
  }
}

std::string ModifyExpressConnectTrafficQosRequest::getRegionId() const {
  return regionId_;
}

void ModifyExpressConnectTrafficQosRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyExpressConnectTrafficQosRequest::getQosId() const {
  return qosId_;
}

void ModifyExpressConnectTrafficQosRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

std::string ModifyExpressConnectTrafficQosRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyExpressConnectTrafficQosRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyExpressConnectTrafficQosRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyExpressConnectTrafficQosRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyExpressConnectTrafficQosRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyExpressConnectTrafficQosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyExpressConnectTrafficQosRequest::getQosName() const {
  return qosName_;
}

void ModifyExpressConnectTrafficQosRequest::setQosName(const std::string &qosName) {
  qosName_ = qosName;
  setParameter(std::string("QosName"), qosName);
}

std::string ModifyExpressConnectTrafficQosRequest::getQosDescription() const {
  return qosDescription_;
}

void ModifyExpressConnectTrafficQosRequest::setQosDescription(const std::string &qosDescription) {
  qosDescription_ = qosDescription;
  setParameter(std::string("QosDescription"), qosDescription);
}

