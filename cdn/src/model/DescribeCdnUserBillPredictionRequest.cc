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

#include <alibabacloud/cdn/model/DescribeCdnUserBillPredictionRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnUserBillPredictionRequest;

DescribeCdnUserBillPredictionRequest::DescribeCdnUserBillPredictionRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnUserBillPrediction") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCdnUserBillPredictionRequest::~DescribeCdnUserBillPredictionRequest() {}

std::string DescribeCdnUserBillPredictionRequest::getStartTime() const {
  return startTime_;
}

void DescribeCdnUserBillPredictionRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeCdnUserBillPredictionRequest::getDimension() const {
  return dimension_;
}

void DescribeCdnUserBillPredictionRequest::setDimension(const std::string &dimension) {
  dimension_ = dimension;
  setParameter(std::string("Dimension"), dimension);
}

std::string DescribeCdnUserBillPredictionRequest::getArea() const {
  return area_;
}

void DescribeCdnUserBillPredictionRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string DescribeCdnUserBillPredictionRequest::getEndTime() const {
  return endTime_;
}

void DescribeCdnUserBillPredictionRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeCdnUserBillPredictionRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCdnUserBillPredictionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

