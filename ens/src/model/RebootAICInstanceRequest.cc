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

#include <alibabacloud/ens/model/RebootAICInstanceRequest.h>

using AlibabaCloud::Ens::Model::RebootAICInstanceRequest;

RebootAICInstanceRequest::RebootAICInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RebootAICInstance") {
  setMethod(HttpRequest::Method::Get);
}

RebootAICInstanceRequest::~RebootAICInstanceRequest() {}

std::string RebootAICInstanceRequest::getServerId() const {
  return serverId_;
}

void RebootAICInstanceRequest::setServerId(const std::string &serverId) {
  serverId_ = serverId;
  setParameter(std::string("ServerId"), serverId);
}

std::string RebootAICInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RebootAICInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::vector<RebootAICInstanceRequest::std::string> RebootAICInstanceRequest::getInstanceIds() const {
  return instanceIds_;
}

void RebootAICInstanceRequest::setInstanceIds(const std::vector<RebootAICInstanceRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

