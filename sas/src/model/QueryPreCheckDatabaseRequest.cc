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

#include <alibabacloud/sas/model/QueryPreCheckDatabaseRequest.h>

using AlibabaCloud::Sas::Model::QueryPreCheckDatabaseRequest;

QueryPreCheckDatabaseRequest::QueryPreCheckDatabaseRequest()
    : RpcServiceRequest("sas", "2018-12-03", "QueryPreCheckDatabase") {
  setMethod(HttpRequest::Method::Post);
}

QueryPreCheckDatabaseRequest::~QueryPreCheckDatabaseRequest() {}

long QueryPreCheckDatabaseRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryPreCheckDatabaseRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryPreCheckDatabaseRequest::getInstanceUuid() const {
  return instanceUuid_;
}

void QueryPreCheckDatabaseRequest::setInstanceUuid(const std::string &instanceUuid) {
  instanceUuid_ = instanceUuid;
  setParameter(std::string("InstanceUuid"), instanceUuid);
}

std::string QueryPreCheckDatabaseRequest::getSourceIp() const {
  return sourceIp_;
}

void QueryPreCheckDatabaseRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string QueryPreCheckDatabaseRequest::getTaskId() const {
  return taskId_;
}

void QueryPreCheckDatabaseRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string QueryPreCheckDatabaseRequest::getUniRegionId() const {
  return uniRegionId_;
}

void QueryPreCheckDatabaseRequest::setUniRegionId(const std::string &uniRegionId) {
  uniRegionId_ = uniRegionId;
  setParameter(std::string("UniRegionId"), uniRegionId);
}

