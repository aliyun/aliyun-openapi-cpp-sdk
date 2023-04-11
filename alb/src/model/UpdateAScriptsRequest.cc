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

#include <alibabacloud/alb/model/UpdateAScriptsRequest.h>

using AlibabaCloud::Alb::Model::UpdateAScriptsRequest;

UpdateAScriptsRequest::UpdateAScriptsRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateAScripts") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAScriptsRequest::~UpdateAScriptsRequest() {}

std::string UpdateAScriptsRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAScriptsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateAScriptsRequest::AScripts> UpdateAScriptsRequest::getAScripts() const {
  return aScripts_;
}

void UpdateAScriptsRequest::setAScripts(const std::vector<UpdateAScriptsRequest::AScripts> &aScripts) {
  aScripts_ = aScripts;
  for(int dep1 = 0; dep1 != aScripts.size(); dep1++) {
    setParameter(std::string("AScripts") + "." + std::to_string(dep1 + 1) + ".AScriptName", aScripts[dep1].aScriptName);
    setParameter(std::string("AScripts") + "." + std::to_string(dep1 + 1) + ".AScriptId", aScripts[dep1].aScriptId);
    setParameter(std::string("AScripts") + "." + std::to_string(dep1 + 1) + ".ExtAttributeEnabled", aScripts[dep1].extAttributeEnabled ? "true" : "false");
    setParameter(std::string("AScripts") + "." + std::to_string(dep1 + 1) + ".ScriptContent", aScripts[dep1].scriptContent);
    for(int dep2 = 0; dep2 != aScripts[dep1].extAttributes.size(); dep2++) {
      setParameter(std::string("AScripts") + "." + std::to_string(dep1 + 1) + ".ExtAttributes." + std::to_string(dep2 + 1) + ".AttributeValue", aScripts[dep1].extAttributes[dep2].attributeValue);
      setParameter(std::string("AScripts") + "." + std::to_string(dep1 + 1) + ".ExtAttributes." + std::to_string(dep2 + 1) + ".AttributeKey", aScripts[dep1].extAttributes[dep2].attributeKey);
    }
    setParameter(std::string("AScripts") + "." + std::to_string(dep1 + 1) + ".Enabled", aScripts[dep1].enabled ? "true" : "false");
  }
}

bool UpdateAScriptsRequest::getDryRun() const {
  return dryRun_;
}

void UpdateAScriptsRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

