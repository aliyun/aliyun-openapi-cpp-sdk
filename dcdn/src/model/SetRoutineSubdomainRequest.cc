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

#include <alibabacloud/dcdn/model/SetRoutineSubdomainRequest.h>

using AlibabaCloud::Dcdn::Model::SetRoutineSubdomainRequest;

SetRoutineSubdomainRequest::SetRoutineSubdomainRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "SetRoutineSubdomain") {
  setMethod(HttpRequest::Method::Post);
}

SetRoutineSubdomainRequest::~SetRoutineSubdomainRequest() {}

std::string SetRoutineSubdomainRequest::getSubdomains() const {
  return subdomains_;
}

void SetRoutineSubdomainRequest::setSubdomains(const std::string &subdomains) {
  subdomains_ = subdomains;
  setBodyParameter(std::string("Subdomains"), subdomains);
}

