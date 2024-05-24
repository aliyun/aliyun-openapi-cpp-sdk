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

#include <alibabacloud/live/model/ListLiveMessageGroupsRequest.h>

using AlibabaCloud::Live::Model::ListLiveMessageGroupsRequest;

ListLiveMessageGroupsRequest::ListLiveMessageGroupsRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveMessageGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveMessageGroupsRequest::~ListLiveMessageGroupsRequest() {}

int ListLiveMessageGroupsRequest::getSortType() const {
  return sortType_;
}

void ListLiveMessageGroupsRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), std::to_string(sortType));
}

int ListLiveMessageGroupsRequest::getGroupStatus() const {
  return groupStatus_;
}

void ListLiveMessageGroupsRequest::setGroupStatus(int groupStatus) {
  groupStatus_ = groupStatus;
  setParameter(std::string("GroupStatus"), std::to_string(groupStatus));
}

long ListLiveMessageGroupsRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListLiveMessageGroupsRequest::setNextPageToken(long nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), std::to_string(nextPageToken));
}

std::string ListLiveMessageGroupsRequest::getDataCenter() const {
  return dataCenter_;
}

void ListLiveMessageGroupsRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string ListLiveMessageGroupsRequest::getAppId() const {
  return appId_;
}

void ListLiveMessageGroupsRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

