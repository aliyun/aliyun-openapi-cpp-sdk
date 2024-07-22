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

#include <alibabacloud/elasticsearch/model/ListPipelineRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListPipelineRequest;

ListPipelineRequest::ListPipelineRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes/[InstanceId]/pipelines"};
  setMethod(HttpRequest::Method::Get);
}

ListPipelineRequest::~ListPipelineRequest() {}

std::string ListPipelineRequest::getInstanceId() const {
  return instanceId_;
}

void ListPipelineRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListPipelineRequest::getSize() const {
  return size_;
}

void ListPipelineRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

int ListPipelineRequest::getPage() const {
  return page_;
}

void ListPipelineRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListPipelineRequest::getPipelineId() const {
  return pipelineId_;
}

void ListPipelineRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), pipelineId);
}

