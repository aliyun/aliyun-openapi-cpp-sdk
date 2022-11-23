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

#include <alibabacloud/dms-enterprise/model/ListInstanceUserPermissionsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListInstanceUserPermissionsRequest;

ListInstanceUserPermissionsRequest::ListInstanceUserPermissionsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListInstanceUserPermissions") {
  setMethod(HttpRequest::Method::Post);
}

ListInstanceUserPermissionsRequest::~ListInstanceUserPermissionsRequest() {}

long ListInstanceUserPermissionsRequest::getTid() const {
  return tid_;
}

void ListInstanceUserPermissionsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListInstanceUserPermissionsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstanceUserPermissionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListInstanceUserPermissionsRequest::getPageSize() const {
  return pageSize_;
}

void ListInstanceUserPermissionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInstanceUserPermissionsRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstanceUserPermissionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListInstanceUserPermissionsRequest::getUserName() const {
  return userName_;
}

void ListInstanceUserPermissionsRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

