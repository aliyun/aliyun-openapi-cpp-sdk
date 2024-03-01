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

#include <alibabacloud/live/model/ListMuteGroupUserRequest.h>

using AlibabaCloud::Live::Model::ListMuteGroupUserRequest;

ListMuteGroupUserRequest::ListMuteGroupUserRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListMuteGroupUser") {
  setMethod(HttpRequest::Method::Post);
}

ListMuteGroupUserRequest::~ListMuteGroupUserRequest() {}

int ListMuteGroupUserRequest::getPageNum() const {
  return pageNum_;
}

void ListMuteGroupUserRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setBodyParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListMuteGroupUserRequest::getPageSize() const {
  return pageSize_;
}

void ListMuteGroupUserRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMuteGroupUserRequest::getOperatorUserId() const {
  return operatorUserId_;
}

void ListMuteGroupUserRequest::setOperatorUserId(const std::string &operatorUserId) {
  operatorUserId_ = operatorUserId;
  setBodyParameter(std::string("OperatorUserId"), operatorUserId);
}

std::string ListMuteGroupUserRequest::getGroupId() const {
  return groupId_;
}

void ListMuteGroupUserRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string ListMuteGroupUserRequest::getAppId() const {
  return appId_;
}

void ListMuteGroupUserRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setBodyParameter(std::string("AppId"), appId);
}

