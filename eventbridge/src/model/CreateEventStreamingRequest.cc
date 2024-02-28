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

#include <alibabacloud/eventbridge/model/CreateEventStreamingRequest.h>

using AlibabaCloud::Eventbridge::Model::CreateEventStreamingRequest;

CreateEventStreamingRequest::CreateEventStreamingRequest()
    : RpcServiceRequest("eventbridge", "2020-04-01", "CreateEventStreaming") {
  setMethod(HttpRequest::Method::Post);
}

CreateEventStreamingRequest::~CreateEventStreamingRequest() {}

CreateEventStreamingRequest::Sink CreateEventStreamingRequest::getSink() const {
  return sink_;
}

void CreateEventStreamingRequest::setSink(const CreateEventStreamingRequest::Sink &sink) {
  sink_ = sink;
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.RoutingKey.Template", sink.sinkRabbitMQParameters.routingKey._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.RoutingKey.Form", sink.sinkRabbitMQParameters.routingKey.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.RoutingKey.Value", sink.sinkRabbitMQParameters.routingKey.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.QueueName.Template", sink.sinkRabbitMQParameters.queueName._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.QueueName.Form", sink.sinkRabbitMQParameters.queueName.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.QueueName.Value", sink.sinkRabbitMQParameters.queueName.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.VirtualHostName.Template", sink.sinkRabbitMQParameters.virtualHostName._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.VirtualHostName.Form", sink.sinkRabbitMQParameters.virtualHostName.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.VirtualHostName.Value", sink.sinkRabbitMQParameters.virtualHostName.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.InstanceId.Template", sink.sinkRabbitMQParameters.instanceId._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.InstanceId.Form", sink.sinkRabbitMQParameters.instanceId.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.InstanceId.Value", sink.sinkRabbitMQParameters.instanceId.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.TargetType.Template", sink.sinkRabbitMQParameters.targetType._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.TargetType.Form", sink.sinkRabbitMQParameters.targetType.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.TargetType.Value", sink.sinkRabbitMQParameters.targetType.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.MessageId.Template", sink.sinkRabbitMQParameters.messageId._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.MessageId.Form", sink.sinkRabbitMQParameters.messageId.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.MessageId.Value", sink.sinkRabbitMQParameters.messageId.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Exchange.Template", sink.sinkRabbitMQParameters.exchange._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Exchange.Form", sink.sinkRabbitMQParameters.exchange.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Exchange.Value", sink.sinkRabbitMQParameters.exchange.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Body.Template", sink.sinkRabbitMQParameters.body._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Body.Form", sink.sinkRabbitMQParameters.body.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Body.Value", sink.sinkRabbitMQParameters.body.value);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Properties.Template", sink.sinkRabbitMQParameters.properties._template);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Properties.Form", sink.sinkRabbitMQParameters.properties.form);
  setBodyParameter(std::string("Sink") + ".SinkRabbitMQParameters.Properties.Value", sink.sinkRabbitMQParameters.properties.value);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.QueueName.Template", sink.sinkMNSParameters.queueName._template);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.QueueName.Form", sink.sinkMNSParameters.queueName.form);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.QueueName.Value", sink.sinkMNSParameters.queueName.value);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.IsBase64Encode.Template", sink.sinkMNSParameters.isBase64Encode._template);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.IsBase64Encode.Form", sink.sinkMNSParameters.isBase64Encode.form);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.IsBase64Encode.Value", sink.sinkMNSParameters.isBase64Encode.value);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.Body.Template", sink.sinkMNSParameters.body._template);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.Body.Form", sink.sinkMNSParameters.body.form);
  setBodyParameter(std::string("Sink") + ".SinkMNSParameters.Body.Value", sink.sinkMNSParameters.body.value);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.RoleName.Template", sink.sinkDataHubParameters.roleName._template);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.RoleName.Form", sink.sinkDataHubParameters.roleName.form);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.RoleName.Value", sink.sinkDataHubParameters.roleName.value);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Project.Template", sink.sinkDataHubParameters.project._template);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Project.Form", sink.sinkDataHubParameters.project.form);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Project.Value", sink.sinkDataHubParameters.project.value);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Topic.Template", sink.sinkDataHubParameters.topic._template);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Topic.Form", sink.sinkDataHubParameters.topic.form);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Topic.Value", sink.sinkDataHubParameters.topic.value);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.TopicType.Template", sink.sinkDataHubParameters.topicType._template);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.TopicType.Form", sink.sinkDataHubParameters.topicType.form);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.TopicType.Value", sink.sinkDataHubParameters.topicType.value);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Body.Template", sink.sinkDataHubParameters.body._template);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Body.Form", sink.sinkDataHubParameters.body.form);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.Body.Value", sink.sinkDataHubParameters.body.value);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.TopicSchema.Template", sink.sinkDataHubParameters.topicSchema._template);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.TopicSchema.Form", sink.sinkDataHubParameters.topicSchema.form);
  setBodyParameter(std::string("Sink") + ".SinkDataHubParameters.TopicSchema.Value", sink.sinkDataHubParameters.topicSchema.value);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.InstanceId.Template", sink.sinkKafkaParameters.instanceId._template);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.InstanceId.Form", sink.sinkKafkaParameters.instanceId.form);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.InstanceId.Value", sink.sinkKafkaParameters.instanceId.value);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Acks.Template", sink.sinkKafkaParameters.acks._template);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Acks.Form", sink.sinkKafkaParameters.acks.form);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Acks.Value", sink.sinkKafkaParameters.acks.value);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Topic.Template", sink.sinkKafkaParameters.topic._template);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Topic.Form", sink.sinkKafkaParameters.topic.form);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Topic.Value", sink.sinkKafkaParameters.topic.value);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.SaslUser.Template", sink.sinkKafkaParameters.saslUser._template);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.SaslUser.Form", sink.sinkKafkaParameters.saslUser.form);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.SaslUser.Value", sink.sinkKafkaParameters.saslUser.value);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Value.Template", sink.sinkKafkaParameters.value._template);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Value.Form", sink.sinkKafkaParameters.value.form);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Value.Value", sink.sinkKafkaParameters.value.value);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Key.Template", sink.sinkKafkaParameters.key._template);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Key.Form", sink.sinkKafkaParameters.key.form);
  setBodyParameter(std::string("Sink") + ".SinkKafkaParameters.Key.Value", sink.sinkKafkaParameters.key.value);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.Input.Template", sink.sinkFnfParameters.input._template);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.Input.Form", sink.sinkFnfParameters.input.form);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.Input.Value", sink.sinkFnfParameters.input.value);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.ExecutionName.Template", sink.sinkFnfParameters.executionName._template);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.ExecutionName.Form", sink.sinkFnfParameters.executionName.form);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.ExecutionName.Value", sink.sinkFnfParameters.executionName.value);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.RoleName.Template", sink.sinkFnfParameters.roleName._template);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.RoleName.Form", sink.sinkFnfParameters.roleName.form);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.RoleName.Value", sink.sinkFnfParameters.roleName.value);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.FlowName.Template", sink.sinkFnfParameters.flowName._template);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.FlowName.Form", sink.sinkFnfParameters.flowName.form);
  setBodyParameter(std::string("Sink") + ".SinkFnfParameters.FlowName.Value", sink.sinkFnfParameters.flowName.value);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.InvocationType.Template", sink.sinkFcParameters.invocationType._template);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.InvocationType.Form", sink.sinkFcParameters.invocationType.form);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.InvocationType.Value", sink.sinkFcParameters.invocationType.value);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.FunctionName.Template", sink.sinkFcParameters.functionName._template);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.FunctionName.Form", sink.sinkFcParameters.functionName.form);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.FunctionName.Value", sink.sinkFcParameters.functionName.value);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Qualifier.Template", sink.sinkFcParameters.qualifier._template);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Qualifier.Form", sink.sinkFcParameters.qualifier.form);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Qualifier.Value", sink.sinkFcParameters.qualifier.value);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.ServiceName.Template", sink.sinkFcParameters.serviceName._template);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.ServiceName.Form", sink.sinkFcParameters.serviceName.form);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.ServiceName.Value", sink.sinkFcParameters.serviceName.value);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Body.Template", sink.sinkFcParameters.body._template);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Body.Form", sink.sinkFcParameters.body.form);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Body.Value", sink.sinkFcParameters.body.value);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Concurrency.Template", sink.sinkFcParameters.concurrency._template);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Concurrency.Form", sink.sinkFcParameters.concurrency.form);
  setBodyParameter(std::string("Sink") + ".SinkFcParameters.Concurrency.Value", sink.sinkFcParameters.concurrency.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.VSwitchId.Template", sink.sinkPrometheusParameters.vSwitchId._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.VSwitchId.Form", sink.sinkPrometheusParameters.vSwitchId.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.VSwitchId.Value", sink.sinkPrometheusParameters.vSwitchId.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Password.Template", sink.sinkPrometheusParameters.password._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Password.Form", sink.sinkPrometheusParameters.password.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Password.Value", sink.sinkPrometheusParameters.password.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Data.Template", sink.sinkPrometheusParameters.data._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Data.Form", sink.sinkPrometheusParameters.data.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Data.Value", sink.sinkPrometheusParameters.data.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.VpcId.Template", sink.sinkPrometheusParameters.vpcId._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.VpcId.Form", sink.sinkPrometheusParameters.vpcId.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.VpcId.Value", sink.sinkPrometheusParameters.vpcId.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.SecurityGroupId.Template", sink.sinkPrometheusParameters.securityGroupId._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.SecurityGroupId.Form", sink.sinkPrometheusParameters.securityGroupId.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.SecurityGroupId.Value", sink.sinkPrometheusParameters.securityGroupId.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.AuthorizationType.Template", sink.sinkPrometheusParameters.authorizationType._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.AuthorizationType.Form", sink.sinkPrometheusParameters.authorizationType.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.AuthorizationType.Value", sink.sinkPrometheusParameters.authorizationType.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.NetworkType.Template", sink.sinkPrometheusParameters.networkType._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.NetworkType.Form", sink.sinkPrometheusParameters.networkType.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.NetworkType.Value", sink.sinkPrometheusParameters.networkType.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.URL.Template", sink.sinkPrometheusParameters.uRL._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.URL.Form", sink.sinkPrometheusParameters.uRL.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.URL.Value", sink.sinkPrometheusParameters.uRL.value);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Username.Template", sink.sinkPrometheusParameters.username._template);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Username.Form", sink.sinkPrometheusParameters.username.form);
  setBodyParameter(std::string("Sink") + ".SinkPrometheusParameters.Username.Value", sink.sinkPrometheusParameters.username.value);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.RoleName.Template", sink.sinkSLSParameters.roleName._template);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.RoleName.Form", sink.sinkSLSParameters.roleName.form);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.RoleName.Value", sink.sinkSLSParameters.roleName.value);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Project.Template", sink.sinkSLSParameters.project._template);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Project.Form", sink.sinkSLSParameters.project.form);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Project.Value", sink.sinkSLSParameters.project.value);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Topic.Template", sink.sinkSLSParameters.topic._template);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Topic.Form", sink.sinkSLSParameters.topic.form);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Topic.Value", sink.sinkSLSParameters.topic.value);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Body.Template", sink.sinkSLSParameters.body._template);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Body.Form", sink.sinkSLSParameters.body.form);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.Body.Value", sink.sinkSLSParameters.body.value);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.LogStore.Template", sink.sinkSLSParameters.logStore._template);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.LogStore.Form", sink.sinkSLSParameters.logStore.form);
  setBodyParameter(std::string("Sink") + ".SinkSLSParameters.LogStore.Value", sink.sinkSLSParameters.logStore.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Keys.Template", sink.sinkRocketMQParameters.keys._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Keys.Form", sink.sinkRocketMQParameters.keys.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Keys.Value", sink.sinkRocketMQParameters.keys.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.VSwitchIds.Template", sink.sinkRocketMQParameters.vSwitchIds._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.VSwitchIds.Form", sink.sinkRocketMQParameters.vSwitchIds.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.VSwitchIds.Value", sink.sinkRocketMQParameters.vSwitchIds.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.SecurityGroupId.Template", sink.sinkRocketMQParameters.securityGroupId._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.SecurityGroupId.Form", sink.sinkRocketMQParameters.securityGroupId.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.SecurityGroupId.Value", sink.sinkRocketMQParameters.securityGroupId.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceUsername.Template", sink.sinkRocketMQParameters.instanceUsername._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceUsername.Form", sink.sinkRocketMQParameters.instanceUsername.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceUsername.Value", sink.sinkRocketMQParameters.instanceUsername.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Body.Template", sink.sinkRocketMQParameters.body._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Body.Form", sink.sinkRocketMQParameters.body.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Body.Value", sink.sinkRocketMQParameters.body.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Tags.Template", sink.sinkRocketMQParameters.tags._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Tags.Form", sink.sinkRocketMQParameters.tags.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Tags.Value", sink.sinkRocketMQParameters.tags.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Network.Template", sink.sinkRocketMQParameters.network._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Network.Form", sink.sinkRocketMQParameters.network.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Network.Value", sink.sinkRocketMQParameters.network.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstancePassword.Template", sink.sinkRocketMQParameters.instancePassword._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstancePassword.Form", sink.sinkRocketMQParameters.instancePassword.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstancePassword.Value", sink.sinkRocketMQParameters.instancePassword.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceId.Template", sink.sinkRocketMQParameters.instanceId._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceId.Form", sink.sinkRocketMQParameters.instanceId.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceId.Value", sink.sinkRocketMQParameters.instanceId.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceEndpoint.Template", sink.sinkRocketMQParameters.instanceEndpoint._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceEndpoint.Form", sink.sinkRocketMQParameters.instanceEndpoint.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceEndpoint.Value", sink.sinkRocketMQParameters.instanceEndpoint.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.VpcId.Template", sink.sinkRocketMQParameters.vpcId._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.VpcId.Form", sink.sinkRocketMQParameters.vpcId.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.VpcId.Value", sink.sinkRocketMQParameters.vpcId.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Topic.Template", sink.sinkRocketMQParameters.topic._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Topic.Form", sink.sinkRocketMQParameters.topic.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Topic.Value", sink.sinkRocketMQParameters.topic.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceType.Template", sink.sinkRocketMQParameters.instanceType._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceType.Form", sink.sinkRocketMQParameters.instanceType.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.InstanceType.Value", sink.sinkRocketMQParameters.instanceType.value);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Properties.Template", sink.sinkRocketMQParameters.properties._template);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Properties.Form", sink.sinkRocketMQParameters.properties.form);
  setBodyParameter(std::string("Sink") + ".SinkRocketMQParameters.Properties.Value", sink.sinkRocketMQParameters.properties.value);
}

