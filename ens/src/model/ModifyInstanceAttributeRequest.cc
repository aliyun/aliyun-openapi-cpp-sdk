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

#include <alibabacloud/ens/model/ModifyInstanceAttributeRequest.h>

using AlibabaCloud::Ens::Model::ModifyInstanceAttributeRequest;

ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "ModifyInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAttributeRequest::~ModifyInstanceAttributeRequest() {}

std::string ModifyInstanceAttributeRequest::getUserData() const {
  return userData_;
}

void ModifyInstanceAttributeRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string ModifyInstanceAttributeRequest::getPassword() const {
  return password_;
}

void ModifyInstanceAttributeRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifyInstanceAttributeRequest::getHostName() const {
  return hostName_;
}

void ModifyInstanceAttributeRequest::setHostName(const std::string &hostName) {
  hostName_ = hostName;
  setParameter(std::string("HostName"), hostName);
}

std::string ModifyInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceAttributeRequest::getInstanceName() const {
  return instanceName_;
}

void ModifyInstanceAttributeRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

