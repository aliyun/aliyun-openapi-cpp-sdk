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

string ListLogstashLogRequest::getInstanceId() const {
  return instanceId_;
}

void ListLogstashLogRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

integer ListLogstashLogRequest::getSize() const {
  return size_;
}

void ListLogstashLogRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListLogstashLogRequest::getQuery() const {
  return query_;
}

void ListLogstashLogRequest::setQuery(string query) {
  query_ = query;
  setParameter(std::string("query"), std::to_string(query));
}

integer ListLogstashLogRequest::getEndTime() const {
  return endTime_;
}

void ListLogstashLogRequest::setEndTime(integer endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

integer ListLogstashLogRequest::getBeginTime() const {
  return beginTime_;
}

void ListLogstashLogRequest::setBeginTime(integer beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("beginTime"), std::to_string(beginTime));
}

integer ListLogstashLogRequest::getPage() const {
  return page_;
}

void ListLogstashLogRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

string ListLogstashLogRequest::getType() const {
  return type_;
}

void ListLogstashLogRequest::setType(string type) {
  type_ = type;
  setParameter(std::string("type"), std::to_string(type));
}

