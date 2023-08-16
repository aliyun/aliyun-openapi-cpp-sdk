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

#include <alibabacloud/csas/model/GetDynamicRouteRequest.h>

using AlibabaCloud::Csas::Model::GetDynamicRouteRequest;

GetDynamicRouteRequest::GetDynamicRouteRequest()
    : RpcServiceRequest("csas", "2023-01-20", "GetDynamicRoute") {
  setMethod(HttpRequest::Method::Get);
}

GetDynamicRouteRequest::~GetDynamicRouteRequest() {}

std::string GetDynamicRouteRequest::getDynamicRouteId() const {
  return dynamicRouteId_;
}

void GetDynamicRouteRequest::setDynamicRouteId(const std::string &dynamicRouteId) {
  dynamicRouteId_ = dynamicRouteId;
  setParameter(std::string("DynamicRouteId"), dynamicRouteId);
}

std::string GetDynamicRouteRequest::getSourceIp() const {
  return sourceIp_;
}

void GetDynamicRouteRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

