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

#include <alibabacloud/elasticsearch/model/GetRegionalInstanceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

GetRegionalInstanceConfigResult::GetRegionalInstanceConfigResult() :
	ServiceResult()
{}

GetRegionalInstanceConfigResult::GetRegionalInstanceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRegionalInstanceConfigResult::~GetRegionalInstanceConfigResult()
{}

void GetRegionalInstanceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["specInfoMap"].isNull())
		result_.specInfoMap = resultNode["specInfoMap"].asString();
	auto allmasterDiskListNode = resultNode["masterDiskList"]["MasterDiskListItem"];
	for (auto resultNodemasterDiskListMasterDiskListItem : allmasterDiskListNode)
	{
		Result::MasterDiskListItem masterDiskListItemObject;
		if(!resultNodemasterDiskListMasterDiskListItem["minSize"].isNull())
			masterDiskListItemObject.minSize = std::stoi(resultNodemasterDiskListMasterDiskListItem["minSize"].asString());
		if(!resultNodemasterDiskListMasterDiskListItem["maxSize"].isNull())
			masterDiskListItemObject.maxSize = std::stoi(resultNodemasterDiskListMasterDiskListItem["maxSize"].asString());
		if(!resultNodemasterDiskListMasterDiskListItem["scaleLimit"].isNull())
			masterDiskListItemObject.scaleLimit = std::stoi(resultNodemasterDiskListMasterDiskListItem["scaleLimit"].asString());
		if(!resultNodemasterDiskListMasterDiskListItem["diskType"].isNull())
			masterDiskListItemObject.diskType = resultNodemasterDiskListMasterDiskListItem["diskType"].asString();
		auto allsubClassificationConfinesNode = resultNodemasterDiskListMasterDiskListItem["subClassificationConfines"]["SubClassificationConfinesItem"];
		for (auto resultNodemasterDiskListMasterDiskListItemsubClassificationConfinesSubClassificationConfinesItem : allsubClassificationConfinesNode)
		{
			Result::MasterDiskListItem::SubClassificationConfinesItem subClassificationConfinesObject;
			if(!resultNodemasterDiskListMasterDiskListItemsubClassificationConfinesSubClassificationConfinesItem["minSize"].isNull())
				subClassificationConfinesObject.minSize = std::stoi(resultNodemasterDiskListMasterDiskListItemsubClassificationConfinesSubClassificationConfinesItem["minSize"].asString());
			if(!resultNodemasterDiskListMasterDiskListItemsubClassificationConfinesSubClassificationConfinesItem["maxSize"].isNull())
				subClassificationConfinesObject.maxSize = std::stoi(resultNodemasterDiskListMasterDiskListItemsubClassificationConfinesSubClassificationConfinesItem["maxSize"].asString());
			if(!resultNodemasterDiskListMasterDiskListItemsubClassificationConfinesSubClassificationConfinesItem["performanceLevel"].isNull())
				subClassificationConfinesObject.performanceLevel = resultNodemasterDiskListMasterDiskListItemsubClassificationConfinesSubClassificationConfinesItem["performanceLevel"].asString();
			masterDiskListItemObject.subClassificationConfines.push_back(subClassificationConfinesObject);
		}
		result_.masterDiskList.push_back(masterDiskListItemObject);
	}
	auto allclientNodeDiskListNode = resultNode["clientNodeDiskList"]["ClientNodeDiskListItem"];
	for (auto resultNodeclientNodeDiskListClientNodeDiskListItem : allclientNodeDiskListNode)
	{
		Result::ClientNodeDiskListItem clientNodeDiskListItemObject;
		if(!resultNodeclientNodeDiskListClientNodeDiskListItem["minSize"].isNull())
			clientNodeDiskListItemObject.minSize = std::stoi(resultNodeclientNodeDiskListClientNodeDiskListItem["minSize"].asString());
		if(!resultNodeclientNodeDiskListClientNodeDiskListItem["maxSize"].isNull())
			clientNodeDiskListItemObject.maxSize = std::stoi(resultNodeclientNodeDiskListClientNodeDiskListItem["maxSize"].asString());
		if(!resultNodeclientNodeDiskListClientNodeDiskListItem["scaleLimit"].isNull())
			clientNodeDiskListItemObject.scaleLimit = std::stoi(resultNodeclientNodeDiskListClientNodeDiskListItem["scaleLimit"].asString());
		if(!resultNodeclientNodeDiskListClientNodeDiskListItem["diskType"].isNull())
			clientNodeDiskListItemObject.diskType = resultNodeclientNodeDiskListClientNodeDiskListItem["diskType"].asString();
		result_.clientNodeDiskList.push_back(clientNodeDiskListItemObject);
	}
	auto alldataNodeDiskListNode = resultNode["dataNodeDiskList"]["DataNodeDiskListItem"];
	for (auto resultNodedataNodeDiskListDataNodeDiskListItem : alldataNodeDiskListNode)
	{
		Result::DataNodeDiskListItem dataNodeDiskListItemObject;
		if(!resultNodedataNodeDiskListDataNodeDiskListItem["minSize"].isNull())
			dataNodeDiskListItemObject.minSize = std::stoi(resultNodedataNodeDiskListDataNodeDiskListItem["minSize"].asString());
		if(!resultNodedataNodeDiskListDataNodeDiskListItem["maxSize"].isNull())
			dataNodeDiskListItemObject.maxSize = std::stoi(resultNodedataNodeDiskListDataNodeDiskListItem["maxSize"].asString());
		if(!resultNodedataNodeDiskListDataNodeDiskListItem["scaleLimit"].isNull())
			dataNodeDiskListItemObject.scaleLimit = std::stoi(resultNodedataNodeDiskListDataNodeDiskListItem["scaleLimit"].asString());
		if(!resultNodedataNodeDiskListDataNodeDiskListItem["diskType"].isNull())
			dataNodeDiskListItemObject.diskType = resultNodedataNodeDiskListDataNodeDiskListItem["diskType"].asString();
		auto allsubClassificationConfines1Node = resultNodedataNodeDiskListDataNodeDiskListItem["subClassificationConfines"]["SubClassificationConfinesItem"];
		for (auto resultNodedataNodeDiskListDataNodeDiskListItemsubClassificationConfinesSubClassificationConfinesItem : allsubClassificationConfines1Node)
		{
			Result::DataNodeDiskListItem::SubClassificationConfinesItem2 subClassificationConfines1Object;
			if(!resultNodedataNodeDiskListDataNodeDiskListItemsubClassificationConfinesSubClassificationConfinesItem["minSize"].isNull())
				subClassificationConfines1Object.minSize = std::stoi(resultNodedataNodeDiskListDataNodeDiskListItemsubClassificationConfinesSubClassificationConfinesItem["minSize"].asString());
			if(!resultNodedataNodeDiskListDataNodeDiskListItemsubClassificationConfinesSubClassificationConfinesItem["maxSize"].isNull())
				subClassificationConfines1Object.maxSize = std::stoi(resultNodedataNodeDiskListDataNodeDiskListItemsubClassificationConfinesSubClassificationConfinesItem["maxSize"].asString());
			if(!resultNodedataNodeDiskListDataNodeDiskListItemsubClassificationConfinesSubClassificationConfinesItem["performanceLevel"].isNull())
				subClassificationConfines1Object.performanceLevel = resultNodedataNodeDiskListDataNodeDiskListItemsubClassificationConfinesSubClassificationConfinesItem["performanceLevel"].asString();
			dataNodeDiskListItemObject.subClassificationConfines1.push_back(subClassificationConfines1Object);
		}
		auto allValueLimitSet = value["valueLimitSet"]["ValueLimitSet"];
		for (auto value : allValueLimitSet)
			dataNodeDiskListItemObject.valueLimitSet.push_back(value.asString());
		result_.dataNodeDiskList.push_back(dataNodeDiskListItemObject);
	}
	auto clientNodeAmountRangeNode = resultNode["clientNodeAmountRange"];
	if(!clientNodeAmountRangeNode["minAmount"].isNull())
		result_.clientNodeAmountRange.minAmount = std::stoi(clientNodeAmountRangeNode["minAmount"].asString());
	if(!clientNodeAmountRangeNode["maxAmount"].isNull())
		result_.clientNodeAmountRange.maxAmount = std::stoi(clientNodeAmountRangeNode["maxAmount"].asString());
	auto dataNodeAmountRangeNode = resultNode["dataNodeAmountRange"];
	if(!dataNodeAmountRangeNode["minAmount"].isNull())
		result_.dataNodeAmountRange.minAmount = std::stoi(dataNodeAmountRangeNode["minAmount"].asString());
	if(!dataNodeAmountRangeNode["maxAmount"].isNull())
		result_.dataNodeAmountRange.maxAmount = std::stoi(dataNodeAmountRangeNode["maxAmount"].asString());
		auto allClientSpecs = resultNode["clientSpecs"]["ClientSpecs"];
		for (auto value : allClientSpecs)
			result_.clientSpecs.push_back(value.asString());
		auto allDataNodeSpecs = resultNode["dataNodeSpecs"]["DataNodeSpecs"];
		for (auto value : allDataNodeSpecs)
			result_.dataNodeSpecs.push_back(value.asString());
		auto allKibanaSpecs = resultNode["kibanaSpecs"]["KibanaSpecs"];
		for (auto value : allKibanaSpecs)
			result_.kibanaSpecs.push_back(value.asString());
		auto allMasterSpecs = resultNode["masterSpecs"]["MasterSpecs"];
		for (auto value : allMasterSpecs)
			result_.masterSpecs.push_back(value.asString());
		auto allVersions = resultNode["versions"]["Versions"];
		for (auto value : allVersions)
			result_.versions.push_back(value.asString());
		auto allMasterAmountRange = resultNode["masterAmountRange"]["MasterAmountRange"];
		for (auto value : allMasterAmountRange)
			result_.masterAmountRange.push_back(value.asString());

}

GetRegionalInstanceConfigResult::Result GetRegionalInstanceConfigResult::getResult()const
{
	return result_;
}

