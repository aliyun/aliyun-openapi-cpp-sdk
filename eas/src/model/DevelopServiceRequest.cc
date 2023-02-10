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

#include <alibabacloud/eas/model/DevelopServiceRequest.h>

using AlibabaCloud::Eas::Model::DevelopServiceRequest;

DevelopServiceRequest::DevelopServiceRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services/[ClusterId]/[ServiceName]/develop"};
  setMethod(HttpRequest::Method::Put);
}

DevelopServiceRequest::~DevelopServiceRequest() {}

std::string DevelopServiceRequest::getExit() const {
  return exit_;
}

void DevelopServiceRequest::setExit(const std::string &exit) {
  exit_ = exit;
  setParameter(std::string("Exit"), exit);
}

std::string DevelopServiceRequest::getServiceName() const {
  return serviceName_;
}

void DevelopServiceRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string DevelopServiceRequest::getClusterId() const {
  return clusterId_;
}

void DevelopServiceRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

