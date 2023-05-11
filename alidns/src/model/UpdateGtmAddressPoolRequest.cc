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

#include <alibabacloud/alidns/model/UpdateGtmAddressPoolRequest.h>

using AlibabaCloud::Alidns::Model::UpdateGtmAddressPoolRequest;

UpdateGtmAddressPoolRequest::UpdateGtmAddressPoolRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateGtmAddressPool") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGtmAddressPoolRequest::~UpdateGtmAddressPoolRequest() {}

std::string UpdateGtmAddressPoolRequest::getType() const {
  return type_;
}

void UpdateGtmAddressPoolRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int UpdateGtmAddressPoolRequest::getMinAvailableAddrNum() const {
  return minAvailableAddrNum_;
}

void UpdateGtmAddressPoolRequest::setMinAvailableAddrNum(int minAvailableAddrNum) {
  minAvailableAddrNum_ = minAvailableAddrNum;
  setParameter(std::string("MinAvailableAddrNum"), std::to_string(minAvailableAddrNum));
}

std::string UpdateGtmAddressPoolRequest::getAddrPoolId() const {
  return addrPoolId_;
}

void UpdateGtmAddressPoolRequest::setAddrPoolId(const std::string &addrPoolId) {
  addrPoolId_ = addrPoolId;
  setParameter(std::string("AddrPoolId"), addrPoolId);
}

std::string UpdateGtmAddressPoolRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateGtmAddressPoolRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string UpdateGtmAddressPoolRequest::getName() const {
  return name_;
}

void UpdateGtmAddressPoolRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateGtmAddressPoolRequest::getLang() const {
  return lang_;
}

void UpdateGtmAddressPoolRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<UpdateGtmAddressPoolRequest::Addr> UpdateGtmAddressPoolRequest::getAddr() const {
  return addr_;
}

void UpdateGtmAddressPoolRequest::setAddr(const std::vector<UpdateGtmAddressPoolRequest::Addr> &addr) {
  addr_ = addr;
  for(int dep1 = 0; dep1 != addr.size(); dep1++) {
  auto addrObj = addr.at(dep1);
  std::string addrObjStr = std::string("Addr") + "." + std::to_string(dep1 + 1);
    setParameter(addrObjStr + ".Mode", addrObj.mode);
    setParameter(addrObjStr + ".LbaWeight", std::to_string(addrObj.lbaWeight));
    setParameter(addrObjStr + ".Value", addrObj.value);
  }
}

