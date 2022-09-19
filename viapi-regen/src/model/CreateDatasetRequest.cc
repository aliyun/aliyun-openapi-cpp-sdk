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

#include <alibabacloud/viapi-regen/model/CreateDatasetRequest.h>

using AlibabaCloud::Viapi_regen::Model::CreateDatasetRequest;

CreateDatasetRequest::CreateDatasetRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "CreateDataset") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatasetRequest::~CreateDatasetRequest() {}

std::string CreateDatasetRequest::getDescription() const {
  return description_;
}

void CreateDatasetRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateDatasetRequest::getType() const {
  return type_;
}

void CreateDatasetRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string CreateDatasetRequest::getName() const {
  return name_;
}

void CreateDatasetRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

long CreateDatasetRequest::getWorkspaceId() const {
  return workspaceId_;
}

void CreateDatasetRequest::setWorkspaceId(long workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

