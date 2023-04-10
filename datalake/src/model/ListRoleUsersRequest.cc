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

#include <alibabacloud/datalake/model/ListRoleUsersRequest.h>

using AlibabaCloud::DataLake::Model::ListRoleUsersRequest;

ListRoleUsersRequest::ListRoleUsersRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/auth/roles/roleusers"};
  setMethod(HttpRequest::Method::Get);
}

ListRoleUsersRequest::~ListRoleUsersRequest() {}

std::string ListRoleUsersRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListRoleUsersRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListRoleUsersRequest::getRoleName() const {
  return roleName_;
}

void ListRoleUsersRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setParameter(std::string("RoleName"), roleName);
}

int ListRoleUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListRoleUsersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListRoleUsersRequest::getUserNamePattern() const {
  return userNamePattern_;
}

void ListRoleUsersRequest::setUserNamePattern(const std::string &userNamePattern) {
  userNamePattern_ = userNamePattern;
  setParameter(std::string("UserNamePattern"), userNamePattern);
}

