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

#include <alibabacloud/sas/model/ModifyOpenLogShipperRequest.h>

using AlibabaCloud::Sas::Model::ModifyOpenLogShipperRequest;

ModifyOpenLogShipperRequest::ModifyOpenLogShipperRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyOpenLogShipper") {
  setMethod(HttpRequest::Method::Post);
}

ModifyOpenLogShipperRequest::~ModifyOpenLogShipperRequest() {}

std::string ModifyOpenLogShipperRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyOpenLogShipperRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyOpenLogShipperRequest::getFrom() const {
  return from_;
}

void ModifyOpenLogShipperRequest::setFrom(const std::string &from) {
  from_ = from;
  setParameter(std::string("From"), from);
}

std::vector<ModifyOpenLogShipperRequest::LogMetaList> ModifyOpenLogShipperRequest::getLogMetaList() const {
  return logMetaList_;
}

void ModifyOpenLogShipperRequest::setLogMetaList(const std::vector<ModifyOpenLogShipperRequest::LogMetaList> &logMetaList) {
  logMetaList_ = logMetaList;
  for(int dep1 = 0; dep1 != logMetaList.size(); dep1++) {
  auto logMetaListObj = logMetaList.at(dep1);
  std::string logMetaListObjStr = std::string("LogMetaList") + "." + std::to_string(dep1 + 1);
    setParameter(logMetaListObjStr + ".HotTtl", std::to_string(logMetaListObj.hotTtl));
    setParameter(logMetaListObjStr + ".Ttl", std::to_string(logMetaListObj.ttl));
    setParameter(logMetaListObjStr + ".ConfigLogStore", logMetaListObj.configLogStore);
    setParameter(logMetaListObjStr + ".Status", logMetaListObj.status);
  }
}

int ModifyOpenLogShipperRequest::getTtl() const {
  return ttl_;
}

void ModifyOpenLogShipperRequest::setTtl(int ttl) {
  ttl_ = ttl;
  setParameter(std::string("Ttl"), std::to_string(ttl));
}

int ModifyOpenLogShipperRequest::getHotTtl() const {
  return hotTtl_;
}

void ModifyOpenLogShipperRequest::setHotTtl(int hotTtl) {
  hotTtl_ = hotTtl;
  setParameter(std::string("HotTtl"), std::to_string(hotTtl));
}

std::string ModifyOpenLogShipperRequest::getTargetRegionId() const {
  return targetRegionId_;
}

void ModifyOpenLogShipperRequest::setTargetRegionId(const std::string &targetRegionId) {
  targetRegionId_ = targetRegionId;
  setParameter(std::string("TargetRegionId"), targetRegionId);
}

