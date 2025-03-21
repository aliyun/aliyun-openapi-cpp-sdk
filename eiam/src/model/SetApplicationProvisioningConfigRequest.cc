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

#include <alibabacloud/eiam/model/SetApplicationProvisioningConfigRequest.h>

using AlibabaCloud::Eiam::Model::SetApplicationProvisioningConfigRequest;

SetApplicationProvisioningConfigRequest::SetApplicationProvisioningConfigRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetApplicationProvisioningConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetApplicationProvisioningConfigRequest::~SetApplicationProvisioningConfigRequest() {}

std::string SetApplicationProvisioningConfigRequest::getProvisionProtocolType() const {
  return provisionProtocolType_;
}

void SetApplicationProvisioningConfigRequest::setProvisionProtocolType(const std::string &provisionProtocolType) {
  provisionProtocolType_ = provisionProtocolType;
  setParameter(std::string("ProvisionProtocolType"), provisionProtocolType);
}

std::string SetApplicationProvisioningConfigRequest::getApplicationId() const {
  return applicationId_;
}

void SetApplicationProvisioningConfigRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig SetApplicationProvisioningConfigRequest::getCallbackProvisioningConfig() const {
  return callbackProvisioningConfig_;
}

void SetApplicationProvisioningConfigRequest::setCallbackProvisioningConfig(const SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig &callbackProvisioningConfig) {
  callbackProvisioningConfig_ = callbackProvisioningConfig;
  for(int dep1 = 0; dep1 != callbackProvisioningConfig.listenEventScopes.size(); dep1++) {
    setParameter(std::string("CallbackProvisioningConfig") + ".ListenEventScopes." + std::to_string(dep1 + 1), callbackProvisioningConfig.listenEventScopes[dep1]);
  }
  setParameter(std::string("CallbackProvisioningConfig") + ".EncryptRequired", callbackProvisioningConfig.encryptRequired ? "true" : "false");
  setParameter(std::string("CallbackProvisioningConfig") + ".CallbackUrl", callbackProvisioningConfig.callbackUrl);
  setParameter(std::string("CallbackProvisioningConfig") + ".EncryptKey", callbackProvisioningConfig.encryptKey);
}

std::string SetApplicationProvisioningConfigRequest::getInstanceId() const {
  return instanceId_;
}

void SetApplicationProvisioningConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool SetApplicationProvisioningConfigRequest::getProvisionPassword() const {
  return provisionPassword_;
}

void SetApplicationProvisioningConfigRequest::setProvisionPassword(bool provisionPassword) {
  provisionPassword_ = provisionPassword;
  setParameter(std::string("ProvisionPassword"), provisionPassword ? "true" : "false");
}

SetApplicationProvisioningConfigRequest::ScimProvisioningConfig SetApplicationProvisioningConfigRequest::getScimProvisioningConfig() const {
  return scimProvisioningConfig_;
}

void SetApplicationProvisioningConfigRequest::setScimProvisioningConfig(const SetApplicationProvisioningConfigRequest::ScimProvisioningConfig &scimProvisioningConfig) {
  scimProvisioningConfig_ = scimProvisioningConfig;
  for(int dep1 = 0; dep1 != scimProvisioningConfig.fullPushScopes.size(); dep1++) {
    setParameter(std::string("ScimProvisioningConfig") + ".FullPushScopes." + std::to_string(dep1 + 1), scimProvisioningConfig.fullPushScopes[dep1]);
  }
  setParameter(std::string("ScimProvisioningConfig") + ".AuthnConfiguration.AuthnMode", scimProvisioningConfig.authnConfiguration.authnMode);
  setParameter(std::string("ScimProvisioningConfig") + ".AuthnConfiguration.GrantType", scimProvisioningConfig.authnConfiguration.grantType);
  setParameter(std::string("ScimProvisioningConfig") + ".AuthnConfiguration.AuthnParam.ClientId", scimProvisioningConfig.authnConfiguration.authnParam.clientId);
  setParameter(std::string("ScimProvisioningConfig") + ".AuthnConfiguration.AuthnParam.ClientSecret", scimProvisioningConfig.authnConfiguration.authnParam.clientSecret);
  setParameter(std::string("ScimProvisioningConfig") + ".AuthnConfiguration.AuthnParam.AccessToken", scimProvisioningConfig.authnConfiguration.authnParam.accessToken);
  setParameter(std::string("ScimProvisioningConfig") + ".AuthnConfiguration.AuthnParam.TokenEndpoint", scimProvisioningConfig.authnConfiguration.authnParam.tokenEndpoint);
  setParameter(std::string("ScimProvisioningConfig") + ".AuthnConfiguration.AuthnParam.AuthnMethod", scimProvisioningConfig.authnConfiguration.authnParam.authnMethod);
  setParameter(std::string("ScimProvisioningConfig") + ".ScimBaseUrl", scimProvisioningConfig.scimBaseUrl);
  for(int dep1 = 0; dep1 != scimProvisioningConfig.provisioningActions.size(); dep1++) {
    setParameter(std::string("ScimProvisioningConfig") + ".ProvisioningActions." + std::to_string(dep1 + 1), scimProvisioningConfig.provisioningActions[dep1]);
  }
}

