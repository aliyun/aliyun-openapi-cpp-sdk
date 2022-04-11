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

#include <alibabacloud/vod/model/DescribePlayTopVideosRequest.h>

using AlibabaCloud::Vod::Model::DescribePlayTopVideosRequest;

DescribePlayTopVideosRequest::DescribePlayTopVideosRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribePlayTopVideos") {
  setMethod(HttpRequest::Method::Post);
}

DescribePlayTopVideosRequest::~DescribePlayTopVideosRequest() {}

long DescribePlayTopVideosRequest::getPageSize() const {
  return pageSize_;
}

void DescribePlayTopVideosRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribePlayTopVideosRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePlayTopVideosRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePlayTopVideosRequest::getBizDate() const {
  return bizDate_;
}

void DescribePlayTopVideosRequest::setBizDate(const std::string &bizDate) {
  bizDate_ = bizDate;
  setParameter(std::string("BizDate"), bizDate);
}

long DescribePlayTopVideosRequest::getPageNo() const {
  return pageNo_;
}

void DescribePlayTopVideosRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

