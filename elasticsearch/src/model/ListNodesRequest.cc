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

#include <alibabacloud/elasticsearch/model/ListNodesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListNodesRequest;

ListNodesRequest::ListNodesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/collectors/[ResId]/nodes"};
  setMethod(HttpRequest::Method::Get);
}

ListNodesRequest::~ListNodesRequest() {}

std::string ListNodesRequest::getEcsInstanceName() const {
  return ecsInstanceName_;
}

void ListNodesRequest::setEcsInstanceName(const std::string &ecsInstanceName) {
  ecsInstanceName_ = ecsInstanceName;
  setParameter(std::string("ecsInstanceName"), ecsInstanceName);
}

std::string ListNodesRequest::getEcsInstanceIds() const {
  return ecsInstanceIds_;
}

void ListNodesRequest::setEcsInstanceIds(const std::string &ecsInstanceIds) {
  ecsInstanceIds_ = ecsInstanceIds;
  setParameter(std::string("ecsInstanceIds"), ecsInstanceIds);
}

int ListNodesRequest::getSize() const {
  return size_;
}

void ListNodesRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

int ListNodesRequest::getPage() const {
  return page_;
}

void ListNodesRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListNodesRequest::getResId() const {
  return resId_;
}

void ListNodesRequest::setResId(const std::string &resId) {
  resId_ = resId;
  setParameter(std::string("ResId"), resId);
}

std::string ListNodesRequest::getTags() const {
  return tags_;
}

void ListNodesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("tags"), tags);
}

