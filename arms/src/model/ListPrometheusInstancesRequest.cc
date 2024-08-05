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

#include <alibabacloud/arms/model/ListPrometheusInstancesRequest.h>

using AlibabaCloud::ARMS::Model::ListPrometheusInstancesRequest;

ListPrometheusInstancesRequest::ListPrometheusInstancesRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListPrometheusInstances") {
  setMethod(HttpRequest::Method::Post);
}

ListPrometheusInstancesRequest::~ListPrometheusInstancesRequest() {}

std::string ListPrometheusInstancesRequest::getClusterType() const {
  return clusterType_;
}

void ListPrometheusInstancesRequest::setClusterType(const std::string &clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), clusterType);
}

bool ListPrometheusInstancesRequest::getShowGlobalView() const {
  return showGlobalView_;
}

void ListPrometheusInstancesRequest::setShowGlobalView(bool showGlobalView) {
  showGlobalView_ = showGlobalView;
  setParameter(std::string("ShowGlobalView"), showGlobalView ? "true" : "false");
}

std::string ListPrometheusInstancesRequest::getRegionId() const {
  return regionId_;
}

void ListPrometheusInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

