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

#include <alibabacloud/elasticsearch/model/UpdateInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

UpdateInstanceResult::UpdateInstanceResult() :
	ServiceResult()
{}

UpdateInstanceResult::UpdateInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateInstanceResult::~UpdateInstanceResult()
{}

void UpdateInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["domain"].isNull())
		result_.domain = resultNode["domain"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["nodeAmount"].isNull())
		result_.nodeAmount = std::stoi(resultNode["nodeAmount"].asString());
	if(!resultNode["paymentType"].isNull())
		result_.paymentType = resultNode["paymentType"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["esVersion"].isNull())
		result_.esVersion = resultNode["esVersion"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["updatedAt"].isNull())
		result_.updatedAt = resultNode["updatedAt"].asString();
	if(!resultNode["kibanaDomain"].isNull())
		result_.kibanaDomain = resultNode["kibanaDomain"].asString();
	if(!resultNode["kibanaPort"].isNull())
		result_.kibanaPort = std::stoi(resultNode["kibanaPort"].asString());
	if(!resultNode["publicDomain"].isNull())
		result_.publicDomain = resultNode["publicDomain"].asString();
	if(!resultNode["publicPort"].isNull())
		result_.publicPort = std::stoi(resultNode["publicPort"].asString());
	auto alldictList = value["dictList"]["dictListItem"];
	for (auto value : alldictList)
	{
		Result::DictListItem dictListItemObject;
		if(!value["name"].isNull())
			dictListItemObject.name = value["name"].asString();
		if(!value["fileSize"].isNull())
			dictListItemObject.fileSize = std::stol(value["fileSize"].asString());
		if(!value["type"].isNull())
			dictListItemObject.type = value["type"].asString();
		if(!value["sourceType"].isNull())
			dictListItemObject.sourceType = value["sourceType"].asString();
		result_.dictList.push_back(dictListItemObject);
	}
	auto allsynonymsDicts = value["synonymsDicts"]["synonymsDictsItem"];
	for (auto value : allsynonymsDicts)
	{
		Result::SynonymsDictsItem synonymsDictsItemObject;
		if(!value["name"].isNull())
			synonymsDictsItemObject.name = value["name"].asString();
		if(!value["fileSize"].isNull())
			synonymsDictsItemObject.fileSize = std::stol(value["fileSize"].asString());
		if(!value["type"].isNull())
			synonymsDictsItemObject.type = value["type"].asString();
		if(!value["sourceType"].isNull())
			synonymsDictsItemObject.sourceType = value["sourceType"].asString();
		result_.synonymsDicts.push_back(synonymsDictsItemObject);
	}
	auto nodeSpecNode = resultNode["nodeSpec"];
	if(!nodeSpecNode["spec"].isNull())
		result_.nodeSpec.spec = nodeSpecNode["spec"].asString();
	if(!nodeSpecNode["disk"].isNull())
		result_.nodeSpec.disk = std::stoi(nodeSpecNode["disk"].asString());
	if(!nodeSpecNode["diskType"].isNull())
		result_.nodeSpec.diskType = nodeSpecNode["diskType"].asString();
	auto networkConfigNode = resultNode["networkConfig"];
	if(!networkConfigNode["type"].isNull())
		result_.networkConfig.type = networkConfigNode["type"].asString();
	if(!networkConfigNode["vpcId"].isNull())
		result_.networkConfig.vpcId = networkConfigNode["vpcId"].asString();
	if(!networkConfigNode["vswitchId"].isNull())
		result_.networkConfig.vswitchId = networkConfigNode["vswitchId"].asString();
	if(!networkConfigNode["vsArea"].isNull())
		result_.networkConfig.vsArea = networkConfigNode["vsArea"].asString();
	auto kibanaConfigurationNode = resultNode["kibanaConfiguration"];
	if(!kibanaConfigurationNode["spec"].isNull())
		result_.kibanaConfiguration.spec = kibanaConfigurationNode["spec"].asString();
	if(!kibanaConfigurationNode["amount"].isNull())
		result_.kibanaConfiguration.amount = std::stoi(kibanaConfigurationNode["amount"].asString());
	if(!kibanaConfigurationNode["diskType"].isNull())
		result_.kibanaConfiguration.diskType = kibanaConfigurationNode["diskType"].asString();
	if(!kibanaConfigurationNode["disk"].isNull())
		result_.kibanaConfiguration.disk = std::stoi(kibanaConfigurationNode["disk"].asString());
	auto masterConfigurationNode = resultNode["masterConfiguration"];
	if(!masterConfigurationNode["spec"].isNull())
		result_.masterConfiguration.spec = masterConfigurationNode["spec"].asString();
	if(!masterConfigurationNode["amount"].isNull())
		result_.masterConfiguration.amount = std::stoi(masterConfigurationNode["amount"].asString());
	if(!masterConfigurationNode["diskType"].isNull())
		result_.masterConfiguration.diskType = masterConfigurationNode["diskType"].asString();
	if(!masterConfigurationNode["disk"].isNull())
		result_.masterConfiguration.disk = std::stoi(masterConfigurationNode["disk"].asString());

}

UpdateInstanceResult::Result UpdateInstanceResult::getResult()const
{
	return result_;
}

