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

#include <alibabacloud/resourcemanager/model/UpdateAssociatedTransferSettingRequest.h>

using AlibabaCloud::ResourceManager::Model::UpdateAssociatedTransferSettingRequest;

UpdateAssociatedTransferSettingRequest::UpdateAssociatedTransferSettingRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "UpdateAssociatedTransferSetting") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAssociatedTransferSettingRequest::~UpdateAssociatedTransferSettingRequest() {}

std::vector<UpdateAssociatedTransferSettingRequest::RuleSettings> UpdateAssociatedTransferSettingRequest::getRuleSettings() const {
  return ruleSettings_;
}

void UpdateAssociatedTransferSettingRequest::setRuleSettings(const std::vector<UpdateAssociatedTransferSettingRequest::RuleSettings> &ruleSettings) {
  ruleSettings_ = ruleSettings;
  for(int dep1 = 0; dep1 != ruleSettings.size(); dep1++) {
    setParameter(std::string("RuleSettings") + "." + std::to_string(dep1 + 1) + ".AssociatedService", ruleSettings[dep1].associatedService);
    setParameter(std::string("RuleSettings") + "." + std::to_string(dep1 + 1) + ".MasterService", ruleSettings[dep1].masterService);
    setParameter(std::string("RuleSettings") + "." + std::to_string(dep1 + 1) + ".MasterResourceType", ruleSettings[dep1].masterResourceType);
    setParameter(std::string("RuleSettings") + "." + std::to_string(dep1 + 1) + ".AssociatedResourceType", ruleSettings[dep1].associatedResourceType);
    setParameter(std::string("RuleSettings") + "." + std::to_string(dep1 + 1) + ".RuleId", ruleSettings[dep1].ruleId);
    setParameter(std::string("RuleSettings") + "." + std::to_string(dep1 + 1) + ".Status", ruleSettings[dep1].status);
  }
}

std::string UpdateAssociatedTransferSettingRequest::getEnableExistingResourcesTransfer() const {
  return enableExistingResourcesTransfer_;
}

void UpdateAssociatedTransferSettingRequest::setEnableExistingResourcesTransfer(const std::string &enableExistingResourcesTransfer) {
  enableExistingResourcesTransfer_ = enableExistingResourcesTransfer;
  setParameter(std::string("EnableExistingResourcesTransfer"), enableExistingResourcesTransfer);
}

