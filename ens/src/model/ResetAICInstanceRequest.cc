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

#include <alibabacloud/ens/model/ResetAICInstanceRequest.h>

using AlibabaCloud::Ens::Model::ResetAICInstanceRequest;

ResetAICInstanceRequest::ResetAICInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ResetAICInstance") {
  setMethod(HttpRequest::Method::Get);
}

ResetAICInstanceRequest::~ResetAICInstanceRequest() {}

std::string ResetAICInstanceRequest::getServerId() const {
  return serverId_;
}

void ResetAICInstanceRequest::setServerId(const std::string &serverId) {
  serverId_ = serverId;
  setParameter(std::string("ServerId"), serverId);
}

std::string ResetAICInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ResetAICInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

