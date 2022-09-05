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

#include <alibabacloud/arms/model/QueryPromInstallStatusRequest.h>

using AlibabaCloud::ARMS::Model::QueryPromInstallStatusRequest;

QueryPromInstallStatusRequest::QueryPromInstallStatusRequest()
    : RpcServiceRequest("arms", "2019-08-08", "QueryPromInstallStatus") {
  setMethod(HttpRequest::Method::Post);
}

QueryPromInstallStatusRequest::~QueryPromInstallStatusRequest() {}

std::string QueryPromInstallStatusRequest::getRegionId() const {
  return regionId_;
}

void QueryPromInstallStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryPromInstallStatusRequest::getClusterId() const {
  return clusterId_;
}

void QueryPromInstallStatusRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

