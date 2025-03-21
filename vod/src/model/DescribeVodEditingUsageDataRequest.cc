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

#include <alibabacloud/vod/model/DescribeVodEditingUsageDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodEditingUsageDataRequest;

DescribeVodEditingUsageDataRequest::DescribeVodEditingUsageDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodEditingUsageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodEditingUsageDataRequest::~DescribeVodEditingUsageDataRequest() {}

std::string DescribeVodEditingUsageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodEditingUsageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodEditingUsageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeVodEditingUsageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeVodEditingUsageDataRequest::getProduct() const {
  return product_;
}

void DescribeVodEditingUsageDataRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeVodEditingUsageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodEditingUsageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeVodEditingUsageDataRequest::getSpecification() const {
  return specification_;
}

void DescribeVodEditingUsageDataRequest::setSpecification(const std::string &specification) {
  specification_ = specification;
  setParameter(std::string("Specification"), specification);
}

long DescribeVodEditingUsageDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodEditingUsageDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodEditingUsageDataRequest::getAppId() const {
  return appId_;
}

void DescribeVodEditingUsageDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeVodEditingUsageDataRequest::getRegion() const {
  return region_;
}

void DescribeVodEditingUsageDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

