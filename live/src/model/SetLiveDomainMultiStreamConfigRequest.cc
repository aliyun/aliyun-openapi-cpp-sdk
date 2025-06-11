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

#include <alibabacloud/live/model/SetLiveDomainMultiStreamConfigRequest.h>

using AlibabaCloud::Live::Model::SetLiveDomainMultiStreamConfigRequest;

SetLiveDomainMultiStreamConfigRequest::SetLiveDomainMultiStreamConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetLiveDomainMultiStreamConfig") {
  setMethod(HttpRequest::Method::Get);
}

SetLiveDomainMultiStreamConfigRequest::~SetLiveDomainMultiStreamConfigRequest() {}

std::string SetLiveDomainMultiStreamConfigRequest::get_Switch() const {
  return _switch_;
}

void SetLiveDomainMultiStreamConfigRequest::set_Switch(const std::string &_switch) {
  _switch_ = _switch;
  setParameter(std::string("Switch"), _switch);
}

long SetLiveDomainMultiStreamConfigRequest::getOwnerId() const {
  return ownerId_;
}

void SetLiveDomainMultiStreamConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLiveDomainMultiStreamConfigRequest::getDomain() const {
  return domain_;
}

void SetLiveDomainMultiStreamConfigRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

