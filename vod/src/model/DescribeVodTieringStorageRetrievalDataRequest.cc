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

#include <alibabacloud/vod/model/DescribeVodTieringStorageRetrievalDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodTieringStorageRetrievalDataRequest;

DescribeVodTieringStorageRetrievalDataRequest::DescribeVodTieringStorageRetrievalDataRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodTieringStorageRetrievalData") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodTieringStorageRetrievalDataRequest::~DescribeVodTieringStorageRetrievalDataRequest() {}

std::string DescribeVodTieringStorageRetrievalDataRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodTieringStorageRetrievalDataRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeVodTieringStorageRetrievalDataRequest::getSplitBy() const {
  return splitBy_;
}

void DescribeVodTieringStorageRetrievalDataRequest::setSplitBy(const std::string &splitBy) {
  splitBy_ = splitBy;
  setParameter(std::string("SplitBy"), splitBy);
}

std::string DescribeVodTieringStorageRetrievalDataRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodTieringStorageRetrievalDataRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodTieringStorageRetrievalDataRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodTieringStorageRetrievalDataRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodTieringStorageRetrievalDataRequest::getStorageClass() const {
  return storageClass_;
}

void DescribeVodTieringStorageRetrievalDataRequest::setStorageClass(const std::string &storageClass) {
  storageClass_ = storageClass;
  setParameter(std::string("StorageClass"), storageClass);
}

std::string DescribeVodTieringStorageRetrievalDataRequest::getAppId() const {
  return appId_;
}

void DescribeVodTieringStorageRetrievalDataRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

std::string DescribeVodTieringStorageRetrievalDataRequest::getRegion() const {
  return region_;
}

void DescribeVodTieringStorageRetrievalDataRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

