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

#include <alibabacloud/ens/model/RestartDeviceInstanceRequest.h>

using AlibabaCloud::Ens::Model::RestartDeviceInstanceRequest;

RestartDeviceInstanceRequest::RestartDeviceInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "RestartDeviceInstance") {
  setMethod(HttpRequest::Method::Get);
}

RestartDeviceInstanceRequest::~RestartDeviceInstanceRequest() {}

std::string RestartDeviceInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RestartDeviceInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RestartDeviceInstanceRequest::getAppId() const {
  return appId_;
}

void RestartDeviceInstanceRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

