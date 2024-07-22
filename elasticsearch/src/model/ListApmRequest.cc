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

#include <alibabacloud/elasticsearch/model/ListApmRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListApmRequest;

ListApmRequest::ListApmRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/apm"};
  setMethod(HttpRequest::Method::Get);
}

ListApmRequest::~ListApmRequest() {}

std::string ListApmRequest::getOutput() const {
  return output_;
}

void ListApmRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("output"), output);
}

std::string ListApmRequest::getInstanceId() const {
  return instanceId_;
}

void ListApmRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

long ListApmRequest::getSize() const {
  return size_;
}

void ListApmRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

std::string ListApmRequest::getDescription() const {
  return description_;
}

void ListApmRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("description"), description);
}

long ListApmRequest::getPage() const {
  return page_;
}

void ListApmRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

