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

#include <alibabacloud/live/model/DescribeLiveStreamMonitorListRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveStreamMonitorListRequest;

DescribeLiveStreamMonitorListRequest::DescribeLiveStreamMonitorListRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveStreamMonitorList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveStreamMonitorListRequest::~DescribeLiveStreamMonitorListRequest() {}

std::string DescribeLiveStreamMonitorListRequest::getMonitorId() const {
  return monitorId_;
}

void DescribeLiveStreamMonitorListRequest::setMonitorId(const std::string &monitorId) {
  monitorId_ = monitorId;
  setParameter(std::string("MonitorId"), monitorId);
}

int DescribeLiveStreamMonitorListRequest::getPageNum() const {
  return pageNum_;
}

void DescribeLiveStreamMonitorListRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string DescribeLiveStreamMonitorListRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveStreamMonitorListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLiveStreamMonitorListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveStreamMonitorListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeLiveStreamMonitorListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveStreamMonitorListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeLiveStreamMonitorListRequest::getOrderRule() const {
  return orderRule_;
}

void DescribeLiveStreamMonitorListRequest::setOrderRule(int orderRule) {
  orderRule_ = orderRule;
  setParameter(std::string("OrderRule"), std::to_string(orderRule));
}

int DescribeLiveStreamMonitorListRequest::getStatus() const {
  return status_;
}

void DescribeLiveStreamMonitorListRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

