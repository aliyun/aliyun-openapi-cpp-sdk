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

#include <alibabacloud/bssopenapi/model/SetAllExpirationDayRequest.h>

using AlibabaCloud::BssOpenApi::Model::SetAllExpirationDayRequest;

SetAllExpirationDayRequest::SetAllExpirationDayRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "SetAllExpirationDay") {
  setMethod(HttpRequest::Method::Post);
}

SetAllExpirationDayRequest::~SetAllExpirationDayRequest() {}

long SetAllExpirationDayRequest::getOwnerId() const {
  return ownerId_;
}

void SetAllExpirationDayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetAllExpirationDayRequest::getUnifyExpireDay() const {
  return unifyExpireDay_;
}

void SetAllExpirationDayRequest::setUnifyExpireDay(const std::string &unifyExpireDay) {
  unifyExpireDay_ = unifyExpireDay;
  setParameter(std::string("UnifyExpireDay"), unifyExpireDay);
}

