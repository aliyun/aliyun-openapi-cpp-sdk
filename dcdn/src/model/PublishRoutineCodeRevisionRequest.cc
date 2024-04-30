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

#include <alibabacloud/dcdn/model/PublishRoutineCodeRevisionRequest.h>

using AlibabaCloud::Dcdn::Model::PublishRoutineCodeRevisionRequest;

PublishRoutineCodeRevisionRequest::PublishRoutineCodeRevisionRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "PublishRoutineCodeRevision") {
  setMethod(HttpRequest::Method::Post);
}

PublishRoutineCodeRevisionRequest::~PublishRoutineCodeRevisionRequest() {}

std::string PublishRoutineCodeRevisionRequest::getName() const {
  return name_;
}

void PublishRoutineCodeRevisionRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string PublishRoutineCodeRevisionRequest::getSelectCodeRevision() const {
  return selectCodeRevision_;
}

void PublishRoutineCodeRevisionRequest::setSelectCodeRevision(const std::string &selectCodeRevision) {
  selectCodeRevision_ = selectCodeRevision;
  setBodyParameter(std::string("SelectCodeRevision"), selectCodeRevision);
}

std::string PublishRoutineCodeRevisionRequest::getEnvs() const {
  return envs_;
}

void PublishRoutineCodeRevisionRequest::setEnvs(const std::string &envs) {
  envs_ = envs;
  setBodyParameter(std::string("Envs"), envs);
}

