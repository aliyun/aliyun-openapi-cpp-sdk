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

#include <alibabacloud/dms-enterprise/model/ListTaskFlowEdgesByConditionRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListTaskFlowEdgesByConditionRequest;

ListTaskFlowEdgesByConditionRequest::ListTaskFlowEdgesByConditionRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListTaskFlowEdgesByCondition") {
  setMethod(HttpRequest::Method::Post);
}

ListTaskFlowEdgesByConditionRequest::~ListTaskFlowEdgesByConditionRequest() {}

long ListTaskFlowEdgesByConditionRequest::getDagId() const {
  return dagId_;
}

void ListTaskFlowEdgesByConditionRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long ListTaskFlowEdgesByConditionRequest::getTid() const {
  return tid_;
}

void ListTaskFlowEdgesByConditionRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long ListTaskFlowEdgesByConditionRequest::getNodeEnd() const {
  return nodeEnd_;
}

void ListTaskFlowEdgesByConditionRequest::setNodeEnd(long nodeEnd) {
  nodeEnd_ = nodeEnd;
  setParameter(std::string("NodeEnd"), std::to_string(nodeEnd));
}

long ListTaskFlowEdgesByConditionRequest::getNodeFrom() const {
  return nodeFrom_;
}

void ListTaskFlowEdgesByConditionRequest::setNodeFrom(long nodeFrom) {
  nodeFrom_ = nodeFrom;
  setParameter(std::string("NodeFrom"), std::to_string(nodeFrom));
}

long ListTaskFlowEdgesByConditionRequest::getId() const {
  return id_;
}

void ListTaskFlowEdgesByConditionRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

