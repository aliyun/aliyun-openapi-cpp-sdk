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

#include <alibabacloud/csas/model/DeleteDynamicRouteRequest.h>

using AlibabaCloud::Csas::Model::DeleteDynamicRouteRequest;

DeleteDynamicRouteRequest::DeleteDynamicRouteRequest()
    : RpcServiceRequest("csas", "2023-01-20", "DeleteDynamicRoute") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDynamicRouteRequest::~DeleteDynamicRouteRequest() {}

std::string DeleteDynamicRouteRequest::getDynamicRouteId() const {
  return dynamicRouteId_;
}

void DeleteDynamicRouteRequest::setDynamicRouteId(const std::string &dynamicRouteId) {
  dynamicRouteId_ = dynamicRouteId;
  setParameter(std::string("DynamicRouteId"), dynamicRouteId);
}

std::string DeleteDynamicRouteRequest::getSourceIp() const {
  return sourceIp_;
}

void DeleteDynamicRouteRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

