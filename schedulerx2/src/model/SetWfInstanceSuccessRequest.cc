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

#include <alibabacloud/schedulerx2/model/SetWfInstanceSuccessRequest.h>

using AlibabaCloud::Schedulerx2::Model::SetWfInstanceSuccessRequest;

SetWfInstanceSuccessRequest::SetWfInstanceSuccessRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "SetWfInstanceSuccess") {
  setMethod(HttpRequest::Method::Post);
}

SetWfInstanceSuccessRequest::~SetWfInstanceSuccessRequest() {}

std::string SetWfInstanceSuccessRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void SetWfInstanceSuccessRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string SetWfInstanceSuccessRequest::getGroupId() const {
  return groupId_;
}

void SetWfInstanceSuccessRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long SetWfInstanceSuccessRequest::getWfInstanceId() const {
  return wfInstanceId_;
}

void SetWfInstanceSuccessRequest::setWfInstanceId(long wfInstanceId) {
  wfInstanceId_ = wfInstanceId;
  setParameter(std::string("WfInstanceId"), std::to_string(wfInstanceId));
}

std::string SetWfInstanceSuccessRequest::getRegionId() const {
  return regionId_;
}

void SetWfInstanceSuccessRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetWfInstanceSuccessRequest::get_Namespace() const {
  return _namespace_;
}

void SetWfInstanceSuccessRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

long SetWfInstanceSuccessRequest::getWorkflowId() const {
  return workflowId_;
}

void SetWfInstanceSuccessRequest::setWorkflowId(long workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), std::to_string(workflowId));
}

