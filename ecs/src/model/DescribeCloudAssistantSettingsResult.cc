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

#include <alibabacloud/ecs/model/DescribeCloudAssistantSettingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeCloudAssistantSettingsResult::DescribeCloudAssistantSettingsResult() :
	ServiceResult()
{}

DescribeCloudAssistantSettingsResult::DescribeCloudAssistantSettingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudAssistantSettingsResult::~DescribeCloudAssistantSettingsResult()
{}

void DescribeCloudAssistantSettingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOssDeliveryConfigsNode = value["OssDeliveryConfigs"]["OssDeliveryConfig"];
	for (auto valueOssDeliveryConfigsOssDeliveryConfig : allOssDeliveryConfigsNode)
	{
		OssDeliveryConfig ossDeliveryConfigsObject;
		if(!valueOssDeliveryConfigsOssDeliveryConfig["EncryptionType"].isNull())
			ossDeliveryConfigsObject.encryptionType = valueOssDeliveryConfigsOssDeliveryConfig["EncryptionType"].asString();
		if(!valueOssDeliveryConfigsOssDeliveryConfig["EncryptionAlgorithm"].isNull())
			ossDeliveryConfigsObject.encryptionAlgorithm = valueOssDeliveryConfigsOssDeliveryConfig["EncryptionAlgorithm"].asString();
		if(!valueOssDeliveryConfigsOssDeliveryConfig["DeliveryType"].isNull())
			ossDeliveryConfigsObject.deliveryType = valueOssDeliveryConfigsOssDeliveryConfig["DeliveryType"].asString();
		if(!valueOssDeliveryConfigsOssDeliveryConfig["Enabled"].isNull())
			ossDeliveryConfigsObject.enabled = valueOssDeliveryConfigsOssDeliveryConfig["Enabled"].asString() == "true";
		if(!valueOssDeliveryConfigsOssDeliveryConfig["BucketName"].isNull())
			ossDeliveryConfigsObject.bucketName = valueOssDeliveryConfigsOssDeliveryConfig["BucketName"].asString();
		if(!valueOssDeliveryConfigsOssDeliveryConfig["Prefix"].isNull())
			ossDeliveryConfigsObject.prefix = valueOssDeliveryConfigsOssDeliveryConfig["Prefix"].asString();
		if(!valueOssDeliveryConfigsOssDeliveryConfig["EncryptionKeyId"].isNull())
			ossDeliveryConfigsObject.encryptionKeyId = valueOssDeliveryConfigsOssDeliveryConfig["EncryptionKeyId"].asString();
		ossDeliveryConfigs_.push_back(ossDeliveryConfigsObject);
	}
	auto allSlsDeliveryConfigsNode = value["SlsDeliveryConfigs"]["SlsDeliveryConfig"];
	for (auto valueSlsDeliveryConfigsSlsDeliveryConfig : allSlsDeliveryConfigsNode)
	{
		SlsDeliveryConfig slsDeliveryConfigsObject;
		if(!valueSlsDeliveryConfigsSlsDeliveryConfig["DeliveryType"].isNull())
			slsDeliveryConfigsObject.deliveryType = valueSlsDeliveryConfigsSlsDeliveryConfig["DeliveryType"].asString();
		if(!valueSlsDeliveryConfigsSlsDeliveryConfig["LogstoreName"].isNull())
			slsDeliveryConfigsObject.logstoreName = valueSlsDeliveryConfigsSlsDeliveryConfig["LogstoreName"].asString();
		if(!valueSlsDeliveryConfigsSlsDeliveryConfig["Enabled"].isNull())
			slsDeliveryConfigsObject.enabled = valueSlsDeliveryConfigsSlsDeliveryConfig["Enabled"].asString() == "true";
		if(!valueSlsDeliveryConfigsSlsDeliveryConfig["ProjectName"].isNull())
			slsDeliveryConfigsObject.projectName = valueSlsDeliveryConfigsSlsDeliveryConfig["ProjectName"].asString();
		slsDeliveryConfigs_.push_back(slsDeliveryConfigsObject);
	}
	auto agentUpgradeConfigNode = value["AgentUpgradeConfig"];
	if(!agentUpgradeConfigNode["Enabled"].isNull())
		agentUpgradeConfig_.enabled = agentUpgradeConfigNode["Enabled"].asString() == "true";
	if(!agentUpgradeConfigNode["TimeZone"].isNull())
		agentUpgradeConfig_.timeZone = agentUpgradeConfigNode["TimeZone"].asString();
		auto allAllowedUpgradeWindows = agentUpgradeConfigNode["AllowedUpgradeWindows"]["AllowedUpgradeWindow"];
		for (auto value : allAllowedUpgradeWindows)
			agentUpgradeConfig_.allowedUpgradeWindows.push_back(value.asString());

}

std::vector<DescribeCloudAssistantSettingsResult::OssDeliveryConfig> DescribeCloudAssistantSettingsResult::getOssDeliveryConfigs()const
{
	return ossDeliveryConfigs_;
}

DescribeCloudAssistantSettingsResult::AgentUpgradeConfig DescribeCloudAssistantSettingsResult::getAgentUpgradeConfig()const
{
	return agentUpgradeConfig_;
}

std::vector<DescribeCloudAssistantSettingsResult::SlsDeliveryConfig> DescribeCloudAssistantSettingsResult::getSlsDeliveryConfigs()const
{
	return slsDeliveryConfigs_;
}

