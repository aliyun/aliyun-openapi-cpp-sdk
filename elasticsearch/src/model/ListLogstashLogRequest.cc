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

#include <alibabacloud/elasticsearch/model/ListLogstashLogRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListLogstashLogRequest;

ListLogstashLogRequest::ListLogstashLogRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes/[InstanceId]/search-log"};
  setMethod(HttpRequest::Method::Get);
}

ListLogstashLogRequest::~ListLogstashLogRequest() {}

std::string ListLogstashLogRequest::getInstanceId() const {
  return instanceId_;
}

void ListLogstashLogRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListLogstashLogRequest::getSize() const {
  return size_;
}

void ListLogstashLogRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

std::string ListLogstashLogRequest::getQuery() const {
  return query_;
}

void ListLogstashLogRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("query"), query);
}

long ListLogstashLogRequest::getEndTime() const {
  return endTime_;
}

void ListLogstashLogRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

long ListLogstashLogRequest::getBeginTime() const {
  return beginTime_;
}

void ListLogstashLogRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("beginTime"), std::to_string(beginTime));
}

int ListLogstashLogRequest::getPage() const {
  return page_;
}

void ListLogstashLogRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListLogstashLogRequest::getType() const {
  return type_;
}

void ListLogstashLogRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

