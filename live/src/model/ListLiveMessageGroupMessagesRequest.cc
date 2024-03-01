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

#include <alibabacloud/live/model/ListLiveMessageGroupMessagesRequest.h>

using AlibabaCloud::Live::Model::ListLiveMessageGroupMessagesRequest;

ListLiveMessageGroupMessagesRequest::ListLiveMessageGroupMessagesRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListLiveMessageGroupMessages") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveMessageGroupMessagesRequest::~ListLiveMessageGroupMessagesRequest() {}

int ListLiveMessageGroupMessagesRequest::getSortType() const {
  return sortType_;
}

void ListLiveMessageGroupMessagesRequest::setSortType(int sortType) {
  sortType_ = sortType;
  setParameter(std::string("SortType"), std::to_string(sortType));
}

long ListLiveMessageGroupMessagesRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListLiveMessageGroupMessagesRequest::setNextPageToken(long nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), std::to_string(nextPageToken));
}

int ListLiveMessageGroupMessagesRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveMessageGroupMessagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListLiveMessageGroupMessagesRequest::getMsgType() const {
  return msgType_;
}

void ListLiveMessageGroupMessagesRequest::setMsgType(long msgType) {
  msgType_ = msgType;
  setParameter(std::string("MsgType"), std::to_string(msgType));
}

std::string ListLiveMessageGroupMessagesRequest::getGroupId() const {
  return groupId_;
}

void ListLiveMessageGroupMessagesRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

long ListLiveMessageGroupMessagesRequest::getEndTime() const {
  return endTime_;
}

void ListLiveMessageGroupMessagesRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListLiveMessageGroupMessagesRequest::getBeginTime() const {
  return beginTime_;
}

void ListLiveMessageGroupMessagesRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string ListLiveMessageGroupMessagesRequest::getDataCenter() const {
  return dataCenter_;
}

void ListLiveMessageGroupMessagesRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string ListLiveMessageGroupMessagesRequest::getAppId() const {
  return appId_;
}

void ListLiveMessageGroupMessagesRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

