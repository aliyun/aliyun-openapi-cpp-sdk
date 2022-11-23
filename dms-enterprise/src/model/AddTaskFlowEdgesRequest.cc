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

#include <alibabacloud/dms-enterprise/model/AddTaskFlowEdgesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::AddTaskFlowEdgesRequest;

AddTaskFlowEdgesRequest::AddTaskFlowEdgesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "AddTaskFlowEdges") {
  setMethod(HttpRequest::Method::Post);
}

AddTaskFlowEdgesRequest::~AddTaskFlowEdgesRequest() {}

long AddTaskFlowEdgesRequest::getDagId() const {
  return dagId_;
}

void AddTaskFlowEdgesRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long AddTaskFlowEdgesRequest::getTid() const {
  return tid_;
}

void AddTaskFlowEdgesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<AddTaskFlowEdgesRequest::Edges> AddTaskFlowEdgesRequest::getEdges() const {
  return edges_;
}

void AddTaskFlowEdgesRequest::setEdges(const std::vector<AddTaskFlowEdgesRequest::Edges> &edges) {
  edges_ = edges;
  for(int dep1 = 0; dep1 != edges.size(); dep1++) {
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".NodeEnd", std::to_string(edges[dep1].nodeEnd));
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".NodeFrom", std::to_string(edges[dep1].nodeFrom));
  }
}

