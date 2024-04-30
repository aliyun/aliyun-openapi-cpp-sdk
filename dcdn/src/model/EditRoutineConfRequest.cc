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

#include <alibabacloud/dcdn/model/EditRoutineConfRequest.h>

using AlibabaCloud::Dcdn::Model::EditRoutineConfRequest;

EditRoutineConfRequest::EditRoutineConfRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "EditRoutineConf") {
  setMethod(HttpRequest::Method::Post);
}

EditRoutineConfRequest::~EditRoutineConfRequest() {}

std::string EditRoutineConfRequest::getEnvConf() const {
  return envConf_;
}

void EditRoutineConfRequest::setEnvConf(const std::string &envConf) {
  envConf_ = envConf;
  setBodyParameter(std::string("EnvConf"), envConf);
}

std::string EditRoutineConfRequest::getName() const {
  return name_;
}

void EditRoutineConfRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string EditRoutineConfRequest::getDescription() const {
  return description_;
}

void EditRoutineConfRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

