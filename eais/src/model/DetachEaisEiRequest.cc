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

#include <alibabacloud/eais/model/DetachEaisEiRequest.h>

using AlibabaCloud::Eais::Model::DetachEaisEiRequest;

DetachEaisEiRequest::DetachEaisEiRequest()
    : RpcServiceRequest("eais", "2019-06-24", "DetachEaisEi") {
  setMethod(HttpRequest::Method::Post);
}

DetachEaisEiRequest::~DetachEaisEiRequest() {}

std::string DetachEaisEiRequest::getEiInstanceId() const {
  return eiInstanceId_;
}

void DetachEaisEiRequest::setEiInstanceId(const std::string &eiInstanceId) {
  eiInstanceId_ = eiInstanceId;
  setParameter(std::string("EiInstanceId"), eiInstanceId);
}

std::string DetachEaisEiRequest::getRegionId() const {
  return regionId_;
}

void DetachEaisEiRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

