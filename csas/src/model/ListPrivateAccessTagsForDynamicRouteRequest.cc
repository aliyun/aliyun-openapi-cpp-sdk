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

#include <alibabacloud/csas/model/ListPrivateAccessTagsForDynamicRouteRequest.h>

using AlibabaCloud::Csas::Model::ListPrivateAccessTagsForDynamicRouteRequest;

ListPrivateAccessTagsForDynamicRouteRequest::ListPrivateAccessTagsForDynamicRouteRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListPrivateAccessTagsForDynamicRoute") {
  setMethod(HttpRequest::Method::Get);
}

ListPrivateAccessTagsForDynamicRouteRequest::~ListPrivateAccessTagsForDynamicRouteRequest() {}

std::vector<ListPrivateAccessTagsForDynamicRouteRequest::std::string> ListPrivateAccessTagsForDynamicRouteRequest::getDynamicRouteIds() const {
  return dynamicRouteIds_;
}

void ListPrivateAccessTagsForDynamicRouteRequest::setDynamicRouteIds(const std::vector<ListPrivateAccessTagsForDynamicRouteRequest::std::string> &dynamicRouteIds) {
  dynamicRouteIds_ = dynamicRouteIds;
  for(int dep1 = 0; dep1 != dynamicRouteIds.size(); dep1++) {
    setParameter(std::string("DynamicRouteIds") + "." + std::to_string(dep1 + 1), dynamicRouteIds[dep1]);
  }
}

std::string ListPrivateAccessTagsForDynamicRouteRequest::getSourceIp() const {
  return sourceIp_;
}

void ListPrivateAccessTagsForDynamicRouteRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

