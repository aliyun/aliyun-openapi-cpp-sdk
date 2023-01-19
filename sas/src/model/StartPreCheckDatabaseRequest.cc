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

#include <alibabacloud/sas/model/StartPreCheckDatabaseRequest.h>

using AlibabaCloud::Sas::Model::StartPreCheckDatabaseRequest;

StartPreCheckDatabaseRequest::StartPreCheckDatabaseRequest()
    : RpcServiceRequest("sas", "2018-12-03", "StartPreCheckDatabase") {
  setMethod(HttpRequest::Method::Post);
}

StartPreCheckDatabaseRequest::~StartPreCheckDatabaseRequest() {}

std::string StartPreCheckDatabaseRequest::getDatabaseType() const {
  return databaseType_;
}

void StartPreCheckDatabaseRequest::setDatabaseType(const std::string &databaseType) {
  databaseType_ = databaseType;
  setParameter(std::string("DatabaseType"), databaseType);
}

long StartPreCheckDatabaseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartPreCheckDatabaseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StartPreCheckDatabaseRequest::getInstanceUuid() const {
  return instanceUuid_;
}

void StartPreCheckDatabaseRequest::setInstanceUuid(const std::string &instanceUuid) {
  instanceUuid_ = instanceUuid;
  setParameter(std::string("InstanceUuid"), instanceUuid);
}

std::string StartPreCheckDatabaseRequest::getSourceIp() const {
  return sourceIp_;
}

void StartPreCheckDatabaseRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string StartPreCheckDatabaseRequest::getUniRegionId() const {
  return uniRegionId_;
}

void StartPreCheckDatabaseRequest::setUniRegionId(const std::string &uniRegionId) {
  uniRegionId_ = uniRegionId;
  setParameter(std::string("UniRegionId"), uniRegionId);
}

