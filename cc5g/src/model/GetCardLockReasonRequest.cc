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

#include <alibabacloud/cc5g/model/GetCardLockReasonRequest.h>

using AlibabaCloud::CC5G::Model::GetCardLockReasonRequest;

GetCardLockReasonRequest::GetCardLockReasonRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "GetCardLockReason") {
  setMethod(HttpRequest::Method::Get);
}

GetCardLockReasonRequest::~GetCardLockReasonRequest() {}

std::string GetCardLockReasonRequest::getIccid() const {
  return iccid_;
}

void GetCardLockReasonRequest::setIccid(const std::string &iccid) {
  iccid_ = iccid;
  setParameter(std::string("Iccid"), iccid);
}

