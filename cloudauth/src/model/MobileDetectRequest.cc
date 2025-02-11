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

#include <alibabacloud/cloudauth/model/MobileDetectRequest.h>

using AlibabaCloud::Cloudauth::Model::MobileDetectRequest;

MobileDetectRequest::MobileDetectRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "MobileDetect") {
  setMethod(HttpRequest::Method::Post);
}

MobileDetectRequest::~MobileDetectRequest() {}

std::string MobileDetectRequest::getParamType() const {
  return paramType_;
}

void MobileDetectRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setBodyParameter(std::string("ParamType"), paramType);
}

std::string MobileDetectRequest::getMobiles() const {
  return mobiles_;
}

void MobileDetectRequest::setMobiles(const std::string &mobiles) {
  mobiles_ = mobiles;
  setBodyParameter(std::string("Mobiles"), mobiles);
}

