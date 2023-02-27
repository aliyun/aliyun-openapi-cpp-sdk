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

#include <alibabacloud/ice/model/DescribePlayListRequest.h>

using AlibabaCloud::ICE::Model::DescribePlayListRequest;

DescribePlayListRequest::DescribePlayListRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DescribePlayList") {
  setMethod(HttpRequest::Method::Post);
}

DescribePlayListRequest::~DescribePlayListRequest() {}

std::string DescribePlayListRequest::getTraceId() const {
  return traceId_;
}

void DescribePlayListRequest::setTraceId(const std::string &traceId) {
  traceId_ = traceId;
  setParameter(std::string("TraceId"), traceId);
}

int DescribePlayListRequest::getPageSize() const {
  return pageSize_;
}

void DescribePlayListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribePlayListRequest::getEndTs() const {
  return endTs_;
}

void DescribePlayListRequest::setEndTs(const std::string &endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), endTs);
}

std::string DescribePlayListRequest::getPlayType() const {
  return playType_;
}

void DescribePlayListRequest::setPlayType(const std::string &playType) {
  playType_ = playType;
  setParameter(std::string("PlayType"), playType);
}

std::string DescribePlayListRequest::getOrderName() const {
  return orderName_;
}

void DescribePlayListRequest::setOrderName(const std::string &orderName) {
  orderName_ = orderName;
  setParameter(std::string("OrderName"), orderName);
}

std::string DescribePlayListRequest::getBeginTs() const {
  return beginTs_;
}

void DescribePlayListRequest::setBeginTs(const std::string &beginTs) {
  beginTs_ = beginTs;
  setParameter(std::string("BeginTs"), beginTs);
}

int DescribePlayListRequest::getPageNo() const {
  return pageNo_;
}

void DescribePlayListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string DescribePlayListRequest::getOrderType() const {
  return orderType_;
}

void DescribePlayListRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

std::string DescribePlayListRequest::getStatus() const {
  return status_;
}

void DescribePlayListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

