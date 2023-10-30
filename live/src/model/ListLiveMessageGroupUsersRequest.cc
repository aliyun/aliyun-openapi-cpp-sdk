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

#include <alibabacloud/live/model/ListLiveMessageGroupUsersRequest.h>

using AlibabaCloud::Live::Model::ListLiveMessageGroupUsersRequest;

ListLiveMessageGroupUsersRequest::ListLiveMessageGroupUsersRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveMessageGroupUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveMessageGroupUsersRequest::~ListLiveMessageGroupUsersRequest() {}

int ListLiveMessageGroupUsersRequest::getSortType() const {
  return sortType_;
}

void ListLiveMessageGroupUsersRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), std::to_string(sortType));
}

long ListLiveMessageGroupUsersRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListLiveMessageGroupUsersRequest::setNextPageToken(long nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), std::to_string(nextPageToken));
}

std::string ListLiveMessageGroupUsersRequest::getGroupId() const {
  return groupId_;
}

void ListLiveMessageGroupUsersRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string ListLiveMessageGroupUsersRequest::getDataCenter() const {
  return dataCenter_;
}

void ListLiveMessageGroupUsersRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string ListLiveMessageGroupUsersRequest::getAppId() const {
  return appId_;
}

void ListLiveMessageGroupUsersRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int ListLiveMessageGroupUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveMessageGroupUsersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

