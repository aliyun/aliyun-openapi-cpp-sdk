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

#include <alibabacloud/ga/model/ListAcceleratorsRequest.h>

using AlibabaCloud::Ga::Model::ListAcceleratorsRequest;

ListAcceleratorsRequest::ListAcceleratorsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListAccelerators") {
  setMethod(HttpRequest::Method::Post);
}

ListAcceleratorsRequest::~ListAcceleratorsRequest() {}

int ListAcceleratorsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAcceleratorsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListAcceleratorsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListAcceleratorsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListAcceleratorsRequest::getRegionId() const {
  return regionId_;
}

void ListAcceleratorsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListAcceleratorsRequest::getPageSize() const {
  return pageSize_;
}

void ListAcceleratorsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAcceleratorsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListAcceleratorsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::string ListAcceleratorsRequest::getState() const {
  return state_;
}

void ListAcceleratorsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::vector<ListAcceleratorsRequest::Tag> ListAcceleratorsRequest::getTag() const {
  return tag_;
}

void ListAcceleratorsRequest::setTag(const std::vector<ListAcceleratorsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

