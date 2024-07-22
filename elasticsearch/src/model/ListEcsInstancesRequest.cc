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

#include <alibabacloud/elasticsearch/model/ListEcsInstancesRequest.h>

using AlibabaCloud::Elasticsearch::Model::ListEcsInstancesRequest;

ListEcsInstancesRequest::ListEcsInstancesRequest()
    : RoaServiceRequest("elasticsearch", "2017-06-13") {
  setResourcePath("/openapi/ecs"};
  setMethod(HttpRequest::Method::Get);
}

ListEcsInstancesRequest::~ListEcsInstancesRequest() {}

std::string ListEcsInstancesRequest::getEcsInstanceName() const {
  return ecsInstanceName_;
}

void ListEcsInstancesRequest::setEcsInstanceName(const std::string &ecsInstanceName) {
  ecsInstanceName_ = ecsInstanceName;
  setParameter(std::string("ecsInstanceName"), ecsInstanceName);
}

std::string ListEcsInstancesRequest::getEcsInstanceIds() const {
  return ecsInstanceIds_;
}

void ListEcsInstancesRequest::setEcsInstanceIds(const std::string &ecsInstanceIds) {
  ecsInstanceIds_ = ecsInstanceIds;
  setParameter(std::string("ecsInstanceIds"), ecsInstanceIds);
}

int ListEcsInstancesRequest::getSize() const {
  return size_;
}

void ListEcsInstancesRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("size"), std::to_string(size));
}

std::string ListEcsInstancesRequest::getVpcId() const {
  return vpcId_;
}

void ListEcsInstancesRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("vpcId"), vpcId);
}

int ListEcsInstancesRequest::getPage() const {
  return page_;
}

void ListEcsInstancesRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("page"), std::to_string(page));
}

std::string ListEcsInstancesRequest::getTags() const {
  return tags_;
}

void ListEcsInstancesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("tags"), tags);
}

