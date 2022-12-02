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

#include <alibabacloud/live/model/ListMessageGroupUserRequest.h>

using AlibabaCloud::Live::Model::ListMessageGroupUserRequest;

ListMessageGroupUserRequest::ListMessageGroupUserRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListMessageGroupUser") {
  setMethod(HttpRequest::Method::Post);
}

ListMessageGroupUserRequest::~ListMessageGroupUserRequest() {}

int ListMessageGroupUserRequest::getSortType() const {
  return sortType_;
}

void ListMessageGroupUserRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setBodyParameter(std::string("SortType"), std::to_string(sortType));
}

int ListMessageGroupUserRequest::getPageNum() const {
  return pageNum_;
}

void ListMessageGroupUserRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setBodyParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListMessageGroupUserRequest::getPageSize() const {
  return pageSize_;
}

void ListMessageGroupUserRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMessageGroupUserRequest::getGroupId() const {
  return groupId_;
}

void ListMessageGroupUserRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string ListMessageGroupUserRequest::getAppId() const {
  return appId_;
}

void ListMessageGroupUserRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

