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

#include <alibabacloud/vod/model/DescribeVodTieringStorageDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodTieringStorageDataRequest;

DescribeVodTieringStorageDataRequest::DescribeVodTieringStorageDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodTieringStorageData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodTieringStorageDataRequest::~DescribeVodTieringStorageDataRequest() {}

std::string DescribeVodTieringStorageDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodTieringStorageDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodTieringStorageDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeVodTieringStorageDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeVodTieringStorageDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodTieringStorageDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodTieringStorageDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodTieringStorageDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodTieringStorageDataRequest::getStorageClass() const {
  return storageClass_;
}

void DescribeVodTieringStorageDataRequest::setStorageClass(const std::string &storageClass) {
  storageClass_ = storageClass;
  setParameter(std::string("StorageClass"), storageClass);
}

std::string DescribeVodTieringStorageDataRequest::getAppId() const {
  return appId_;
}

void DescribeVodTieringStorageDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeVodTieringStorageDataRequest::getRegion() const {
  return region_;
}

void DescribeVodTieringStorageDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

