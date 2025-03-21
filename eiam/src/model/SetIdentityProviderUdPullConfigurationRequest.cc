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

#include <alibabacloud/eiam/model/SetIdentityProviderUdPullConfigurationRequest.h>

using AlibabaCloud::Eiam::Model::SetIdentityProviderUdPullConfigurationRequest;

SetIdentityProviderUdPullConfigurationRequest::SetIdentityProviderUdPullConfigurationRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetIdentityProviderUdPullConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

SetIdentityProviderUdPullConfigurationRequest::~SetIdentityProviderUdPullConfigurationRequest() {}

std::string SetIdentityProviderUdPullConfigurationRequest::getGroupSyncStatus() const {
  return groupSyncStatus_;
}

void SetIdentityProviderUdPullConfigurationRequest::setGroupSyncStatus(const std::string &groupSyncStatus) {
  groupSyncStatus_ = groupSyncStatus;
  setParameter(std::string("GroupSyncStatus"), groupSyncStatus);
}

SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig SetIdentityProviderUdPullConfigurationRequest::getUdSyncScopeConfig() const {
  return udSyncScopeConfig_;
}

void SetIdentityProviderUdPullConfigurationRequest::setUdSyncScopeConfig(const SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig &udSyncScopeConfig) {
  udSyncScopeConfig_ = udSyncScopeConfig;
  setParameter(std::string("UdSyncScopeConfig") + ".TargetScope", udSyncScopeConfig.targetScope);
  for(int dep1 = 0; dep1 != udSyncScopeConfig.sourceScopes.size(); dep1++) {
    setParameter(std::string("UdSyncScopeConfig") + ".SourceScopes." + std::to_string(dep1 + 1), udSyncScopeConfig.sourceScopes[dep1]);
  }
}

std::string SetIdentityProviderUdPullConfigurationRequest::getPeriodicSyncStatus() const {
  return periodicSyncStatus_;
}

void SetIdentityProviderUdPullConfigurationRequest::setPeriodicSyncStatus(const std::string &periodicSyncStatus) {
  periodicSyncStatus_ = periodicSyncStatus;
  setParameter(std::string("PeriodicSyncStatus"), periodicSyncStatus);
}

SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig SetIdentityProviderUdPullConfigurationRequest::getLdapUdPullConfig() const {
  return ldapUdPullConfig_;
}

void SetIdentityProviderUdPullConfigurationRequest::setLdapUdPullConfig(const SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig &ldapUdPullConfig) {
  ldapUdPullConfig_ = ldapUdPullConfig;
  setParameter(std::string("LdapUdPullConfig") + ".GroupMemberAttributeName", ldapUdPullConfig.groupMemberAttributeName);
  setParameter(std::string("LdapUdPullConfig") + ".UserObjectClass", ldapUdPullConfig.userObjectClass);
  setParameter(std::string("LdapUdPullConfig") + ".UserObjectClassCustomFilter", ldapUdPullConfig.userObjectClassCustomFilter);
  setParameter(std::string("LdapUdPullConfig") + ".GroupObjectClass", ldapUdPullConfig.groupObjectClass);
  setParameter(std::string("LdapUdPullConfig") + ".GroupObjectClassCustomFilter", ldapUdPullConfig.groupObjectClassCustomFilter);
  setParameter(std::string("LdapUdPullConfig") + ".OrganizationUnitObjectClass", ldapUdPullConfig.organizationUnitObjectClass);
}

std::string SetIdentityProviderUdPullConfigurationRequest::getIdentityProviderId() const {
  return identityProviderId_;
}

void SetIdentityProviderUdPullConfigurationRequest::setIdentityProviderId(const std::string &identityProviderId) {
  identityProviderId_ = identityProviderId;
  setParameter(std::string("IdentityProviderId"), identityProviderId);
}

SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig SetIdentityProviderUdPullConfigurationRequest::getPeriodicSyncConfig() const {
  return periodicSyncConfig_;
}

void SetIdentityProviderUdPullConfigurationRequest::setPeriodicSyncConfig(const SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig &periodicSyncConfig) {
  periodicSyncConfig_ = periodicSyncConfig;
  for(int dep1 = 0; dep1 != periodicSyncConfig.periodicSyncTimes.size(); dep1++) {
    setParameter(std::string("PeriodicSyncConfig") + ".PeriodicSyncTimes." + std::to_string(dep1 + 1), std::to_string(periodicSyncConfig.periodicSyncTimes[dep1]));
  }
  setParameter(std::string("PeriodicSyncConfig") + ".PeriodicSyncCron", periodicSyncConfig.periodicSyncCron);
  setParameter(std::string("PeriodicSyncConfig") + ".PeriodicSyncType", periodicSyncConfig.periodicSyncType);
}

std::string SetIdentityProviderUdPullConfigurationRequest::getInstanceId() const {
  return instanceId_;
}

void SetIdentityProviderUdPullConfigurationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule SetIdentityProviderUdPullConfigurationRequest::getPullProtectedRule() const {
  return pullProtectedRule_;
}

void SetIdentityProviderUdPullConfigurationRequest::setPullProtectedRule(const SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule &pullProtectedRule) {
  pullProtectedRule_ = pullProtectedRule;
  setParameter(std::string("PullProtectedRule") + ".UserDeletedThreshold", std::to_string(pullProtectedRule.userDeletedThreshold));
  setParameter(std::string("PullProtectedRule") + ".GroupDeletedThreshold", std::to_string(pullProtectedRule.groupDeletedThreshold));
  setParameter(std::string("PullProtectedRule") + ".OrganizationalUnitDeletedThreshold", std::to_string(pullProtectedRule.organizationalUnitDeletedThreshold));
}

std::string SetIdentityProviderUdPullConfigurationRequest::getIncrementalCallbackStatus() const {
  return incrementalCallbackStatus_;
}

void SetIdentityProviderUdPullConfigurationRequest::setIncrementalCallbackStatus(const std::string &incrementalCallbackStatus) {
  incrementalCallbackStatus_ = incrementalCallbackStatus;
  setParameter(std::string("IncrementalCallbackStatus"), incrementalCallbackStatus);
}

