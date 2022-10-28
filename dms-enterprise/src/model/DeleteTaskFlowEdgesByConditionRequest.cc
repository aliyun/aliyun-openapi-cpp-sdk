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

#include <alibabacloud/dms-enterprise/model/DeleteTaskFlowEdgesByConditionRequest.h>

using AlibabaCloud::Dms_enterprise::Model::DeleteTaskFlowEdgesByConditionRequest;

DeleteTaskFlowEdgesByConditionRequest::DeleteTaskFlowEdgesByConditionRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "DeleteTaskFlowEdgesByCondition") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTaskFlowEdgesByConditionRequest::~DeleteTaskFlowEdgesByConditionRequest() {}

long DeleteTaskFlowEdgesByConditionRequest::getDagId() const {
  return dagId_;
}

void DeleteTaskFlowEdgesByConditionRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long DeleteTaskFlowEdgesByConditionRequest::getTid() const {
  return tid_;
}

void DeleteTaskFlowEdgesByConditionRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long DeleteTaskFlowEdgesByConditionRequest::getNodeEnd() const {
  return nodeEnd_;
}

void DeleteTaskFlowEdgesByConditionRequest::setNodeEnd(long nodeEnd) {
  nodeEnd_ = nodeEnd;
  setParameter(std::string("NodeEnd"), std::to_string(nodeEnd));
}

long DeleteTaskFlowEdgesByConditionRequest::getNodeFrom() const {
  return nodeFrom_;
}

void DeleteTaskFlowEdgesByConditionRequest::setNodeFrom(long nodeFrom) {
  nodeFrom_ = nodeFrom;
  setParameter(std::string("NodeFrom"), std::to_string(nodeFrom));
}

long DeleteTaskFlowEdgesByConditionRequest::getId() const {
  return id_;
}

void DeleteTaskFlowEdgesByConditionRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

