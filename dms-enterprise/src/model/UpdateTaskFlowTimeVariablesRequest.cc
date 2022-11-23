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

#include <alibabacloud/dms-enterprise/model/UpdateTaskFlowTimeVariablesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskFlowTimeVariablesRequest;

UpdateTaskFlowTimeVariablesRequest::UpdateTaskFlowTimeVariablesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskFlowTimeVariables") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskFlowTimeVariablesRequest::~UpdateTaskFlowTimeVariablesRequest() {}

long UpdateTaskFlowTimeVariablesRequest::getDagId() const {
  return dagId_;
}

void UpdateTaskFlowTimeVariablesRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long UpdateTaskFlowTimeVariablesRequest::getTid() const {
  return tid_;
}

void UpdateTaskFlowTimeVariablesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string UpdateTaskFlowTimeVariablesRequest::getTimeVariables() const {
  return timeVariables_;
}

void UpdateTaskFlowTimeVariablesRequest::setTimeVariables(const std::string &timeVariables) {
  timeVariables_ = timeVariables;
  setParameter(std::string("TimeVariables"), timeVariables);
}

