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

#include <alibabacloud/live/model/ListMessageRequest.h>

using AlibabaCloud::Live::Model::ListMessageRequest;

ListMessageRequest::ListMessageRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListMessage") {
  setMethod(HttpRequest::Method::Post);
}

ListMessageRequest::~ListMessageRequest() {}

int ListMessageRequest::getSortType() const {
  return sortType_;
}

void ListMessageRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setBodyParameter(std::string("SortType"), std::to_string(sortType));
}

int ListMessageRequest::getType() const {
  return type_;
}

void ListMessageRequest::setType(int type) {
  type_ = type;
  setBodyParameter(std::string("Type"), std::to_string(type));
}

int ListMessageRequest::getPageNum() const {
  return pageNum_;
}

void ListMessageRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setBodyParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListMessageRequest::getPageSize() const {
  return pageSize_;
}

void ListMessageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMessageRequest::getGroupId() const {
  return groupId_;
}

void ListMessageRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string ListMessageRequest::getAppId() const {
  return appId_;
}

void ListMessageRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

