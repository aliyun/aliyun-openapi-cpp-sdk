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

#include <alibabacloud/dataworks-public/model/ListNodeInputOrOutputRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListNodeInputOrOutputRequest;

ListNodeInputOrOutputRequest::ListNodeInputOrOutputRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListNodeInputOrOutput") {
  setMethod(HttpRequest::Method::Post);
}

ListNodeInputOrOutputRequest::~ListNodeInputOrOutputRequest() {}

std::string ListNodeInputOrOutputRequest::getProjectEnv() const {
  return projectEnv_;
}

void ListNodeInputOrOutputRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

long ListNodeInputOrOutputRequest::getNodeId() const {
  return nodeId_;
}

void ListNodeInputOrOutputRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), std::to_string(nodeId));
}

std::string ListNodeInputOrOutputRequest::getIoType() const {
  return ioType_;
}

void ListNodeInputOrOutputRequest::setIoType(const std::string &ioType) {
  ioType_ = ioType;
  setBodyParameter(std::string("IoType"), ioType);
}

