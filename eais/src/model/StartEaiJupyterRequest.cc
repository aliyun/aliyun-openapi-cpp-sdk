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

#include <alibabacloud/eais/model/StartEaiJupyterRequest.h>

using AlibabaCloud::Eais::Model::StartEaiJupyterRequest;

StartEaiJupyterRequest::StartEaiJupyterRequest()
    : RpcServiceRequest("eais", "2019-06-24", "StartEaiJupyter") {
  setMethod(HttpRequest::Method::Post);
}

StartEaiJupyterRequest::~StartEaiJupyterRequest() {}

std::string StartEaiJupyterRequest::getInstanceId() const {
  return instanceId_;
}

void StartEaiJupyterRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string StartEaiJupyterRequest::getRegionId() const {
  return regionId_;
}

void StartEaiJupyterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

