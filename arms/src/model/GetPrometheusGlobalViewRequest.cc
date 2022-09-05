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

#include <alibabacloud/arms/model/GetPrometheusGlobalViewRequest.h>

using AlibabaCloud::ARMS::Model::GetPrometheusGlobalViewRequest;

GetPrometheusGlobalViewRequest::GetPrometheusGlobalViewRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetPrometheusGlobalView") {
  setMethod(HttpRequest::Method::Post);
}

GetPrometheusGlobalViewRequest::~GetPrometheusGlobalViewRequest() {}

std::string GetPrometheusGlobalViewRequest::getGlobalViewClusterId() const {
  return globalViewClusterId_;
}

void GetPrometheusGlobalViewRequest::setGlobalViewClusterId(const std::string &globalViewClusterId) {
  globalViewClusterId_ = globalViewClusterId;
  setParameter(std::string("GlobalViewClusterId"), globalViewClusterId);
}

std::string GetPrometheusGlobalViewRequest::getRegionId() const {
  return regionId_;
}

void GetPrometheusGlobalViewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

