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

#include <alibabacloud/cms/model/DeleteHostAvailabilityRequest.h>

using AlibabaCloud::Cms::Model::DeleteHostAvailabilityRequest;

DeleteHostAvailabilityRequest::DeleteHostAvailabilityRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DeleteHostAvailability") {
  setMethod(HttpRequest::Method::Post);
}

DeleteHostAvailabilityRequest::~DeleteHostAvailabilityRequest() {}

std::vector<long> DeleteHostAvailabilityRequest::getId() const {
  return id_;
}

void DeleteHostAvailabilityRequest::setId(const std::vector<long> &id) {
  id_ = id;
}

