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

#include <alibabacloud/dms-enterprise/model/ReRunTaskFlowInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ReRunTaskFlowInstanceRequest;

ReRunTaskFlowInstanceRequest::ReRunTaskFlowInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ReRunTaskFlowInstance") {
  setMethod(HttpRequest::Method::Post);
}

ReRunTaskFlowInstanceRequest::~ReRunTaskFlowInstanceRequest() {}

long ReRunTaskFlowInstanceRequest::getDagId() const {
  return dagId_;
}

void ReRunTaskFlowInstanceRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long ReRunTaskFlowInstanceRequest::getTid() const {
  return tid_;
}

void ReRunTaskFlowInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ReRunTaskFlowInstanceRequest::getDagVersion() const {
  return dagVersion_;
}

void ReRunTaskFlowInstanceRequest::setDagVersion(const std::string &dagVersion) {
  dagVersion_ = dagVersion;
  setParameter(std::string("DagVersion"), dagVersion);
}

long ReRunTaskFlowInstanceRequest::getDagInstanceId() const {
  return dagInstanceId_;
}

void ReRunTaskFlowInstanceRequest::setDagInstanceId(long dagInstanceId) {
  dagInstanceId_ = dagInstanceId;
  setParameter(std::string("DagInstanceId"), std::to_string(dagInstanceId));
}

