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

#include <alibabacloud/oos/model/GetParametersRequest.h>

using AlibabaCloud::Oos::Model::GetParametersRequest;

GetParametersRequest::GetParametersRequest()
    : RpcServiceRequest("oos", "2019-06-01", "GetParameters") {
  setMethod(HttpRequest::Method::Post);
}

GetParametersRequest::~GetParametersRequest() {}

std::string GetParametersRequest::getNames() const {
  return names_;
}

void GetParametersRequest::setNames(const std::string &names) {
  names_ = names;
  setParameter(std::string("Names"), names);
}

std::string GetParametersRequest::getRegionId() const {
  return regionId_;
}

void GetParametersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

