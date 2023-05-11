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

#include <alibabacloud/alidns/model/AddGtmAddressPoolRequest.h>

using AlibabaCloud::Alidns::Model::AddGtmAddressPoolRequest;

AddGtmAddressPoolRequest::AddGtmAddressPoolRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddGtmAddressPool") {
  setMethod(HttpRequest::Method::Post);
}

AddGtmAddressPoolRequest::~AddGtmAddressPoolRequest() {}

std::string AddGtmAddressPoolRequest::getMonitorExtendInfo() const {
  return monitorExtendInfo_;
}

void AddGtmAddressPoolRequest::setMonitorExtendInfo(const std::string &monitorExtendInfo) {
  monitorExtendInfo_ = monitorExtendInfo;
  setParameter(std::string("MonitorExtendInfo"), monitorExtendInfo);
}

std::string AddGtmAddressPoolRequest::getType() const {
  return type_;
}

void AddGtmAddressPoolRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int AddGtmAddressPoolRequest::getTimeout() const {
  return timeout_;
}

void AddGtmAddressPoolRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

int AddGtmAddressPoolRequest::getMinAvailableAddrNum() const {
  return minAvailableAddrNum_;
}

void AddGtmAddressPoolRequest::setMinAvailableAddrNum(int minAvailableAddrNum) {
  minAvailableAddrNum_ = minAvailableAddrNum;
  setParameter(std::string("MinAvailableAddrNum"), std::to_string(minAvailableAddrNum));
}

int AddGtmAddressPoolRequest::getEvaluationCount() const {
  return evaluationCount_;
}

void AddGtmAddressPoolRequest::setEvaluationCount(int evaluationCount) {
  evaluationCount_ = evaluationCount;
  setParameter(std::string("EvaluationCount"), std::to_string(evaluationCount));
}

std::string AddGtmAddressPoolRequest::getLang() const {
  return lang_;
}

void AddGtmAddressPoolRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<AddGtmAddressPoolRequest::Addr> AddGtmAddressPoolRequest::getAddr() const {
  return addr_;
}

void AddGtmAddressPoolRequest::setAddr(const std::vector<AddGtmAddressPoolRequest::Addr> &addr) {
  addr_ = addr;
  for(int dep1 = 0; dep1 != addr.size(); dep1++) {
  auto addrObj = addr.at(dep1);
  std::string addrObjStr = std::string("Addr") + "." + std::to_string(dep1 + 1);
    setParameter(addrObjStr + ".Mode", addrObj.mode);
    setParameter(addrObjStr + ".LbaWeight", std::to_string(addrObj.lbaWeight));
    setParameter(addrObjStr + ".Value", addrObj.value);
  }
}

std::string AddGtmAddressPoolRequest::getMonitorStatus() const {
  return monitorStatus_;
}

void AddGtmAddressPoolRequest::setMonitorStatus(const std::string &monitorStatus) {
  monitorStatus_ = monitorStatus;
  setParameter(std::string("MonitorStatus"), monitorStatus);
}

std::string AddGtmAddressPoolRequest::getInstanceId() const {
  return instanceId_;
}

void AddGtmAddressPoolRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string AddGtmAddressPoolRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddGtmAddressPoolRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string AddGtmAddressPoolRequest::getName() const {
  return name_;
}

void AddGtmAddressPoolRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddGtmAddressPoolRequest::getProtocolType() const {
  return protocolType_;
}

void AddGtmAddressPoolRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

int AddGtmAddressPoolRequest::getInterval() const {
  return interval_;
}

void AddGtmAddressPoolRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::vector<AddGtmAddressPoolRequest::IspCityNode> AddGtmAddressPoolRequest::getIspCityNode() const {
  return ispCityNode_;
}

void AddGtmAddressPoolRequest::setIspCityNode(const std::vector<AddGtmAddressPoolRequest::IspCityNode> &ispCityNode) {
  ispCityNode_ = ispCityNode;
  for(int dep1 = 0; dep1 != ispCityNode.size(); dep1++) {
  auto ispCityNodeObj = ispCityNode.at(dep1);
  std::string ispCityNodeObjStr = std::string("IspCityNode") + "." + std::to_string(dep1 + 1);
    setParameter(ispCityNodeObjStr + ".CityCode", ispCityNodeObj.cityCode);
    setParameter(ispCityNodeObjStr + ".IspCode", ispCityNodeObj.ispCode);
  }
}

