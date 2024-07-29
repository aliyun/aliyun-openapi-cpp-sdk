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

#include <alibabacloud/market/model/RollbackCurrentProjectNodeRequest.h>

using AlibabaCloud::Market::Model::RollbackCurrentProjectNodeRequest;

RollbackCurrentProjectNodeRequest::RollbackCurrentProjectNodeRequest()
    : RpcServiceRequest("market", "2015-11-01", "RollbackCurrentProjectNode") {
  setMethod(HttpRequest::Method::Post);
}

RollbackCurrentProjectNodeRequest::~RollbackCurrentProjectNodeRequest() {}

std::string RollbackCurrentProjectNodeRequest::getRemark() const {
  return remark_;
}

void RollbackCurrentProjectNodeRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string RollbackCurrentProjectNodeRequest::getInstanceId() const {
  return instanceId_;
}

void RollbackCurrentProjectNodeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long RollbackCurrentProjectNodeRequest::getNodeId() const {
  return nodeId_;
}

void RollbackCurrentProjectNodeRequest::setNodeId(long nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), std::to_string(nodeId));
}

