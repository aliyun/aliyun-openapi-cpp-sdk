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

#include <alibabacloud/schedulerx2/model/GetWorkflowInstanceRequest.h>

using AlibabaCloud::Schedulerx2::Model::GetWorkflowInstanceRequest;

GetWorkflowInstanceRequest::GetWorkflowInstanceRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "GetWorkflowInstance") {
  setMethod(HttpRequest::Method::Get);
}

GetWorkflowInstanceRequest::~GetWorkflowInstanceRequest() {}

std::string GetWorkflowInstanceRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void GetWorkflowInstanceRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string GetWorkflowInstanceRequest::getGroupId() const {
  return groupId_;
}

void GetWorkflowInstanceRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long GetWorkflowInstanceRequest::getWfInstanceId() const {
  return wfInstanceId_;
}

void GetWorkflowInstanceRequest::setWfInstanceId(long wfInstanceId) {
  wfInstanceId_ = wfInstanceId;
  setParameter(std::string("WfInstanceId"), std::to_string(wfInstanceId));
}

std::string GetWorkflowInstanceRequest::getRegionId() const {
  return regionId_;
}

void GetWorkflowInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetWorkflowInstanceRequest::get_Namespace() const {
  return _namespace_;
}

void GetWorkflowInstanceRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

long GetWorkflowInstanceRequest::getWorkflowId() const {
  return workflowId_;
}

void GetWorkflowInstanceRequest::setWorkflowId(long workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), std::to_string(workflowId));
}

