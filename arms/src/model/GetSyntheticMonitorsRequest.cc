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

#include <alibabacloud/arms/model/GetSyntheticMonitorsRequest.h>

using AlibabaCloud::ARMS::Model::GetSyntheticMonitorsRequest;

GetSyntheticMonitorsRequest::GetSyntheticMonitorsRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetSyntheticMonitors") {
  setMethod(HttpRequest::Method::Get);
}

GetSyntheticMonitorsRequest::~GetSyntheticMonitorsRequest() {}

GetSyntheticMonitorsRequest::Filter GetSyntheticMonitorsRequest::getFilter() const {
  return filter_;
}

void GetSyntheticMonitorsRequest::setFilter(const GetSyntheticMonitorsRequest::Filter &filter) {
  filter_ = filter;
  setParameter(std::string("Filter") + ".TaskType", std::to_string(filter.taskType));
  setParameter(std::string("Filter") + ".MonitorCategory", std::to_string(filter.monitorCategory));
  setParameter(std::string("Filter") + ".Network", std::to_string(filter.network));
}

std::string GetSyntheticMonitorsRequest::getRegionId() const {
  return regionId_;
}

void GetSyntheticMonitorsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

