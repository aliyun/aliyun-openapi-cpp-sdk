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

#include <alibabacloud/voicenavigator/model/ListConversationsRequest.h>

using AlibabaCloud::VoiceNavigator::Model::ListConversationsRequest;

ListConversationsRequest::ListConversationsRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "ListConversations") {
  setMethod(HttpRequest::Method::Get);
}

ListConversationsRequest::~ListConversationsRequest() {}

long ListConversationsRequest::getBeginTimeLeftRange() const {
  return beginTimeLeftRange_;
}

void ListConversationsRequest::setBeginTimeLeftRange(long beginTimeLeftRange) {
  beginTimeLeftRange_ = beginTimeLeftRange;
  setParameter(std::string("BeginTimeLeftRange"), std::to_string(beginTimeLeftRange));
}

std::string ListConversationsRequest::getQuery() const {
  return query_;
}

void ListConversationsRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

int ListConversationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListConversationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListConversationsRequest::getResult() const {
  return result_;
}

void ListConversationsRequest::setResult(long result) {
  result_ = result;
  setParameter(std::string("Result"), std::to_string(result));
}

std::string ListConversationsRequest::getCallingNumber() const {
  return callingNumber_;
}

void ListConversationsRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string ListConversationsRequest::getInstanceId() const {
  return instanceId_;
}

void ListConversationsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListConversationsRequest::getBeginTimeRightRange() const {
  return beginTimeRightRange_;
}

void ListConversationsRequest::setBeginTimeRightRange(long beginTimeRightRange) {
  beginTimeRightRange_ = beginTimeRightRange;
  setParameter(std::string("BeginTimeRightRange"), std::to_string(beginTimeRightRange));
}

std::string ListConversationsRequest::getIsSandBox() const {
  return isSandBox_;
}

void ListConversationsRequest::setIsSandBox(const std::string &isSandBox) {
  isSandBox_ = isSandBox;
  setParameter(std::string("IsSandBox"), isSandBox);
}

int ListConversationsRequest::getPageSize() const {
  return pageSize_;
}

void ListConversationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

