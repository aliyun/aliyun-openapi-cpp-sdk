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

#include <alibabacloud/live/model/DescribeLiveAIStudioRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveAIStudioRequest;

DescribeLiveAIStudioRequest::DescribeLiveAIStudioRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveAIStudio") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveAIStudioRequest::~DescribeLiveAIStudioRequest() {}

int DescribeLiveAIStudioRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLiveAIStudioRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLiveAIStudioRequest::getRegionId() const {
  return regionId_;
}

void DescribeLiveAIStudioRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLiveAIStudioRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLiveAIStudioRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLiveAIStudioRequest::getStudioId() const {
  return studioId_;
}

void DescribeLiveAIStudioRequest::setStudioId(const std::string &studioId) {
  studioId_ = studioId;
  setParameter(std::string("StudioId"), studioId);
}

long DescribeLiveAIStudioRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLiveAIStudioRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLiveAIStudioRequest::getStudioName() const {
  return studioName_;
}

void DescribeLiveAIStudioRequest::setStudioName(const std::string &studioName) {
  studioName_ = studioName;
  setParameter(std::string("StudioName"), studioName);
}

