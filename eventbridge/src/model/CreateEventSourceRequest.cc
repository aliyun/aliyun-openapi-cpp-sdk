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

#include <alibabacloud/eventbridge/model/CreateEventSourceRequest.h>

using AlibabaCloud::Eventbridge::Model::CreateEventSourceRequest;

CreateEventSourceRequest::CreateEventSourceRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "CreateEventSource") {
  setMethod(HttpRequest::Method::Post);
}

CreateEventSourceRequest::~CreateEventSourceRequest() {}

std::string CreateEventSourceRequest::getDescription() const {
  return description_;
}

void CreateEventSourceRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateEventSourceRequest::getEventBusName() const {
  return eventBusName_;
}

void CreateEventSourceRequest::setEventBusName(const std::string &eventBusName) {
  eventBusName_ = eventBusName;
  setBodyParameter(std::string("EventBusName"), eventBusName);
}

CreateEventSourceRequest::SourceMNSParameters CreateEventSourceRequest::getSourceMNSParameters() const {
  return sourceMNSParameters_;
}

void CreateEventSourceRequest::setSourceMNSParameters(const CreateEventSourceRequest::SourceMNSParameters &sourceMNSParameters) {
  sourceMNSParameters_ = sourceMNSParameters;
  setBodyParameter(std::string("SourceMNSParameters") + ".QueueName", sourceMNSParameters.queueName);
  setBodyParameter(std::string("SourceMNSParameters") + ".RegionId", sourceMNSParameters.regionId);
  setBodyParameter(std::string("SourceMNSParameters") + ".IsBase64Decode", sourceMNSParameters.isBase64Decode ? "true" : "false");
}

bool CreateEventSourceRequest::getLinkedExternalSource() const {
  return linkedExternalSource_;
}

void CreateEventSourceRequest::setLinkedExternalSource(bool linkedExternalSource) {
  linkedExternalSource_ = linkedExternalSource;
  setBodyParameter(std::string("LinkedExternalSource"), linkedExternalSource ? "true" : "false");
}

std::string CreateEventSourceRequest::getExternalSourceType() const {
  return externalSourceType_;
}

void CreateEventSourceRequest::setExternalSourceType(const std::string &externalSourceType) {
  externalSourceType_ = externalSourceType;
  setBodyParameter(std::string("ExternalSourceType"), externalSourceType);
}

std::string CreateEventSourceRequest::getExternalSourceConfig() const {
  return externalSourceConfig_;
}

void CreateEventSourceRequest::setExternalSourceConfig(const std::string &externalSourceConfig) {
  externalSourceConfig_ = externalSourceConfig;
  setBodyParameter(std::string("ExternalSourceConfig"), externalSourceConfig);
}

CreateEventSourceRequest::SourceRabbitMQParameters CreateEventSourceRequest::getSourceRabbitMQParameters() const {
  return sourceRabbitMQParameters_;
}

void CreateEventSourceRequest::setSourceRabbitMQParameters(const CreateEventSourceRequest::SourceRabbitMQParameters &sourceRabbitMQParameters) {
  sourceRabbitMQParameters_ = sourceRabbitMQParameters;
  setBodyParameter(std::string("SourceRabbitMQParameters") + ".QueueName", sourceRabbitMQParameters.queueName);
  setBodyParameter(std::string("SourceRabbitMQParameters") + ".VirtualHostName", sourceRabbitMQParameters.virtualHostName);
  setBodyParameter(std::string("SourceRabbitMQParameters") + ".InstanceId", sourceRabbitMQParameters.instanceId);
  setBodyParameter(std::string("SourceRabbitMQParameters") + ".RegionId", sourceRabbitMQParameters.regionId);
}

CreateEventSourceRequest::SourceRocketMQParameters CreateEventSourceRequest::getSourceRocketMQParameters() const {
  return sourceRocketMQParameters_;
}

void CreateEventSourceRequest::setSourceRocketMQParameters(const CreateEventSourceRequest::SourceRocketMQParameters &sourceRocketMQParameters) {
  sourceRocketMQParameters_ = sourceRocketMQParameters;
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceSecurityGroupId", sourceRocketMQParameters.instanceSecurityGroupId);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".Offset", sourceRocketMQParameters.offset);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".GroupID", sourceRocketMQParameters.groupID);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceUsername", sourceRocketMQParameters.instanceUsername);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".AuthType", sourceRocketMQParameters.authType);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstancePassword", sourceRocketMQParameters.instancePassword);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceNetwork", sourceRocketMQParameters.instanceNetwork);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceVSwitchIds", sourceRocketMQParameters.instanceVSwitchIds);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceId", sourceRocketMQParameters.instanceId);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceVpcId", sourceRocketMQParameters.instanceVpcId);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceEndpoint", sourceRocketMQParameters.instanceEndpoint);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".RegionId", sourceRocketMQParameters.regionId);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".Topic", sourceRocketMQParameters.topic);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".InstanceType", sourceRocketMQParameters.instanceType);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".Tag", sourceRocketMQParameters.tag);
  setBodyParameter(std::string("SourceRocketMQParameters") + ".Timestamp", std::to_string(sourceRocketMQParameters.timestamp));
}

