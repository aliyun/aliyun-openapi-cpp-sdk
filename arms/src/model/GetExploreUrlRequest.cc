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

#include <alibabacloud/arms/model/GetExploreUrlRequest.h>

using AlibabaCloud::ARMS::Model::GetExploreUrlRequest;

GetExploreUrlRequest::GetExploreUrlRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetExploreUrl") {
  setMethod(HttpRequest::Method::Post);
}

GetExploreUrlRequest::~GetExploreUrlRequest() {}

std::string GetExploreUrlRequest::getExpression() const {
  return expression_;
}

void GetExploreUrlRequest::setExpression(const std::string &expression) {
  expression_ = expression;
  setParameter(std::string("Expression"), expression);
}

std::string GetExploreUrlRequest::getRegionId() const {
  return regionId_;
}

void GetExploreUrlRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetExploreUrlRequest::getClusterId() const {
  return clusterId_;
}

void GetExploreUrlRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetExploreUrlRequest::getType() const {
  return type_;
}

void GetExploreUrlRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

