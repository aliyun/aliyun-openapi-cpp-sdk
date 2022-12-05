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

#include <alibabacloud/polardb/model/ModifyDBNodesParametersRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodesParametersRequest;

ModifyDBNodesParametersRequest::ModifyDBNodesParametersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodesParameters") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBNodesParametersRequest::~ModifyDBNodesParametersRequest() {}

long ModifyDBNodesParametersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBNodesParametersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBNodesParametersRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBNodesParametersRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBNodesParametersRequest::getDBNodeIds() const {
  return dBNodeIds_;
}

void ModifyDBNodesParametersRequest::setDBNodeIds(const std::string &dBNodeIds) {
  dBNodeIds_ = dBNodeIds;
  setParameter(std::string("DBNodeIds"), dBNodeIds);
}

std::string ModifyDBNodesParametersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBNodesParametersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBNodesParametersRequest::getParameterGroupId() const {
  return parameterGroupId_;
}

void ModifyDBNodesParametersRequest::setParameterGroupId(const std::string &parameterGroupId) {
  parameterGroupId_ = parameterGroupId;
  setParameter(std::string("ParameterGroupId"), parameterGroupId);
}

std::string ModifyDBNodesParametersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBNodesParametersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBNodesParametersRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBNodesParametersRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBNodesParametersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBNodesParametersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBNodesParametersRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBNodesParametersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBNodesParametersRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBNodesParametersRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBNodesParametersRequest::getParameters() const {
  return parameters_;
}

void ModifyDBNodesParametersRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

bool ModifyDBNodesParametersRequest::getFromTimeService() const {
  return fromTimeService_;
}

void ModifyDBNodesParametersRequest::setFromTimeService(bool fromTimeService) {
  fromTimeService_ = fromTimeService;
  setParameter(std::string("FromTimeService"), fromTimeService ? "true" : "false");
}