CreateEventSourceRequest::SourceSLSParameters CreateEventSourceRequest::getSourceSLSParameters() const {
  return sourceSLSParameters_;
}

void CreateEventSourceRequest::setSourceSLSParameters(const CreateEventSourceRequest::SourceSLSParameters &sourceSLSParameters) {
  sourceSLSParameters_ = sourceSLSParameters;
  setBodyParameter(std::string("SourceSLSParameters") + ".RoleName", sourceSLSParameters.roleName);
  setBodyParameter(std::string("SourceSLSParameters") + ".Project", sourceSLSParameters.project);
  setBodyParameter(std::string("SourceSLSParameters") + ".LogStore", sourceSLSParameters.logStore);
  setBodyParameter(std::string("SourceSLSParameters") + ".ConsumePosition", sourceSLSParameters.consumePosition);
}

CreateEventSourceRequest::SourceScheduledEventParameters CreateEventSourceRequest::getSourceScheduledEventParameters() const {
  return sourceScheduledEventParameters_;
}

void CreateEventSourceRequest::setSourceScheduledEventParameters(const CreateEventSourceRequest::SourceScheduledEventParameters &sourceScheduledEventParameters) {
  sourceScheduledEventParameters_ = sourceScheduledEventParameters;
  setBodyParameter(std::string("SourceScheduledEventParameters") + ".Schedule", sourceScheduledEventParameters.schedule);
  setBodyParameter(std::string("SourceScheduledEventParameters") + ".UserData", sourceScheduledEventParameters.userData);
  setBodyParameter(std::string("SourceScheduledEventParameters") + ".TimeZone", sourceScheduledEventParameters.timeZone);
}

CreateEventSourceRequest::SourceKafkaParameters CreateEventSourceRequest::getSourceKafkaParameters() const {
  return sourceKafkaParameters_;
}

void CreateEventSourceRequest::setSourceKafkaParameters(const CreateEventSourceRequest::SourceKafkaParameters &sourceKafkaParameters) {
  sourceKafkaParameters_ = sourceKafkaParameters;
  setBodyParameter(std::string("SourceKafkaParameters") + ".InstanceId", sourceKafkaParameters.instanceId);
  setBodyParameter(std::string("SourceKafkaParameters") + ".ConsumerGroup", sourceKafkaParameters.consumerGroup);
  setBodyParameter(std::string("SourceKafkaParameters") + ".RegionId", sourceKafkaParameters.regionId);
  setBodyParameter(std::string("SourceKafkaParameters") + ".VSwitchIds", sourceKafkaParameters.vSwitchIds);
  setBodyParameter(std::string("SourceKafkaParameters") + ".VpcId", sourceKafkaParameters.vpcId);
  setBodyParameter(std::string("SourceKafkaParameters") + ".SecurityGroupId", sourceKafkaParameters.securityGroupId);
  setBodyParameter(std::string("SourceKafkaParameters") + ".Topic", sourceKafkaParameters.topic);
  setBodyParameter(std::string("SourceKafkaParameters") + ".OffsetReset", sourceKafkaParameters.offsetReset);
  setBodyParameter(std::string("SourceKafkaParameters") + ".MaximumTasks", std::to_string(sourceKafkaParameters.maximumTasks));
  setBodyParameter(std::string("SourceKafkaParameters") + ".Network", sourceKafkaParameters.network);
}

CreateEventSourceRequest::SourceHttpEventParameters CreateEventSourceRequest::getSourceHttpEventParameters() const {
  return sourceHttpEventParameters_;
}

void CreateEventSourceRequest::setSourceHttpEventParameters(const CreateEventSourceRequest::SourceHttpEventParameters &sourceHttpEventParameters) {
  sourceHttpEventParameters_ = sourceHttpEventParameters;
  for(int dep1 = 0; dep1 != sourceHttpEventParameters.referer.size(); dep1++) {
    setBodyParameter(std::string("SourceHttpEventParameters") + ".Referer." + std::to_string(dep1 + 1), sourceHttpEventParameters.referer[dep1]);
  }
  for(int dep1 = 0; dep1 != sourceHttpEventParameters.method.size(); dep1++) {
    setBodyParameter(std::string("SourceHttpEventParameters") + ".Method." + std::to_string(dep1 + 1), sourceHttpEventParameters.method[dep1]);
  }
  for(int dep1 = 0; dep1 != sourceHttpEventParameters.ip.size(); dep1++) {
    setBodyParameter(std::string("SourceHttpEventParameters") + ".Ip." + std::to_string(dep1 + 1), sourceHttpEventParameters.ip[dep1]);
  }
  setBodyParameter(std::string("SourceHttpEventParameters") + ".SecurityConfig", sourceHttpEventParameters.securityConfig);
  setBodyParameter(std::string("SourceHttpEventParameters") + ".Type", sourceHttpEventParameters.type);
}

std::string CreateEventSourceRequest::getEventSourceName() const {
  return eventSourceName_;
}

void CreateEventSourceRequest::setEventSourceName(const std::string &eventSourceName) {
  eventSourceName_ = eventSourceName;
  setBodyParameter(std::string("EventSourceName"), eventSourceName);
}

