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

#include <alibabacloud/dbs/model/GetDBListFromAgentRequest.h>

using AlibabaCloud::Dbs::Model::GetDBListFromAgentRequest;

GetDBListFromAgentRequest::GetDBListFromAgentRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "GetDBListFromAgent") {
  setMethod(HttpRequest::Method::Post);
}

GetDBListFromAgentRequest::~GetDBListFromAgentRequest() {}

std::string GetDBListFromAgentRequest::getSourceEndpointRegion() const {
  return sourceEndpointRegion_;
}

void GetDBListFromAgentRequest::setSourceEndpointRegion(const std::string &sourceEndpointRegion) {
  sourceEndpointRegion_ = sourceEndpointRegion;
  setParameter(std::string("SourceEndpointRegion"), sourceEndpointRegion);
}

long GetDBListFromAgentRequest::getBackupGatewayId() const {
  return backupGatewayId_;
}

void GetDBListFromAgentRequest::setBackupGatewayId(long backupGatewayId) {
  backupGatewayId_ = backupGatewayId;
  setParameter(std::string("BackupGatewayId"), std::to_string(backupGatewayId));
}

std::string GetDBListFromAgentRequest::getClientToken() const {
  return clientToken_;
}

void GetDBListFromAgentRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

long GetDBListFromAgentRequest::getTaskId() const {
  return taskId_;
}

void GetDBListFromAgentRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string GetDBListFromAgentRequest::getOwnerId() const {
  return ownerId_;
}

void GetDBListFromAgentRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

