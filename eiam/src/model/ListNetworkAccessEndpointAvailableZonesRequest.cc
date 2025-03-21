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

#include <alibabacloud/eiam/model/ListNetworkAccessEndpointAvailableZonesRequest.h>

using AlibabaCloud::Eiam::Model::ListNetworkAccessEndpointAvailableZonesRequest;

ListNetworkAccessEndpointAvailableZonesRequest::ListNetworkAccessEndpointAvailableZonesRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListNetworkAccessEndpointAvailableZones") {
  setMethod(HttpRequest::Method::Post);
}

ListNetworkAccessEndpointAvailableZonesRequest::~ListNetworkAccessEndpointAvailableZonesRequest() {}

std::string ListNetworkAccessEndpointAvailableZonesRequest::getNaeRegionId() const {
  return naeRegionId_;
}

void ListNetworkAccessEndpointAvailableZonesRequest::setNaeRegionId(const std::string &naeRegionId) {
  naeRegionId_ = naeRegionId;
  setParameter(std::string("NaeRegionId"), naeRegionId);
}