std::vector<CreateEventStreamingRequest::Transforms> CreateEventStreamingRequest::getTransforms() const {
  return transforms_;
}

void CreateEventStreamingRequest::setTransforms(const std::vector<CreateEventStreamingRequest::Transforms> &transforms) {
  transforms_ = transforms;
  for(int dep1 = 0; dep1 != transforms.size(); dep1++) {
    setBodyParameter(std::string("Transforms") + "." + std::to_string(dep1 + 1) + ".Arn", transforms[dep1].arn);
  }
}

std::string CreateEventStreamingRequest::getDescription() const {
  return description_;
}

void CreateEventStreamingRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateEventStreamingRequest::getFilterPattern() const {
  return filterPattern_;
}

void CreateEventStreamingRequest::setFilterPattern(const std::string &filterPattern) {
  filterPattern_ = filterPattern;
  setBodyParameter(std::string("FilterPattern"), filterPattern);
}

CreateEventStreamingRequest::Source CreateEventStreamingRequest::getSource() const {
  return source_;
}

void CreateEventStreamingRequest::setSource(const CreateEventStreamingRequest::Source &source) {
  source_ = source;
  setBodyParameter(std::string("Source") + ".SourceMQTTParameters.InstanceId", source.sourceMQTTParameters.instanceId);
  setBodyParameter(std::string("Source") + ".SourceMQTTParameters.BodyDataType", source.sourceMQTTParameters.bodyDataType);
  setBodyParameter(std::string("Source") + ".SourceMQTTParameters.RegionId", source.sourceMQTTParameters.regionId);
  setBodyParameter(std::string("Source") + ".SourceMQTTParameters.Topic", source.sourceMQTTParameters.topic);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.FilterSql", source.sourceRocketMQParameters.filterSql);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceSecurityGroupId", source.sourceRocketMQParameters.instanceSecurityGroupId);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.Offset", source.sourceRocketMQParameters.offset);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.VSwitchIds", source.sourceRocketMQParameters.vSwitchIds);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.GroupID", source.sourceRocketMQParameters.groupID);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.SecurityGroupId", source.sourceRocketMQParameters.securityGroupId);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceUsername", source.sourceRocketMQParameters.instanceUsername);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.FilterType", source.sourceRocketMQParameters.filterType);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.Network", source.sourceRocketMQParameters.network);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.AuthType", source.sourceRocketMQParameters.authType);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstancePassword", source.sourceRocketMQParameters.instancePassword);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceVSwitchIds", source.sourceRocketMQParameters.instanceVSwitchIds);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceNetwork", source.sourceRocketMQParameters.instanceNetwork);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceId", source.sourceRocketMQParameters.instanceId);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceEndpoint", source.sourceRocketMQParameters.instanceEndpoint);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceVpcId", source.sourceRocketMQParameters.instanceVpcId);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.RegionId", source.sourceRocketMQParameters.regionId);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.VpcId", source.sourceRocketMQParameters.vpcId);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.Topic", source.sourceRocketMQParameters.topic);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.InstanceType", source.sourceRocketMQParameters.instanceType);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.Tag", source.sourceRocketMQParameters.tag);
  setBodyParameter(std::string("Source") + ".SourceRocketMQParameters.Timestamp", std::to_string(source.sourceRocketMQParameters.timestamp));
  setBodyParameter(std::string("Source") + ".SourceSLSParameters.RoleName", source.sourceSLSParameters.roleName);
  setBodyParameter(std::string("Source") + ".SourceSLSParameters.Project", source.sourceSLSParameters.project);
  setBodyParameter(std::string("Source") + ".SourceSLSParameters.LogStore", source.sourceSLSParameters.logStore);
  setBodyParameter(std::string("Source") + ".SourceSLSParameters.ConsumePosition", source.sourceSLSParameters.consumePosition);
  setBodyParameter(std::string("Source") + ".SourcePrometheusParameters.DataType", source.sourcePrometheusParameters.dataType);
  setBodyParameter(std::string("Source") + ".SourcePrometheusParameters.ClusterId", source.sourcePrometheusParameters.clusterId);
  setBodyParameter(std::string("Source") + ".SourcePrometheusParameters.Labels", source.sourcePrometheusParameters.labels);
  setBodyParameter(std::string("Source") + ".SourceDTSParameters.BrokerUrl", source.sourceDTSParameters.brokerUrl);
  setBodyParameter(std::string("Source") + ".SourceDTSParameters.Password", source.sourceDTSParameters.password);
  setBodyParameter(std::string("Source") + ".SourceDTSParameters.InitCheckPoint", std::to_string(source.sourceDTSParameters.initCheckPoint));
  setBodyParameter(std::string("Source") + ".SourceDTSParameters.Topic", source.sourceDTSParameters.topic);
  setBodyParameter(std::string("Source") + ".SourceDTSParameters.TaskId", source.sourceDTSParameters.taskId);
  setBodyParameter(std::string("Source") + ".SourceDTSParameters.Sid", source.sourceDTSParameters.sid);
  setBodyParameter(std::string("Source") + ".SourceDTSParameters.Username", source.sourceDTSParameters.username);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.InstanceId", source.sourceKafkaParameters.instanceId);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.ConsumerGroup", source.sourceKafkaParameters.consumerGroup);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.RegionId", source.sourceKafkaParameters.regionId);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.VSwitchIds", source.sourceKafkaParameters.vSwitchIds);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.VpcId", source.sourceKafkaParameters.vpcId);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.ValueDataType", source.sourceKafkaParameters.valueDataType);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.SecurityGroupId", source.sourceKafkaParameters.securityGroupId);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.Topic", source.sourceKafkaParameters.topic);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.OffsetReset", source.sourceKafkaParameters.offsetReset);
  setBodyParameter(std::string("Source") + ".SourceKafkaParameters.Network", source.sourceKafkaParameters.network);
  setBodyParameter(std::string("Source") + ".SourceMNSParameters.QueueName", source.sourceMNSParameters.queueName);
  setBodyParameter(std::string("Source") + ".SourceMNSParameters.RegionId", source.sourceMNSParameters.regionId);
  setBodyParameter(std::string("Source") + ".SourceMNSParameters.IsBase64Decode", source.sourceMNSParameters.isBase64Decode ? "true" : "false");
  setBodyParameter(std::string("Source") + ".SourceRabbitMQParameters.QueueName", source.sourceRabbitMQParameters.queueName);
  setBodyParameter(std::string("Source") + ".SourceRabbitMQParameters.VirtualHostName", source.sourceRabbitMQParameters.virtualHostName);
  setBodyParameter(std::string("Source") + ".SourceRabbitMQParameters.InstanceId", source.sourceRabbitMQParameters.instanceId);
  setBodyParameter(std::string("Source") + ".SourceRabbitMQParameters.RegionId", source.sourceRabbitMQParameters.regionId);
}

