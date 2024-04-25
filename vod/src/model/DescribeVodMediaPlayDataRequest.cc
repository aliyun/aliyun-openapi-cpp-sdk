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

#include <alibabacloud/vod/model/DescribeVodMediaPlayDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodMediaPlayDataRequest;

DescribeVodMediaPlayDataRequest::DescribeVodMediaPlayDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodMediaPlayData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodMediaPlayDataRequest::~DescribeVodMediaPlayDataRequest() {}

long DescribeVodMediaPlayDataRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVodMediaPlayDataRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVodMediaPlayDataRequest::getPlayDate() const {
  return playDate_;
}

void DescribeVodMediaPlayDataRequest::setPlayDate(const std::string &playDate) {
  playDate_ = playDate;
  setParameter(std::string("PlayDate"), playDate);
}

std::string DescribeVodMediaPlayDataRequest::getOs() const {
  return os_;
}

void DescribeVodMediaPlayDataRequest::setOs(const std::string &os) {
  os_ = os;
  setParameter(std::string("Os"), os);
}

std::string DescribeVodMediaPlayDataRequest::getMediaId() const {
  return mediaId_;
}

void DescribeVodMediaPlayDataRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string DescribeVodMediaPlayDataRequest::getOrderName() const {
  return orderName_;
}

void DescribeVodMediaPlayDataRequest::setOrderName(const std::string &orderName) {
  orderName_ = orderName;
  setParameter(std::string("OrderName"), orderName);
}

long DescribeVodMediaPlayDataRequest::getPageNo() const {
  return pageNo_;
}

void DescribeVodMediaPlayDataRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string DescribeVodMediaPlayDataRequest::getRegion() const {
  return region_;
}

void DescribeVodMediaPlayDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string DescribeVodMediaPlayDataRequest::getTerminalType() const {
  return terminalType_;
}

void DescribeVodMediaPlayDataRequest::setTerminalType(const std::string &terminalType) {
  terminalType_ = terminalType;
  setParameter(std::string("TerminalType"), terminalType);
}

std::string DescribeVodMediaPlayDataRequest::getOrderType() const {
  return orderType_;
}

void DescribeVodMediaPlayDataRequest::setOrderType(const std::string &orderType) {
  orderType_ = orderType;
  setParameter(std::string("OrderType"), orderType);
}

