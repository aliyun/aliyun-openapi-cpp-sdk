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

#include <alibabacloud/sas/model/CreateHoneypotProbeRequest.h>

using AlibabaCloud::Sas::Model::CreateHoneypotProbeRequest;

CreateHoneypotProbeRequest::CreateHoneypotProbeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateHoneypotProbe") {
  setMethod(HttpRequest::Method::Post);
}

CreateHoneypotProbeRequest::~CreateHoneypotProbeRequest() {}

std::string CreateHoneypotProbeRequest::getControlNodeId() const {
  return controlNodeId_;
}

void CreateHoneypotProbeRequest::setControlNodeId(const std::string &controlNodeId) {
  controlNodeId_ = controlNodeId;
  setParameter(std::string("ControlNodeId"), controlNodeId);
}

std::string CreateHoneypotProbeRequest::getProxyIp() const {
  return proxyIp_;
}

void CreateHoneypotProbeRequest::setProxyIp(const std::string &proxyIp) {
  proxyIp_ = proxyIp;
  setParameter(std::string("ProxyIp"), proxyIp);
}

bool CreateHoneypotProbeRequest::getPing() const {
  return ping_;
}

void CreateHoneypotProbeRequest::setPing(bool ping) {
  ping_ = ping;
  setParameter(std::string("Ping"), ping ? "true" : "false");
}

std::string CreateHoneypotProbeRequest::getProbeId() const {
  return probeId_;
}

void CreateHoneypotProbeRequest::setProbeId(const std::string &probeId) {
  probeId_ = probeId;
  setParameter(std::string("ProbeId"), probeId);
}

std::string CreateHoneypotProbeRequest::getUuid() const {
  return uuid_;
}

void CreateHoneypotProbeRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string CreateHoneypotProbeRequest::getProbeVersion() const {
  return probeVersion_;
}

void CreateHoneypotProbeRequest::setProbeVersion(const std::string &probeVersion) {
  probeVersion_ = probeVersion;
  setParameter(std::string("ProbeVersion"), probeVersion);
}

std::vector<std::string> CreateHoneypotProbeRequest::getServiceIpList() const {
  return serviceIpList_;
}

void CreateHoneypotProbeRequest::setServiceIpList(const std::vector<std::string> &serviceIpList) {
  serviceIpList_ = serviceIpList;
}

std::vector<CreateHoneypotProbeRequest::HoneypotBindList> CreateHoneypotProbeRequest::getHoneypotBindList() const {
  return honeypotBindList_;
}

void CreateHoneypotProbeRequest::setHoneypotBindList(const std::vector<CreateHoneypotProbeRequest::HoneypotBindList> &honeypotBindList) {
  honeypotBindList_ = honeypotBindList;
  for(int dep1 = 0; dep1 != honeypotBindList.size(); dep1++) {
  auto honeypotBindListObj = honeypotBindList.at(dep1);
  std::string honeypotBindListObjStr = std::string("HoneypotBindList") + "." + std::to_string(dep1 + 1);
    for(int dep2 = 0; dep2 != honeypotBindListObj.bindPortList.size(); dep2++) {
    auto bindPortListObj = honeypotBindListObj.bindPortList.at(dep2);
    std::string bindPortListObjStr = honeypotBindListObjStr + ".BindPortList" + "." + std::to_string(dep2 + 1);
      setParameter(bindPortListObjStr + ".StartPort", std::to_string(bindPortListObj.startPort));
      setParameter(bindPortListObjStr + ".BindPort", bindPortListObj.bindPort ? "true" : "false");
      setParameter(bindPortListObjStr + ".Fixed", bindPortListObj.fixed ? "true" : "false");
      setParameter(bindPortListObjStr + ".EndPort", std::to_string(bindPortListObj.endPort));
      setParameter(bindPortListObjStr + ".TargetPort", std::to_string(bindPortListObj.targetPort));
    }
    setParameter(honeypotBindListObjStr + ".HoneypotId", honeypotBindListObj.honeypotId);
  }
}

std::string CreateHoneypotProbeRequest::getLang() const {
  return lang_;
}

void CreateHoneypotProbeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool CreateHoneypotProbeRequest::getArp() const {
  return arp_;
}

void CreateHoneypotProbeRequest::setArp(bool arp) {
  arp_ = arp;
  setParameter(std::string("Arp"), arp ? "true" : "false");
}

std::string CreateHoneypotProbeRequest::getProbeType() const {
  return probeType_;
}

void CreateHoneypotProbeRequest::setProbeType(const std::string &probeType) {
  probeType_ = probeType;
  setParameter(std::string("ProbeType"), probeType);
}

std::string CreateHoneypotProbeRequest::getProbeStatus() const {
  return probeStatus_;
}

void CreateHoneypotProbeRequest::setProbeStatus(const std::string &probeStatus) {
  probeStatus_ = probeStatus;
  setParameter(std::string("ProbeStatus"), probeStatus);
}

std::string CreateHoneypotProbeRequest::getBusinessGroupId() const {
  return businessGroupId_;
}

void CreateHoneypotProbeRequest::setBusinessGroupId(const std::string &businessGroupId) {
  businessGroupId_ = businessGroupId;
  setParameter(std::string("BusinessGroupId"), businessGroupId);
}

std::string CreateHoneypotProbeRequest::getDisplayName() const {
  return displayName_;
}

void CreateHoneypotProbeRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateHoneypotProbeRequest::getVpcId() const {
  return vpcId_;
}

void CreateHoneypotProbeRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

