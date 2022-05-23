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

#include <alibabacloud/ecs/model/CreateDiagnosticReportRequest.h>

using AlibabaCloud::Ecs::Model::CreateDiagnosticReportRequest;

CreateDiagnosticReportRequest::CreateDiagnosticReportRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateDiagnosticReport") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiagnosticReportRequest::~CreateDiagnosticReportRequest() {}

long CreateDiagnosticReportRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDiagnosticReportRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDiagnosticReportRequest::getClientToken() const {
  return clientToken_;
}

void CreateDiagnosticReportRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDiagnosticReportRequest::getStartTime() const {
  return startTime_;
}

void CreateDiagnosticReportRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string CreateDiagnosticReportRequest::getSourceSystem() const {
  return sourceSystem_;
}

void CreateDiagnosticReportRequest::setSourceSystem(const std::string &sourceSystem) {
  sourceSystem_ = sourceSystem;
  setParameter(std::string("SourceSystem"), sourceSystem);
}

std::string CreateDiagnosticReportRequest::getRegionId() const {
  return regionId_;
}

void CreateDiagnosticReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDiagnosticReportRequest::getPluginVersion() const {
  return pluginVersion_;
}

void CreateDiagnosticReportRequest::setPluginVersion(const std::string &pluginVersion) {
  pluginVersion_ = pluginVersion;
  setParameter(std::string("PluginVersion"), pluginVersion);
}

std::vector<std::string> CreateDiagnosticReportRequest::getResourceId() const {
  return resourceId_;
}

void CreateDiagnosticReportRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::vector<std::string> CreateDiagnosticReportRequest::getCommandName() const {
  return commandName_;
}

void CreateDiagnosticReportRequest::setCommandName(const std::vector<std::string> &commandName) {
  commandName_ = commandName;
}

std::string CreateDiagnosticReportRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDiagnosticReportRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDiagnosticReportRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDiagnosticReportRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateDiagnosticReportRequest::getEndTime() const {
  return endTime_;
}

void CreateDiagnosticReportRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long CreateDiagnosticReportRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDiagnosticReportRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDiagnosticReportRequest::getResourceType() const {
  return resourceType_;
}

void CreateDiagnosticReportRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string CreateDiagnosticReportRequest::getCommandType() const {
  return commandType_;
}

void CreateDiagnosticReportRequest::setCommandType(const std::string &commandType) {
  commandType_ = commandType;
  setParameter(std::string("CommandType"), commandType);
}

std::string CreateDiagnosticReportRequest::getDiagnosticCategory() const {
  return diagnosticCategory_;
}

void CreateDiagnosticReportRequest::setDiagnosticCategory(const std::string &diagnosticCategory) {
  diagnosticCategory_ = diagnosticCategory;
  setParameter(std::string("DiagnosticCategory"), diagnosticCategory);
}

