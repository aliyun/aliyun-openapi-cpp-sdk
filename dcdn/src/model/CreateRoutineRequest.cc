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

#include <alibabacloud/dcdn/model/CreateRoutineRequest.h>

using AlibabaCloud::Dcdn::Model::CreateRoutineRequest;

CreateRoutineRequest::CreateRoutineRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "CreateRoutine") {
  setMethod(HttpRequest::Method::Post);
}

CreateRoutineRequest::~CreateRoutineRequest() {}

std::string CreateRoutineRequest::getEnvConf() const {
  return envConf_;
}

void CreateRoutineRequest::setEnvConf(const std::string &envConf) {
  envConf_ = envConf;
  setBodyParameter(std::string("EnvConf"), envConf);
}

std::string CreateRoutineRequest::getName() const {
  return name_;
}

void CreateRoutineRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateRoutineRequest::getDescription() const {
  return description_;
}

void CreateRoutineRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

