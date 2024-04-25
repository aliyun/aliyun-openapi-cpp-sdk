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

#include <alibabacloud/vod/model/DescribeVodTranscodeDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodTranscodeDataRequest;

DescribeVodTranscodeDataRequest::DescribeVodTranscodeDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodTranscodeData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodTranscodeDataRequest::~DescribeVodTranscodeDataRequest() {}

std::string DescribeVodTranscodeDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodTranscodeDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodTranscodeDataRequest::getStorage() const {
  return storage_;
}

void DescribeVodTranscodeDataRequest::setStorage(const std::string &storage) {
  storage_ = storage;
  setParameter(std::string("Storage"), storage);
}

std::string DescribeVodTranscodeDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodTranscodeDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeVodTranscodeDataRequest::getSpecification() const {
  return specification_;
}

void DescribeVodTranscodeDataRequest::setSpecification(const std::string &specification) {
  specification_ = specification;
  setParameter(std::string("Specification"), specification);
}

long DescribeVodTranscodeDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodTranscodeDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodTranscodeDataRequest::getAppId() const {
  return appId_;
}

void DescribeVodTranscodeDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeVodTranscodeDataRequest::getInterval() const {
  return interval_;
}

void DescribeVodTranscodeDataRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string DescribeVodTranscodeDataRequest::getRegion() const {
  return region_;
}

void DescribeVodTranscodeDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