CreateEventStreamingRequest::RunOptions CreateEventStreamingRequest::getRunOptions() const {
  return runOptions_;
}

void CreateEventStreamingRequest::setRunOptions(const CreateEventStreamingRequest::RunOptions &runOptions) {
  runOptions_ = runOptions;
  setBodyParameter(std::string("RunOptions") + ".BatchWindow.CountBasedWindow", std::to_string(runOptions.batchWindow.countBasedWindow));
  setBodyParameter(std::string("RunOptions") + ".BatchWindow.TimeBasedWindow", std::to_string(runOptions.batchWindow.timeBasedWindow));
  setBodyParameter(std::string("RunOptions") + ".RetryStrategy.PushRetryStrategy", runOptions.retryStrategy.pushRetryStrategy);
  setBodyParameter(std::string("RunOptions") + ".RetryStrategy.MaximumRetryAttempts", std::to_string(runOptions.retryStrategy.maximumRetryAttempts));
  setBodyParameter(std::string("RunOptions") + ".RetryStrategy.MaximumEventAgeInSeconds", std::to_string(runOptions.retryStrategy.maximumEventAgeInSeconds));
  setBodyParameter(std::string("RunOptions") + ".DeadLetterQueue.Arn", runOptions.deadLetterQueue.arn);
  setBodyParameter(std::string("RunOptions") + ".MaximumTasks", std::to_string(runOptions.maximumTasks));
  setBodyParameter(std::string("RunOptions") + ".ErrorsTolerance", runOptions.errorsTolerance);
}

std::string CreateEventStreamingRequest::getEventStreamingName() const {
  return eventStreamingName_;
}

void CreateEventStreamingRequest::setEventStreamingName(const std::string &eventStreamingName) {
  eventStreamingName_ = eventStreamingName;
  setBodyParameter(std::string("EventStreamingName"), eventStreamingName);
}

std::string CreateEventStreamingRequest::getTag() const {
  return tag_;
}

void CreateEventStreamingRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setBodyParameter(std::string("Tag"), tag);
}

