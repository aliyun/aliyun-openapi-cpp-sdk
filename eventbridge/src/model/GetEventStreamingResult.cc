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

#include <alibabacloud/eventbridge/model/GetEventStreamingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

GetEventStreamingResult::GetEventStreamingResult() :
	ServiceResult()
{}

GetEventStreamingResult::GetEventStreamingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEventStreamingResult::~GetEventStreamingResult()
{}

void GetEventStreamingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EventStreamingName"].isNull())
		data_.eventStreamingName = dataNode["EventStreamingName"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["FilterPattern"].isNull())
		data_.filterPattern = dataNode["FilterPattern"].asString();
	if(!dataNode["Tag"].isNull())
		data_.tag = dataNode["Tag"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	auto allTransformsNode = dataNode["Transforms"]["TransformsItem"];
	for (auto dataNodeTransformsTransformsItem : allTransformsNode)
	{
		Data::TransformsItem transformsItemObject;
		if(!dataNodeTransformsTransformsItem["Arn"].isNull())
			transformsItemObject.arn = dataNodeTransformsTransformsItem["Arn"].asString();
		data_.transforms.push_back(transformsItemObject);
	}
	auto sourceNode = dataNode["Source"];
	auto sourceMNSParametersNode = sourceNode["SourceMNSParameters"];
	if(!sourceMNSParametersNode["RegionId"].isNull())
		data_.source.sourceMNSParameters.regionId = sourceMNSParametersNode["RegionId"].asString();
	if(!sourceMNSParametersNode["QueueName"].isNull())
		data_.source.sourceMNSParameters.queueName = sourceMNSParametersNode["QueueName"].asString();
	if(!sourceMNSParametersNode["IsBase64Decode"].isNull())
		data_.source.sourceMNSParameters.isBase64Decode = sourceMNSParametersNode["IsBase64Decode"].asString() == "true";
	auto sourceRabbitMQParametersNode = sourceNode["SourceRabbitMQParameters"];
	if(!sourceRabbitMQParametersNode["RegionId"].isNull())
		data_.source.sourceRabbitMQParameters.regionId = sourceRabbitMQParametersNode["RegionId"].asString();
	if(!sourceRabbitMQParametersNode["InstanceId"].isNull())
		data_.source.sourceRabbitMQParameters.instanceId = sourceRabbitMQParametersNode["InstanceId"].asString();
	if(!sourceRabbitMQParametersNode["VirtualHostName"].isNull())
		data_.source.sourceRabbitMQParameters.virtualHostName = sourceRabbitMQParametersNode["VirtualHostName"].asString();
	if(!sourceRabbitMQParametersNode["QueueName"].isNull())
		data_.source.sourceRabbitMQParameters.queueName = sourceRabbitMQParametersNode["QueueName"].asString();
	auto sourceRocketMQParametersNode = sourceNode["SourceRocketMQParameters"];
	if(!sourceRocketMQParametersNode["RegionId"].isNull())
		data_.source.sourceRocketMQParameters.regionId = sourceRocketMQParametersNode["RegionId"].asString();
	if(!sourceRocketMQParametersNode["InstanceId"].isNull())
		data_.source.sourceRocketMQParameters.instanceId = sourceRocketMQParametersNode["InstanceId"].asString();
	if(!sourceRocketMQParametersNode["Topic"].isNull())
		data_.source.sourceRocketMQParameters.topic = sourceRocketMQParametersNode["Topic"].asString();
	if(!sourceRocketMQParametersNode["Tag"].isNull())
		data_.source.sourceRocketMQParameters.tag = sourceRocketMQParametersNode["Tag"].asString();
	if(!sourceRocketMQParametersNode["Offset"].isNull())
		data_.source.sourceRocketMQParameters.offset = sourceRocketMQParametersNode["Offset"].asString();
	if(!sourceRocketMQParametersNode["GroupID"].isNull())
		data_.source.sourceRocketMQParameters.groupID = sourceRocketMQParametersNode["GroupID"].asString();
	if(!sourceRocketMQParametersNode["Timestamp"].isNull())
		data_.source.sourceRocketMQParameters.timestamp = std::stol(sourceRocketMQParametersNode["Timestamp"].asString());
	if(!sourceRocketMQParametersNode["InstanceType"].isNull())
		data_.source.sourceRocketMQParameters.instanceType = sourceRocketMQParametersNode["InstanceType"].asString();
	if(!sourceRocketMQParametersNode["InstanceEndpoint"].isNull())
		data_.source.sourceRocketMQParameters.instanceEndpoint = sourceRocketMQParametersNode["InstanceEndpoint"].asString();
	if(!sourceRocketMQParametersNode["AuthType"].isNull())
		data_.source.sourceRocketMQParameters.authType = sourceRocketMQParametersNode["AuthType"].asString();
	if(!sourceRocketMQParametersNode["InstanceUsername"].isNull())
		data_.source.sourceRocketMQParameters.instanceUsername = sourceRocketMQParametersNode["InstanceUsername"].asString();
	if(!sourceRocketMQParametersNode["InstancePassword"].isNull())
		data_.source.sourceRocketMQParameters.instancePassword = sourceRocketMQParametersNode["InstancePassword"].asString();
	if(!sourceRocketMQParametersNode["InstanceVpcId"].isNull())
		data_.source.sourceRocketMQParameters.instanceVpcId = sourceRocketMQParametersNode["InstanceVpcId"].asString();
	if(!sourceRocketMQParametersNode["InstanceVSwitchIds"].isNull())
		data_.source.sourceRocketMQParameters.instanceVSwitchIds = sourceRocketMQParametersNode["InstanceVSwitchIds"].asString();
	if(!sourceRocketMQParametersNode["InstanceSecurityGroupId"].isNull())
		data_.source.sourceRocketMQParameters.instanceSecurityGroupId = sourceRocketMQParametersNode["InstanceSecurityGroupId"].asString();
	if(!sourceRocketMQParametersNode["InstanceNetwork"].isNull())
		data_.source.sourceRocketMQParameters.instanceNetwork = sourceRocketMQParametersNode["InstanceNetwork"].asString();
	auto sourceKafkaParametersNode = sourceNode["SourceKafkaParameters"];
	if(!sourceKafkaParametersNode["RegionId"].isNull())
		data_.source.sourceKafkaParameters.regionId = sourceKafkaParametersNode["RegionId"].asString();
	if(!sourceKafkaParametersNode["InstanceId"].isNull())
		data_.source.sourceKafkaParameters.instanceId = sourceKafkaParametersNode["InstanceId"].asString();
	if(!sourceKafkaParametersNode["Topic"].isNull())
		data_.source.sourceKafkaParameters.topic = sourceKafkaParametersNode["Topic"].asString();
	if(!sourceKafkaParametersNode["ConsumerGroup"].isNull())
		data_.source.sourceKafkaParameters.consumerGroup = sourceKafkaParametersNode["ConsumerGroup"].asString();
	if(!sourceKafkaParametersNode["OffsetReset"].isNull())
		data_.source.sourceKafkaParameters.offsetReset = sourceKafkaParametersNode["OffsetReset"].asString();
	if(!sourceKafkaParametersNode["Network"].isNull())
		data_.source.sourceKafkaParameters.network = sourceKafkaParametersNode["Network"].asString();
	if(!sourceKafkaParametersNode["VpcId"].isNull())
		data_.source.sourceKafkaParameters.vpcId = sourceKafkaParametersNode["VpcId"].asString();
	if(!sourceKafkaParametersNode["VSwitchIds"].isNull())
		data_.source.sourceKafkaParameters.vSwitchIds = sourceKafkaParametersNode["VSwitchIds"].asString();
	if(!sourceKafkaParametersNode["SecurityGroupId"].isNull())
		data_.source.sourceKafkaParameters.securityGroupId = sourceKafkaParametersNode["SecurityGroupId"].asString();
	if(!sourceKafkaParametersNode["ValueDataType"].isNull())
		data_.source.sourceKafkaParameters.valueDataType = sourceKafkaParametersNode["ValueDataType"].asString();
	auto sourceMQTTParametersNode = sourceNode["SourceMQTTParameters"];
	if(!sourceMQTTParametersNode["RegionId"].isNull())
		data_.source.sourceMQTTParameters.regionId = sourceMQTTParametersNode["RegionId"].asString();
	if(!sourceMQTTParametersNode["InstanceId"].isNull())
		data_.source.sourceMQTTParameters.instanceId = sourceMQTTParametersNode["InstanceId"].asString();
	if(!sourceMQTTParametersNode["Topic"].isNull())
		data_.source.sourceMQTTParameters.topic = sourceMQTTParametersNode["Topic"].asString();
	auto sourceDTSParametersNode = sourceNode["SourceDTSParameters"];
	if(!sourceDTSParametersNode["TaskId"].isNull())
		data_.source.sourceDTSParameters.taskId = sourceDTSParametersNode["TaskId"].asString();
	if(!sourceDTSParametersNode["BrokerUrl"].isNull())
		data_.source.sourceDTSParameters.brokerUrl = sourceDTSParametersNode["BrokerUrl"].asString();
	if(!sourceDTSParametersNode["Topic"].isNull())
		data_.source.sourceDTSParameters.topic = sourceDTSParametersNode["Topic"].asString();
	if(!sourceDTSParametersNode["Sid"].isNull())
		data_.source.sourceDTSParameters.sid = sourceDTSParametersNode["Sid"].asString();
	if(!sourceDTSParametersNode["Username"].isNull())
		data_.source.sourceDTSParameters.username = sourceDTSParametersNode["Username"].asString();
	if(!sourceDTSParametersNode["Password"].isNull())
		data_.source.sourceDTSParameters.password = sourceDTSParametersNode["Password"].asString();
	if(!sourceDTSParametersNode["InitCheckPoint"].isNull())
		data_.source.sourceDTSParameters.initCheckPoint = sourceDTSParametersNode["InitCheckPoint"].asString();
	auto sourceSLSParametersNode = sourceNode["SourceSLSParameters"];
	if(!sourceSLSParametersNode["Project"].isNull())
		data_.source.sourceSLSParameters.project = sourceSLSParametersNode["Project"].asString();
	if(!sourceSLSParametersNode["LogStore"].isNull())
		data_.source.sourceSLSParameters.logStore = sourceSLSParametersNode["LogStore"].asString();
	if(!sourceSLSParametersNode["ConsumerGroup"].isNull())
		data_.source.sourceSLSParameters.consumerGroup = sourceSLSParametersNode["ConsumerGroup"].asString();
	if(!sourceSLSParametersNode["ConsumePosition"].isNull())
		data_.source.sourceSLSParameters.consumePosition = sourceSLSParametersNode["ConsumePosition"].asString();
	if(!sourceSLSParametersNode["RoleName"].isNull())
		data_.source.sourceSLSParameters.roleName = sourceSLSParametersNode["RoleName"].asString();
	auto sourcePrometheusParametersNode = sourceNode["SourcePrometheusParameters"];
	if(!sourcePrometheusParametersNode["ClusterId"].isNull())
		data_.source.sourcePrometheusParameters.clusterId = sourcePrometheusParametersNode["ClusterId"].asString();
	if(!sourcePrometheusParametersNode["DataType"].isNull())
		data_.source.sourcePrometheusParameters.dataType = sourcePrometheusParametersNode["DataType"].asString();
	if(!sourcePrometheusParametersNode["Labels"].isNull())
		data_.source.sourcePrometheusParameters.labels = sourcePrometheusParametersNode["Labels"].asString();
	auto sinkNode = dataNode["Sink"];
	auto sinkMNSParametersNode = sinkNode["SinkMNSParameters"];
	auto queueNameNode = sinkMNSParametersNode["QueueName"];
	if(!queueNameNode["Value"].isNull())
		data_.sink.sinkMNSParameters.queueName.value = queueNameNode["Value"].asString();
	if(!queueNameNode["Form"].isNull())
		data_.sink.sinkMNSParameters.queueName.form = queueNameNode["Form"].asString();
	if(!queueNameNode["Template"].isNull())
		data_.sink.sinkMNSParameters.queueName._template = queueNameNode["Template"].asString();
	auto bodyNode = sinkMNSParametersNode["Body"];
	if(!bodyNode["Value"].isNull())
		data_.sink.sinkMNSParameters.body.value = bodyNode["Value"].asString();
	if(!bodyNode["Form"].isNull())
		data_.sink.sinkMNSParameters.body.form = bodyNode["Form"].asString();
	if(!bodyNode["Template"].isNull())
		data_.sink.sinkMNSParameters.body._template = bodyNode["Template"].asString();
	auto isBase64EncodeNode = sinkMNSParametersNode["IsBase64Encode"];
	if(!isBase64EncodeNode["Value"].isNull())
		data_.sink.sinkMNSParameters.isBase64Encode.value = isBase64EncodeNode["Value"].asString();
	if(!isBase64EncodeNode["Form"].isNull())
		data_.sink.sinkMNSParameters.isBase64Encode.form = isBase64EncodeNode["Form"].asString();
	if(!isBase64EncodeNode["Template"].isNull())
		data_.sink.sinkMNSParameters.isBase64Encode._template = isBase64EncodeNode["Template"].asString();
	auto sinkRabbitMQParametersNode = sinkNode["SinkRabbitMQParameters"];
	auto instanceIdNode = sinkRabbitMQParametersNode["InstanceId"];
	if(!instanceIdNode["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.instanceId.value = instanceIdNode["Value"].asString();
	if(!instanceIdNode["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.instanceId.form = instanceIdNode["Form"].asString();
	if(!instanceIdNode["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.instanceId._template = instanceIdNode["Template"].asString();
	auto virtualHostNameNode = sinkRabbitMQParametersNode["VirtualHostName"];
	if(!virtualHostNameNode["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.virtualHostName.value = virtualHostNameNode["Value"].asString();
	if(!virtualHostNameNode["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.virtualHostName.form = virtualHostNameNode["Form"].asString();
	if(!virtualHostNameNode["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.virtualHostName._template = virtualHostNameNode["Template"].asString();
	auto targetTypeNode = sinkRabbitMQParametersNode["TargetType"];
	if(!targetTypeNode["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.targetType.value = targetTypeNode["Value"].asString();
	if(!targetTypeNode["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.targetType.form = targetTypeNode["Form"].asString();
	if(!targetTypeNode["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.targetType._template = targetTypeNode["Template"].asString();
	auto exchangeNode = sinkRabbitMQParametersNode["Exchange"];
	if(!exchangeNode["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.exchange.value = exchangeNode["Value"].asString();
	if(!exchangeNode["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.exchange.form = exchangeNode["Form"].asString();
	if(!exchangeNode["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.exchange._template = exchangeNode["Template"].asString();
	auto routingKeyNode = sinkRabbitMQParametersNode["RoutingKey"];
	if(!routingKeyNode["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.routingKey.value = routingKeyNode["Value"].asString();
	if(!routingKeyNode["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.routingKey.form = routingKeyNode["Form"].asString();
	if(!routingKeyNode["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.routingKey._template = routingKeyNode["Template"].asString();
	auto queueName1Node = sinkRabbitMQParametersNode["QueueName"];
	if(!queueName1Node["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.queueName1.value = queueName1Node["Value"].asString();
	if(!queueName1Node["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.queueName1.form = queueName1Node["Form"].asString();
	if(!queueName1Node["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.queueName1._template = queueName1Node["Template"].asString();
	auto body2Node = sinkRabbitMQParametersNode["Body"];
	if(!body2Node["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.body2.value = body2Node["Value"].asString();
	if(!body2Node["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.body2.form = body2Node["Form"].asString();
	if(!body2Node["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.body2._template = body2Node["Template"].asString();
	auto messageIdNode = sinkRabbitMQParametersNode["MessageId"];
	if(!messageIdNode["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.messageId.value = messageIdNode["Value"].asString();
	if(!messageIdNode["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.messageId.form = messageIdNode["Form"].asString();
	if(!messageIdNode["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.messageId._template = messageIdNode["Template"].asString();
	auto propertiesNode = sinkRabbitMQParametersNode["Properties"];
	if(!propertiesNode["Value"].isNull())
		data_.sink.sinkRabbitMQParameters.properties.value = propertiesNode["Value"].asString();
	if(!propertiesNode["Form"].isNull())
		data_.sink.sinkRabbitMQParameters.properties.form = propertiesNode["Form"].asString();
	if(!propertiesNode["Template"].isNull())
		data_.sink.sinkRabbitMQParameters.properties._template = propertiesNode["Template"].asString();
	auto sinkFcParametersNode = sinkNode["SinkFcParameters"];
	auto serviceNameNode = sinkFcParametersNode["ServiceName"];
	if(!serviceNameNode["Value"].isNull())
		data_.sink.sinkFcParameters.serviceName.value = serviceNameNode["Value"].asString();
	if(!serviceNameNode["Form"].isNull())
		data_.sink.sinkFcParameters.serviceName.form = serviceNameNode["Form"].asString();
	if(!serviceNameNode["Template"].isNull())
		data_.sink.sinkFcParameters.serviceName._template = serviceNameNode["Template"].asString();
	auto functionNameNode = sinkFcParametersNode["FunctionName"];
	if(!functionNameNode["Value"].isNull())
		data_.sink.sinkFcParameters.functionName.value = functionNameNode["Value"].asString();
	if(!functionNameNode["Form"].isNull())
		data_.sink.sinkFcParameters.functionName.form = functionNameNode["Form"].asString();
	if(!functionNameNode["Template"].isNull())
		data_.sink.sinkFcParameters.functionName._template = functionNameNode["Template"].asString();
	auto concurrencyNode = sinkFcParametersNode["Concurrency"];
	if(!concurrencyNode["Value"].isNull())
		data_.sink.sinkFcParameters.concurrency.value = concurrencyNode["Value"].asString();
	if(!concurrencyNode["Form"].isNull())
		data_.sink.sinkFcParameters.concurrency.form = concurrencyNode["Form"].asString();
	if(!concurrencyNode["Template"].isNull())
		data_.sink.sinkFcParameters.concurrency._template = concurrencyNode["Template"].asString();
	auto qualifierNode = sinkFcParametersNode["Qualifier"];
	if(!qualifierNode["Value"].isNull())
		data_.sink.sinkFcParameters.qualifier.value = qualifierNode["Value"].asString();
	if(!qualifierNode["Form"].isNull())
		data_.sink.sinkFcParameters.qualifier.form = qualifierNode["Form"].asString();
	if(!qualifierNode["Template"].isNull())
		data_.sink.sinkFcParameters.qualifier._template = qualifierNode["Template"].asString();
	auto invocationTypeNode = sinkFcParametersNode["InvocationType"];
	if(!invocationTypeNode["Value"].isNull())
		data_.sink.sinkFcParameters.invocationType.value = invocationTypeNode["Value"].asString();
	if(!invocationTypeNode["Form"].isNull())
		data_.sink.sinkFcParameters.invocationType.form = invocationTypeNode["Form"].asString();
	if(!invocationTypeNode["Template"].isNull())
		data_.sink.sinkFcParameters.invocationType._template = invocationTypeNode["Template"].asString();
	auto body3Node = sinkFcParametersNode["Body"];
	if(!body3Node["Value"].isNull())
		data_.sink.sinkFcParameters.body3.value = body3Node["Value"].asString();
	if(!body3Node["Form"].isNull())
		data_.sink.sinkFcParameters.body3.form = body3Node["Form"].asString();
	if(!body3Node["Template"].isNull())
		data_.sink.sinkFcParameters.body3._template = body3Node["Template"].asString();
	auto sinkKafkaParametersNode = sinkNode["SinkKafkaParameters"];
	auto instanceId4Node = sinkKafkaParametersNode["InstanceId"];
	if(!instanceId4Node["Value"].isNull())
		data_.sink.sinkKafkaParameters.instanceId4.value = instanceId4Node["Value"].asString();
	if(!instanceId4Node["Form"].isNull())
		data_.sink.sinkKafkaParameters.instanceId4.form = instanceId4Node["Form"].asString();
	if(!instanceId4Node["Template"].isNull())
		data_.sink.sinkKafkaParameters.instanceId4._template = instanceId4Node["Template"].asString();
	auto topicNode = sinkKafkaParametersNode["Topic"];
	if(!topicNode["Value"].isNull())
		data_.sink.sinkKafkaParameters.topic.value = topicNode["Value"].asString();
	if(!topicNode["Form"].isNull())
		data_.sink.sinkKafkaParameters.topic.form = topicNode["Form"].asString();
	if(!topicNode["Template"].isNull())
		data_.sink.sinkKafkaParameters.topic._template = topicNode["Template"].asString();
	auto acksNode = sinkKafkaParametersNode["Acks"];
	if(!acksNode["Value"].isNull())
		data_.sink.sinkKafkaParameters.acks.value = acksNode["Value"].asString();
	if(!acksNode["Form"].isNull())
		data_.sink.sinkKafkaParameters.acks.form = acksNode["Form"].asString();
	if(!acksNode["Template"].isNull())
		data_.sink.sinkKafkaParameters.acks._template = acksNode["Template"].asString();
	auto keyNode = sinkKafkaParametersNode["Key"];
	if(!keyNode["Value"].isNull())
		data_.sink.sinkKafkaParameters.key.value = keyNode["Value"].asString();
	if(!keyNode["Form"].isNull())
		data_.sink.sinkKafkaParameters.key.form = keyNode["Form"].asString();
	if(!keyNode["Template"].isNull())
		data_.sink.sinkKafkaParameters.key._template = keyNode["Template"].asString();
	auto valueNode = sinkKafkaParametersNode["Value"];
	if(!valueNode["Value"].isNull())
		data_.sink.sinkKafkaParameters.value.value = valueNode["Value"].asString();
	if(!valueNode["Form"].isNull())
		data_.sink.sinkKafkaParameters.value.form = valueNode["Form"].asString();
	if(!valueNode["Template"].isNull())
		data_.sink.sinkKafkaParameters.value._template = valueNode["Template"].asString();
	auto saslUserNode = sinkKafkaParametersNode["SaslUser"];
	if(!saslUserNode["Value"].isNull())
		data_.sink.sinkKafkaParameters.saslUser.value = saslUserNode["Value"].asString();
	if(!saslUserNode["Form"].isNull())
		data_.sink.sinkKafkaParameters.saslUser.form = saslUserNode["Form"].asString();
	if(!saslUserNode["Template"].isNull())
		data_.sink.sinkKafkaParameters.saslUser._template = saslUserNode["Template"].asString();
	auto sinkRocketMQParametersNode = sinkNode["SinkRocketMQParameters"];
	auto instanceId5Node = sinkRocketMQParametersNode["InstanceId"];
	if(!instanceId5Node["Value"].isNull())
		data_.sink.sinkRocketMQParameters.instanceId5.value = instanceId5Node["Value"].asString();
	if(!instanceId5Node["Form"].isNull())
		data_.sink.sinkRocketMQParameters.instanceId5.form = instanceId5Node["Form"].asString();
	if(!instanceId5Node["Template"].isNull())
		data_.sink.sinkRocketMQParameters.instanceId5._template = instanceId5Node["Template"].asString();
	auto topic6Node = sinkRocketMQParametersNode["Topic"];
	if(!topic6Node["Value"].isNull())
		data_.sink.sinkRocketMQParameters.topic6.value = topic6Node["Value"].asString();
	if(!topic6Node["Form"].isNull())
		data_.sink.sinkRocketMQParameters.topic6.form = topic6Node["Form"].asString();
	if(!topic6Node["Template"].isNull())
		data_.sink.sinkRocketMQParameters.topic6._template = topic6Node["Template"].asString();
	auto body7Node = sinkRocketMQParametersNode["Body"];
	if(!body7Node["Value"].isNull())
		data_.sink.sinkRocketMQParameters.body7.value = body7Node["Value"].asString();
	if(!body7Node["Form"].isNull())
		data_.sink.sinkRocketMQParameters.body7.form = body7Node["Form"].asString();
	if(!body7Node["Template"].isNull())
		data_.sink.sinkRocketMQParameters.body7._template = body7Node["Template"].asString();
	auto properties8Node = sinkRocketMQParametersNode["Properties"];
	if(!properties8Node["Value"].isNull())
		data_.sink.sinkRocketMQParameters.properties8.value = properties8Node["Value"].asString();
	if(!properties8Node["Form"].isNull())
		data_.sink.sinkRocketMQParameters.properties8.form = properties8Node["Form"].asString();
	if(!properties8Node["Template"].isNull())
		data_.sink.sinkRocketMQParameters.properties8._template = properties8Node["Template"].asString();
	auto keysNode = sinkRocketMQParametersNode["Keys"];
	if(!keysNode["Value"].isNull())
		data_.sink.sinkRocketMQParameters.keys.value = keysNode["Value"].asString();
	if(!keysNode["Form"].isNull())
		data_.sink.sinkRocketMQParameters.keys.form = keysNode["Form"].asString();
	if(!keysNode["Template"].isNull())
		data_.sink.sinkRocketMQParameters.keys._template = keysNode["Template"].asString();
	auto tagsNode = sinkRocketMQParametersNode["Tags"];
	if(!tagsNode["Value"].isNull())
		data_.sink.sinkRocketMQParameters.tags.value = tagsNode["Value"].asString();
	if(!tagsNode["Form"].isNull())
		data_.sink.sinkRocketMQParameters.tags.form = tagsNode["Form"].asString();
	if(!tagsNode["Template"].isNull())
		data_.sink.sinkRocketMQParameters.tags._template = tagsNode["Template"].asString();
	auto sinkSLSParametersNode = sinkNode["SinkSLSParameters"];
	auto projectNode = sinkSLSParametersNode["Project"];
	if(!projectNode["Value"].isNull())
		data_.sink.sinkSLSParameters.project.value = projectNode["Value"].asString();
	if(!projectNode["Form"].isNull())
		data_.sink.sinkSLSParameters.project.form = projectNode["Form"].asString();
	if(!projectNode["Template"].isNull())
		data_.sink.sinkSLSParameters.project._template = projectNode["Template"].asString();
	auto logStoreNode = sinkSLSParametersNode["LogStore"];
	if(!logStoreNode["Value"].isNull())
		data_.sink.sinkSLSParameters.logStore.value = logStoreNode["Value"].asString();
	if(!logStoreNode["Form"].isNull())
		data_.sink.sinkSLSParameters.logStore.form = logStoreNode["Form"].asString();
	if(!logStoreNode["Template"].isNull())
		data_.sink.sinkSLSParameters.logStore._template = logStoreNode["Template"].asString();
	auto topic9Node = sinkSLSParametersNode["Topic"];
	if(!topic9Node["Value"].isNull())
		data_.sink.sinkSLSParameters.topic9.value = topic9Node["Value"].asString();
	if(!topic9Node["Form"].isNull())
		data_.sink.sinkSLSParameters.topic9.form = topic9Node["Form"].asString();
	if(!topic9Node["Template"].isNull())
		data_.sink.sinkSLSParameters.topic9._template = topic9Node["Template"].asString();
	auto body10Node = sinkSLSParametersNode["Body"];
	if(!body10Node["Value"].isNull())
		data_.sink.sinkSLSParameters.body10.value = body10Node["Value"].asString();
	if(!body10Node["Form"].isNull())
		data_.sink.sinkSLSParameters.body10.form = body10Node["Form"].asString();
	if(!body10Node["Template"].isNull())
		data_.sink.sinkSLSParameters.body10._template = body10Node["Template"].asString();
	auto roleNameNode = sinkSLSParametersNode["RoleName"];
	if(!roleNameNode["Value"].isNull())
		data_.sink.sinkSLSParameters.roleName.value = roleNameNode["Value"].asString();
	if(!roleNameNode["Form"].isNull())
		data_.sink.sinkSLSParameters.roleName.form = roleNameNode["Form"].asString();
	if(!roleNameNode["Template"].isNull())
		data_.sink.sinkSLSParameters.roleName._template = roleNameNode["Template"].asString();
	auto sinkFnfParametersNode = sinkNode["SinkFnfParameters"];
	auto flowNameNode = sinkFnfParametersNode["FlowName"];
	if(!flowNameNode["Value"].isNull())
		data_.sink.sinkFnfParameters.flowName.value = flowNameNode["Value"].asString();
	if(!flowNameNode["Form"].isNull())
		data_.sink.sinkFnfParameters.flowName.form = flowNameNode["Form"].asString();
	if(!flowNameNode["Template"].isNull())
		data_.sink.sinkFnfParameters.flowName._template = flowNameNode["Template"].asString();
	auto executionNameNode = sinkFnfParametersNode["ExecutionName"];
	if(!executionNameNode["Value"].isNull())
		data_.sink.sinkFnfParameters.executionName.value = executionNameNode["Value"].asString();
	if(!executionNameNode["Form"].isNull())
		data_.sink.sinkFnfParameters.executionName.form = executionNameNode["Form"].asString();
	if(!executionNameNode["Template"].isNull())
		data_.sink.sinkFnfParameters.executionName._template = executionNameNode["Template"].asString();
	auto inputNode = sinkFnfParametersNode["Input"];
	if(!inputNode["Value"].isNull())
		data_.sink.sinkFnfParameters.input.value = inputNode["Value"].asString();
	if(!inputNode["Form"].isNull())
		data_.sink.sinkFnfParameters.input.form = inputNode["Form"].asString();
	if(!inputNode["Template"].isNull())
		data_.sink.sinkFnfParameters.input._template = inputNode["Template"].asString();
	auto roleName11Node = sinkFnfParametersNode["RoleName"];
	if(!roleName11Node["Value"].isNull())
		data_.sink.sinkFnfParameters.roleName11.value = roleName11Node["Value"].asString();
	if(!roleName11Node["Form"].isNull())
		data_.sink.sinkFnfParameters.roleName11.form = roleName11Node["Form"].asString();
	if(!roleName11Node["Template"].isNull())
		data_.sink.sinkFnfParameters.roleName11._template = roleName11Node["Template"].asString();
	auto runOptionsNode = dataNode["RunOptions"];
	if(!runOptionsNode["MaximumTasks"].isNull())
		data_.runOptions.maximumTasks = std::stoi(runOptionsNode["MaximumTasks"].asString());
	if(!runOptionsNode["ErrorsTolerance"].isNull())
		data_.runOptions.errorsTolerance = runOptionsNode["ErrorsTolerance"].asString();
	auto retryStrategyNode = runOptionsNode["RetryStrategy"];
	if(!retryStrategyNode["PushRetryStrategy"].isNull())
		data_.runOptions.retryStrategy.pushRetryStrategy = retryStrategyNode["PushRetryStrategy"].asString();
	if(!retryStrategyNode["MaximumEventAgeInSeconds"].isNull())
		data_.runOptions.retryStrategy.maximumEventAgeInSeconds = std::stof(retryStrategyNode["MaximumEventAgeInSeconds"].asString());
	if(!retryStrategyNode["MaximumRetryAttempts"].isNull())
		data_.runOptions.retryStrategy.maximumRetryAttempts = std::stof(retryStrategyNode["MaximumRetryAttempts"].asString());
	auto deadLetterQueueNode = runOptionsNode["DeadLetterQueue"];
	if(!deadLetterQueueNode["Arn"].isNull())
		data_.runOptions.deadLetterQueue.arn = deadLetterQueueNode["Arn"].asString();
	auto batchWindowNode = runOptionsNode["BatchWindow"];
	if(!batchWindowNode["CountBasedWindow"].isNull())
		data_.runOptions.batchWindow.countBasedWindow = std::stoi(batchWindowNode["CountBasedWindow"].asString());
	if(!batchWindowNode["TimeBasedWindow"].isNull())
		data_.runOptions.batchWindow.timeBasedWindow = std::stoi(batchWindowNode["TimeBasedWindow"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetEventStreamingResult::getMessage()const
{
	return message_;
}

GetEventStreamingResult::Data GetEventStreamingResult::getData()const
{
	return data_;
}

std::string GetEventStreamingResult::getCode()const
{
	return code_;
}

bool GetEventStreamingResult::getSuccess()const
{
	return success_;
}

