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

#include <alibabacloud/imm/model/DeleteTriggerRequest.h>

using AlibabaCloud::Imm::Model::DeleteTriggerRequest;

DeleteTriggerRequest::DeleteTriggerRequest()
    : RpcServiceRequest("imm", "2020-09-30", "DeleteTrigger") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTriggerRequest::~DeleteTriggerRequest() {}

std::string DeleteTriggerRequest::getId() const {
  return id_;
}

void DeleteTriggerRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

std::string DeleteTriggerRequest::getProjectName() const {
  return projectName_;
}

void DeleteTriggerRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

