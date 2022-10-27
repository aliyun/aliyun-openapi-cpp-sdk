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

#include <alibabacloud/elasticsearch/model/ListLogstashRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListLogstashRequest;

ListLogstashRequest::ListLogstashRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/logstashes"};
  setMethod(HttpRequest::Method::Get);
}

ListLogstashRequest::~ListLogstashRequest() {}

string ListLogstashRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListLogstashRequest::setResourceGroupId(string resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("resourceGroupId"), std::to_string(resourceGroupId));
}

string ListLogstashRequest::getInstanceId() const {
  return instanceId_;
}

void ListLogstashRequest::setInstanceId(string instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), std::to_string(instanceId));
}

integer ListLogstashRequest::getSize() const {
  return size_;
}

void ListLogstashRequest::setSize(integer size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

string ListLogstashRequest::getDescription() const {
  return description_;
}

void ListLogstashRequest::setDescription(string description) {
  description_ = description;
  setParameter(std::string("description"), std::to_string(description));
}

integer ListLogstashRequest::getPage() const {
  return page_;
}

void ListLogstashRequest::setPage(integer page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

string ListLogstashRequest::getOwnerId() const {
  return ownerId_;
}

void ListLogstashRequest::setOwnerId(string ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("ownerId"), std::to_string(ownerId));
}

string ListLogstashRequest::getVersion() const {
  return version_;
}

void ListLogstashRequest::setVersion(string version) {
  version_ = version;
  setParameter(std::string("version"), std::to_string(version));
}

string ListLogstashRequest::getTags() const {
  return tags_;
}

void ListLogstashRequest::setTags(string tags) {
  tags_ = tags;
  setParameter(std::string("tags"), std::to_string(tags));
}

