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

#include <alibabacloud/ga/model/ListEndpointGroupsRequest.h>

using AlibabaCloud::Ga::Model::ListEndpointGroupsRequest;

ListEndpointGroupsRequest::ListEndpointGroupsRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListEndpointGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListEndpointGroupsRequest::~ListEndpointGroupsRequest() {}

int ListEndpointGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListEndpointGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListEndpointGroupsRequest::getListenerId() const {
  return listenerId_;
}

void ListEndpointGroupsRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListEndpointGroupsRequest::getRegionId() const {
  return regionId_;
}

void ListEndpointGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEndpointGroupsRequest::getEndpointGroupType() const {
  return endpointGroupType_;
}

void ListEndpointGroupsRequest::setEndpointGroupType(const std::string &endpointGroupType) {
  endpointGroupType_ = endpointGroupType;
  setParameter(std::string("EndpointGroupType"), endpointGroupType);
}

std::string ListEndpointGroupsRequest::getAccessLogSwitch() const {
  return accessLogSwitch_;
}

void ListEndpointGroupsRequest::setAccessLogSwitch(const std::string &accessLogSwitch) {
  accessLogSwitch_ = accessLogSwitch;
  setParameter(std::string("AccessLogSwitch"), accessLogSwitch);
}

int ListEndpointGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListEndpointGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListEndpointGroupsRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void ListEndpointGroupsRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<ListEndpointGroupsRequest::Tag> ListEndpointGroupsRequest::getTag() const {
  return tag_;
}

void ListEndpointGroupsRequest::setTag(const std::vector<ListEndpointGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string ListEndpointGroupsRequest::getEndpointGroupId() const {
  return endpointGroupId_;
}

void ListEndpointGroupsRequest::setEndpointGroupId(const std::string &endpointGroupId) {
  endpointGroupId_ = endpointGroupId;
  setParameter(std::string("EndpointGroupId"), endpointGroupId);
}

