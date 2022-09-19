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

#include <alibabacloud/viapi-regen/model/StartTrainTaskRequest.h>

using AlibabaCloud::Viapi_regen::Model::StartTrainTaskRequest;

StartTrainTaskRequest::StartTrainTaskRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "StartTrainTask") {
  setMethod(HttpRequest::Method::Post);
}

StartTrainTaskRequest::~StartTrainTaskRequest() {}

long StartTrainTaskRequest::getRelyOnTaskId() const {
  return relyOnTaskId_;
}

void StartTrainTaskRequest::setRelyOnTaskId(long relyOnTaskId) {
  relyOnTaskId_ = relyOnTaskId;
  setBodyParameter(std::string("RelyOnTaskId"), std::to_string(relyOnTaskId));
}

bool StartTrainTaskRequest::getForceStartFlag() const {
  return forceStartFlag_;
}

void StartTrainTaskRequest::setForceStartFlag(bool forceStartFlag) {
  forceStartFlag_ = forceStartFlag;
  setBodyParameter(std::string("ForceStartFlag"), forceStartFlag ? "true" : "false");
}

long StartTrainTaskRequest::getId() const {
  return id_;
}

void StartTrainTaskRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

