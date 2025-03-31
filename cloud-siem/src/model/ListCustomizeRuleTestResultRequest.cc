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

#include <alibabacloud/cloud-siem/model/ListCustomizeRuleTestResultRequest.h>

using AlibabaCloud::Cloud_siem::Model::ListCustomizeRuleTestResultRequest;

ListCustomizeRuleTestResultRequest::ListCustomizeRuleTestResultRequest()
    : RpcServiceRequest("cloud-siem", "2022-06-16", "ListCustomizeRuleTestResult") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomizeRuleTestResultRequest::~ListCustomizeRuleTestResultRequest() {}

long ListCustomizeRuleTestResultRequest::getRoleFor() const {
  return roleFor_;
}

void ListCustomizeRuleTestResultRequest::setRoleFor(long roleFor) {
  roleFor_ = roleFor;
  setBodyParameter(std::string("RoleFor"), std::to_string(roleFor));
}

long ListCustomizeRuleTestResultRequest::getStartTime() const {
  return startTime_;
}

void ListCustomizeRuleTestResultRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListCustomizeRuleTestResultRequest::getVerifyType() const {
  return verifyType_;
}

void ListCustomizeRuleTestResultRequest::setVerifyType(const std::string &verifyType) {
  verifyType_ = verifyType;
  setBodyParameter(std::string("VerifyType"), verifyType);
}

std::string ListCustomizeRuleTestResultRequest::getRegionId() const {
  return regionId_;
}

void ListCustomizeRuleTestResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

int ListCustomizeRuleTestResultRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomizeRuleTestResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListCustomizeRuleTestResultRequest::getRoleType() const {
  return roleType_;
}

void ListCustomizeRuleTestResultRequest::setRoleType(int roleType) {
  roleType_ = roleType;
  setBodyParameter(std::string("RoleType"), std::to_string(roleType));
}

long ListCustomizeRuleTestResultRequest::getId() const {
  return id_;
}

void ListCustomizeRuleTestResultRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

long ListCustomizeRuleTestResultRequest::getEndTime() const {
  return endTime_;
}

void ListCustomizeRuleTestResultRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

int ListCustomizeRuleTestResultRequest::getCurrentPage() const {
  return currentPage_;
}

void ListCustomizeRuleTestResultRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListCustomizeRuleTestResultRequest::getDetectionRuleId() const {
  return detectionRuleId_;
}

void ListCustomizeRuleTestResultRequest::setDetectionRuleId(const std::string &detectionRuleId) {
  detectionRuleId_ = detectionRuleId;
  setBodyParameter(std::string("DetectionRuleId"), detectionRuleId);
}

