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

#include <alibabacloud/arms/model/ListClusterFromGrafanaRequest.h>

using AlibabaCloud::ARMS::Model::ListClusterFromGrafanaRequest;

ListClusterFromGrafanaRequest::ListClusterFromGrafanaRequest()
    : RpcServiceRequest("arms", "2019-08-08", "ListClusterFromGrafana") {
  setMethod(HttpRequest::Method::Post);
}

ListClusterFromGrafanaRequest::~ListClusterFromGrafanaRequest() {}

std::string ListClusterFromGrafanaRequest::getRegionId() const {
  return regionId_;
}

void ListClusterFromGrafanaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

