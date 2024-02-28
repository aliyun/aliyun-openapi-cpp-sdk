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

#include <alibabacloud/eventbridge/model/ListUserDefinedEventSourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListUserDefinedEventSourcesResult::ListUserDefinedEventSourcesResult() :
	ServiceResult()
{}

ListUserDefinedEventSourcesResult::ListUserDefinedEventSourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserDefinedEventSourcesResult::~ListUserDefinedEventSourcesResult()
{}

void ListUserDefinedEventSourcesResult::parse(const std::string &payload)
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
	auto allEventSourceListNode = dataNode["EventSourceList"]["eventSourceListItem"];
	for (auto dataNodeEventSourceListeventSourceListItem : allEventSourceListNode)
	{
		Data::EventSourceListItem eventSourceListItemObject;
		if(!dataNodeEventSourceListeventSourceListItem["Name"].isNull())
			eventSourceListItemObject.name = dataNodeEventSourceListeventSourceListItem["Name"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Arn"].isNull())
			eventSourceListItemObject.arn = dataNodeEventSourceListeventSourceListItem["Arn"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Status"].isNull())
			eventSourceListItemObject.status = dataNodeEventSourceListeventSourceListItem["Status"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Type"].isNull())
			eventSourceListItemObject.type = dataNodeEventSourceListeventSourceListItem["Type"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["Ctime"].isNull())
			eventSourceListItemObject.ctime = std::stof(dataNodeEventSourceListeventSourceListItem["Ctime"].asString());
		if(!dataNodeEventSourceListeventSourceListItem["Description"].isNull())
			eventSourceListItemObject.description = dataNodeEventSourceListeventSourceListItem["Description"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["ExternalSourceType"].isNull())
			eventSourceListItemObject.externalSourceType = dataNodeEventSourceListeventSourceListItem["ExternalSourceType"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["ExternalSourceConfig"].isNull())
			eventSourceListItemObject.externalSourceConfig = dataNodeEventSourceListeventSourceListItem["ExternalSourceConfig"].asString();
		if(!dataNodeEventSourceListeventSourceListItem["EventBusName"].isNull())
			eventSourceListItemObject.eventBusName = dataNodeEventSourceListeventSourceListItem["EventBusName"].asString();
		auto sourceMNSParametersNode = value["SourceMNSParameters"];
		if(!sourceMNSParametersNode["RegionId"].isNull())
			eventSourceListItemObject.sourceMNSParameters.regionId = sourceMNSParametersNode["RegionId"].asString();
		if(!sourceMNSParametersNode["QueueName"].isNull())
			eventSourceListItemObject.sourceMNSParameters.queueName = sourceMNSParametersNode["QueueName"].asString();
		if(!sourceMNSParametersNode["IsBase64Decode"].isNull())
			eventSourceListItemObject.sourceMNSParameters.isBase64Decode = sourceMNSParametersNode["IsBase64Decode"].asString() == "true";
		auto sourceRocketMQParametersNode = value["SourceRocketMQParameters"];
		if(!sourceRocketMQParametersNode["RegionId"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.regionId = sourceRocketMQParametersNode["RegionId"].asString();
		if(!sourceRocketMQParametersNode["InstanceId"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceId = sourceRocketMQParametersNode["InstanceId"].asString();
		if(!sourceRocketMQParametersNode["Topic"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.topic = sourceRocketMQParametersNode["Topic"].asString();
		if(!sourceRocketMQParametersNode["Tag"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.tag = sourceRocketMQParametersNode["Tag"].asString();
		if(!sourceRocketMQParametersNode["Offset"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.offset = sourceRocketMQParametersNode["Offset"].asString();
		if(!sourceRocketMQParametersNode["Timestamp"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.timestamp = std::stof(sourceRocketMQParametersNode["Timestamp"].asString());
		if(!sourceRocketMQParametersNode["GroupId"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.groupId = sourceRocketMQParametersNode["GroupId"].asString();
		if(!sourceRocketMQParametersNode["InstanceType"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceType = sourceRocketMQParametersNode["InstanceType"].asString();
		if(!sourceRocketMQParametersNode["InstanceNetwork"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceNetwork = sourceRocketMQParametersNode["InstanceNetwork"].asString();
		if(!sourceRocketMQParametersNode["InstanceVpcId"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceVpcId = sourceRocketMQParametersNode["InstanceVpcId"].asString();
		if(!sourceRocketMQParametersNode["InstanceVSwitchIds"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceVSwitchIds = sourceRocketMQParametersNode["InstanceVSwitchIds"].asString();
		if(!sourceRocketMQParametersNode["InstanceSecurityGroupId"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceSecurityGroupId = sourceRocketMQParametersNode["InstanceSecurityGroupId"].asString();
		if(!sourceRocketMQParametersNode["AuthType"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.authType = sourceRocketMQParametersNode["AuthType"].asString();
		if(!sourceRocketMQParametersNode["InstanceEndpoint"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceEndpoint = sourceRocketMQParametersNode["InstanceEndpoint"].asString();
		if(!sourceRocketMQParametersNode["InstanceUsername"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instanceUsername = sourceRocketMQParametersNode["InstanceUsername"].asString();
		if(!sourceRocketMQParametersNode["InstancePassword"].isNull())
			eventSourceListItemObject.sourceRocketMQParameters.instancePassword = sourceRocketMQParametersNode["InstancePassword"].asString();
		auto sourceRabbitMQParametersNode = value["SourceRabbitMQParameters"];
		if(!sourceRabbitMQParametersNode["RegionId"].isNull())
			eventSourceListItemObject.sourceRabbitMQParameters.regionId = sourceRabbitMQParametersNode["RegionId"].asString();
		if(!sourceRabbitMQParametersNode["InstanceId"].isNull())
			eventSourceListItemObject.sourceRabbitMQParameters.instanceId = sourceRabbitMQParametersNode["InstanceId"].asString();
		if(!sourceRabbitMQParametersNode["VirtualHostName"].isNull())
			eventSourceListItemObject.sourceRabbitMQParameters.virtualHostName = sourceRabbitMQParametersNode["VirtualHostName"].asString();
		if(!sourceRabbitMQParametersNode["QueueName"].isNull())
			eventSourceListItemObject.sourceRabbitMQParameters.queueName = sourceRabbitMQParametersNode["QueueName"].asString();
		auto sourceSLSParametersNode = value["SourceSLSParameters"];
		if(!sourceSLSParametersNode["Project"].isNull())
			eventSourceListItemObject.sourceSLSParameters.project = sourceSLSParametersNode["Project"].asString();
		if(!sourceSLSParametersNode["LogStore"].isNull())
			eventSourceListItemObject.sourceSLSParameters.logStore = sourceSLSParametersNode["LogStore"].asString();
		if(!sourceSLSParametersNode["ConsumePosition"].isNull())
			eventSourceListItemObject.sourceSLSParameters.consumePosition = sourceSLSParametersNode["ConsumePosition"].asString();
		if(!sourceSLSParametersNode["RoleName"].isNull())
			eventSourceListItemObject.sourceSLSParameters.roleName = sourceSLSParametersNode["RoleName"].asString();
		auto sourceHttpEventParametersNode = value["SourceHttpEventParameters"];
		if(!sourceHttpEventParametersNode["Type"].isNull())
			eventSourceListItemObject.sourceHttpEventParameters.type = sourceHttpEventParametersNode["Type"].asString();
		if(!sourceHttpEventParametersNode["SecurityConfig"].isNull())
			eventSourceListItemObject.sourceHttpEventParameters.securityConfig = sourceHttpEventParametersNode["SecurityConfig"].asString();
			auto allMethod = sourceHttpEventParametersNode["Method"]["method"];
			for (auto value : allMethod)
				eventSourceListItemObject.sourceHttpEventParameters.method.push_back(value.asString());
			auto allIp = sourceHttpEventParametersNode["Ip"]["ip"];
			for (auto value : allIp)
				eventSourceListItemObject.sourceHttpEventParameters.ip.push_back(value.asString());
			auto allReferer = sourceHttpEventParametersNode["Referer"]["referer"];
			for (auto value : allReferer)
				eventSourceListItemObject.sourceHttpEventParameters.referer.push_back(value.asString());
			auto allPublicWebHookUrl = sourceHttpEventParametersNode["PublicWebHookUrl"]["publicWebHookUrl"];
			for (auto value : allPublicWebHookUrl)
				eventSourceListItemObject.sourceHttpEventParameters.publicWebHookUrl.push_back(value.asString());
			auto allVpcWebHookUrl = sourceHttpEventParametersNode["VpcWebHookUrl"]["vpcWebHookUrl"];
			for (auto value : allVpcWebHookUrl)
				eventSourceListItemObject.sourceHttpEventParameters.vpcWebHookUrl.push_back(value.asString());
		auto sourceKafkaParametersNode = value["SourceKafkaParameters"];
		if(!sourceKafkaParametersNode["InstanceId"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.instanceId = sourceKafkaParametersNode["InstanceId"].asString();
		if(!sourceKafkaParametersNode["ConsumerGroup"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.consumerGroup = sourceKafkaParametersNode["ConsumerGroup"].asString();
		if(!sourceKafkaParametersNode["Topic"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.topic = sourceKafkaParametersNode["Topic"].asString();
		if(!sourceKafkaParametersNode["OffsetReset"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.offsetReset = sourceKafkaParametersNode["OffsetReset"].asString();
		if(!sourceKafkaParametersNode["RegionId"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.regionId = sourceKafkaParametersNode["RegionId"].asString();
		if(!sourceKafkaParametersNode["MaximumTasks"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.maximumTasks = std::stoi(sourceKafkaParametersNode["MaximumTasks"].asString());
		if(!sourceKafkaParametersNode["Network"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.network = sourceKafkaParametersNode["Network"].asString();
		if(!sourceKafkaParametersNode["SecurityGroupId"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.securityGroupId = sourceKafkaParametersNode["SecurityGroupId"].asString();
		if(!sourceKafkaParametersNode["VpcId"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.vpcId = sourceKafkaParametersNode["VpcId"].asString();
		if(!sourceKafkaParametersNode["VSwitchIds"].isNull())
			eventSourceListItemObject.sourceKafkaParameters.vSwitchIds = sourceKafkaParametersNode["VSwitchIds"].asString();
		auto sourceScheduledEventParametersNode = value["SourceScheduledEventParameters"];
		if(!sourceScheduledEventParametersNode["Schedule"].isNull())
			eventSourceListItemObject.sourceScheduledEventParameters.schedule = sourceScheduledEventParametersNode["Schedule"].asString();
		if(!sourceScheduledEventParametersNode["TimeZone"].isNull())
			eventSourceListItemObject.sourceScheduledEventParameters.timeZone = sourceScheduledEventParametersNode["TimeZone"].asString();
		if(!sourceScheduledEventParametersNode["UserData"].isNull())
			eventSourceListItemObject.sourceScheduledEventParameters.userData = sourceScheduledEventParametersNode["UserData"].asString();
		data_.eventSourceList.push_back(eventSourceListItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListUserDefinedEventSourcesResult::getMessage()const
{
	return message_;
}

ListUserDefinedEventSourcesResult::Data ListUserDefinedEventSourcesResult::getData()const
{
	return data_;
}

std::string ListUserDefinedEventSourcesResult::getCode()const
{
	return code_;
}

bool ListUserDefinedEventSourcesResult::getSuccess()const
{
	return success_;
}

