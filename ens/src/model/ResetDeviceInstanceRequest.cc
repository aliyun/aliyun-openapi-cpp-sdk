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

#include <alibabacloud/ens/model/ResetDeviceInstanceRequest.h>

using AlibabaCloud::Ens::Model::ResetDeviceInstanceRequest;

ResetDeviceInstanceRequest::ResetDeviceInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ResetDeviceInstance") {
  setMethod(HttpRequest::Method::Get);
}

ResetDeviceInstanceRequest::~ResetDeviceInstanceRequest() {}

std::string ResetDeviceInstanceRequest::getImageId() const {
  return imageId_;
}

void ResetDeviceInstanceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setParameter(std::string("ImageId"), imageId);
}

std::string ResetDeviceInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ResetDeviceInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ResetDeviceInstanceRequest::getAppId() const {
  return appId_;
}

void ResetDeviceInstanceRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

