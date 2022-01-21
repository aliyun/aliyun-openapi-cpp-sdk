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

#include <alibabacloud/cms/model/DisableHostAvailabilityRequest.h>

using AlibabaCloud::Cms::Model::DisableHostAvailabilityRequest;

DisableHostAvailabilityRequest::DisableHostAvailabilityRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DisableHostAvailability") {
  setMethod(HttpRequest::Method::Post);
}

DisableHostAvailabilityRequest::~DisableHostAvailabilityRequest() {}

std::vector<long> DisableHostAvailabilityRequest::getId() const {
  return id_;
}

void DisableHostAvailabilityRequest::setId(const std::vector<long> &id) {
  id_ = id;
}

