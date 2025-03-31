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

#include <alibabacloud/cloud-siem/model/ListAutomateResponseConfigsRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListAutomateResponseConfigsRequest;

ListAutomateResponseConfigsRequest::ListAutomateResponseConfigsRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListAutomateResponseConfigs") {
  setMethod(HttpRequest::Method::Post);
}

ListAutomateResponseConfigsRequest::~ListAutomateResponseConfigsRequest() {}

std::string ListAutomateResponseConfigsRequest::getActionType() const {
  return actionType_;
}

void ListAutomateResponseConfigsRequest::setActionType(const std::string &actionType) {
  actionType_ = actionType;
  setBodyParameter(std::string("ActionType"), actionType);
}

long ListAutomateResponseConfigsRequest::getRoleFor() const {
  return roleFor_;
}

void ListAutomateResponseConfigsRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

std::string ListAutomateResponseConfigsRequest::getRuleName() const {
  return ruleName_;
}

void ListAutomateResponseConfigsRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

long ListAutomateResponseConfigsRequest::getSubUserId() const {
  return subUserId_;
}

void ListAutomateResponseConfigsRequest::setSubUserId(long subUserId) {
  subUserId_ = subUserId;
  setBodyParameter(std::string("SubUserId"), std::to_string(subUserId));
}

std::string ListAutomateResponseConfigsRequest::getRegionId() const {
  return regionId_;
}

void ListAutomateResponseConfigsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListAutomateResponseConfigsRequest::getPageSize() const {
  return pageSize_;
}

void ListAutomateResponseConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAutomateResponseConfigsRequest::getAutoResponseType() const {
  return autoResponseType_;
}

void ListAutomateResponseConfigsRequest::setAutoResponseType(const std::string &autoResponseType) {
  autoResponseType_ = autoResponseType;
  setBodyParameter(std::string("AutoResponseType"), autoResponseType);
}

int ListAutomateResponseConfigsRequest::getRoleType() const {
  return roleType_;
}

void ListAutomateResponseConfigsRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long ListAutomateResponseConfigsRequest::getId() const {
  return id_;
}

void ListAutomateResponseConfigsRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

int ListAutomateResponseConfigsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListAutomateResponseConfigsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListAutomateResponseConfigsRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void ListAutomateResponseConfigsRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setBodyParameter(std::string("PlaybookUuid"), playbookUuid);
}

int ListAutomateResponseConfigsRequest::getStatus() const {
  return status_;
}

void ListAutomateResponseConfigsRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

