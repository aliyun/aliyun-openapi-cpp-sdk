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

#include <alibabacloud/elasticsearch/model/ListIndexTemplatesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListIndexTemplatesRequest;

ListIndexTemplatesRequest::ListIndexTemplatesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/index-templates"};
  setMethod(HttpRequest::Method::Get);
}

ListIndexTemplatesRequest::~ListIndexTemplatesRequest() {}

std::string ListIndexTemplatesRequest::getInstanceId() const {
  return instanceId_;
}

void ListIndexTemplatesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListIndexTemplatesRequest::getSize() const {
  return size_;
}

void ListIndexTemplatesRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

int ListIndexTemplatesRequest::getPage() const {
  return page_;
}

void ListIndexTemplatesRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListIndexTemplatesRequest::getIndexTemplate() const {
  return indexTemplate_;
}

void ListIndexTemplatesRequest::setIndexTemplate(const std::string &indexTemplate) {
  indexTemplate_ = indexTemplate;
  setParameter(std::string("indexTemplate"), indexTemplate);
}

