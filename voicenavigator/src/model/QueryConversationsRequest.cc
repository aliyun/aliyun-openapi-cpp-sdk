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

#include <alibabacloud/voicenavigator/model/QueryConversationsRequest.h>

using AlibabaCloud::VoiceNavigator::Model::QueryConversationsRequest;

QueryConversationsRequest::QueryConversationsRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "QueryConversations") {
  setMethod(HttpRequest::Method::Get);
}

QueryConversationsRequest::~QueryConversationsRequest() {}

long QueryConversationsRequest::getBeginTimeLeftRange() const {
  return beginTimeLeftRange_;
}

void QueryConversationsRequest::setBeginTimeLeftRange(long beginTimeLeftRange) {
  beginTimeLeftRange_ = beginTimeLeftRange;
  setParameter(std::string("BeginTimeLeftRange"), std::to_string(beginTimeLeftRange));
}

int QueryConversationsRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryConversationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string QueryConversationsRequest::getCallingNumber() const {
  return callingNumber_;
}

void QueryConversationsRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string QueryConversationsRequest::getInstanceId() const {
  return instanceId_;
}

void QueryConversationsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long QueryConversationsRequest::getBeginTimeRightRange() const {
  return beginTimeRightRange_;
}

void QueryConversationsRequest::setBeginTimeRightRange(long beginTimeRightRange) {
  beginTimeRightRange_ = beginTimeRightRange;
  setParameter(std::string("BeginTimeRightRange"), std::to_string(beginTimeRightRange));
}

int QueryConversationsRequest::getPageSize() const {
  return pageSize_;
}

void QueryConversationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

