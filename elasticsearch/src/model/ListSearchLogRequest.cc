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

#include <alibabacloud/elasticsearch/model/ListSearchLogRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListSearchLogRequest;

ListSearchLogRequest::ListSearchLogRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/search-log"};
  setMethod(HttpRequest::Method::Get);
}

ListSearchLogRequest::~ListSearchLogRequest() {}

std::string ListSearchLogRequest::getInstanceId() const {
  return instanceId_;
}

void ListSearchLogRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListSearchLogRequest::getSize() const {
  return size_;
}

void ListSearchLogRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

std::string ListSearchLogRequest::getQuery() const {
  return query_;
}

void ListSearchLogRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("query"), query);
}

long ListSearchLogRequest::getEndTime() const {
  return endTime_;
}

void ListSearchLogRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

long ListSearchLogRequest::getBeginTime() const {
  return beginTime_;
}

void ListSearchLogRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("beginTime"), std::to_string(beginTime));
}

int ListSearchLogRequest::getPage() const {
  return page_;
}

void ListSearchLogRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListSearchLogRequest::getType() const {
  return type_;
}

void ListSearchLogRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

