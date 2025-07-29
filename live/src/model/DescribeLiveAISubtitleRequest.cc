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

#include <alibabacloud/live/model/DescribeLiveAISubtitleRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveAISubtitleRequest;

DescribeLiveAISubtitleRequest::DescribeLiveAISubtitleRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveAISubtitle") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveAISubtitleRequest::~DescribeLiveAISubtitleRequest() {}

std::string DescribeLiveAISubtitleRequest::getSubtitleName() const {
  return subtitleName_;
}

void DescribeLiveAISubtitleRequest::setSubtitleName(const std::string &subtitleName) {
  subtitleName_ = subtitleName;
  setParameter(std::string("SubtitleName"), subtitleName);
}

std::string DescribeLiveAISubtitleRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveAISubtitleRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeLiveAISubtitleRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveAISubtitleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeLiveAISubtitleRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveAISubtitleRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

bool DescribeLiveAISubtitleRequest::getIsDefault() const {
  return isDefault_;
}

void DescribeLiveAISubtitleRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
}

long DescribeLiveAISubtitleRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveAISubtitleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveAISubtitleRequest::getSubtitleId() const {
  return subtitleId_;
}

void DescribeLiveAISubtitleRequest::setSubtitleId(const std::string &subtitleId) {
  subtitleId_ = subtitleId;
  setParameter(std::string("SubtitleId"), subtitleId);
}

