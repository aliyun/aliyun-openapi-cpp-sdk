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

#include <alibabacloud/dataworks-public/model/DsgDesensPlanAddOrUpdateRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgDesensPlanAddOrUpdateRequest;

DsgDesensPlanAddOrUpdateRequest::DsgDesensPlanAddOrUpdateRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgDesensPlanAddOrUpdate") {
  setMethod(HttpRequest::Method::Post);
}

DsgDesensPlanAddOrUpdateRequest::~DsgDesensPlanAddOrUpdateRequest() {}

std::vector<DsgDesensPlanAddOrUpdateRequest::DesensRules> DsgDesensPlanAddOrUpdateRequest::getDesensRules() const {
  return desensRules_;
}

void DsgDesensPlanAddOrUpdateRequest::setDesensRules(const std::vector<DsgDesensPlanAddOrUpdateRequest::DesensRules> &desensRules) {
  desensRules_ = desensRules;
  for(int dep1 = 0; dep1 != desensRules.size(); dep1++) {
    setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".Owner", desensRules[dep1].owner);
    setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".DataType", desensRules[dep1].dataType);
    setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".RuleName", desensRules[dep1].ruleName);
    setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".Id", std::to_string(desensRules[dep1].id));
    for(int dep2 = 0; dep2 != desensRules[dep1].sceneIds.size(); dep2++) {
      setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".SceneIds." + std::to_string(dep2 + 1), std::to_string(desensRules[dep1].sceneIds[dep2]));
    }
    for(auto const &iter2 : desensRules[dep1].desensPlan.extParam) {
      setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".DesensPlan.ExtParam." + iter2.first, std::to_string(iter2.second));
    }
    setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".DesensPlan.DesensPlanType", desensRules[dep1].desensPlan.desensPlanType);
    setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".CheckWatermark", desensRules[dep1].checkWatermark ? "true" : "false");
    setParameter(std::string("DesensRules") + "." + std::to_string(dep1 + 1) + ".Status", std::to_string(desensRules[dep1].status));
  }
}

