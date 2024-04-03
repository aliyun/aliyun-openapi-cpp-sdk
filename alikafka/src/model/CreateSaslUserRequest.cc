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

#include <alibabacloud/alikafka/model/CreateSaslUserRequest.h>

using AlibabaCloud::Alikafka::Model::CreateSaslUserRequest;

CreateSaslUserRequest::CreateSaslUserRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "CreateSaslUser") {
  setMethod(HttpRequest::Method::Post);
}

CreateSaslUserRequest::~CreateSaslUserRequest() {}

std::string CreateSaslUserRequest::getType() const {
  return type_;
}

void CreateSaslUserRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateSaslUserRequest::getPassword() const {
  return password_;
}

void CreateSaslUserRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateSaslUserRequest::getInstanceId() const {
  return instanceId_;
}

void CreateSaslUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateSaslUserRequest::getRegionId() const {
  return regionId_;
}

void CreateSaslUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSaslUserRequest::getMechanism() const {
  return mechanism_;
}

void CreateSaslUserRequest::setMechanism(const std::string &mechanism) {
  mechanism_ = mechanism;
  setParameter(std::string("Mechanism"), mechanism);
}

std::string CreateSaslUserRequest::getUsername() const {
  return username_;
}

void CreateSaslUserRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

