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

#include <alibabacloud/schedulerx2/model/CreateWorkflowRequest.h>

using AlibabaCloud::Schedulerx2::Model::CreateWorkflowRequest;

CreateWorkflowRequest::CreateWorkflowRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "CreateWorkflow") {
  setMethod(HttpRequest::Method::Post);
}

CreateWorkflowRequest::~CreateWorkflowRequest() {}

std::string CreateWorkflowRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void CreateWorkflowRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setBodyParameter(std::string("NamespaceSource"), namespaceSource);
}

std::string CreateWorkflowRequest::getTimezone() const {
  return timezone_;
}

void CreateWorkflowRequest::setTimezone(const std::string &timezone) {
  timezone_ = timezone;
  setBodyParameter(std::string("Timezone"), timezone);
}

std::string CreateWorkflowRequest::getDescription() const {
  return description_;
}

void CreateWorkflowRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateWorkflowRequest::getRegionId() const {
  return regionId_;
}

void CreateWorkflowRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateWorkflowRequest::getGroupId() const {
  return groupId_;
}

void CreateWorkflowRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string CreateWorkflowRequest::getTimeExpression() const {
  return timeExpression_;
}

void CreateWorkflowRequest::setTimeExpression(const std::string &timeExpression) {
  timeExpression_ = timeExpression;
  setBodyParameter(std::string("TimeExpression"), timeExpression);
}

std::string CreateWorkflowRequest::get_Namespace() const {
  return _namespace_;
}

void CreateWorkflowRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setBodyParameter(std::string("Namespace"), _namespace);
}

std::string CreateWorkflowRequest::getName() const {
  return name_;
}

void CreateWorkflowRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

int CreateWorkflowRequest::getMaxConcurrency() const {
  return maxConcurrency_;
}

void CreateWorkflowRequest::setMaxConcurrency(int maxConcurrency) {
  maxConcurrency_ = maxConcurrency;
  setBodyParameter(std::string("MaxConcurrency"), std::to_string(maxConcurrency));
}

int CreateWorkflowRequest::getTimeType() const {
  return timeType_;
}

void CreateWorkflowRequest::setTimeType(int timeType) {
  timeType_ = timeType;
  setBodyParameter(std::string("TimeType"), std::to_string(timeType));
}

