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

#include <alibabacloud/mns-open/model/ListTopicRequest.h>

using AlibabaCloud::Mns_open::Model::ListTopicRequest;

ListTopicRequest::ListTopicRequest()
    : RpcServiceRequest("mns-open", "2022-01-19", "ListTopic") {
  setMethod(HttpRequest::Method::Post);
}

ListTopicRequest::~ListTopicRequest() {}

std::string ListTopicRequest::getTopicName() const {
  return topicName_;
}

void ListTopicRequest::setTopicName(const std::string &topicName) {
  topicName_ = topicName;
  setParameter(std::string("TopicName"), topicName);
}

long ListTopicRequest::getPageNum() const {
  return pageNum_;
}

void ListTopicRequest::setPageNum(long pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long ListTopicRequest::getPageSize() const {
  return pageSize_;
}

void ListTopicRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

