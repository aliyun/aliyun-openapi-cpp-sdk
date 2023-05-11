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

#include <alibabacloud/alidns/model/UpdateDnsGtmMonitorRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDnsGtmMonitorRequest;

UpdateDnsGtmMonitorRequest::UpdateDnsGtmMonitorRequest()
    : RpcServiceRequest("alidns", "2015-01-09", "UpdateDnsGtmMonitor") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDnsGtmMonitorRequest::~UpdateDnsGtmMonitorRequest() {}

std::string UpdateDnsGtmMonitorRequest::getMonitorExtendInfo() const {
  return monitorExtendInfo_;
}

void UpdateDnsGtmMonitorRequest::setMonitorExtendInfo(const std::string &monitorExtendInfo) {
  monitorExtendInfo_ = monitorExtendInfo;
  setParameter(std::string("MonitorExtendInfo"), monitorExtendInfo);
}

std::string UpdateDnsGtmMonitorRequest::getMonitorConfigId() const {
  return monitorConfigId_;
}

void UpdateDnsGtmMonitorRequest::setMonitorConfigId(const std::string &monitorConfigId) {
  monitorConfigId_ = monitorConfigId;
  setParameter(std::string("MonitorConfigId"), monitorConfigId);
}

int UpdateDnsGtmMonitorRequest::getTimeout() const {
  return timeout_;
}

void UpdateDnsGtmMonitorRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string UpdateDnsGtmMonitorRequest::getUserClientIp() const {
  return userClientIp_;
}

void UpdateDnsGtmMonitorRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

int UpdateDnsGtmMonitorRequest::getEvaluationCount() const {
  return evaluationCount_;
}

void UpdateDnsGtmMonitorRequest::setEvaluationCount(int evaluationCount) {
  evaluationCount_ = evaluationCount;
  setParameter(std::string("EvaluationCount"), std::to_string(evaluationCount));
}

std::string UpdateDnsGtmMonitorRequest::getProtocolType() const {
  return protocolType_;
}

void UpdateDnsGtmMonitorRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

int UpdateDnsGtmMonitorRequest::getInterval() const {
  return interval_;
}

void UpdateDnsGtmMonitorRequest::setInterval(int interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::string UpdateDnsGtmMonitorRequest::getLang() const {
  return lang_;
}

void UpdateDnsGtmMonitorRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<UpdateDnsGtmMonitorRequest::IspCityNode> UpdateDnsGtmMonitorRequest::getIspCityNode() const {
  return ispCityNode_;
}

void UpdateDnsGtmMonitorRequest::setIspCityNode(const std::vector<UpdateDnsGtmMonitorRequest::IspCityNode> &ispCityNode) {
  ispCityNode_ = ispCityNode;
  for(int dep1 = 0; dep1 != ispCityNode.size(); dep1++) {
  auto ispCityNodeObj = ispCityNode.at(dep1);
  std::string ispCityNodeObjStr = std::string("IspCityNode") + "." + std::to_string(dep1 + 1);
    setParameter(ispCityNodeObjStr + ".CityCode", ispCityNodeObj.cityCode);
    setParameter(ispCityNodeObjStr + ".IspCode", ispCityNodeObj.ispCode);
  }
}

