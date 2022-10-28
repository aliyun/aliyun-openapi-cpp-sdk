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

#include <alibabacloud/dms-enterprise/model/UpdateTaskFlowNameAndDescRequest.h>

using AlibabaCloud::Dms_enterprise::Model::UpdateTaskFlowNameAndDescRequest;

UpdateTaskFlowNameAndDescRequest::UpdateTaskFlowNameAndDescRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "UpdateTaskFlowNameAndDesc") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskFlowNameAndDescRequest::~UpdateTaskFlowNameAndDescRequest() {}

std::string UpdateTaskFlowNameAndDescRequest::getDagName() const {
  return dagName_;
}

void UpdateTaskFlowNameAndDescRequest::setDagName(const std::string &dagName) {
  dagName_ = dagName;
  setParameter(std::string("DagName"), dagName);
}

std::string UpdateTaskFlowNameAndDescRequest::getDescription() const {
  return description_;
}

void UpdateTaskFlowNameAndDescRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateTaskFlowNameAndDescRequest::getDagId() const {
  return dagId_;
}

void UpdateTaskFlowNameAndDescRequest::setDagId(long dagId) {
  dagId_ = dagId;
  setParameter(std::string("DagId"), std::to_string(dagId));
}

long UpdateTaskFlowNameAndDescRequest::getTid() const {
  return tid_;
}

void UpdateTaskFlowNameAndDescRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

