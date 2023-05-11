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

#include <alibabacloud/alidns/model/DeleteGtmAddressPoolRequest.h>

using AlibabaCloud::Alidns::Model::DeleteGtmAddressPoolRequest;

DeleteGtmAddressPoolRequest::DeleteGtmAddressPoolRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "DeleteGtmAddressPool") {
  setMethod(HttpRequest::Method::Post);
}

DeleteGtmAddressPoolRequest::~DeleteGtmAddressPoolRequest() {}

std::string DeleteGtmAddressPoolRequest::getAddrPoolId() const {
  return addrPoolId_;
}

void DeleteGtmAddressPoolRequest::setAddrPoolId(const std::string &addrPoolId) {
  addrPoolId_ = addrPoolId;
  setParameter(std::string("AddrPoolId"), addrPoolId);
}

std::string DeleteGtmAddressPoolRequest::getUserClientIp() const {
  return userClientIp_;
}

void DeleteGtmAddressPoolRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string DeleteGtmAddressPoolRequest::getLang() const {
  return lang_;
}

void DeleteGtmAddressPoolRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

