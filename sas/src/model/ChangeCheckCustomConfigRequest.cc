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

#include <alibabacloud/sas/model/ChangeCheckCustomConfigRequest.h>

using AlibabaCloud::Sas::Model::ChangeCheckCustomConfigRequest;

ChangeCheckCustomConfigRequest::ChangeCheckCustomConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ChangeCheckCustomConfig") {
  setMethod(HttpRequest::Method::Post);
}

ChangeCheckCustomConfigRequest::~ChangeCheckCustomConfigRequest() {}

std::string ChangeCheckCustomConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ChangeCheckCustomConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ChangeCheckCustomConfigRequest::getRegionId() const {
  return regionId_;
}

void ChangeCheckCustomConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long ChangeCheckCustomConfigRequest::getCheckId() const {
  return checkId_;
}

void ChangeCheckCustomConfigRequest::setCheckId(long checkId) {
  checkId_ = checkId;
  setParameter(std::string("CheckId"), std::to_string(checkId));
}

std::vector<ChangeCheckCustomConfigRequest::CustomConfigs> ChangeCheckCustomConfigRequest::getCustomConfigs() const {
  return customConfigs_;
}

void ChangeCheckCustomConfigRequest::setCustomConfigs(const std::vector<ChangeCheckCustomConfigRequest::CustomConfigs> &customConfigs) {
  customConfigs_ = customConfigs;
  for(int dep1 = 0; dep1 != customConfigs.size(); dep1++) {
  auto customConfigsObj = customConfigs.at(dep1);
  std::string customConfigsObjStr = std::string("CustomConfigs") + "." + std::to_string(dep1 + 1);
    setParameter(customConfigsObjStr + ".Name", customConfigsObj.name);
    setParameter(customConfigsObjStr + ".Value", customConfigsObj.value);
    setParameter(customConfigsObjStr + ".Operation", customConfigsObj.operation);
  }
}

