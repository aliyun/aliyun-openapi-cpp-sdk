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

#include <alibabacloud/smartag/model/GetQosAttributeRequest.h>

using AlibabaCloud::Smartag::Model::GetQosAttributeRequest;

GetQosAttributeRequest::GetQosAttributeRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "GetQosAttribute") {
  setMethod(HttpRequest::Method::Post);
}

GetQosAttributeRequest::~GetQosAttributeRequest() {}

std::string GetQosAttributeRequest::getRegionId() const {
  return regionId_;
}

void GetQosAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetQosAttributeRequest::getQosId() const {
  return qosId_;
}

void GetQosAttributeRequest::setQosId(const std::string &qosId) {
  qosId_ = qosId;
  setParameter(std::string("QosId"), qosId);
}

