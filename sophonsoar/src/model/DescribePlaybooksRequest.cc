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

#include <alibabacloud/sophonsoar/model/DescribePlaybooksRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribePlaybooksRequest;

DescribePlaybooksRequest::DescribePlaybooksRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribePlaybooks") {
  setMethod(HttpRequest::Method::Get);
}

DescribePlaybooksRequest::~DescribePlaybooksRequest() {}

std::string DescribePlaybooksRequest::getRoleFor() const {
  return roleFor_;
}

void DescribePlaybooksRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

long DescribePlaybooksRequest::getEndMillis() const {
  return endMillis_;
}

void DescribePlaybooksRequest::setEndMillis(long endMillis) {
  endMillis_ = endMillis;
  setParameter(std::string("EndMillis"), std::to_string(endMillis));
}

long DescribePlaybooksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribePlaybooksRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribePlaybooksRequest::getPlaybookUuids() const {
  return playbookUuids_;
}

void DescribePlaybooksRequest::setPlaybookUuids(const std::string &playbookUuids) {
  playbookUuids_ = playbookUuids;
  setParameter(std::string("PlaybookUuids"), playbookUuids);
}

int DescribePlaybooksRequest::getPageSize() const {
  return pageSize_;
}

void DescribePlaybooksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePlaybooksRequest::getRoleType() const {
  return roleType_;
}

void DescribePlaybooksRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribePlaybooksRequest::getLang() const {
  return lang_;
}

void DescribePlaybooksRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribePlaybooksRequest::getOrder() const {
  return order_;
}

void DescribePlaybooksRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribePlaybooksRequest::getParamTypes() const {
  return paramTypes_;
}

void DescribePlaybooksRequest::setParamTypes(const std::string &paramTypes) {
  paramTypes_ = paramTypes;
  setParameter(std::string("ParamTypes"), paramTypes);
}

int DescribePlaybooksRequest::getActive() const {
  return active_;
}

void DescribePlaybooksRequest::setActive(int active) {
  active_ = active;
  setParameter(std::string("Active"), std::to_string(active));
}

std::string DescribePlaybooksRequest::getOwnType() const {
  return ownType_;
}

void DescribePlaybooksRequest::setOwnType(const std::string &ownType) {
  ownType_ = ownType;
  setParameter(std::string("OwnType"), ownType);
}

std::string DescribePlaybooksRequest::getSort() const {
  return sort_;
}

void DescribePlaybooksRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

long DescribePlaybooksRequest::getStartMillis() const {
  return startMillis_;
}

void DescribePlaybooksRequest::setStartMillis(long startMillis) {
  startMillis_ = startMillis;
  setParameter(std::string("StartMillis"), std::to_string(startMillis));
}

std::string DescribePlaybooksRequest::getPlaybookUuid() const {
  return playbookUuid_;
}

void DescribePlaybooksRequest::setPlaybookUuid(const std::string &playbookUuid) {
  playbookUuid_ = playbookUuid;
  setParameter(std::string("PlaybookUuid"), playbookUuid);
}

std::string DescribePlaybooksRequest::getName() const {
  return name_;
}

void DescribePlaybooksRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

