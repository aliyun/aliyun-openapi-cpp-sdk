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

#include <alibabacloud/eventbridge/model/ListEventStreamingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListEventStreamingsResult::ListEventStreamingsResult() :
	ServiceResult()
{}

ListEventStreamingsResult::ListEventStreamingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEventStreamingsResult::~ListEventStreamingsResult()
{}

void ListEventStreamingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allEventStreamingsNode = dataNode["EventStreamings"]["EventStreamingsItem"];
	for (auto dataNodeEventStreamingsEventStreamingsItem : allEventStreamingsNode)
	{
		Data::EventStreamingsItem eventStreamingsItemObject;
		if(!dataNodeEventStreamingsEventStreamingsItem["EventStreamingName"].isNull())
			eventStreamingsItemObject.eventStreamingName = dataNodeEventStreamingsEventStreamingsItem["EventStreamingName"].asString();
		if(!dataNodeEventStreamingsEventStreamingsItem["Description"].isNull())
			eventStreamingsItemObject.description = dataNodeEventStreamingsEventStreamingsItem["Description"].asString();
		if(!dataNodeEventStreamingsEventStreamingsItem["FilterPattern"].isNull())
			eventStreamingsItemObject.filterPattern = dataNodeEventStreamingsEventStreamingsItem["FilterPattern"].asString();
		if(!dataNodeEventStreamingsEventStreamingsItem["Tag"].isNull())
			eventStreamingsItemObject.tag = dataNodeEventStreamingsEventStreamingsItem["Tag"].asString();
		if(!dataNodeEventStreamingsEventStreamingsItem["Status"].isNull())
			eventStreamingsItemObject.status = dataNodeEventStreamingsEventStreamingsItem["Status"].asString();
		auto allTransformsNode = dataNodeEventStreamingsEventStreamingsItem["Transforms"]["TransformsItem"];
		for (auto dataNodeEventStreamingsEventStreamingsItemTransformsTransformsItem : allTransformsNode)
		{
			Data::EventStreamingsItem::TransformsItem transformsObject;
			if(!dataNodeEventStreamingsEventStreamingsItemTransformsTransformsItem["Arn"].isNull())
				transformsObject.arn = dataNodeEventStreamingsEventStreamingsItemTransformsTransformsItem["Arn"].asString();
			eventStreamingsItemObject.transforms.push_back(transformsObject);
		}
		auto sourceNode = value["Source"];
		auto sourceMNSParametersNode = sourceNode["SourceMNSParameters"];
		if(!sourceMNSParametersNode["RegionId"].isNull())
			eventStreamingsItemObject.source.sourceMNSParameters.regionId = sourceMNSParametersNode["RegionId"].asString();
		if(!sourceMNSParametersNode["QueueName"].isNull())
			eventStreamingsItemObject.source.sourceMNSParameters.queueName = sourceMNSParametersNode["QueueName"].asString();
		if(!sourceMNSParametersNode["IsBase64Decode"].isNull())
			eventStreamingsItemObject.source.sourceMNSParameters.isBase64Decode = sourceMNSParametersNode["IsBase64Decode"].asString() == "true";
		auto sourceRabbitMQParametersNode = sourceNode["SourceRabbitMQParameters"];
		if(!sourceRabbitMQParametersNode["RegionId"].isNull())
			eventStreamingsItemObject.source.sourceRabbitMQParameters.regionId = sourceRabbitMQParametersNode["RegionId"].asString();
		if(!sourceRabbitMQParametersNode["InstanceId"].isNull())
			eventStreamingsItemObject.source.sourceRabbitMQParameters.instanceId = sourceRabbitMQParametersNode["InstanceId"].asString();
		if(!sourceRabbitMQParametersNode["VirtualHostName"].isNull())
			eventStreamingsItemObject.source.sourceRabbitMQParameters.virtualHostName = sourceRabbitMQParametersNode["VirtualHostName"].asString();
		if(!sourceRabbitMQParametersNode["QueueName"].isNull())
			eventStreamingsItemObject.source.sourceRabbitMQParameters.queueName = sourceRabbitMQParametersNode["QueueName"].asString();
		auto sourceRocketMQParametersNode = sourceNode["SourceRocketMQParameters"];
		if(!sourceRocketMQParametersNode["RegionId"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.regionId = sourceRocketMQParametersNode["RegionId"].asString();
		if(!sourceRocketMQParametersNode["InstanceId"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceId = sourceRocketMQParametersNode["InstanceId"].asString();
		if(!sourceRocketMQParametersNode["Topic"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.topic = sourceRocketMQParametersNode["Topic"].asString();
		if(!sourceRocketMQParametersNode["Tag"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.tag = sourceRocketMQParametersNode["Tag"].asString();
		if(!sourceRocketMQParametersNode["Offset"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.offset = sourceRocketMQParametersNode["Offset"].asString();
		if(!sourceRocketMQParametersNode["GroupID"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.groupID = sourceRocketMQParametersNode["GroupID"].asString();
		if(!sourceRocketMQParametersNode["Timestamp"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.timestamp = std::stol(sourceRocketMQParametersNode["Timestamp"].asString());
		if(!sourceRocketMQParametersNode["InstanceType"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceType = sourceRocketMQParametersNode["InstanceType"].asString();
		if(!sourceRocketMQParametersNode["InstanceEndpoint"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceEndpoint = sourceRocketMQParametersNode["InstanceEndpoint"].asString();
		if(!sourceRocketMQParametersNode["AuthType"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.authType = sourceRocketMQParametersNode["AuthType"].asString();
		if(!sourceRocketMQParametersNode["InstanceUsername"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceUsername = sourceRocketMQParametersNode["InstanceUsername"].asString();
		if(!sourceRocketMQParametersNode["InstancePassword"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instancePassword = sourceRocketMQParametersNode["InstancePassword"].asString();
		if(!sourceRocketMQParametersNode["InstanceVpcId"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceVpcId = sourceRocketMQParametersNode["InstanceVpcId"].asString();
		if(!sourceRocketMQParametersNode["InstanceVSwitchIds"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceVSwitchIds = sourceRocketMQParametersNode["InstanceVSwitchIds"].asString();
		if(!sourceRocketMQParametersNode["InstanceSecurityGroupId"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceSecurityGroupId = sourceRocketMQParametersNode["InstanceSecurityGroupId"].asString();
		if(!sourceRocketMQParametersNode["InstanceNetwork"].isNull())
			eventStreamingsItemObject.source.sourceRocketMQParameters.instanceNetwork = sourceRocketMQParametersNode["InstanceNetwork"].asString();
		auto sourceKafkaParametersNode = sourceNode["SourceKafkaParameters"];
		if(!sourceKafkaParametersNode["RegionId"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.regionId = sourceKafkaParametersNode["RegionId"].asString();
		if(!sourceKafkaParametersNode["InstanceId"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.instanceId = sourceKafkaParametersNode["InstanceId"].asString();
		if(!sourceKafkaParametersNode["Topic"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.topic = sourceKafkaParametersNode["Topic"].asString();
		if(!sourceKafkaParametersNode["ConsumerGroup"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.consumerGroup = sourceKafkaParametersNode["ConsumerGroup"].asString();
		if(!sourceKafkaParametersNode["OffsetReset"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.offsetReset = sourceKafkaParametersNode["OffsetReset"].asString();
		if(!sourceKafkaParametersNode["Network"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.network = sourceKafkaParametersNode["Network"].asString();
		if(!sourceKafkaParametersNode["VpcId"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.vpcId = sourceKafkaParametersNode["VpcId"].asString();
		if(!sourceKafkaParametersNode["VSwitchIds"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.vSwitchIds = sourceKafkaParametersNode["VSwitchIds"].asString();
		if(!sourceKafkaParametersNode["SecurityGroupId"].isNull())
			eventStreamingsItemObject.source.sourceKafkaParameters.securityGroupId = sourceKafkaParametersNode["SecurityGroupId"].asString();
		auto sourceMQTTParametersNode = sourceNode["SourceMQTTParameters"];
		if(!sourceMQTTParametersNode["RegionId"].isNull())
			eventStreamingsItemObject.source.sourceMQTTParameters.regionId = sourceMQTTParametersNode["RegionId"].asString();
		if(!sourceMQTTParametersNode["InstanceId"].isNull())
			eventStreamingsItemObject.source.sourceMQTTParameters.instanceId = sourceMQTTParametersNode["InstanceId"].asString();
		if(!sourceMQTTParametersNode["Topic"].isNull())
			eventStreamingsItemObject.source.sourceMQTTParameters.topic = sourceMQTTParametersNode["Topic"].asString();
		auto sourceDTSParametersNode = sourceNode["SourceDTSParameters"];
		if(!sourceDTSParametersNode["TaskId"].isNull())
			eventStreamingsItemObject.source.sourceDTSParameters.taskId = sourceDTSParametersNode["TaskId"].asString();
		if(!sourceDTSParametersNode["BrokerUrl"].isNull())
			eventStreamingsItemObject.source.sourceDTSParameters.brokerUrl = sourceDTSParametersNode["BrokerUrl"].asString();
		if(!sourceDTSParametersNode["Topic"].isNull())
			eventStreamingsItemObject.source.sourceDTSParameters.topic = sourceDTSParametersNode["Topic"].asString();
		if(!sourceDTSParametersNode["Sid"].isNull())
			eventStreamingsItemObject.source.sourceDTSParameters.sid = sourceDTSParametersNode["Sid"].asString();
		if(!sourceDTSParametersNode["Username"].isNull())
			eventStreamingsItemObject.source.sourceDTSParameters.username = sourceDTSParametersNode["Username"].asString();
		if(!sourceDTSParametersNode["Password"].isNull())
			eventStreamingsItemObject.source.sourceDTSParameters.password = sourceDTSParametersNode["Password"].asString();
		if(!sourceDTSParametersNode["InitCheckPoint"].isNull())
			eventStreamingsItemObject.source.sourceDTSParameters.initCheckPoint = sourceDTSParametersNode["InitCheckPoint"].asString();
		auto sourceSLSParametersNode = sourceNode["SourceSLSParameters"];
		if(!sourceSLSParametersNode["Project"].isNull())
			eventStreamingsItemObject.source.sourceSLSParameters.project = sourceSLSParametersNode["Project"].asString();
		if(!sourceSLSParametersNode["LogStore"].isNull())
			eventStreamingsItemObject.source.sourceSLSParameters.logStore = sourceSLSParametersNode["LogStore"].asString();
		if(!sourceSLSParametersNode["ConsumerGroup"].isNull())
			eventStreamingsItemObject.source.sourceSLSParameters.consumerGroup = sourceSLSParametersNode["ConsumerGroup"].asString();
		if(!sourceSLSParametersNode["ConsumePosition"].isNull())
			eventStreamingsItemObject.source.sourceSLSParameters.consumePosition = sourceSLSParametersNode["ConsumePosition"].asString();
		if(!sourceSLSParametersNode["RoleName"].isNull())
			eventStreamingsItemObject.source.sourceSLSParameters.roleName = sourceSLSParametersNode["RoleName"].asString();
		auto sinkNode = value["Sink"];
		auto sinkMNSParametersNode = sinkNode["SinkMNSParameters"];
		auto queueNameNode = sinkMNSParametersNode["QueueName"];
		if(!queueNameNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.queueName.value = queueNameNode["Value"].asString();
		if(!queueNameNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.queueName.form = queueNameNode["Form"].asString();
		if(!queueNameNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.queueName._template = queueNameNode["Template"].asString();
		auto bodyNode = sinkMNSParametersNode["Body"];
		if(!bodyNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.body.value = bodyNode["Value"].asString();
		if(!bodyNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.body.form = bodyNode["Form"].asString();
		if(!bodyNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.body._template = bodyNode["Template"].asString();
		auto isBase64EncodeNode = sinkMNSParametersNode["IsBase64Encode"];
		if(!isBase64EncodeNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.isBase64Encode.value = isBase64EncodeNode["Value"].asString();
		if(!isBase64EncodeNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.isBase64Encode.form = isBase64EncodeNode["Form"].asString();
		if(!isBase64EncodeNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkMNSParameters.isBase64Encode._template = isBase64EncodeNode["Template"].asString();
		auto sinkFcParametersNode = sinkNode["SinkFcParameters"];
		auto serviceNameNode = sinkFcParametersNode["ServiceName"];
		if(!serviceNameNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.serviceName.value = serviceNameNode["Value"].asString();
		if(!serviceNameNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.serviceName.form = serviceNameNode["Form"].asString();
		if(!serviceNameNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.serviceName._template = serviceNameNode["Template"].asString();
		auto functionNameNode = sinkFcParametersNode["FunctionName"];
		if(!functionNameNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.functionName.value = functionNameNode["Value"].asString();
		if(!functionNameNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.functionName.form = functionNameNode["Form"].asString();
		if(!functionNameNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.functionName._template = functionNameNode["Template"].asString();
		auto concurrencyNode = sinkFcParametersNode["Concurrency"];
		if(!concurrencyNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.concurrency.value = concurrencyNode["Value"].asString();
		if(!concurrencyNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.concurrency.form = concurrencyNode["Form"].asString();
		if(!concurrencyNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.concurrency._template = concurrencyNode["Template"].asString();
		auto qualifierNode = sinkFcParametersNode["Qualifier"];
		if(!qualifierNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.qualifier.value = qualifierNode["Value"].asString();
		if(!qualifierNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.qualifier.form = qualifierNode["Form"].asString();
		if(!qualifierNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.qualifier._template = qualifierNode["Template"].asString();
		auto invocationTypeNode = sinkFcParametersNode["InvocationType"];
		if(!invocationTypeNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.invocationType.value = invocationTypeNode["Value"].asString();
		if(!invocationTypeNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.invocationType.form = invocationTypeNode["Form"].asString();
		if(!invocationTypeNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.invocationType._template = invocationTypeNode["Template"].asString();
		auto body1Node = sinkFcParametersNode["Body"];
		if(!body1Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.body1.value = body1Node["Value"].asString();
		if(!body1Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.body1.form = body1Node["Form"].asString();
		if(!body1Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFcParameters.body1._template = body1Node["Template"].asString();
		auto sinkRabbitMQParametersNode = sinkNode["SinkRabbitMQParameters"];
		auto instanceIdNode = sinkRabbitMQParametersNode["InstanceId"];
		if(!instanceIdNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.instanceId.value = instanceIdNode["Value"].asString();
		if(!instanceIdNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.instanceId.form = instanceIdNode["Form"].asString();
		if(!instanceIdNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.instanceId._template = instanceIdNode["Template"].asString();
		auto virtualHostNameNode = sinkRabbitMQParametersNode["VirtualHostName"];
		if(!virtualHostNameNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.virtualHostName.value = virtualHostNameNode["Value"].asString();
		if(!virtualHostNameNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.virtualHostName.form = virtualHostNameNode["Form"].asString();
		if(!virtualHostNameNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.virtualHostName._template = virtualHostNameNode["Template"].asString();
		auto targetTypeNode = sinkRabbitMQParametersNode["TargetType"];
		if(!targetTypeNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.targetType.value = targetTypeNode["Value"].asString();
		if(!targetTypeNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.targetType.form = targetTypeNode["Form"].asString();
		if(!targetTypeNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.targetType._template = targetTypeNode["Template"].asString();
		auto exchangeNode = sinkRabbitMQParametersNode["Exchange"];
		if(!exchangeNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.exchange.value = exchangeNode["Value"].asString();
		if(!exchangeNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.exchange.form = exchangeNode["Form"].asString();
		if(!exchangeNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.exchange._template = exchangeNode["Template"].asString();
		auto routingKeyNode = sinkRabbitMQParametersNode["RoutingKey"];
		if(!routingKeyNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.routingKey.value = routingKeyNode["Value"].asString();
		if(!routingKeyNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.routingKey.form = routingKeyNode["Form"].asString();
		if(!routingKeyNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.routingKey._template = routingKeyNode["Template"].asString();
		auto queueName2Node = sinkRabbitMQParametersNode["QueueName"];
		if(!queueName2Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.queueName2.value = queueName2Node["Value"].asString();
		if(!queueName2Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.queueName2.form = queueName2Node["Form"].asString();
		if(!queueName2Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.queueName2._template = queueName2Node["Template"].asString();
		auto body3Node = sinkRabbitMQParametersNode["Body"];
		if(!body3Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.body3.value = body3Node["Value"].asString();
		if(!body3Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.body3.form = body3Node["Form"].asString();
		if(!body3Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.body3._template = body3Node["Template"].asString();
		auto messageIdNode = sinkRabbitMQParametersNode["MessageId"];
		if(!messageIdNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.messageId.value = messageIdNode["Value"].asString();
		if(!messageIdNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.messageId.form = messageIdNode["Form"].asString();
		if(!messageIdNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.messageId._template = messageIdNode["Template"].asString();
		auto propertiesNode = sinkRabbitMQParametersNode["Properties"];
		if(!propertiesNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.properties.value = propertiesNode["Value"].asString();
		if(!propertiesNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.properties.form = propertiesNode["Form"].asString();
		if(!propertiesNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRabbitMQParameters.properties._template = propertiesNode["Template"].asString();
		auto sinkKafkaParametersNode = sinkNode["SinkKafkaParameters"];
		auto instanceId4Node = sinkKafkaParametersNode["InstanceId"];
		if(!instanceId4Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.instanceId4.value = instanceId4Node["Value"].asString();
		if(!instanceId4Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.instanceId4.form = instanceId4Node["Form"].asString();
		if(!instanceId4Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.instanceId4._template = instanceId4Node["Template"].asString();
		auto topicNode = sinkKafkaParametersNode["Topic"];
		if(!topicNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.topic.value = topicNode["Value"].asString();
		if(!topicNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.topic.form = topicNode["Form"].asString();
		if(!topicNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.topic._template = topicNode["Template"].asString();
		auto acksNode = sinkKafkaParametersNode["Acks"];
		if(!acksNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.acks.value = acksNode["Value"].asString();
		if(!acksNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.acks.form = acksNode["Form"].asString();
		if(!acksNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.acks._template = acksNode["Template"].asString();
		auto keyNode = sinkKafkaParametersNode["Key"];
		if(!keyNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.key.value = keyNode["Value"].asString();
		if(!keyNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.key.form = keyNode["Form"].asString();
		if(!keyNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.key._template = keyNode["Template"].asString();
		auto valueNode = sinkKafkaParametersNode["Value"];
		if(!valueNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.value.value = valueNode["Value"].asString();
		if(!valueNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.value.form = valueNode["Form"].asString();
		if(!valueNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.value._template = valueNode["Template"].asString();
		auto saslUserNode = sinkKafkaParametersNode["SaslUser"];
		if(!saslUserNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.saslUser.value = saslUserNode["Value"].asString();
		if(!saslUserNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.saslUser.form = saslUserNode["Form"].asString();
		if(!saslUserNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkKafkaParameters.saslUser._template = saslUserNode["Template"].asString();
		auto sinkRocketMQParametersNode = sinkNode["SinkRocketMQParameters"];
		auto instanceId5Node = sinkRocketMQParametersNode["InstanceId"];
		if(!instanceId5Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.instanceId5.value = instanceId5Node["Value"].asString();
		if(!instanceId5Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.instanceId5.form = instanceId5Node["Form"].asString();
		if(!instanceId5Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.instanceId5._template = instanceId5Node["Template"].asString();
		auto topic6Node = sinkRocketMQParametersNode["Topic"];
		if(!topic6Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.topic6.value = topic6Node["Value"].asString();
		if(!topic6Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.topic6.form = topic6Node["Form"].asString();
		if(!topic6Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.topic6._template = topic6Node["Template"].asString();
		auto body7Node = sinkRocketMQParametersNode["Body"];
		if(!body7Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.body7.value = body7Node["Value"].asString();
		if(!body7Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.body7.form = body7Node["Form"].asString();
		if(!body7Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.body7._template = body7Node["Template"].asString();
		auto properties8Node = sinkRocketMQParametersNode["Properties"];
		if(!properties8Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.properties8.value = properties8Node["Value"].asString();
		if(!properties8Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.properties8.form = properties8Node["Form"].asString();
		if(!properties8Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.properties8._template = properties8Node["Template"].asString();
		auto keysNode = sinkRocketMQParametersNode["Keys"];
		if(!keysNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.keys.value = keysNode["Value"].asString();
		if(!keysNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.keys.form = keysNode["Form"].asString();
		if(!keysNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.keys._template = keysNode["Template"].asString();
		auto tagsNode = sinkRocketMQParametersNode["Tags"];
		if(!tagsNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.tags.value = tagsNode["Value"].asString();
		if(!tagsNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.tags.form = tagsNode["Form"].asString();
		if(!tagsNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkRocketMQParameters.tags._template = tagsNode["Template"].asString();
		auto sinkSLSParametersNode = sinkNode["SinkSLSParameters"];
		auto projectNode = sinkSLSParametersNode["Project"];
		if(!projectNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.project.value = projectNode["Value"].asString();
		if(!projectNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.project.form = projectNode["Form"].asString();
		if(!projectNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.project._template = projectNode["Template"].asString();
		auto logStoreNode = sinkSLSParametersNode["LogStore"];
		if(!logStoreNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.logStore.value = logStoreNode["Value"].asString();
		if(!logStoreNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.logStore.form = logStoreNode["Form"].asString();
		if(!logStoreNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.logStore._template = logStoreNode["Template"].asString();
		auto topic9Node = sinkSLSParametersNode["Topic"];
		if(!topic9Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.topic9.value = topic9Node["Value"].asString();
		if(!topic9Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.topic9.form = topic9Node["Form"].asString();
		if(!topic9Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.topic9._template = topic9Node["Template"].asString();
		auto body10Node = sinkSLSParametersNode["Body"];
		if(!body10Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.body10.value = body10Node["Value"].asString();
		if(!body10Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.body10.form = body10Node["Form"].asString();
		if(!body10Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.body10._template = body10Node["Template"].asString();
		auto roleNameNode = sinkSLSParametersNode["RoleName"];
		if(!roleNameNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.roleName.value = roleNameNode["Value"].asString();
		if(!roleNameNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.roleName.form = roleNameNode["Form"].asString();
		if(!roleNameNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkSLSParameters.roleName._template = roleNameNode["Template"].asString();
		auto sinkFnfParametersNode = sinkNode["SinkFnfParameters"];
		auto flowNameNode = sinkFnfParametersNode["FlowName"];
		if(!flowNameNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.flowName.value = flowNameNode["Value"].asString();
		if(!flowNameNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.flowName.form = flowNameNode["Form"].asString();
		if(!flowNameNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.flowName._template = flowNameNode["Template"].asString();
		auto executionNameNode = sinkFnfParametersNode["ExecutionName"];
		if(!executionNameNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.executionName.value = executionNameNode["Value"].asString();
		if(!executionNameNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.executionName.form = executionNameNode["Form"].asString();
		if(!executionNameNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.executionName._template = executionNameNode["Template"].asString();
		auto inputNode = sinkFnfParametersNode["Input"];
		if(!inputNode["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.input.value = inputNode["Value"].asString();
		if(!inputNode["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.input.form = inputNode["Form"].asString();
		if(!inputNode["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.input._template = inputNode["Template"].asString();
		auto roleName11Node = sinkFnfParametersNode["RoleName"];
		if(!roleName11Node["Value"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.roleName11.value = roleName11Node["Value"].asString();
		if(!roleName11Node["Form"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.roleName11.form = roleName11Node["Form"].asString();
		if(!roleName11Node["Template"].isNull())
			eventStreamingsItemObject.sink.sinkFnfParameters.roleName11._template = roleName11Node["Template"].asString();
		auto runOptionsNode = value["RunOptions"];
		if(!runOptionsNode["MaximumTasks"].isNull())
			eventStreamingsItemObject.runOptions.maximumTasks = std::stoi(runOptionsNode["MaximumTasks"].asString());
		if(!runOptionsNode["ErrorsTolerance"].isNull())
			eventStreamingsItemObject.runOptions.errorsTolerance = runOptionsNode["ErrorsTolerance"].asString();
		auto retryStrategyNode = runOptionsNode["RetryStrategy"];
		if(!retryStrategyNode["PushRetryStrategy"].isNull())
			eventStreamingsItemObject.runOptions.retryStrategy.pushRetryStrategy = retryStrategyNode["PushRetryStrategy"].asString();
		if(!retryStrategyNode["MaximumEventAgeInSeconds"].isNull())
			eventStreamingsItemObject.runOptions.retryStrategy.maximumEventAgeInSeconds = std::stof(retryStrategyNode["MaximumEventAgeInSeconds"].asString());
		if(!retryStrategyNode["MaximumRetryAttempts"].isNull())
			eventStreamingsItemObject.runOptions.retryStrategy.maximumRetryAttempts = std::stof(retryStrategyNode["MaximumRetryAttempts"].asString());
		auto deadLetterQueueNode = runOptionsNode["DeadLetterQueue"];
		if(!deadLetterQueueNode["Arn"].isNull())
			eventStreamingsItemObject.runOptions.deadLetterQueue.arn = deadLetterQueueNode["Arn"].asString();
		auto batchWindowNode = runOptionsNode["BatchWindow"];
		if(!batchWindowNode["CountBasedWindow"].isNull())
			eventStreamingsItemObject.runOptions.batchWindow.countBasedWindow = std::stoi(batchWindowNode["CountBasedWindow"].asString());
		if(!batchWindowNode["TimeBasedWindow"].isNull())
			eventStreamingsItemObject.runOptions.batchWindow.timeBasedWindow = std::stoi(batchWindowNode["TimeBasedWindow"].asString());
		data_.eventStreamings.push_back(eventStreamingsItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListEventStreamingsResult::getMessage()const
{
	return message_;
}

ListEventStreamingsResult::Data ListEventStreamingsResult::getData()const
{
	return data_;
}

std::string ListEventStreamingsResult::getCode()const
{
	return code_;
}

bool ListEventStreamingsResult::getSuccess()const
{
	return success_;
}

