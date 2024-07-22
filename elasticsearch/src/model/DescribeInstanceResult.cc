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

#include <alibabacloud/elasticsearch/model/DescribeInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

DescribeInstanceResult::DescribeInstanceResult() :
	ServiceResult()
{}

DescribeInstanceResult::DescribeInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceResult::~DescribeInstanceResult()
{}

void DescribeInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["advancedDedicateMaster"].isNull())
		result_.advancedDedicateMaster = resultNode["advancedDedicateMaster"].asString() == "true";
	if(!resultNode["protocol"].isNull())
		result_.protocol = resultNode["protocol"].asString();
	if(!resultNode["enableKibanaPublicNetwork"].isNull())
		result_.enableKibanaPublicNetwork = resultNode["enableKibanaPublicNetwork"].asString() == "true";
	if(!resultNode["nodeAmount"].isNull())
		result_.nodeAmount = std::stoi(resultNode["nodeAmount"].asString());
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["enableKibanaPrivateNetwork"].isNull())
		result_.enableKibanaPrivateNetwork = resultNode["enableKibanaPrivateNetwork"].asString() == "true";
	if(!resultNode["vpcInstanceId"].isNull())
		result_.vpcInstanceId = resultNode["vpcInstanceId"].asString();
	if(!resultNode["port"].isNull())
		result_.port = std::stoi(resultNode["port"].asString());
	if(!resultNode["enablePublic"].isNull())
		result_.enablePublic = resultNode["enablePublic"].asString() == "true";
	if(!resultNode["dedicateMaster"].isNull())
		result_.dedicateMaster = resultNode["dedicateMaster"].asString() == "true";
	if(!resultNode["kibanaPort"].isNull())
		result_.kibanaPort = std::stoi(resultNode["kibanaPort"].asString());
	if(!resultNode["esConfig"].isNull())
		result_.esConfig = resultNode["esConfig"].asString();
	if(!resultNode["resourceGroupId"].isNull())
		result_.resourceGroupId = resultNode["resourceGroupId"].asString();
	if(!resultNode["paymentType"].isNull())
		result_.paymentType = resultNode["paymentType"].asString();
	if(!resultNode["postpaidServiceStatus"].isNull())
		result_.postpaidServiceStatus = resultNode["postpaidServiceStatus"].asString();
	if(!resultNode["esVersion"].isNull())
		result_.esVersion = resultNode["esVersion"].asString();
	if(!resultNode["haveKibana"].isNull())
		result_.haveKibana = resultNode["haveKibana"].asString() == "true";
	if(!resultNode["isNewDeployment"].isNull())
		result_.isNewDeployment = resultNode["isNewDeployment"].asString() == "true";
	if(!resultNode["warmNode"].isNull())
		result_.warmNode = resultNode["warmNode"].asString() == "true";
	if(!resultNode["updatedAt"].isNull())
		result_.updatedAt = resultNode["updatedAt"].asString();
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["zoneCount"].isNull())
		result_.zoneCount = std::stoi(resultNode["zoneCount"].asString());
	if(!resultNode["publicDomain"].isNull())
		result_.publicDomain = resultNode["publicDomain"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["serviceVpc"].isNull())
		result_.serviceVpc = resultNode["serviceVpc"].asString() == "true";
	if(!resultNode["publicPort"].isNull())
		result_.publicPort = std::stoi(resultNode["publicPort"].asString());
	if(!resultNode["haveClientNode"].isNull())
		result_.haveClientNode = resultNode["haveClientNode"].asString() == "true";
	if(!resultNode["domain"].isNull())
		result_.domain = resultNode["domain"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["kibanaDomain"].isNull())
		result_.kibanaDomain = resultNode["kibanaDomain"].asString();
	if(!resultNode["instanceCategory"].isNull())
		result_.instanceCategory = resultNode["instanceCategory"].asString();
	if(!resultNode["endtime"].isNull())
		result_.endtime = std::stol(resultNode["endtime"].asString());
	if(!resultNode["archType"].isNull())
		result_.archType = resultNode["archType"].asString();
	auto alldictListNode = resultNode["dictList"]["DictListItem"];
	for (auto resultNodedictListDictListItem : alldictListNode)
	{
		Result::DictListItem dictListItemObject;
		if(!resultNodedictListDictListItem["fileSize"].isNull())
			dictListItemObject.fileSize = std::stol(resultNodedictListDictListItem["fileSize"].asString());
		if(!resultNodedictListDictListItem["sourceType"].isNull())
			dictListItemObject.sourceType = resultNodedictListDictListItem["sourceType"].asString();
		if(!resultNodedictListDictListItem["name"].isNull())
			dictListItemObject.name = resultNodedictListDictListItem["name"].asString();
		if(!resultNodedictListDictListItem["type"].isNull())
			dictListItemObject.type = resultNodedictListDictListItem["type"].asString();
		result_.dictList.push_back(dictListItemObject);
	}
	auto allsynonymsDictsNode = resultNode["synonymsDicts"]["SynonymsDictsItem"];
	for (auto resultNodesynonymsDictsSynonymsDictsItem : allsynonymsDictsNode)
	{
		Result::SynonymsDictsItem synonymsDictsItemObject;
		if(!resultNodesynonymsDictsSynonymsDictsItem["fileSize"].isNull())
			synonymsDictsItemObject.fileSize = std::stol(resultNodesynonymsDictsSynonymsDictsItem["fileSize"].asString());
		if(!resultNodesynonymsDictsSynonymsDictsItem["sourceType"].isNull())
			synonymsDictsItemObject.sourceType = resultNodesynonymsDictsSynonymsDictsItem["sourceType"].asString();
		if(!resultNodesynonymsDictsSynonymsDictsItem["name"].isNull())
			synonymsDictsItemObject.name = resultNodesynonymsDictsSynonymsDictsItem["name"].asString();
		if(!resultNodesynonymsDictsSynonymsDictsItem["type"].isNull())
			synonymsDictsItemObject.type = resultNodesynonymsDictsSynonymsDictsItem["type"].asString();
		result_.synonymsDicts.push_back(synonymsDictsItemObject);
	}
	auto allzoneInfosNode = resultNode["zoneInfos"]["ZoneInfo"];
	for (auto resultNodezoneInfosZoneInfo : allzoneInfosNode)
	{
		Result::ZoneInfo zoneInfoObject;
		if(!resultNodezoneInfosZoneInfo["status"].isNull())
			zoneInfoObject.status = resultNodezoneInfosZoneInfo["status"].asString();
		if(!resultNodezoneInfosZoneInfo["zoneId"].isNull())
			zoneInfoObject.zoneId = resultNodezoneInfosZoneInfo["zoneId"].asString();
		result_.zoneInfos.push_back(zoneInfoObject);
	}
	auto allaliwsDictsNode = resultNode["aliwsDicts"]["Dict"];
	for (auto resultNodealiwsDictsDict : allaliwsDictsNode)
	{
		Result::Dict dictObject;
		if(!resultNodealiwsDictsDict["fileSize"].isNull())
			dictObject.fileSize = std::stol(resultNodealiwsDictsDict["fileSize"].asString());
		if(!resultNodealiwsDictsDict["sourceType"].isNull())
			dictObject.sourceType = resultNodealiwsDictsDict["sourceType"].asString();
		if(!resultNodealiwsDictsDict["name"].isNull())
			dictObject.name = resultNodealiwsDictsDict["name"].asString();
		if(!resultNodealiwsDictsDict["type"].isNull())
			dictObject.type = resultNodealiwsDictsDict["type"].asString();
		result_.aliwsDicts.push_back(dictObject);
	}
	auto alltagsNode = resultNode["tags"]["Tag"];
	for (auto resultNodetagsTag : alltagsNode)
	{
		Result::Tag tagObject;
		if(!resultNodetagsTag["tagKey"].isNull())
			tagObject.tagKey = resultNodetagsTag["tagKey"].asString();
		if(!resultNodetagsTag["tagValue"].isNull())
			tagObject.tagValue = resultNodetagsTag["tagValue"].asString();
		result_.tags.push_back(tagObject);
	}
	auto allikHotDictsNode = resultNode["ikHotDicts"]["ikHotDictsItem"];
	for (auto resultNodeikHotDictsikHotDictsItem : allikHotDictsNode)
	{
		Result::IkHotDictsItem ikHotDictsItemObject;
		if(!resultNodeikHotDictsikHotDictsItem["type"].isNull())
			ikHotDictsItemObject.type = resultNodeikHotDictsikHotDictsItem["type"].asString();
		if(!resultNodeikHotDictsikHotDictsItem["sourceType"].isNull())
			ikHotDictsItemObject.sourceType = resultNodeikHotDictsikHotDictsItem["sourceType"].asString();
		if(!resultNodeikHotDictsikHotDictsItem["fileSize"].isNull())
			ikHotDictsItemObject.fileSize = std::stoi(resultNodeikHotDictsikHotDictsItem["fileSize"].asString());
		if(!resultNodeikHotDictsikHotDictsItem["name"].isNull())
			ikHotDictsItemObject.name = resultNodeikHotDictsikHotDictsItem["name"].asString();
		result_.ikHotDicts.push_back(ikHotDictsItemObject);
	}
	auto nodeSpecNode = resultNode["nodeSpec"];
	if(!nodeSpecNode["spec"].isNull())
		result_.nodeSpec.spec = nodeSpecNode["spec"].asString();
	if(!nodeSpecNode["disk"].isNull())
		result_.nodeSpec.disk = std::stoi(nodeSpecNode["disk"].asString());
	if(!nodeSpecNode["diskEncryption"].isNull())
		result_.nodeSpec.diskEncryption = nodeSpecNode["diskEncryption"].asString() == "true";
	if(!nodeSpecNode["diskType"].isNull())
		result_.nodeSpec.diskType = nodeSpecNode["diskType"].asString();
	if(!nodeSpecNode["performanceLevel"].isNull())
		result_.nodeSpec.performanceLevel = nodeSpecNode["performanceLevel"].asString();
	if(!nodeSpecNode["specInfo"].isNull())
		result_.nodeSpec.specInfo = nodeSpecNode["specInfo"].asString();
	auto networkConfigNode = resultNode["networkConfig"];
	if(!networkConfigNode["vpcId"].isNull())
		result_.networkConfig.vpcId = networkConfigNode["vpcId"].asString();
	if(!networkConfigNode["vsArea"].isNull())
		result_.networkConfig.vsArea = networkConfigNode["vsArea"].asString();
	if(!networkConfigNode["type"].isNull())
		result_.networkConfig.type = networkConfigNode["type"].asString();
	if(!networkConfigNode["vswitchId"].isNull())
		result_.networkConfig.vswitchId = networkConfigNode["vswitchId"].asString();
	auto allwhiteIpGroupListNode = networkConfigNode["whiteIpGroupList"]["whiteIpGroupListItem"];
	for (auto networkConfigNodewhiteIpGroupListwhiteIpGroupListItem : allwhiteIpGroupListNode)
	{
		Result::NetworkConfig::WhiteIpGroupListItem whiteIpGroupListItemObject;
		if(!networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["whiteIpType"].isNull())
			whiteIpGroupListItemObject.whiteIpType = networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["whiteIpType"].asString();
		if(!networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["groupName"].isNull())
			whiteIpGroupListItemObject.groupName = networkConfigNodewhiteIpGroupListwhiteIpGroupListItem["groupName"].asString();
		auto allIps = value["ips"]["ips"];
		for (auto value : allIps)
			whiteIpGroupListItemObject.ips.push_back(value.asString());
		result_.networkConfig.whiteIpGroupList.push_back(whiteIpGroupListItemObject);
	}
	auto kibanaConfigurationNode = resultNode["kibanaConfiguration"];
	if(!kibanaConfigurationNode["amount"].isNull())
		result_.kibanaConfiguration.amount = std::stoi(kibanaConfigurationNode["amount"].asString());
	if(!kibanaConfigurationNode["spec"].isNull())
		result_.kibanaConfiguration.spec = kibanaConfigurationNode["spec"].asString();
	if(!kibanaConfigurationNode["disk"].isNull())
		result_.kibanaConfiguration.disk = std::stoi(kibanaConfigurationNode["disk"].asString());
	if(!kibanaConfigurationNode["specInfo"].isNull())
		result_.kibanaConfiguration.specInfo = kibanaConfigurationNode["specInfo"].asString();
	auto masterConfigurationNode = resultNode["masterConfiguration"];
	if(!masterConfigurationNode["spec"].isNull())
		result_.masterConfiguration.spec = masterConfigurationNode["spec"].asString();
	if(!masterConfigurationNode["amount"].isNull())
		result_.masterConfiguration.amount = std::stoi(masterConfigurationNode["amount"].asString());
	if(!masterConfigurationNode["disk"].isNull())
		result_.masterConfiguration.disk = std::stoi(masterConfigurationNode["disk"].asString());
	if(!masterConfigurationNode["diskType"].isNull())
		result_.masterConfiguration.diskType = masterConfigurationNode["diskType"].asString();
	if(!masterConfigurationNode["specInfo"].isNull())
		result_.masterConfiguration.specInfo = masterConfigurationNode["specInfo"].asString();
	auto clientNodeConfigurationNode = resultNode["clientNodeConfiguration"];
	if(!clientNodeConfigurationNode["spec"].isNull())
		result_.clientNodeConfiguration.spec = clientNodeConfigurationNode["spec"].asString();
	if(!clientNodeConfigurationNode["amount"].isNull())
		result_.clientNodeConfiguration.amount = std::stoi(clientNodeConfigurationNode["amount"].asString());
	if(!clientNodeConfigurationNode["disk"].isNull())
		result_.clientNodeConfiguration.disk = std::stoi(clientNodeConfigurationNode["disk"].asString());
	if(!clientNodeConfigurationNode["diskType"].isNull())
		result_.clientNodeConfiguration.diskType = clientNodeConfigurationNode["diskType"].asString();
	if(!clientNodeConfigurationNode["specInfo"].isNull())
		result_.clientNodeConfiguration.specInfo = clientNodeConfigurationNode["specInfo"].asString();
	auto warmNodeConfigurationNode = resultNode["warmNodeConfiguration"];
	if(!warmNodeConfigurationNode["amount"].isNull())
		result_.warmNodeConfiguration.amount = std::stoi(warmNodeConfigurationNode["amount"].asString());
	if(!warmNodeConfigurationNode["spec"].isNull())
		result_.warmNodeConfiguration.spec = warmNodeConfigurationNode["spec"].asString();
	if(!warmNodeConfigurationNode["disk"].isNull())
		result_.warmNodeConfiguration.disk = std::stoi(warmNodeConfigurationNode["disk"].asString());
	if(!warmNodeConfigurationNode["diskEncryption"].isNull())
		result_.warmNodeConfiguration.diskEncryption = warmNodeConfigurationNode["diskEncryption"].asString() == "true";
	if(!warmNodeConfigurationNode["diskType"].isNull())
		result_.warmNodeConfiguration.diskType = warmNodeConfigurationNode["diskType"].asString();
	if(!warmNodeConfigurationNode["specInfo"].isNull())
		result_.warmNodeConfiguration.specInfo = warmNodeConfigurationNode["specInfo"].asString();
	auto advancedSettingNode = resultNode["advancedSetting"];
	if(!advancedSettingNode["gcName"].isNull())
		result_.advancedSetting.gcName = advancedSettingNode["gcName"].asString();
	auto elasticDataNodeConfigurationNode = resultNode["elasticDataNodeConfiguration"];
	if(!elasticDataNodeConfigurationNode["amount"].isNull())
		result_.elasticDataNodeConfiguration.amount = std::stoi(elasticDataNodeConfigurationNode["amount"].asString());
	if(!elasticDataNodeConfigurationNode["spec"].isNull())
		result_.elasticDataNodeConfiguration.spec = elasticDataNodeConfigurationNode["spec"].asString();
	if(!elasticDataNodeConfigurationNode["disk"].isNull())
		result_.elasticDataNodeConfiguration.disk = std::stoi(elasticDataNodeConfigurationNode["disk"].asString());
	if(!elasticDataNodeConfigurationNode["diskEncryption"].isNull())
		result_.elasticDataNodeConfiguration.diskEncryption = elasticDataNodeConfigurationNode["diskEncryption"].asString() == "true";
	if(!elasticDataNodeConfigurationNode["diskType"].isNull())
		result_.elasticDataNodeConfiguration.diskType = elasticDataNodeConfigurationNode["diskType"].asString();
	if(!elasticDataNodeConfigurationNode["specInfo"].isNull())
		result_.elasticDataNodeConfiguration.specInfo = elasticDataNodeConfigurationNode["specInfo"].asString();
		auto allEsIPWhitelist = resultNode["esIPWhitelist"]["EsIPWhitelist"];
		for (auto value : allEsIPWhitelist)
			result_.esIPWhitelist.push_back(value.asString());
		auto allExtendConfigs = resultNode["extendConfigs"]["extendConfigs"];
		for (auto value : allExtendConfigs)
			result_.extendConfigs.push_back(value.asString());
		auto allPrivateNetworkIpWhiteList = resultNode["privateNetworkIpWhiteList"]["PrivateNetworkIpWhiteList"];
		for (auto value : allPrivateNetworkIpWhiteList)
			result_.privateNetworkIpWhiteList.push_back(value.asString());
		auto allPublicIpWhitelist = resultNode["publicIpWhitelist"]["PublicIpWhitelist"];
		for (auto value : allPublicIpWhitelist)
			result_.publicIpWhitelist.push_back(value.asString());
		auto allKibanaPrivateIPWhitelist = resultNode["kibanaPrivateIPWhitelist"]["WhiteIP"];
		for (auto value : allKibanaPrivateIPWhitelist)
			result_.kibanaPrivateIPWhitelist.push_back(value.asString());
		auto allEsIPBlacklist = resultNode["esIPBlacklist"]["EsIPBlacklist"];
		for (auto value : allEsIPBlacklist)
			result_.esIPBlacklist.push_back(value.asString());
		auto allKibanaIPWhitelist = resultNode["kibanaIPWhitelist"]["KibanaIPWhitelist"];
		for (auto value : allKibanaIPWhitelist)
			result_.kibanaIPWhitelist.push_back(value.asString());

}

DescribeInstanceResult::Result DescribeInstanceResult::getResult()const
{
	return result_;
}

