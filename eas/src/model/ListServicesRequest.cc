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

#include <alibabacloud/eas/model/ListServicesRequest.h>

using AlibabaCloud::Eas::Model::ListServicesRequest;

ListServicesRequest::ListServicesRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services"};
  setMethod(HttpRequest::Method::Get);
}

ListServicesRequest::~ListServicesRequest() {}

std::string ListServicesRequest::getFilter() const {
  return filter_;
}

void ListServicesRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string ListServicesRequest::getServiceType() const {
  return serviceType_;
}

void ListServicesRequest::setServiceType(const std::string &serviceType) {
  serviceType_ = serviceType;
  setParameter(std::string("ServiceType"), serviceType);
}

std::string ListServicesRequest::getParentServiceUid() const {
  return parentServiceUid_;
}

void ListServicesRequest::setParentServiceUid(const std::string &parentServiceUid) {
  parentServiceUid_ = parentServiceUid;
  setParameter(std::string("ParentServiceUid"), parentServiceUid);
}

int ListServicesRequest::getPageSize() const {
  return pageSize_;
}

void ListServicesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListServicesRequest::getSort() const {
  return sort_;
}

void ListServicesRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

std::string ListServicesRequest::getLabel() const {
  return label_;
}

void ListServicesRequest::setLabel(const std::string &label) {
  label_ = label;
  setParameter(std::string("Label"), label);
}

std::string ListServicesRequest::getGroupName() const {
  return groupName_;
}

void ListServicesRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

int ListServicesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListServicesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListServicesRequest::getOrder() const {
  return order_;
}

void ListServicesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

