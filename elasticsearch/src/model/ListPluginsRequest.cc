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

#include <alibabacloud/elasticsearch/model/ListPluginsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListPluginsRequest;

ListPluginsRequest::ListPluginsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/plugins"};
  setMethod(HttpRequest::Method::Get);
}

ListPluginsRequest::~ListPluginsRequest() {}

string ListPluginsRequest::getInstanceId() const {
  return instanceId_;
}

void ListPluginsRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

integer ListPluginsRequest::getSize() const {
  return size_;
}

void ListPluginsRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListPluginsRequest::getName() const {
  return name_;
}

void ListPluginsRequest::setName(string name) {
  name_ = name;
  setParameter(std::string("name"), std::to_string(name));
}

string ListPluginsRequest::getPage() const {
  return page_;
}

void ListPluginsRequest::setPage(string page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

string ListPluginsRequest::getSource() const {
  return source_;
}

void ListPluginsRequest::setSource(string source) {
  source_ = source;
  setParameter(std::string("source"), std::to_string(source));
}

