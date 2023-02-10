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

#include <alibabacloud/schedulerx2/model/ListWorkflowInstanceRequest.h>

using AlibabaCloud::Schedulerx2::Model::ListWorkflowInstanceRequest;

ListWorkflowInstanceRequest::ListWorkflowInstanceRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "ListWorkflowInstance") {
  setMethod(HttpRequest::Method::Get);
}

ListWorkflowInstanceRequest::~ListWorkflowInstanceRequest() {}

std::string ListWorkflowInstanceRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void ListWorkflowInstanceRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string ListWorkflowInstanceRequest::getGroupId() const {
  return groupId_;
}

void ListWorkflowInstanceRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ListWorkflowInstanceRequest::getRegionId() const {
  return regionId_;
}

void ListWorkflowInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListWorkflowInstanceRequest::get_Namespace() const {
  return _namespace_;
}

void ListWorkflowInstanceRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

std::string ListWorkflowInstanceRequest::getWorkflowId() const {
  return workflowId_;
}

void ListWorkflowInstanceRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setParameter(std::string("WorkflowId"), workflowId);
}

