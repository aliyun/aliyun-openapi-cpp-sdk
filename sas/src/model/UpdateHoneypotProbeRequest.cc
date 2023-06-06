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

#include <alibabacloud/sas/model/UpdateHoneypotProbeRequest.h>

using AlibabaCloud::Sas::Model::UpdateHoneypotProbeRequest;

UpdateHoneypotProbeRequest::UpdateHoneypotProbeRequest()
    : RpcServiceRequest("sas", "2018-12-03", "UpdateHoneypotProbe") {
  setMethod(HttpRequest::Method::Post);
}

UpdateHoneypotProbeRequest::~UpdateHoneypotProbeRequest() {}

bool UpdateHoneypotProbeRequest::getPing() const {
  return ping_;
}

void UpdateHoneypotProbeRequest::setPing(bool ping) {
  ping_ = ping;
  setParameter(std::string("Ping"), ping ? "true" : "false");
}

std::string UpdateHoneypotProbeRequest::getProbeId() const {
  return probeId_;
}

void UpdateHoneypotProbeRequest::setProbeId(const std::string &probeId) {
  probeId_ = probeId;
  setParameter(std::string("ProbeId"), probeId);
}

std::vector<std::string> UpdateHoneypotProbeRequest::getServiceIpList() const {
  return serviceIpList_;
}

void UpdateHoneypotProbeRequest::setServiceIpList(const std::vector<std::string> &serviceIpList) {
  serviceIpList_ = serviceIpList;
}

std::string UpdateHoneypotProbeRequest::getLang() const {
  return lang_;
}

void UpdateHoneypotProbeRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool UpdateHoneypotProbeRequest::getArp() const {
  return arp_;
}

void UpdateHoneypotProbeRequest::setArp(bool arp) {
  arp_ = arp;
  setParameter(std::string("Arp"), arp ? "true" : "false");
}

std::string UpdateHoneypotProbeRequest::getDisplayName() const {
  return displayName_;
}

void UpdateHoneypotProbeRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

