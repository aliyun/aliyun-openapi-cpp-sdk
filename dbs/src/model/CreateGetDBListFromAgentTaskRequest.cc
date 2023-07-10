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

#include <alibabacloud/dbs/model/CreateGetDBListFromAgentTaskRequest.h>

using AlibabaCloud::Dbs::Model::CreateGetDBListFromAgentTaskRequest;

CreateGetDBListFromAgentTaskRequest::CreateGetDBListFromAgentTaskRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "CreateGetDBListFromAgentTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateGetDBListFromAgentTaskRequest::~CreateGetDBListFromAgentTaskRequest() {}

std::string CreateGetDBListFromAgentTaskRequest::getSourceEndpointRegion() const {
  return sourceEndpointRegion_;
}

void CreateGetDBListFromAgentTaskRequest::setSourceEndpointRegion(const std::string &sourceEndpointRegion) {
  sourceEndpointRegion_ = sourceEndpointRegion;
  setParameter(std::string("SourceEndpointRegion"), sourceEndpointRegion);
}

long CreateGetDBListFromAgentTaskRequest::getBackupGatewayId() const {
  return backupGatewayId_;
}

void CreateGetDBListFromAgentTaskRequest::setBackupGatewayId(long backupGatewayId) {
  backupGatewayId_ = backupGatewayId;
  setParameter(std::string("BackupGatewayId"), std::to_string(backupGatewayId));
}

std::string CreateGetDBListFromAgentTaskRequest::getDatabaseType() const {
  return databaseType_;
}

void CreateGetDBListFromAgentTaskRequest::setDatabaseType(const std::string &databaseType) {
  databaseType_ = databaseType;
  setParameter(std::string("DatabaseType"), databaseType);
}

std::string CreateGetDBListFromAgentTaskRequest::getClientToken() const {
  return clientToken_;
}

void CreateGetDBListFromAgentTaskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateGetDBListFromAgentTaskRequest::getSourceEndpointIP() const {
  return sourceEndpointIP_;
}

void CreateGetDBListFromAgentTaskRequest::setSourceEndpointIP(const std::string &sourceEndpointIP) {
  sourceEndpointIP_ = sourceEndpointIP;
  setParameter(std::string("SourceEndpointIP"), sourceEndpointIP);
}

std::string CreateGetDBListFromAgentTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateGetDBListFromAgentTaskRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

int CreateGetDBListFromAgentTaskRequest::getSourceEndpointPort() const {
  return sourceEndpointPort_;
}

void CreateGetDBListFromAgentTaskRequest::setSourceEndpointPort(int sourceEndpointPort) {
  sourceEndpointPort_ = sourceEndpointPort;
  setParameter(std::string("SourceEndpointPort"), std::to_string(sourceEndpointPort));
}

