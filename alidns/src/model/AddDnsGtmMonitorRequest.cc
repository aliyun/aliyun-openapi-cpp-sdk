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

#include <alibabacloud/alidns/model/AddDnsGtmMonitorRequest.h>

using AlibabaCloud::Alidns::Model::AddDnsGtmMonitorRequest;

AddDnsGtmMonitorRequest::AddDnsGtmMonitorRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "AddDnsGtmMonitor") {
  setMethod(HttpRequest::Method::Post);
}

AddDnsGtmMonitorRequest::~AddDnsGtmMonitorRequest() {}

std::string AddDnsGtmMonitorRequest::getMonitorExtendInfo() const {
  return monitorExtendInfo_;
}

void AddDnsGtmMonitorRequest::setMonitorExtendInfo(const std::string &monitorExtendInfo) {
  monitorExtendInfo_ = monitorExtendInfo;
  setParameter(std::string("MonitorExtendInfo"), monitorExtendInfo);
}

int AddDnsGtmMonitorRequest::getTimeout() const {
  return timeout_;
}

void AddDnsGtmMonitorRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string AddDnsGtmMonitorRequest::getAddrPoolId() const {
  return addrPoolId_;
}

void AddDnsGtmMonitorRequest::setAddrPoolId(const std::string &addrPoolId) {
  addrPoolId_ = addrPoolId;
  setParameter(std::string("AddrPoolId"), addrPoolId);
}

std::string AddDnsGtmMonitorRequest::getUserClientIp() const {
  return userClientIp_;
}

void AddDnsGtmMonitorRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int AddDnsGtmMonitorRequest::getEvaluationCount() const {
  return evaluationCount_;
}

void AddDnsGtmMonitorRequest::setEvaluationCount(int evaluationCount) {
  evaluationCount_ = evaluationCount;
  setParameter(std::string("EvaluationCount"), std::to_string(evaluationCount));
}

std::string AddDnsGtmMonitorRequest::getProtocolType() const {
  return protocolType_;
}

void AddDnsGtmMonitorRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

int AddDnsGtmMonitorRequest::getInterval() const {
  return interval_;
}

void AddDnsGtmMonitorRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::string AddDnsGtmMonitorRequest::getLang() const {
  return lang_;
}

void AddDnsGtmMonitorRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<AddDnsGtmMonitorRequest::IspCityNode> AddDnsGtmMonitorRequest::getIspCityNode() const {
  return ispCityNode_;
}

void AddDnsGtmMonitorRequest::setIspCityNode(const std::vector<AddDnsGtmMonitorRequest::IspCityNode> &ispCityNode) {
  ispCityNode_ = ispCityNode;
  for(int dep1 = 0; dep1 != ispCityNode.size(); dep1++) {
  auto ispCityNodeObj = ispCityNode.at(dep1);
  std::string ispCityNodeObjStr = std::string("IspCityNode") + "." + std::to_string(dep1 + 1);
    setParameter(ispCityNodeObjStr + ".CityCode", ispCityNodeObj.cityCode);
    setParameter(ispCityNodeObjStr + ".IspCode", ispCityNodeObj.ispCode);
  }
}

