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

#include <alibabacloud/ecs-workbench/model/LoginInstanceRequest.h>

using AlibabaCloud::Ecs_workbench::Model::LoginInstanceRequest;

LoginInstanceRequest::LoginInstanceRequest()
    : RpcServiceRequest("ecs-workbench", "2022-02-20", "LoginInstance") {
  setMethod(HttpRequest::Method::Post);
}

LoginInstanceRequest::~LoginInstanceRequest() {}

LoginInstanceRequest::PartnerInfo LoginInstanceRequest::getPartnerInfo() const {
  return partnerInfo_;
}

void LoginInstanceRequest::setPartnerInfo(const LoginInstanceRequest::PartnerInfo &partnerInfo) {
  partnerInfo_ = partnerInfo;
  setParameter(std::string("PartnerInfo") + ".PartnerName", partnerInfo.partnerName);
  setParameter(std::string("PartnerInfo") + ".PartnerId", partnerInfo.partnerId);
}

LoginInstanceRequest::InstanceLoginInfo LoginInstanceRequest::getInstanceLoginInfo() const {
  return instanceLoginInfo_;
}

void LoginInstanceRequest::setInstanceLoginInfo(const LoginInstanceRequest::InstanceLoginInfo &instanceLoginInfo) {
  instanceLoginInfo_ = instanceLoginInfo;
  setParameter(std::string("InstanceLoginInfo") + ".ExpireTime", instanceLoginInfo.expireTime);
  setParameter(std::string("InstanceLoginInfo") + ".LoginByInstanceShortcut", instanceLoginInfo.loginByInstanceShortcut ? "true" : "false");
  setParameter(std::string("InstanceLoginInfo") + ".Certificate", instanceLoginInfo.certificate);
  setParameter(std::string("InstanceLoginInfo") + ".AuthenticationType", instanceLoginInfo.authenticationType);
  setParameter(std::string("InstanceLoginInfo") + ".DockerExec", instanceLoginInfo.dockerExec);
  setParameter(std::string("InstanceLoginInfo") + ".ShortcutToken", instanceLoginInfo.shortcutToken);
  setParameter(std::string("InstanceLoginInfo") + ".ResourceGroupId", instanceLoginInfo.resourceGroupId);
  setParameter(std::string("InstanceLoginInfo") + ".Protocol", instanceLoginInfo.protocol);
  setParameter(std::string("InstanceLoginInfo") + ".Password", instanceLoginInfo.password);
  setParameter(std::string("InstanceLoginInfo") + ".LoginByInstanceCredential", instanceLoginInfo.loginByInstanceCredential ? "true" : "false");
  setParameter(std::string("InstanceLoginInfo") + ".InstanceId", instanceLoginInfo.instanceId);
  setParameter(std::string("InstanceLoginInfo") + ".RegionId", instanceLoginInfo.regionId);
  setParameter(std::string("InstanceLoginInfo") + ".Port", std::to_string(instanceLoginInfo.port));
  setParameter(std::string("InstanceLoginInfo") + ".VpcId", instanceLoginInfo.vpcId);
  setParameter(std::string("InstanceLoginInfo") + ".Host", instanceLoginInfo.host);
  setParameter(std::string("InstanceLoginInfo") + ".Options.OperationDisableSeconds", std::to_string(instanceLoginInfo.options.operationDisableSeconds));
  setParameter(std::string("InstanceLoginInfo") + ".Options.NotificationRecipientUrl", instanceLoginInfo.options.notificationRecipientUrl);
  setParameter(std::string("InstanceLoginInfo") + ".Options.SessionControl", instanceLoginInfo.options.sessionControl);
  setParameter(std::string("InstanceLoginInfo") + ".Options.VideoFreezeSeconds", std::to_string(instanceLoginInfo.options.videoFreezeSeconds));
  for(auto const &iter1 : instanceLoginInfo.options.containerInfo.headers) {
    setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.Headers." + iter1.first, iter1.second);
  }
  setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.Endpoint", instanceLoginInfo.options.containerInfo.endpoint);
  setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.ContainerName", instanceLoginInfo.options.containerInfo.containerName);
  setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.ClusterName", instanceLoginInfo.options.containerInfo.clusterName);
  setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.Namespace", instanceLoginInfo.options.containerInfo._namespace);
  setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.PodName", instanceLoginInfo.options.containerInfo.podName);
  setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.ClusterId", instanceLoginInfo.options.containerInfo.clusterId);
  setParameter(std::string("InstanceLoginInfo") + ".Options.ContainerInfo.Deployment", instanceLoginInfo.options.containerInfo.deployment);
  setParameter(std::string("InstanceLoginInfo") + ".Options.NotificationRetryIntervalSeconds", std::to_string(instanceLoginInfo.options.notificationRetryIntervalSeconds));
  setParameter(std::string("InstanceLoginInfo") + ".Options.AudioMuteSeconds", std::to_string(instanceLoginInfo.options.audioMuteSeconds));
  setParameter(std::string("InstanceLoginInfo") + ".Options.FixedHeight", std::to_string(instanceLoginInfo.options.fixedHeight));
  setParameter(std::string("InstanceLoginInfo") + ".Options.FixedWidth", std::to_string(instanceLoginInfo.options.fixedWidth));
  setParameter(std::string("InstanceLoginInfo") + ".Options.NotificationEventTypes", instanceLoginInfo.options.notificationEventTypes);
  setParameter(std::string("InstanceLoginInfo") + ".Options.NotificationRetryLimit", std::to_string(instanceLoginInfo.options.notificationRetryLimit));
  setParameter(std::string("InstanceLoginInfo") + ".InstanceType", instanceLoginInfo.instanceType);
  setParameter(std::string("InstanceLoginInfo") + ".DockerContainerName", instanceLoginInfo.dockerContainerName);
  setParameter(std::string("InstanceLoginInfo") + ".PassPhrase", instanceLoginInfo.passPhrase);
  setParameter(std::string("InstanceLoginInfo") + ".CredentialToken", instanceLoginInfo.credentialToken);
  setParameter(std::string("InstanceLoginInfo") + ".DurationSeconds", std::to_string(instanceLoginInfo.durationSeconds));
  setParameter(std::string("InstanceLoginInfo") + ".NetworkAccessMode", instanceLoginInfo.networkAccessMode);
  setParameter(std::string("InstanceLoginInfo") + ".Username", instanceLoginInfo.username);
}

LoginInstanceRequest::UserAccount LoginInstanceRequest::getUserAccount() const {
  return userAccount_;
}

void LoginInstanceRequest::setUserAccount(const LoginInstanceRequest::UserAccount &userAccount) {
  userAccount_ = userAccount;
  setParameter(std::string("UserAccount") + ".AccountId", std::to_string(userAccount.accountId));
  setParameter(std::string("UserAccount") + ".EmpId", userAccount.empId);
  setParameter(std::string("UserAccount") + ".ExpireTime", userAccount.expireTime);
  setParameter(std::string("UserAccount") + ".LoginName", userAccount.loginName);
  setParameter(std::string("UserAccount") + ".Options.LoginLimit", std::to_string(userAccount.options.loginLimit));
  setParameter(std::string("UserAccount") + ".AccountStructure", userAccount.accountStructure);
  setParameter(std::string("UserAccount") + ".DurationSeconds", std::to_string(userAccount.durationSeconds));
  setParameter(std::string("UserAccount") + ".ParentId", std::to_string(userAccount.parentId));
  setParameter(std::string("UserAccount") + ".AccountPlatform", userAccount.accountPlatform);
}

