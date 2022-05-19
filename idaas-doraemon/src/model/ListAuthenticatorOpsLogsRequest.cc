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

#include <alibabacloud/idaas-doraemon/model/ListAuthenticatorOpsLogsRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ListAuthenticatorOpsLogsRequest;

ListAuthenticatorOpsLogsRequest::ListAuthenticatorOpsLogsRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ListAuthenticatorOpsLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthenticatorOpsLogsRequest::~ListAuthenticatorOpsLogsRequest() {}

long ListAuthenticatorOpsLogsRequest::getToTime() const {
  return toTime_;
}

void ListAuthenticatorOpsLogsRequest::setToTime(long toTime) {
  toTime_ = toTime;
  setParameter(std::string("ToTime"), std::to_string(toTime));
}

std::string ListAuthenticatorOpsLogsRequest::getUserId() const {
  return userId_;
}

void ListAuthenticatorOpsLogsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long ListAuthenticatorOpsLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthenticatorOpsLogsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListAuthenticatorOpsLogsRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthenticatorOpsLogsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListAuthenticatorOpsLogsRequest::getFromTime() const {
  return fromTime_;
}

void ListAuthenticatorOpsLogsRequest::setFromTime(long fromTime) {
  fromTime_ = fromTime;
  setParameter(std::string("FromTime"), std::to_string(fromTime));
}

std::string ListAuthenticatorOpsLogsRequest::getAuthenticatorUuid() const {
  return authenticatorUuid_;
}

void ListAuthenticatorOpsLogsRequest::setAuthenticatorUuid(const std::string &authenticatorUuid) {
  authenticatorUuid_ = authenticatorUuid;
  setParameter(std::string("AuthenticatorUuid"), authenticatorUuid);
}

std::string ListAuthenticatorOpsLogsRequest::getAuthenticatorType() const {
  return authenticatorType_;
}

void ListAuthenticatorOpsLogsRequest::setAuthenticatorType(const std::string &authenticatorType) {
  authenticatorType_ = authenticatorType;
  setParameter(std::string("AuthenticatorType"), authenticatorType);
}

std::string ListAuthenticatorOpsLogsRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void ListAuthenticatorOpsLogsRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

