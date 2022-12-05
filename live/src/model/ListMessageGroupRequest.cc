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

#include <alibabacloud/live/model/ListMessageGroupRequest.h>

using AlibabaCloud::Live::Model::ListMessageGroupRequest;

ListMessageGroupRequest::ListMessageGroupRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListMessageGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListMessageGroupRequest::~ListMessageGroupRequest() {}

int ListMessageGroupRequest::getSortType() const {
  return sortType_;
}

void ListMessageGroupRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setBodyParameter(std::string("SortType"), std::to_string(sortType));
}

int ListMessageGroupRequest::getPageNum() const {
  return pageNum_;
}

void ListMessageGroupRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setBodyParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListMessageGroupRequest::getUserId() const {
  return userId_;
}

void ListMessageGroupRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

int ListMessageGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListMessageGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMessageGroupRequest::getAppId() const {
  return appId_;
}

void ListMessageGroupRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

