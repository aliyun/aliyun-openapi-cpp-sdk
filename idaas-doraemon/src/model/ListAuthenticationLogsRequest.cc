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

#include <alibabacloud/idaas-doraemon/model/ListAuthenticationLogsRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::ListAuthenticationLogsRequest;

ListAuthenticationLogsRequest::ListAuthenticationLogsRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "ListAuthenticationLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthenticationLogsRequest::~ListAuthenticationLogsRequest() {}

long ListAuthenticationLogsRequest::getToTime() const {
  return toTime_;
}

void ListAuthenticationLogsRequest::setToTime(long toTime) {
  toTime_ = toTime;
  setParameter(std::string("ToTime"), std::to_string(toTime));
}

std::string ListAuthenticationLogsRequest::getUserId() const {
  return userId_;
}

void ListAuthenticationLogsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ListAuthenticationLogsRequest::getLogTag() const {
  return logTag_;
}

void ListAuthenticationLogsRequest::setLogTag(const std::string &logTag) {
  logTag_ = logTag;
  setParameter(std::string("LogTag"), logTag);
}

long ListAuthenticationLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthenticationLogsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListAuthenticationLogsRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthenticationLogsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAuthenticationLogsRequest::getCredentialId() const {
  return credentialId_;
}

void ListAuthenticationLogsRequest::setCredentialId(const std::string &credentialId) {
  credentialId_ = credentialId;
  setParameter(std::string("CredentialId"), credentialId);
}

long ListAuthenticationLogsRequest::getFromTime() const {
  return fromTime_;
}

void ListAuthenticationLogsRequest::setFromTime(long fromTime) {
  fromTime_ = fromTime;
  setParameter(std::string("FromTime"), std::to_string(fromTime));
}

std::string ListAuthenticationLogsRequest::getAuthenticatorUuid() const {
  return authenticatorUuid_;
}

void ListAuthenticationLogsRequest::setAuthenticatorUuid(const std::string &authenticatorUuid) {
  authenticatorUuid_ = authenticatorUuid;
  setParameter(std::string("AuthenticatorUuid"), authenticatorUuid);
}

std::string ListAuthenticationLogsRequest::getAuthenticatorType() const {
  return authenticatorType_;
}

void ListAuthenticationLogsRequest::setAuthenticatorType(const std::string &authenticatorType) {
  authenticatorType_ = authenticatorType;
  setParameter(std::string("AuthenticatorType"), authenticatorType);
}

std::string ListAuthenticationLogsRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void ListAuthenticationLogsRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

