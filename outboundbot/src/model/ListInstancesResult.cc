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

#include <alibabacloud/outboundbot/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = std::stol(valueInstancesInstance["CreationTime"].asString());
		if(!valueInstancesInstance["CallCenterInstanceId"].isNull())
			instancesObject.callCenterInstanceId = valueInstancesInstance["CallCenterInstanceId"].asString();
		if(!valueInstancesInstance["Owner"].isNull())
			instancesObject.owner = valueInstancesInstance["Owner"].asString();
		if(!valueInstancesInstance["NluServiceType"].isNull())
			instancesObject.nluServiceType = valueInstancesInstance["NluServiceType"].asString();
		if(!valueInstancesInstance["IsTemplateContainer"].isNull())
			instancesObject.isTemplateContainer = valueInstancesInstance["IsTemplateContainer"].asString() == "true";
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["OwnerName"].isNull())
			instancesObject.ownerName = valueInstancesInstance["OwnerName"].asString();
		if(!valueInstancesInstance["CreatorId"].isNull())
			instancesObject.creatorId = std::stol(valueInstancesInstance["CreatorId"].asString());
		if(!valueInstancesInstance["InstanceDescription"].isNull())
			instancesObject.instanceDescription = valueInstancesInstance["InstanceDescription"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		if(!valueInstancesInstance["CreatorName"].isNull())
			instancesObject.creatorName = valueInstancesInstance["CreatorName"].asString();
		if(!valueInstancesInstance["MaxConcurrentConversation"].isNull())
			instancesObject.maxConcurrentConversation = std::stoi(valueInstancesInstance["MaxConcurrentConversation"].asString());
		if(!valueInstancesInstance["IsPreset"].isNull())
			instancesObject.isPreset = valueInstancesInstance["IsPreset"].asString() == "true";
		auto allResourceTagsNode = valueInstancesInstance["ResourceTags"]["ResourceTag"];
		for (auto valueInstancesInstanceResourceTagsResourceTag : allResourceTagsNode)
		{
			Instance::ResourceTag resourceTagsObject;
			if(!valueInstancesInstanceResourceTagsResourceTag["Key"].isNull())
				resourceTagsObject.key = valueInstancesInstanceResourceTagsResourceTag["Key"].asString();
			if(!valueInstancesInstanceResourceTagsResourceTag["Value"].isNull())
				resourceTagsObject.value = valueInstancesInstanceResourceTagsResourceTag["Value"].asString();
			instancesObject.resourceTags.push_back(resourceTagsObject);
		}
		auto nluProfileNode = value["NluProfile"];
		if(!nluProfileNode["AccessKey"].isNull())
			instancesObject.nluProfile.accessKey = nluProfileNode["AccessKey"].asString();
		if(!nluProfileNode["SecretKey"].isNull())
			instancesObject.nluProfile.secretKey = nluProfileNode["SecretKey"].asString();
		if(!nluProfileNode["Endpoint"].isNull())
			instancesObject.nluProfile.endpoint = nluProfileNode["Endpoint"].asString();
		if(!nluProfileNode["AgentId"].isNull())
			instancesObject.nluProfile.agentId = nluProfileNode["AgentId"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListInstancesResult::Instance> ListInstancesResult::getInstances()const
{
	return instances_;
}

std::string ListInstancesResult::getMessage()const
{
	return message_;
}

int ListInstancesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListInstancesResult::getCode()const
{
	return code_;
}

bool ListInstancesResult::getSuccess()const
{
	return success_;
}

