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

#include <alibabacloud/arms/model/SearchAlertContactRequest.h>

using AlibabaCloud::ARMS::Model::SearchAlertContactRequest;

SearchAlertContactRequest::SearchAlertContactRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SearchAlertContact") {
  setMethod(HttpRequest::Method::Post);
}

SearchAlertContactRequest::~SearchAlertContactRequest() {}

std::string SearchAlertContactRequest::getCurrentPage() const {
  return currentPage_;
}

void SearchAlertContactRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

std::string SearchAlertContactRequest::getProxyUserId() const {
  return proxyUserId_;
}

void SearchAlertContactRequest::setProxyUserId(const std::string &proxyUserId) {
  proxyUserId_ = proxyUserId;
  setParameter(std::string("ProxyUserId"), proxyUserId);
}

std::string SearchAlertContactRequest::getContactIds() const {
  return contactIds_;
}

void SearchAlertContactRequest::setContactIds(const std::string &contactIds) {
  contactIds_ = contactIds;
  setParameter(std::string("ContactIds"), contactIds);
}

std::string SearchAlertContactRequest::getContactName() const {
  return contactName_;
}

void SearchAlertContactRequest::setContactName(const std::string &contactName) {
  contactName_ = contactName;
  setParameter(std::string("ContactName"), contactName);
}

std::string SearchAlertContactRequest::getPhone() const {
  return phone_;
}

void SearchAlertContactRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setParameter(std::string("Phone"), phone);
}

std::string SearchAlertContactRequest::getRegionId() const {
  return regionId_;
}

void SearchAlertContactRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SearchAlertContactRequest::getPageSize() const {
  return pageSize_;
}

void SearchAlertContactRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string SearchAlertContactRequest::getEmail() const {
  return email_;
}

void SearchAlertContactRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

