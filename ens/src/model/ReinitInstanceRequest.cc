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

#include <alibabacloud/ens/model/ReinitInstanceRequest.h>

using AlibabaCloud::Ens::Model::ReinitInstanceRequest;

ReinitInstanceRequest::ReinitInstanceRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ReinitInstance") {
  setMethod(HttpRequest::Method::Post);
}

ReinitInstanceRequest::~ReinitInstanceRequest() {}

std::string ReinitInstanceRequest::getImageId() const {
  return imageId_;
}

void ReinitInstanceRequest::setImageId(const std::string &imageId) {
  imageId_ = imageId;
  setBodyParameter(std::string("ImageId"), imageId);
}

std::string ReinitInstanceRequest::getPassword() const {
  return password_;
}

void ReinitInstanceRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string ReinitInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ReinitInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

