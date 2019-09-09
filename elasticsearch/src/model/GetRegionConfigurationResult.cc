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

#include <alibabacloud/elasticsearch/model/GetRegionConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

GetRegionConfigurationResult::GetRegionConfigurationResult() :
	ServiceResult()
{}

GetRegionConfigurationResult::GetRegionConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRegionConfigurationResult::~GetRegionConfigurationResult()
{}

void GetRegionConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["env"].isNull())
		result_.env = resultNode["env"].asString();
	if(!resultNode["regionId"].isNull())
		result_.regionId = resultNode["regionId"].asString();
	if(!resultNode["createUrl"].isNull())
		result_.createUrl = resultNode["createUrl"].asString();
	auto alldataDiskList = value["dataDiskList"]["dataDiskListItem"];
	for (auto value : alldataDiskList)
	{
		Result::DataDiskListItem dataDiskListItemObject;
		if(!value["diskType"].isNull())
			dataDiskListItemObject.diskType = value["diskType"].asString();
		if(!value["minSize"].isNull())
			dataDiskListItemObject.minSize = std::stoi(value["minSize"].asString());
		if(!value["maxSize"].isNull())
			dataDiskListItemObject.maxSize = std::stoi(value["maxSize"].asString());
		if(!value["scaleLimit"].isNull())
			dataDiskListItemObject.scaleLimit = std::stoi(value["scaleLimit"].asString());
		auto allValueLimitSet = value["valueLimitSet"]["valueLimitSet"];
		for (auto value : allValueLimitSet)
			dataDiskListItemObject.valueLimitSet.push_back(value.asString());
		result_.dataDiskList.push_back(dataDiskListItemObject);
	}
	auto allesVersionsLatestList = value["esVersionsLatestList"]["esVersionsLatestListItem"];
	for (auto value : allesVersionsLatestList)
	{
		Result::EsVersionsLatestListItem esVersionsLatestListItemObject;
		if(!value["key"].isNull())
			esVersionsLatestListItemObject.key = value["key"].asString();
		if(!value["value"].isNull())
			esVersionsLatestListItemObject.value = value["value"].asString();
		result_.esVersionsLatestList.push_back(esVersionsLatestListItemObject);
	}
	auto allnodeSpecList = value["nodeSpecList"]["nodeSpecListItem"];
	for (auto value : allnodeSpecList)
	{
		Result::NodeSpecListItem nodeSpecListItemObject;
		if(!value["cpuCount"].isNull())
			nodeSpecListItemObject.cpuCount = std::stoi(value["cpuCount"].asString());
		if(!value["memorySize"].isNull())
			nodeSpecListItemObject.memorySize = std::stoi(value["memorySize"].asString());
		if(!value["enable"].isNull())
			nodeSpecListItemObject.enable = value["enable"].asString() == "true";
		if(!value["spec"].isNull())
			nodeSpecListItemObject.spec = value["spec"].asString();
		if(!value["diskType"].isNull())
			nodeSpecListItemObject.diskType = value["diskType"].asString();
		if(!value["disk"].isNull())
			nodeSpecListItemObject.disk = std::stoi(value["disk"].asString());
		if(!value["specGroupType"].isNull())
			nodeSpecListItemObject.specGroupType = value["specGroupType"].asString();
		result_.nodeSpecList.push_back(nodeSpecListItemObject);
	}
	auto allclientNodeDiskList = value["clientNodeDiskList"]["disk"];
	for (auto value : allclientNodeDiskList)
	{
		Result::Disk diskObject;
		if(!value["diskType"].isNull())
			diskObject.diskType = value["diskType"].asString();
		if(!value["minSize"].isNull())
			diskObject.minSize = std::stoi(value["minSize"].asString());
		if(!value["maxSize"].isNull())
			diskObject.maxSize = std::stoi(value["maxSize"].asString());
		if(!value["scaleLimit"].isNull())
			diskObject.scaleLimit = std::stoi(value["scaleLimit"].asString());
		result_.clientNodeDiskList.push_back(diskObject);
	}
	auto allmasterDiskList = value["masterDiskList"]["disk"];
	for (auto value : allmasterDiskList)
	{
		Result::Disk diskObject;
		if(!value["diskType"].isNull())
			diskObject.diskType = value["diskType"].asString();
		if(!value["minSize"].isNull())
			diskObject.minSize = std::stoi(value["minSize"].asString());
		if(!value["maxSize"].isNull())
			diskObject.maxSize = std::stoi(value["maxSize"].asString());
		if(!value["scaleLimit"].isNull())
			diskObject.scaleLimit = std::stoi(value["scaleLimit"].asString());
		result_.masterDiskList.push_back(diskObject);
	}
	auto nodeNode = resultNode["node"];
	if(!nodeNode["minAmount"].isNull())
		result_.node.minAmount = std::stoi(nodeNode["minAmount"].asString());
	if(!nodeNode["maxAmount"].isNull())
		result_.node.maxAmount = std::stoi(nodeNode["maxAmount"].asString());
	auto jvmConfineNode = resultNode["jvmConfine"];
	if(!jvmConfineNode["memory"].isNull())
		result_.jvmConfine.memory = std::stoi(jvmConfineNode["memory"].asString());
		auto allSupportGcs = jvmConfineNode["supportGcs"]["gcName"];
		for (auto value : allSupportGcs)
			result_.jvmConfine.supportGcs.push_back(value.asString());
		auto allSupportEsVersions = jvmConfineNode["supportEsVersions"]["version"];
		for (auto value : allSupportEsVersions)
			result_.jvmConfine.supportEsVersions.push_back(value.asString());
	auto clientNodeAmountRangeNode = resultNode["clientNodeAmountRange"];
	if(!clientNodeAmountRangeNode["minAmount"].isNull())
		result_.clientNodeAmountRange.minAmount = std::stoi(clientNodeAmountRangeNode["minAmount"].asString());
	if(!clientNodeAmountRangeNode["maxAmount"].isNull())
		result_.clientNodeAmountRange.maxAmount = std::stoi(clientNodeAmountRangeNode["maxAmount"].asString());
	auto warmNodePropertiesNode = resultNode["warmNodeProperties"];
	auto alldiskList = value["diskList"]["disk"];
	for (auto value : alldiskList)
	{
		Result::WarmNodeProperties::Disk1 disk1Object;
		if(!value["diskType"].isNull())
			disk1Object.diskType = value["diskType"].asString();
		if(!value["minSize"].isNull())
			disk1Object.minSize = std::stoi(value["minSize"].asString());
		if(!value["maxSize"].isNull())
			disk1Object.maxSize = std::stoi(value["maxSize"].asString());
		if(!value["scaleLimit"].isNull())
			disk1Object.scaleLimit = std::stoi(value["scaleLimit"].asString());
		auto allValueLimitSet2 = value["valueLimitSet"]["valueLimitSet"];
		for (auto value : allValueLimitSet2)
			disk1Object.valueLimitSet2.push_back(value.asString());
		result_.warmNodeProperties.diskList.push_back(disk1Object);
	}
	auto amountRangeNode = warmNodePropertiesNode["amountRange"];
	if(!amountRangeNode["minAmount"].isNull())
		result_.warmNodeProperties.amountRange.minAmount = std::stoi(amountRangeNode["minAmount"].asString());
	if(!amountRangeNode["maxAmount"].isNull())
		result_.warmNodeProperties.amountRange.maxAmount = std::stoi(amountRangeNode["maxAmount"].asString());
		auto allSpec = warmNodePropertiesNode["spec"]["spec"];
		for (auto value : allSpec)
			result_.warmNodeProperties.spec.push_back(value.asString());
	auto kibanaNodePropertiesNode = resultNode["kibanaNodeProperties"];
	auto amountRange4Node = kibanaNodePropertiesNode["amountRange"];
	if(!amountRange4Node["minAmount"].isNull())
		result_.kibanaNodeProperties.amountRange4.minAmount = std::stoi(amountRange4Node["minAmount"].asString());
	if(!amountRange4Node["maxAmount"].isNull())
		result_.kibanaNodeProperties.amountRange4.maxAmount = std::stoi(amountRange4Node["maxAmount"].asString());
		auto allSpec3 = kibanaNodePropertiesNode["spec"]["spec"];
		for (auto value : allSpec3)
			result_.kibanaNodeProperties.spec3.push_back(value.asString());
		auto allZones = resultNode["zones"]["zones"];
		for (auto value : allZones)
			result_.zones.push_back(value.asString());
		auto allEsVersions = resultNode["esVersions"]["esVersions"];
		for (auto value : allEsVersions)
			result_.esVersions.push_back(value.asString());
		auto allMasterSpec = resultNode["masterSpec"]["spec"];
		for (auto value : allMasterSpec)
			result_.masterSpec.push_back(value.asString());
		auto allClientNodeSpec = resultNode["clientNodeSpec"]["spec"];
		for (auto value : allClientNodeSpec)
			result_.clientNodeSpec.push_back(value.asString());

}

GetRegionConfigurationResult::Result GetRegionConfigurationResult::getResult()const
{
	return result_;
}

