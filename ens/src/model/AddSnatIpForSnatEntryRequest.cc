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

#include <alibabacloud/ens/model/AddSnatIpForSnatEntryRequest.h>

using AlibabaCloud::Ens::Model::AddSnatIpForSnatEntryRequest;

AddSnatIpForSnatEntryRequest::AddSnatIpForSnatEntryRequest()
    : RpcServiceRequest("ens", "2017-11-10", "AddSnatIpForSnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

AddSnatIpForSnatEntryRequest::~AddSnatIpForSnatEntryRequest() {}

std::string AddSnatIpForSnatEntryRequest::getSnatIp() const {
  return snatIp_;
}

void AddSnatIpForSnatEntryRequest::setSnatIp(const std::string &snatIp) {
  snatIp_ = snatIp;
  setParameter(std::string("SnatIp"), snatIp);
}

std::string AddSnatIpForSnatEntryRequest::getSnatEntryId() const {
  return snatEntryId_;
}

void AddSnatIpForSnatEntryRequest::setSnatEntryId(const std::string &snatEntryId) {
  snatEntryId_ = snatEntryId;
  setParameter(std::string("SnatEntryId"), snatEntryId);
}

