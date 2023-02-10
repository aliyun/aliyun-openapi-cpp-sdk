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

#include <alibabacloud/schedulerx2/model/UpdateWorkflowRequest.h>

using AlibabaCloud::Schedulerx2::Model::UpdateWorkflowRequest;

UpdateWorkflowRequest::UpdateWorkflowRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "UpdateWorkflow") {
  setMethod(HttpRequest::Method::Post);
}

UpdateWorkflowRequest::~UpdateWorkflowRequest() {}

std::string UpdateWorkflowRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void UpdateWorkflowRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setBodyParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string UpdateWorkflowRequest::getDescription() const {
  return description_;
}

void UpdateWorkflowRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateWorkflowRequest::getRegionId() const {
  return regionId_;
}

void UpdateWorkflowRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateWorkflowRequest::getWorkflowId() const {
  return workflowId_;
}

void UpdateWorkflowRequest::setWorkflowId(const std::string &workflowId) {
  workflowId_ = workflowId;
  setBodyParameter(std::string("WorkflowId"), workflowId);
}

std::string UpdateWorkflowRequest::getGroupId() const {
  return groupId_;
}

void UpdateWorkflowRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string UpdateWorkflowRequest::getTimeExpression() const {
  return timeExpression_;
}

void UpdateWorkflowRequest::setTimeExpression(const std::string &timeExpression) {
  timeExpression_ = timeExpression;
  setBodyParameter(std::string("TimeExpression"), timeExpression);
}

std::string UpdateWorkflowRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateWorkflowRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setBodyParameter(std::string("Namespace"), _namespace);
}

std::string UpdateWorkflowRequest::getName() const {
  return name_;
}

void UpdateWorkflowRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

int UpdateWorkflowRequest::getTimeType() const {
  return timeType_;
}

void UpdateWorkflowRequest::setTimeType(int timeType) {
  timeType_ = timeType;
  setBodyParameter(std::string("TimeType"), std::to_string(timeType));
}

