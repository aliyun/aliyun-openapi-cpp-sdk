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

#include <alibabacloud/viapi-regen/model/ListDataReflowDatasRequest.h>

using AlibabaCloud::Viapi_regen::Model::ListDataReflowDatasRequest;

ListDataReflowDatasRequest::ListDataReflowDatasRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "ListDataReflowDatas") {
  setMethod(HttpRequest::Method::Post);
}

ListDataReflowDatasRequest::~ListDataReflowDatasRequest() {}

long ListDataReflowDatasRequest::getStartTime() const {
  return startTime_;
}

void ListDataReflowDatasRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListDataReflowDatasRequest::getImageName() const {
  return imageName_;
}

void ListDataReflowDatasRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setBodyParameter(std::string("ImageName"), imageName);
}

long ListDataReflowDatasRequest::getPageSize() const {
  return pageSize_;
}

void ListDataReflowDatasRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDataReflowDatasRequest::getEndTime() const {
  return endTime_;
}

void ListDataReflowDatasRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListDataReflowDatasRequest::getCurrentPage() const {
  return currentPage_;
}

void ListDataReflowDatasRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long ListDataReflowDatasRequest::getServiceId() const {
  return serviceId_;
}

void ListDataReflowDatasRequest::setServiceId(long serviceId) {
  serviceId_ = serviceId;
  setBodyParameter(std::string("ServiceId"), std::to_string(serviceId));
}

std::string ListDataReflowDatasRequest::getCategory() const {
  return category_;
}

void ListDataReflowDatasRequest::setCategory(const std::string &category) {
  category_ = category;
  setBodyParameter(std::string("Category"), category);
}

