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
	if(!resultNode["nodeAmount"].isNull())
		result_.nodeAmount = std::stoi(resultNode["nodeAmount"].asString());
	if(!resultNode["publicDomain"].isNull())
		result_.publicDomain = resultNode["publicDomain"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["publicPort"].isNull())
		result_.publicPort = std::stoi(resultNode["publicPort"].asString());
	if(!resultNode["kibanaPort"].isNull())
		result_.kibanaPort = std::stoi(resultNode["kibanaPort"].asString());
	if(!resultNode["paymentType"].isNull())
		result_.paymentType = resultNode["paymentType"].asString();
	if(!resultNode["domain"].isNull())
		result_.domain = resultNode["domain"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["esVersion"].isNull())
		result_.esVersion = resultNode["esVersion"].asString();
	if(!resultNode["kibanaDomain"].isNull())
		result_.kibanaDomain = resultNode["kibanaDomain"].asString();
	if(!resultNode["updatedAt"].isNull())
		result_.updatedAt = resultNode["updatedAt"].asString();
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
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
	auto nodeSpecNode = resultNode["nodeSpec"];
	if(!nodeSpecNode["spec"].isNull())
		result_.nodeSpec.spec = nodeSpecNode["spec"].asString();
	if(!nodeSpecNode["disk"].isNull())
		result_.nodeSpec.disk = std::stoi(nodeSpecNode["disk"].asString());
	if(!nodeSpecNode["diskType"].isNull())
		result_.nodeSpec.diskType = nodeSpecNode["diskType"].asString();
	auto networkConfigNode = resultNode["networkConfig"];
	if(!networkConfigNode["vpcId"].isNull())
		result_.networkConfig.vpcId = networkConfigNode["vpcId"].asString();
	if(!networkConfigNode["vsArea"].isNull())
		result_.networkConfig.vsArea = networkConfigNode["vsArea"].asString();
	if(!networkConfigNode["type"].isNull())
		result_.networkConfig.type = networkConfigNode["type"].asString();
	if(!networkConfigNode["vswitchId"].isNull())
		result_.networkConfig.vswitchId = networkConfigNode["vswitchId"].asString();
	auto kibanaConfigurationNode = resultNode["kibanaConfiguration"];
	if(!kibanaConfigurationNode["spec"].isNull())
		result_.kibanaConfiguration.spec = kibanaConfigurationNode["spec"].asString();
	if(!kibanaConfigurationNode["amount"].isNull())
		result_.kibanaConfiguration.amount = std::stoi(kibanaConfigurationNode["amount"].asString());
	if(!kibanaConfigurationNode["disk"].isNull())
		result_.kibanaConfiguration.disk = std::stoi(kibanaConfigurationNode["disk"].asString());
	if(!kibanaConfigurationNode["diskType"].isNull())
		result_.kibanaConfiguration.diskType = kibanaConfigurationNode["diskType"].asString();
	auto masterConfigurationNode = resultNode["masterConfiguration"];
	if(!masterConfigurationNode["spec"].isNull())
		result_.masterConfiguration.spec = masterConfigurationNode["spec"].asString();
	if(!masterConfigurationNode["amount"].isNull())
		result_.masterConfiguration.amount = std::stoi(masterConfigurationNode["amount"].asString());
	if(!masterConfigurationNode["disk"].isNull())
		result_.masterConfiguration.disk = std::stoi(masterConfigurationNode["disk"].asString());
	if(!masterConfigurationNode["diskType"].isNull())
		result_.masterConfiguration.diskType = masterConfigurationNode["diskType"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateInstanceResult::getMessage()const
{
	return message_;
}

std::string UpdateInstanceResult::getCode()const
{
	return code_;
}

UpdateInstanceResult::Result UpdateInstanceResult::getResult()const
{
	return result_;
}

