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

#include <alibabacloud/elasticsearch/model/ListInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListInstanceResult::ListInstanceResult() :
	ServiceResult()
{}

ListInstanceResult::ListInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceResult::~ListInstanceResult()
{}

void ListInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Instance"];
	for (auto valueResultInstance : allResultNode)
	{
		Instance resultObject;
		if(!valueResultInstance["advancedDedicateMaster"].isNull())
			resultObject.advancedDedicateMaster = valueResultInstance["advancedDedicateMaster"].asString() == "true";
		if(!valueResultInstance["nodeAmount"].isNull())
			resultObject.nodeAmount = std::stoi(valueResultInstance["nodeAmount"].asString());
		if(!valueResultInstance["createdAt"].isNull())
			resultObject.createdAt = valueResultInstance["createdAt"].asString();
		if(!valueResultInstance["status"].isNull())
			resultObject.status = valueResultInstance["status"].asString();
		if(!valueResultInstance["dedicateMaster"].isNull())
			resultObject.dedicateMaster = valueResultInstance["dedicateMaster"].asString() == "true";
		if(!valueResultInstance["serviceVpc"].isNull())
			resultObject.serviceVpc = valueResultInstance["serviceVpc"].asString() == "true";
		if(!valueResultInstance["paymentType"].isNull())
			resultObject.paymentType = valueResultInstance["paymentType"].asString();
		if(!valueResultInstance["resourceGroupId"].isNull())
			resultObject.resourceGroupId = valueResultInstance["resourceGroupId"].asString();
		if(!valueResultInstance["postpaidServiceStatus"].isNull())
			resultObject.postpaidServiceStatus = valueResultInstance["postpaidServiceStatus"].asString();
		if(!valueResultInstance["description"].isNull())
			resultObject.description = valueResultInstance["description"].asString();
		if(!valueResultInstance["esVersion"].isNull())
			resultObject.esVersion = valueResultInstance["esVersion"].asString();
		if(!valueResultInstance["isNewDeployment"].isNull())
			resultObject.isNewDeployment = valueResultInstance["isNewDeployment"].asString();
		if(!valueResultInstance["updatedAt"].isNull())
			resultObject.updatedAt = valueResultInstance["updatedAt"].asString();
		if(!valueResultInstance["instanceId"].isNull())
			resultObject.instanceId = valueResultInstance["instanceId"].asString();
		if(!valueResultInstance["vpcInstanceId"].isNull())
			resultObject.vpcInstanceId = valueResultInstance["vpcInstanceId"].asString();
		if(!valueResultInstance["endTime"].isNull())
			resultObject.endTime = std::stol(valueResultInstance["endTime"].asString());
		if(!valueResultInstance["archType"].isNull())
			resultObject.archType = valueResultInstance["archType"].asString();
		auto alltagsNode = valueResultInstance["tags"]["Tag"];
		for (auto valueResultInstancetagsTag : alltagsNode)
		{
			Instance::Tag tagsObject;
			if(!valueResultInstancetagsTag["tagKey"].isNull())
				tagsObject.tagKey = valueResultInstancetagsTag["tagKey"].asString();
			if(!valueResultInstancetagsTag["tagValue"].isNull())
				tagsObject.tagValue = valueResultInstancetagsTag["tagValue"].asString();
			resultObject.tags.push_back(tagsObject);
		}
		auto clientNodeConfigurationNode = value["clientNodeConfiguration"];
		if(!clientNodeConfigurationNode["spec"].isNull())
			resultObject.clientNodeConfiguration.spec = clientNodeConfigurationNode["spec"].asString();
		if(!clientNodeConfigurationNode["amount"].isNull())
			resultObject.clientNodeConfiguration.amount = std::stoi(clientNodeConfigurationNode["amount"].asString());
		if(!clientNodeConfigurationNode["disk"].isNull())
			resultObject.clientNodeConfiguration.disk = std::stoi(clientNodeConfigurationNode["disk"].asString());
		if(!clientNodeConfigurationNode["diskType"].isNull())
			resultObject.clientNodeConfiguration.diskType = clientNodeConfigurationNode["diskType"].asString();
		if(!clientNodeConfigurationNode["specInfo"].isNull())
			resultObject.clientNodeConfiguration.specInfo = clientNodeConfigurationNode["specInfo"].asString();
		auto elasticDataNodeConfigurationNode = value["elasticDataNodeConfiguration"];
		if(!elasticDataNodeConfigurationNode["spec"].isNull())
			resultObject.elasticDataNodeConfiguration.spec = elasticDataNodeConfigurationNode["spec"].asString();
		if(!elasticDataNodeConfigurationNode["amount"].isNull())
			resultObject.elasticDataNodeConfiguration.amount = std::stoi(elasticDataNodeConfigurationNode["amount"].asString());
		if(!elasticDataNodeConfigurationNode["disk"].isNull())
			resultObject.elasticDataNodeConfiguration.disk = std::stoi(elasticDataNodeConfigurationNode["disk"].asString());
		if(!elasticDataNodeConfigurationNode["diskEncryption"].isNull())
			resultObject.elasticDataNodeConfiguration.diskEncryption = elasticDataNodeConfigurationNode["diskEncryption"].asString() == "true";
		if(!elasticDataNodeConfigurationNode["diskType"].isNull())
			resultObject.elasticDataNodeConfiguration.diskType = elasticDataNodeConfigurationNode["diskType"].asString();
		if(!elasticDataNodeConfigurationNode["specInfo"].isNull())
			resultObject.elasticDataNodeConfiguration.specInfo = elasticDataNodeConfigurationNode["specInfo"].asString();
		auto kibanaConfigurationNode = value["kibanaConfiguration"];
		if(!kibanaConfigurationNode["spec"].isNull())
			resultObject.kibanaConfiguration.spec = kibanaConfigurationNode["spec"].asString();
		if(!kibanaConfigurationNode["amount"].isNull())
			resultObject.kibanaConfiguration.amount = std::stoi(kibanaConfigurationNode["amount"].asString());
		if(!kibanaConfigurationNode["disk"].isNull())
			resultObject.kibanaConfiguration.disk = std::stoi(kibanaConfigurationNode["disk"].asString());
		if(!kibanaConfigurationNode["diskType"].isNull())
			resultObject.kibanaConfiguration.diskType = kibanaConfigurationNode["diskType"].asString();
		if(!kibanaConfigurationNode["specInfo"].isNull())
			resultObject.kibanaConfiguration.specInfo = kibanaConfigurationNode["specInfo"].asString();
		auto masterConfigurationNode = value["masterConfiguration"];
		if(!masterConfigurationNode["spec"].isNull())
			resultObject.masterConfiguration.spec = masterConfigurationNode["spec"].asString();
		if(!masterConfigurationNode["amount"].isNull())
			resultObject.masterConfiguration.amount = std::stoi(masterConfigurationNode["amount"].asString());
		if(!masterConfigurationNode["disk"].isNull())
			resultObject.masterConfiguration.disk = std::stoi(masterConfigurationNode["disk"].asString());
		if(!masterConfigurationNode["diskType"].isNull())
			resultObject.masterConfiguration.diskType = masterConfigurationNode["diskType"].asString();
		if(!masterConfigurationNode["specInfo"].isNull())
			resultObject.masterConfiguration.specInfo = masterConfigurationNode["specInfo"].asString();
		auto networkConfigNode = value["networkConfig"];
		if(!networkConfigNode["vpcId"].isNull())
			resultObject.networkConfig.vpcId = networkConfigNode["vpcId"].asString();
		if(!networkConfigNode["vsArea"].isNull())
			resultObject.networkConfig.vsArea = networkConfigNode["vsArea"].asString();
		if(!networkConfigNode["type"].isNull())
			resultObject.networkConfig.type = networkConfigNode["type"].asString();
		if(!networkConfigNode["vswitchId"].isNull())
			resultObject.networkConfig.vswitchId = networkConfigNode["vswitchId"].asString();
		auto allwhiteIpGroupListNode = networkConfigNode["whiteIpGroupList"]["whiteIpGroupListItem"];
		for (auto networkConfigNodewhiteIpGroupListwhiteIpGroupListItem : allwhiteIpGroupListNode)
		{
			Instance::NetworkConfig::WhiteIpGroupListItem whiteIpGroupListItemObject;
			if(!networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["groupName"].isNull())
				whiteIpGroupListItemObject.groupName = networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["groupName"].asString();
			if(!networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["whiteIpType"].isNull())
				whiteIpGroupListItemObject.whiteIpType = networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["whiteIpType"].asString();
			auto allIps = value["ips"]["ips"];
			for (auto value : allIps)
				whiteIpGroupListItemObject.ips.push_back(value.asString());
			resultObject.networkConfig.whiteIpGroupList.push_back(whiteIpGroupListItemObject);
		}
		auto nodeSpecNode = value["nodeSpec"];
		if(!nodeSpecNode["spec"].isNull())
			resultObject.nodeSpec.spec = nodeSpecNode["spec"].asString();
		if(!nodeSpecNode["disk"].isNull())
			resultObject.nodeSpec.disk = std::stoi(nodeSpecNode["disk"].asString());
		if(!nodeSpecNode["diskEncryption"].isNull())
			resultObject.nodeSpec.diskEncryption = nodeSpecNode["diskEncryption"].asString() == "true";
		if(!nodeSpecNode["diskType"].isNull())
			resultObject.nodeSpec.diskType = nodeSpecNode["diskType"].asString();
		if(!nodeSpecNode["performanceLevel"].isNull())
			resultObject.nodeSpec.performanceLevel = nodeSpecNode["performanceLevel"].asString();
		if(!nodeSpecNode["specInfo"].isNull())
			resultObject.nodeSpec.specInfo = nodeSpecNode["specInfo"].asString();
		auto allExtendConfigs = value["extendConfigs"]["extendConfigs"];
		for (auto value : allExtendConfigs)
			resultObject.extendConfigs.push_back(value.asString());
		auto allKibanaIPWhitelist = value["kibanaIPWhitelist"]["kibanaIPWhitelist"];
		for (auto value : allKibanaIPWhitelist)
			resultObject.kibanaIPWhitelist.push_back(value.asString());
		auto allKibanaPrivateIPWhitelist = value["kibanaPrivateIPWhitelist"]["kibanaPrivateIPWhitelist"];
		for (auto value : allKibanaPrivateIPWhitelist)
			resultObject.kibanaPrivateIPWhitelist.push_back(value.asString());
		auto allPublicIpWhitelist = value["publicIpWhitelist"]["publicIpWhitelist"];
		for (auto value : allPublicIpWhitelist)
			resultObject.publicIpWhitelist.push_back(value.asString());
		auto allPrivateNetworkIpWhiteList = value["privateNetworkIpWhiteList"]["privateNetworkIpWhiteList"];
		for (auto value : allPrivateNetworkIpWhiteList)
			resultObject.privateNetworkIpWhiteList.push_back(value.asString());
		result_.push_back(resultObject);
	}
	auto headersNode = value["Headers"];
	if(!headersNode["X-Total-Count"].isNull())
		headers_.xTotalCount = std::stoi(headersNode["X-Total-Count"].asString());

}

ListInstanceResult::Headers ListInstanceResult::getHeaders()const
{
	return headers_;
}

std::vector<ListInstanceResult::Instance> ListInstanceResult::getResult()const
{
	return result_;
}

