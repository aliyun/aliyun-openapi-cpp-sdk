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

#include <alibabacloud/arms/model/UpdateMetricDropRequest.h>

using AlibabaCloud::ARMS::Model::UpdateMetricDropRequest;

UpdateMetricDropRequest::UpdateMetricDropRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateMetricDrop") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMetricDropRequest::~UpdateMetricDropRequest() {}

std::string UpdateMetricDropRequest::getRegionId() const {
  return regionId_;
}

void UpdateMetricDropRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateMetricDropRequest::getClusterId() const {
  return clusterId_;
}

void UpdateMetricDropRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string UpdateMetricDropRequest::getMetricDrop() const {
  return metricDrop_;
}

void UpdateMetricDropRequest::setMetricDrop(const std::string &metricDrop) {
  metricDrop_ = metricDrop;
  setParameter(std::string("MetricDrop"), metricDrop);
}

