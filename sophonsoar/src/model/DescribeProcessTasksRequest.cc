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

#include <alibabacloud/sophonsoar/model/DescribeProcessTasksRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeProcessTasksRequest;

DescribeProcessTasksRequest::DescribeProcessTasksRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeProcessTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProcessTasksRequest::~DescribeProcessTasksRequest() {}

std::string DescribeProcessTasksRequest::getEntityKey() const {
  return entityKey_;
}

void DescribeProcessTasksRequest::setEntityKey(const std::string &entityKey) {
  entityKey_ = entityKey;
  setParameter(std::string("EntityKey"), entityKey);
}

std::string DescribeProcessTasksRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeProcessTasksRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeProcessTasksRequest::getEntityName() const {
  return entityName_;
}

void DescribeProcessTasksRequest::setEntityName(const std::string &entityName) {
  entityName_ = entityName;
  setParameter(std::string("EntityName"), entityName);
}

std::string DescribeProcessTasksRequest::getTaskName() const {
  return taskName_;
}

void DescribeProcessTasksRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string DescribeProcessTasksRequest::getYunCode() const {
  return yunCode_;
}

void DescribeProcessTasksRequest::setYunCode(const std::string &yunCode) {
  yunCode_ = yunCode;
  setParameter(std::string("YunCode"), yunCode);
}

std::string DescribeProcessTasksRequest::getSource() const {
  return source_;
}

void DescribeProcessTasksRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

long DescribeProcessTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeProcessTasksRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeProcessTasksRequest::getTaskStatus() const {
  return taskStatus_;
}

void DescribeProcessTasksRequest::setTaskStatus(const std::string &taskStatus) {
  taskStatus_ = taskStatus;
  setParameter(std::string("TaskStatus"), taskStatus);
}

long DescribeProcessTasksRequest::getProcessRemoveEnd() const {
  return processRemoveEnd_;
}

void DescribeProcessTasksRequest::setProcessRemoveEnd(long processRemoveEnd) {
  processRemoveEnd_ = processRemoveEnd;
  setParameter(std::string("ProcessRemoveEnd"), std::to_string(processRemoveEnd));
}

std::string DescribeProcessTasksRequest::getParamContent() const {
  return paramContent_;
}

void DescribeProcessTasksRequest::setParamContent(const std::string &paramContent) {
  paramContent_ = paramContent;
  setParameter(std::string("ParamContent"), paramContent);
}

std::string DescribeProcessTasksRequest::getScope() const {
  return scope_;
}

void DescribeProcessTasksRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int DescribeProcessTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeProcessTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeProcessTasksRequest::getTriggerSource() const {
  return triggerSource_;
}

void DescribeProcessTasksRequest::setTriggerSource(const std::string &triggerSource) {
  triggerSource_ = triggerSource;
  setParameter(std::string("TriggerSource"), triggerSource);
}

long DescribeProcessTasksRequest::getProcessRemoveStart() const {
  return processRemoveStart_;
}

void DescribeProcessTasksRequest::setProcessRemoveStart(long processRemoveStart) {
  processRemoveStart_ = processRemoveStart;
  setParameter(std::string("ProcessRemoveStart"), std::to_string(processRemoveStart));
}

std::string DescribeProcessTasksRequest::getRoleType() const {
  return roleType_;
}

void DescribeProcessTasksRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeProcessTasksRequest::getLang() const {
  return lang_;
}

void DescribeProcessTasksRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeProcessTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeProcessTasksRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeProcessTasksRequest::getOrderField() const {
  return orderField_;
}

void DescribeProcessTasksRequest::setOrderField(const std::string &orderField) {
  orderField_ = orderField;
  setParameter(std::string("OrderField"), orderField);
}

std::string DescribeProcessTasksRequest::getDirection() const {
  return direction_;
}

void DescribeProcessTasksRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::string DescribeProcessTasksRequest::getSceneCode() const {
  return sceneCode_;
}

void DescribeProcessTasksRequest::setSceneCode(const std::string &sceneCode) {
  sceneCode_ = sceneCode;
  setParameter(std::string("SceneCode"), sceneCode);
}

long DescribeProcessTasksRequest::getProcessActionStart() const {
  return processActionStart_;
}

void DescribeProcessTasksRequest::setProcessActionStart(long processActionStart) {
  processActionStart_ = processActionStart;
  setParameter(std::string("ProcessActionStart"), std::to_string(processActionStart));
}

long DescribeProcessTasksRequest::getProcessActionEnd() const {
  return processActionEnd_;
}

void DescribeProcessTasksRequest::setProcessActionEnd(long processActionEnd) {
  processActionEnd_ = processActionEnd;
  setParameter(std::string("ProcessActionEnd"), std::to_string(processActionEnd));
}

std::string DescribeProcessTasksRequest::getProcessStrategyUuid() const {
  return processStrategyUuid_;
}

void DescribeProcessTasksRequest::setProcessStrategyUuid(const std::string &processStrategyUuid) {
  processStrategyUuid_ = processStrategyUuid;
  setParameter(std::string("ProcessStrategyUuid"), processStrategyUuid);
}

std::string DescribeProcessTasksRequest::getEntityType() const {
  return entityType_;
}

void DescribeProcessTasksRequest::setEntityType(const std::string &entityType) {
  entityType_ = entityType;
  setParameter(std::string("EntityType"), entityType);
}

std::string DescribeProcessTasksRequest::getEntityUuid() const {
  return entityUuid_;
}

void DescribeProcessTasksRequest::setEntityUuid(const std::string &entityUuid) {
  entityUuid_ = entityUuid;
  setParameter(std::string("EntityUuid"), entityUuid);
}

std::string DescribeProcessTasksRequest::getEventUuid() const {
  return eventUuid_;
}

void DescribeProcessTasksRequest::setEventUuid(const std::string &eventUuid) {
  eventUuid_ = eventUuid;
  setParameter(std::string("EventUuid"), eventUuid);
}

