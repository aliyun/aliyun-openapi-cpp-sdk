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

#include <alibabacloud/polardb/model/ModifyDBClusterAndNodesParametersRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterAndNodesParametersRequest;

ModifyDBClusterAndNodesParametersRequest::ModifyDBClusterAndNodesParametersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterAndNodesParameters") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterAndNodesParametersRequest::~ModifyDBClusterAndNodesParametersRequest() {}

long ModifyDBClusterAndNodesParametersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterAndNodesParametersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterAndNodesParametersRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBClusterAndNodesParametersRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBClusterAndNodesParametersRequest::getDBNodeIds() const {
  return dBNodeIds_;
}

void ModifyDBClusterAndNodesParametersRequest::setDBNodeIds(const std::string &dBNodeIds) {
  dBNodeIds_ = dBNodeIds;
  setParameter(std::string("DBNodeIds"), dBNodeIds);
}

std::string ModifyDBClusterAndNodesParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterAndNodesParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool ModifyDBClusterAndNodesParametersRequest::getClearBinlog() const {
  return clearBinlog_;
}

void ModifyDBClusterAndNodesParametersRequest::setClearBinlog(bool clearBinlog) {
  clearBinlog_ = clearBinlog;
  setParameter(std::string("ClearBinlog"), clearBinlog ? "true" : "false");
}

std::string ModifyDBClusterAndNodesParametersRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void ModifyDBClusterAndNodesParametersRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string ModifyDBClusterAndNodesParametersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterAndNodesParametersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterAndNodesParametersRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterAndNodesParametersRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterAndNodesParametersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterAndNodesParametersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterAndNodesParametersRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterAndNodesParametersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterAndNodesParametersRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBClusterAndNodesParametersRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBClusterAndNodesParametersRequest::getStandbyClusterIdListNeedToSync() const {
  return standbyClusterIdListNeedToSync_;
}

void ModifyDBClusterAndNodesParametersRequest::setStandbyClusterIdListNeedToSync(const std::string &standbyClusterIdListNeedToSync) {
  standbyClusterIdListNeedToSync_ = standbyClusterIdListNeedToSync;
  setParameter(std::string("StandbyClusterIdListNeedToSync"), standbyClusterIdListNeedToSync);
}

std::string ModifyDBClusterAndNodesParametersRequest::getParameters() const {
  return parameters_;
}

void ModifyDBClusterAndNodesParametersRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

bool ModifyDBClusterAndNodesParametersRequest::getFromTimeService() const {
  return fromTimeService_;
}

void ModifyDBClusterAndNodesParametersRequest::setFromTimeService(bool fromTimeService) {
  fromTimeService_ = fromTimeService;
  setParameter(std::string("FromTimeService"), fromTimeService ? "true" : "false");
}

