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

#include <alibabacloud/sas/model/StartDiscoverDatabaseTaskRequest.h>

using AlibabaCloud::Sas::Model::StartDiscoverDatabaseTaskRequest;

StartDiscoverDatabaseTaskRequest::StartDiscoverDatabaseTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "StartDiscoverDatabaseTask") {
  setMethod(HttpRequest::Method::Post);
}

StartDiscoverDatabaseTaskRequest::~StartDiscoverDatabaseTaskRequest() {}

long StartDiscoverDatabaseTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartDiscoverDatabaseTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StartDiscoverDatabaseTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void StartDiscoverDatabaseTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

