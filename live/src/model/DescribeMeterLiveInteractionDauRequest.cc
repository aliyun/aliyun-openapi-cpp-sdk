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

#include <alibabacloud/live/model/DescribeMeterLiveInteractionDauRequest.h>

using AlibabaCloud::Live::Model::DescribeMeterLiveInteractionDauRequest;

DescribeMeterLiveInteractionDauRequest::DescribeMeterLiveInteractionDauRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeMeterLiveInteractionDau") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMeterLiveInteractionDauRequest::~DescribeMeterLiveInteractionDauRequest() {}

long DescribeMeterLiveInteractionDauRequest::getStartTs() const {
  return startTs_;
}

void DescribeMeterLiveInteractionDauRequest::setStartTs(long startTs) {
  startTs_ = startTs;
  setParameter(std::string("StartTs"), std::to_string(startTs));
}

std::string DescribeMeterLiveInteractionDauRequest::getServiceArea() const {
  return serviceArea_;
}

void DescribeMeterLiveInteractionDauRequest::setServiceArea(const std::string &serviceArea) {
  serviceArea_ = serviceArea;
  setParameter(std::string("ServiceArea"), serviceArea);
}

std::string DescribeMeterLiveInteractionDauRequest::getAppId() const {
  return appId_;
}

void DescribeMeterLiveInteractionDauRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

long DescribeMeterLiveInteractionDauRequest::getEndTs() const {
  return endTs_;
}

void DescribeMeterLiveInteractionDauRequest::setEndTs(long endTs) {
  endTs_ = endTs;
  setParameter(std::string("EndTs"), std::to_string(endTs));
}

long DescribeMeterLiveInteractionDauRequest::getInterval() const {
  return interval_;
}

void DescribeMeterLiveInteractionDauRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

