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

#include <alibabacloud/dms-enterprise/model/UpdateTaskFlowEdgesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskFlowEdgesRequest;

UpdateTaskFlowEdgesRequest::UpdateTaskFlowEdgesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskFlowEdges") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskFlowEdgesRequest::~UpdateTaskFlowEdgesRequest() {}

long UpdateTaskFlowEdgesRequest::getDagId() const {
  return dagId_;
}

void UpdateTaskFlowEdgesRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long UpdateTaskFlowEdgesRequest::getTid() const {
  return tid_;
}

void UpdateTaskFlowEdgesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<UpdateTaskFlowEdgesRequest::Edges> UpdateTaskFlowEdgesRequest::getEdges() const {
  return edges_;
}

void UpdateTaskFlowEdgesRequest::setEdges(const std::vector<UpdateTaskFlowEdgesRequest::Edges> &edges) {
  edges_ = edges;
  for(int dep1 = 0; dep1 != edges.size(); dep1++) {
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".NodeEnd", std::to_string(edges[dep1].nodeEnd));
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".NodeFrom", std::to_string(edges[dep1].nodeFrom));
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".Id", std::to_string(edges[dep1].id));
  }
}

