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

#include <alibabacloud/dataworks-public/model/UpdateNodeOwnerRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateNodeOwnerRequest;

UpdateNodeOwnerRequest::UpdateNodeOwnerRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateNodeOwner") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNodeOwnerRequest::~UpdateNodeOwnerRequest() {}

std::string UpdateNodeOwnerRequest::getProjectEnv() const {
  return projectEnv_;
}

void UpdateNodeOwnerRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

long UpdateNodeOwnerRequest::getNodeId() const {
  return nodeId_;
}

void UpdateNodeOwnerRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

std::string UpdateNodeOwnerRequest::getUserId() const {
  return userId_;
}

void UpdateNodeOwnerRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

