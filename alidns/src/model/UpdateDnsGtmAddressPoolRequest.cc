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

#include <alibabacloud/alidns/model/UpdateDnsGtmAddressPoolRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDnsGtmAddressPoolRequest;

UpdateDnsGtmAddressPoolRequest::UpdateDnsGtmAddressPoolRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateDnsGtmAddressPool") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDnsGtmAddressPoolRequest::~UpdateDnsGtmAddressPoolRequest() {}

std::string UpdateDnsGtmAddressPoolRequest::getLbaStrategy() const {
  return lbaStrategy_;
}

void UpdateDnsGtmAddressPoolRequest::setLbaStrategy(const std::string &lbaStrategy) {
  lbaStrategy_ = lbaStrategy;
  setParameter(std::string("LbaStrategy"), lbaStrategy);
}

std::string UpdateDnsGtmAddressPoolRequest::getAddrPoolId() const {
  return addrPoolId_;
}

void UpdateDnsGtmAddressPoolRequest::setAddrPoolId(const std::string &addrPoolId) {
  addrPoolId_ = addrPoolId;
  setParameter(std::string("AddrPoolId"), addrPoolId);
}

std::string UpdateDnsGtmAddressPoolRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDnsGtmAddressPoolRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateDnsGtmAddressPoolRequest::getName() const {
  return name_;
}

void UpdateDnsGtmAddressPoolRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateDnsGtmAddressPoolRequest::getLang() const {
  return lang_;
}

void UpdateDnsGtmAddressPoolRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<UpdateDnsGtmAddressPoolRequest::Addr> UpdateDnsGtmAddressPoolRequest::getAddr() const {
  return addr_;
}

void UpdateDnsGtmAddressPoolRequest::setAddr(const std::vector<UpdateDnsGtmAddressPoolRequest::Addr> &addr) {
  addr_ = addr;
  for(int dep1 = 0; dep1 != addr.size(); dep1++) {
  auto addrObj = addr.at(dep1);
  std::string addrObjStr = std::string("Addr") + "." + std::to_string(dep1 + 1);
    setParameter(addrObjStr + ".AttributeInfo", addrObj.attributeInfo);
    setParameter(addrObjStr + ".Mode", addrObj.mode);
    setParameter(addrObjStr + ".Remark", addrObj.remark);
    setParameter(addrObjStr + ".LbaWeight", std::to_string(addrObj.lbaWeight));
    setParameter(addrObjStr + ".Addr", addrObj.addr);
  }
}

