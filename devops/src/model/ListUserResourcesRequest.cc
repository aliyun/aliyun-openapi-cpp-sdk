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

#include <alibabacloud/devops/model/ListUserResourcesRequest.h>

using AlibabaCloud::Devops::Model::ListUserResourcesRequest;

ListUserResourcesRequest::ListUserResourcesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/v4/user/vision/user_resources"};
  setMethod(HttpRequest::Method::Get);
}

ListUserResourcesRequest::~ListUserResourcesRequest() {}

std::string ListUserResourcesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListUserResourcesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListUserResourcesRequest::getUserIds() const {
  return userIds_;
}

void ListUserResourcesRequest::setUserIds(const std::string &userIds) {
  userIds_ = userIds;
  setParameter(std::string("userIds"), userIds);
}

long ListUserResourcesRequest::getPageSize() const {
  return pageSize_;
}

void ListUserResourcesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListUserResourcesRequest::getAccessToken() const {
  return accessToken_;
}

void ListUserResourcesRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("accessToken"), accessToken);
}

long ListUserResourcesRequest::getPage() const {
  return page_;
}

void ListUserResourcesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

