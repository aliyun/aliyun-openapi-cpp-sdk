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

#include <alibabacloud/sas/model/ListAgentlessRiskUuidRequest.h>

using AlibabaCloud::Sas::Model::ListAgentlessRiskUuidRequest;

ListAgentlessRiskUuidRequest::ListAgentlessRiskUuidRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListAgentlessRiskUuid") {
  setMethod(HttpRequest::Method::Post);
}

ListAgentlessRiskUuidRequest::~ListAgentlessRiskUuidRequest() {}

std::string ListAgentlessRiskUuidRequest::getInternetIp() const {
  return internetIp_;
}

void ListAgentlessRiskUuidRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

std::string ListAgentlessRiskUuidRequest::getTargetName() const {
  return targetName_;
}

void ListAgentlessRiskUuidRequest::setTargetName(const std::string &targetName) {
  targetName_ = targetName;
  setParameter(std::string("TargetName"), targetName);
}

std::string ListAgentlessRiskUuidRequest::getSourceIp() const {
  return sourceIp_;
}

void ListAgentlessRiskUuidRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListAgentlessRiskUuidRequest::getPageSize() const {
  return pageSize_;
}

void ListAgentlessRiskUuidRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAgentlessRiskUuidRequest::getMachineName() const {
  return machineName_;
}

void ListAgentlessRiskUuidRequest::setMachineName(const std::string &machineName) {
  machineName_ = machineName;
  setParameter(std::string("MachineName"), machineName);
}

int ListAgentlessRiskUuidRequest::getCurrentPage() const {
  return currentPage_;
}

void ListAgentlessRiskUuidRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

bool ListAgentlessRiskUuidRequest::getRisk() const {
  return risk_;
}

void ListAgentlessRiskUuidRequest::setRisk(bool risk) {
  risk_ = risk;
  setParameter(std::string("Risk"), risk ? "true" : "false");
}

std::string ListAgentlessRiskUuidRequest::getIntranetIp() const {
  return intranetIp_;
}

void ListAgentlessRiskUuidRequest::setIntranetIp(const std::string &intranetIp) {
  intranetIp_ = intranetIp;
  setParameter(std::string("IntranetIp"), intranetIp);
}

