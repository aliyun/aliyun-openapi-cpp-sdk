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

#include <alibabacloud/dataworks-public/model/StopInstanceRequest.h>

using AlibabaCloud::Dataworks_public::Model::StopInstanceRequest;

StopInstanceRequest::StopInstanceRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "StopInstance") {
  setMethod(HttpRequest::Method::Post);
}

StopInstanceRequest::~StopInstanceRequest() {}

std::string StopInstanceRequest::getProjectEnv() const {
  return projectEnv_;
}

void StopInstanceRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

long StopInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void StopInstanceRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), std::to_string(instanceId));
}

