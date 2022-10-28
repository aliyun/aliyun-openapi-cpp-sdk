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

#include <alibabacloud/dms-enterprise/model/UpdateTaskOutputRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskOutputRequest;

UpdateTaskOutputRequest::UpdateTaskOutputRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskOutput") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskOutputRequest::~UpdateTaskOutputRequest() {}

long UpdateTaskOutputRequest::getTid() const {
  return tid_;
}

void UpdateTaskOutputRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string UpdateTaskOutputRequest::getNodeOutput() const {
  return nodeOutput_;
}

void UpdateTaskOutputRequest::setNodeOutput(const std::string &nodeOutput) {
  nodeOutput_ = nodeOutput;
  setParameter(std::string("NodeOutput"), nodeOutput);
}

std::string UpdateTaskOutputRequest::getNodeId() const {
  return nodeId_;
}

void UpdateTaskOutputRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

