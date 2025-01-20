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

#include <alibabacloud/polardb/model/ModifyDBClusterParametersRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterParametersRequest;

ModifyDBClusterParametersRequest::ModifyDBClusterParametersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterParameters") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterParametersRequest::~ModifyDBClusterParametersRequest() {}

long ModifyDBClusterParametersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterParametersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterParametersRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBClusterParametersRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBClusterParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool ModifyDBClusterParametersRequest::getClearBinlog() const {
  return clearBinlog_;
}

void ModifyDBClusterParametersRequest::setClearBinlog(bool clearBinlog) {
  clearBinlog_ = clearBinlog;
  setParameter(std::string("ClearBinlog"), clearBinlog ? "true" : "false");
}

std::string ModifyDBClusterParametersRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void ModifyDBClusterParametersRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string ModifyDBClusterParametersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterParametersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterParametersRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterParametersRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterParametersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterParametersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterParametersRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterParametersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterParametersRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBClusterParametersRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBClusterParametersRequest::getParameters() const {
  return parameters_;
}

void ModifyDBClusterParametersRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

bool ModifyDBClusterParametersRequest::getFromTimeService() const {
  return fromTimeService_;
}

void ModifyDBClusterParametersRequest::setFromTimeService(bool fromTimeService) {
  fromTimeService_ = fromTimeService;
  setParameter(std::string("FromTimeService"), fromTimeService ? "true" : "false");
}

