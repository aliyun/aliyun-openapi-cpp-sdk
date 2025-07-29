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

#include <alibabacloud/live/model/StartLiveStreamMonitorRequest.h>

using AlibabaCloud::Live::Model::StartLiveStreamMonitorRequest;

StartLiveStreamMonitorRequest::StartLiveStreamMonitorRequest()
    : RpcServiceRequest("live", "2016-11-01", "StartLiveStreamMonitor") {
  setMethod(HttpRequest::Method::Post);
}

StartLiveStreamMonitorRequest::~StartLiveStreamMonitorRequest() {}

std::string StartLiveStreamMonitorRequest::getMonitorId() const {
  return monitorId_;
}

void StartLiveStreamMonitorRequest::setMonitorId(const std::string &monitorId) {
  monitorId_ = monitorId;
  setParameter(std::string("MonitorId"), monitorId);
}

std::string StartLiveStreamMonitorRequest::getRegionId() const {
  return regionId_;
}

void StartLiveStreamMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long StartLiveStreamMonitorRequest::getOwnerId() const {
  return ownerId_;
}

void StartLiveStreamMonitorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

