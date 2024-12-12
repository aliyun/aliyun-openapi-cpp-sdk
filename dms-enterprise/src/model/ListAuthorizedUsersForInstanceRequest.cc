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

#include <alibabacloud/dms-enterprise/model/ListAuthorizedUsersForInstanceRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListAuthorizedUsersForInstanceRequest;

ListAuthorizedUsersForInstanceRequest::ListAuthorizedUsersForInstanceRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListAuthorizedUsersForInstance") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthorizedUsersForInstanceRequest::~ListAuthorizedUsersForInstanceRequest() {}

std::string ListAuthorizedUsersForInstanceRequest::getSearchKey() const {
  return searchKey_;
}

void ListAuthorizedUsersForInstanceRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string ListAuthorizedUsersForInstanceRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthorizedUsersForInstanceRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

long ListAuthorizedUsersForInstanceRequest::getTid() const {
  return tid_;
}

void ListAuthorizedUsersForInstanceRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListAuthorizedUsersForInstanceRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthorizedUsersForInstanceRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListAuthorizedUsersForInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void ListAuthorizedUsersForInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

