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

#include <alibabacloud/alikafka/model/DeleteSaslUserRequest.h>

using AlibabaCloud::Alikafka::Model::DeleteSaslUserRequest;

DeleteSaslUserRequest::DeleteSaslUserRequest()
    : RpcServiceRequest("alikafka", "2019-09-16", "DeleteSaslUser") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSaslUserRequest::~DeleteSaslUserRequest() {}

std::string DeleteSaslUserRequest::getType() const {
  return type_;
}

void DeleteSaslUserRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string DeleteSaslUserRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteSaslUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteSaslUserRequest::getRegionId() const {
  return regionId_;
}

void DeleteSaslUserRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSaslUserRequest::getMechanism() const {
  return mechanism_;
}

void DeleteSaslUserRequest::setMechanism(const std::string &mechanism) {
  mechanism_ = mechanism;
  setParameter(std::string("Mechanism"), mechanism);
}

std::string DeleteSaslUserRequest::getUsername() const {
  return username_;
}

void DeleteSaslUserRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

