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

#include <alibabacloud/dms-enterprise/model/UpdateTaskFlowRelationsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskFlowRelationsRequest;

UpdateTaskFlowRelationsRequest::UpdateTaskFlowRelationsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskFlowRelations") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskFlowRelationsRequest::~UpdateTaskFlowRelationsRequest() {}

long UpdateTaskFlowRelationsRequest::getDagId() const {
  return dagId_;
}

void UpdateTaskFlowRelationsRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long UpdateTaskFlowRelationsRequest::getTid() const {
  return tid_;
}

void UpdateTaskFlowRelationsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<UpdateTaskFlowRelationsRequest::Edges> UpdateTaskFlowRelationsRequest::getEdges() const {
  return edges_;
}

void UpdateTaskFlowRelationsRequest::setEdges(const std::vector<UpdateTaskFlowRelationsRequest::Edges> &edges) {
  edges_ = edges;
  for(int dep1 = 0; dep1 != edges.size(); dep1++) {
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".NodeEnd", std::to_string(edges[dep1].nodeEnd));
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".NodeFrom", std::to_string(edges[dep1].nodeFrom));
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".EdgeType", std::to_string(edges[dep1].edgeType));
    setParameter(std::string("Edges") + "." + std::to_string(dep1 + 1) + ".Id", std::to_string(edges[dep1].id));
  }
}

