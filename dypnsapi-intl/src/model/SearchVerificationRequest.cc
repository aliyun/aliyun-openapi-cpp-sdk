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

#include <alibabacloud/dypnsapi-intl/model/SearchVerificationRequest.h>

using AlibabaCloud::Dypnsapi_intl::Model::SearchVerificationRequest;

SearchVerificationRequest::SearchVerificationRequest()
    : RpcServiceRequest("dypnsapi-intl", "2017-07-25", "SearchVerification") {
  setMethod(HttpRequest::Method::Post);
}

SearchVerificationRequest::~SearchVerificationRequest() {}

long SearchVerificationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SearchVerificationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SearchVerificationRequest::getCode() const {
  return code_;
}

void SearchVerificationRequest::setCode(const std::string &code) {
  code_ = code;
  setParameter(std::string("Code"), code);
}

std::string SearchVerificationRequest::getServiceSid() const {
  return serviceSid_;
}

void SearchVerificationRequest::setServiceSid(const std::string &serviceSid) {
  serviceSid_ = serviceSid;
  setParameter(std::string("ServiceSid"), serviceSid);
}

std::string SearchVerificationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SearchVerificationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long SearchVerificationRequest::getSendDate() const {
  return sendDate_;
}

void SearchVerificationRequest::setSendDate(long sendDate) {
  sendDate_ = sendDate;
  setParameter(std::string("SendDate"), std::to_string(sendDate));
}

long SearchVerificationRequest::getPageSize() const {
  return pageSize_;
}

void SearchVerificationRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchVerificationRequest::getRouteName() const {
  return routeName_;
}

void SearchVerificationRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string SearchVerificationRequest::getVerificationId() const {
  return verificationId_;
}

void SearchVerificationRequest::setVerificationId(const std::string &verificationId) {
  verificationId_ = verificationId;
  setParameter(std::string("VerificationId"), verificationId);
}

std::string SearchVerificationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SearchVerificationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SearchVerificationRequest::getCurrentPage() const {
  return currentPage_;
}

void SearchVerificationRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long SearchVerificationRequest::getOwnerId() const {
  return ownerId_;
}

void SearchVerificationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SearchVerificationRequest::getTo() const {
  return to_;
}

void SearchVerificationRequest::setTo(const std::string &to) {
  to_ = to;
  setParameter(std::string("To"), to);
}

