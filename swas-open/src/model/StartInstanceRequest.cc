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

#include <alibabacloud/swas-open/model/StartInstanceRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::StartInstanceRequest;

StartInstanceRequest::StartInstanceRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "StartInstance") {
  setMethod(HttpRequest::Method::Post);
}

StartInstanceRequest::~StartInstanceRequest() {}

std::string StartInstanceRequest::getClientToken() const {
  return clientToken_;
}

void StartInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string StartInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void StartInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string StartInstanceRequest::getRegionId() const {
  return regionId_;
}

void StartInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

