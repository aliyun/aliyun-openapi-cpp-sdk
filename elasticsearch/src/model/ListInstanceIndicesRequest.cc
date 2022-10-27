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

#include <alibabacloud/elasticsearch/model/ListInstanceIndicesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListInstanceIndicesRequest;

ListInstanceIndicesRequest::ListInstanceIndicesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/instances/[InstanceId]/indices"};
  setMethod(HttpRequest::Method::Get);
}

ListInstanceIndicesRequest::~ListInstanceIndicesRequest() {}

boolean ListInstanceIndicesRequest::getAll() const {
  return all_;
}

void ListInstanceIndicesRequest::setAll(boolean all) {
  all_ = all;
  setParameter(std::string("all"), std::to_string(all));
}

string ListInstanceIndicesRequest::getInstanceId() const {
  return instanceId_;
}

void ListInstanceIndicesRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

boolean ListInstanceIndicesRequest::getIsManaged() const {
  return isManaged_;
}

void ListInstanceIndicesRequest::setIsManaged(boolean isManaged) {
  isManaged_ = isManaged;
  setParameter(std::string("isManaged"), std::to_string(isManaged));
}

integer ListInstanceIndicesRequest::getSize() const {
  return size_;
}

void ListInstanceIndicesRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListInstanceIndicesRequest::getName() const {
  return name_;
}

void ListInstanceIndicesRequest::setName(string name) {
  name_ = name;
  setParameter(std::string("name"), std::to_string(name));
}

integer ListInstanceIndicesRequest::getPage() const {
  return page_;
}

void ListInstanceIndicesRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

boolean ListInstanceIndicesRequest::getIsOpenstore() const {
  return isOpenstore_;
}

void ListInstanceIndicesRequest::setIsOpenstore(boolean isOpenstore) {
  isOpenstore_ = isOpenstore;
  setParameter(std::string("isOpenstore"), std::to_string(isOpenstore));
}

