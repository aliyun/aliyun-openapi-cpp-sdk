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

#include <alibabacloud/eds-user/model/RemovePropertyRequest.h>

using AlibabaCloud::Eds_user::Model::RemovePropertyRequest;

RemovePropertyRequest::RemovePropertyRequest()
    : RpcServiceRequest("eds-user", "2021-03-08", "RemoveProperty") {
  setMethod(HttpRequest::Method::Post);
}

RemovePropertyRequest::~RemovePropertyRequest() {}

long RemovePropertyRequest::getPropertyId() const {
  return propertyId_;
}

void RemovePropertyRequest::setPropertyId(long propertyId) {
  propertyId_ = propertyId;
  setBodyParameter(std::string("PropertyId"), std::to_string(propertyId));
}

