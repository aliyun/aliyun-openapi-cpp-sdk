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

#include <alibabacloud/elasticsearch/model/ListCollectorsRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListCollectorsRequest;

ListCollectorsRequest::ListCollectorsRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/collectors"};
  setMethod(HttpRequest::Method::Get);
}

ListCollectorsRequest::~ListCollectorsRequest() {}

string ListCollectorsRequest::getInstanceId() const {
  return instanceId_;
}

void ListCollectorsRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), std::to_string(instanceId));
}

integer ListCollectorsRequest::getSize() const {
  return size_;
}

void ListCollectorsRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListCollectorsRequest::getName() const {
  return name_;
}

void ListCollectorsRequest::setName(string name) {
  name_ = name;
  setParameter(std::string("name"), std::to_string(name));
}

string ListCollectorsRequest::getSourceType() const {
  return sourceType_;
}

void ListCollectorsRequest::setSourceType(string sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("sourceType"), std::to_string(sourceType));
}

integer ListCollectorsRequest::getPage() const {
  return page_;
}

void ListCollectorsRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

string ListCollectorsRequest::getResId() const {
  return resId_;
}

void ListCollectorsRequest::setResId(string resId) {
  resId_ = resId;
  setParameter(std::string("resId"), std::to_string(resId));
}

