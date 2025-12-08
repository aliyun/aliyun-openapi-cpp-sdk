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

#include <alibabacloud/vod/model/DescribeVodPlayerDimensionDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodPlayerDimensionDataRequest;

DescribeVodPlayerDimensionDataRequest::DescribeVodPlayerDimensionDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodPlayerDimensionData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodPlayerDimensionDataRequest::~DescribeVodPlayerDimensionDataRequest() {}

std::string DescribeVodPlayerDimensionDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodPlayerDimensionDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodPlayerDimensionDataRequest::getDimension() const {
  return dimension_;
}

void DescribeVodPlayerDimensionDataRequest::setDimension(const std::string &dimension) {
  dimension_ = dimension;
  setParameter(std::string("Dimension"), dimension);
}

std::string DescribeVodPlayerDimensionDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodPlayerDimensionDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeVodPlayerDimensionDataRequest::getAppId() const {
  return appId_;
}

void DescribeVodPlayerDimensionDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeVodPlayerDimensionDataRequest::getRegion() const {
  return region_;
}

void DescribeVodPlayerDimensionDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

