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

#include <alibabacloud/dms-enterprise/model/UpdateTaskFlowConstantsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskFlowConstantsRequest;

UpdateTaskFlowConstantsRequest::UpdateTaskFlowConstantsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskFlowConstants") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskFlowConstantsRequest::~UpdateTaskFlowConstantsRequest() {}

long UpdateTaskFlowConstantsRequest::getDagId() const {
  return dagId_;
}

void UpdateTaskFlowConstantsRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long UpdateTaskFlowConstantsRequest::getTid() const {
  return tid_;
}

void UpdateTaskFlowConstantsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::vector<UpdateTaskFlowConstantsRequest::DagConstants> UpdateTaskFlowConstantsRequest::getDagConstants() const {
  return dagConstants_;
}

void UpdateTaskFlowConstantsRequest::setDagConstants(const std::vector<UpdateTaskFlowConstantsRequest::DagConstants> &dagConstants) {
  dagConstants_ = dagConstants;
  for(int dep1 = 0; dep1 != dagConstants.size(); dep1++) {
    setParameter(std::string("DagConstants") + "." + std::to_string(dep1 + 1) + ".Value", dagConstants[dep1].value);
    setParameter(std::string("DagConstants") + "." + std::to_string(dep1 + 1) + ".Key", dagConstants[dep1].key);
  }
}

