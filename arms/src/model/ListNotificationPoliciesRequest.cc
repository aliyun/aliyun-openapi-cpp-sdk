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

#include <alibabacloud/arms/model/ListNotificationPoliciesRequest.h>

using AlibabaCloud::ARMS::Model::ListNotificationPoliciesRequest;

ListNotificationPoliciesRequest::ListNotificationPoliciesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListNotificationPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListNotificationPoliciesRequest::~ListNotificationPoliciesRequest() {}

bool ListNotificationPoliciesRequest::getIsDetail() const {
  return isDetail_;
}

void ListNotificationPoliciesRequest::setIsDetail(bool isDetail) {
  isDetail_ = isDetail;
  setParameter(std::string("IsDetail"), isDetail ? "true" : "false");
}

bool ListNotificationPoliciesRequest::getDirectedMode() const {
  return directedMode_;
}

void ListNotificationPoliciesRequest::setDirectedMode(bool directedMode) {
  directedMode_ = directedMode;
  setParameter(std::string("DirectedMode"), directedMode ? "true" : "false");
}

long ListNotificationPoliciesRequest::getSize() const {
  return size_;
}

void ListNotificationPoliciesRequest::setSize(long size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string ListNotificationPoliciesRequest::getRegionId() const {
  return regionId_;
}

void ListNotificationPoliciesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListNotificationPoliciesRequest::getName() const {
  return name_;
}

void ListNotificationPoliciesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListNotificationPoliciesRequest::getIds() const {
  return ids_;
}

void ListNotificationPoliciesRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

long ListNotificationPoliciesRequest::getPage() const {
  return page_;
}

void ListNotificationPoliciesRequest::setPage(long page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

