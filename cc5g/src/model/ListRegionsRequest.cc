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

#include <alibabacloud/cc5g/model/ListRegionsRequest.h>

using AlibabaCloud::CC5G::Model::ListRegionsRequest;

ListRegionsRequest::ListRegionsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListRegions") {
  setMethod(HttpRequest::Method::Get);
}

ListRegionsRequest::~ListRegionsRequest() {}

std::string ListRegionsRequest::getRegionId() const {
  return regionId_;
}

void ListRegionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListRegionsRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListRegionsRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

