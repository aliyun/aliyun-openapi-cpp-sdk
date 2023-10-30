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

#include <alibabacloud/live/model/DescribeLiveMessageGroupBandRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveMessageGroupBandRequest;

DescribeLiveMessageGroupBandRequest::DescribeLiveMessageGroupBandRequest()
    : RpcServiceRequest("live", "2016-11-01", "DescribeLiveMessageGroupBand") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLiveMessageGroupBandRequest::~DescribeLiveMessageGroupBandRequest() {}

std::string DescribeLiveMessageGroupBandRequest::getGroupId() const {
  return groupId_;
}

void DescribeLiveMessageGroupBandRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::string DescribeLiveMessageGroupBandRequest::getDataCenter() const {
  return dataCenter_;
}

void DescribeLiveMessageGroupBandRequest::setDataCenter(const std::string &dataCenter) {
  dataCenter_ = dataCenter;
  setParameter(std::string("DataCenter"), dataCenter);
}

std::string DescribeLiveMessageGroupBandRequest::getAppId() const {
  return appId_;
}

void DescribeLiveMessageGroupBandRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

