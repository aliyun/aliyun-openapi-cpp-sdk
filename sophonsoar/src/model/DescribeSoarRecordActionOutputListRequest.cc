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

#include <alibabacloud/sophonsoar/model/DescribeSoarRecordActionOutputListRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeSoarRecordActionOutputListRequest;

DescribeSoarRecordActionOutputListRequest::DescribeSoarRecordActionOutputListRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeSoarRecordActionOutputList") {
  setMethod(HttpRequest::Method::Get);
}

DescribeSoarRecordActionOutputListRequest::~DescribeSoarRecordActionOutputListRequest() {}

std::string DescribeSoarRecordActionOutputListRequest::getActionUuid() const {
  return actionUuid_;
}

void DescribeSoarRecordActionOutputListRequest::setActionUuid(const std::string &actionUuid) {
  actionUuid_ = actionUuid;
  setParameter(std::string("ActionUuid"), actionUuid);
}

std::string DescribeSoarRecordActionOutputListRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeSoarRecordActionOutputListRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

int DescribeSoarRecordActionOutputListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSoarRecordActionOutputListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeSoarRecordActionOutputListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSoarRecordActionOutputListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSoarRecordActionOutputListRequest::getRoleType() const {
  return roleType_;
}

void DescribeSoarRecordActionOutputListRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeSoarRecordActionOutputListRequest::getQueryValue() const {
  return queryValue_;
}

void DescribeSoarRecordActionOutputListRequest::setQueryValue(const std::string &queryValue) {
  queryValue_ = queryValue;
  setParameter(std::string("QueryValue"), queryValue);
}

std::string DescribeSoarRecordActionOutputListRequest::getLang() const {
  return lang_;
}

void DescribeSoarRecordActionOutputListRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

