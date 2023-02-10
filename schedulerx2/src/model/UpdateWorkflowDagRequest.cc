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

#include <alibabacloud/schedulerx2/model/UpdateWorkflowDagRequest.h>

using AlibabaCloud::Schedulerx2::Model::UpdateWorkflowDagRequest;

UpdateWorkflowDagRequest::UpdateWorkflowDagRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "UpdateWorkflowDag") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWorkflowDagRequest::~UpdateWorkflowDagRequest() {}

std::string UpdateWorkflowDagRequest::getDagJson() const {
  return dagJson_;
}

void UpdateWorkflowDagRequest::setDagJson(const std::string &dagJson) {
  dagJson_ = dagJson;
  setBodyParameter(std::string("DagJson"), dagJson);
}

std::string UpdateWorkflowDagRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void UpdateWorkflowDagRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setBodyParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string UpdateWorkflowDagRequest::getGroupId() const {
  return groupId_;
}

void UpdateWorkflowDagRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string UpdateWorkflowDagRequest::getRegionId() const {
  return regionId_;
}

void UpdateWorkflowDagRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateWorkflowDagRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateWorkflowDagRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setBodyParameter(std::string("Namespace"), _namespace);
}

std::string UpdateWorkflowDagRequest::getWorkflowId() const {
  return workflowId_;
}

void UpdateWorkflowDagRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setBodyParameter(std::string("WorkflowId"), workflowId);
}

