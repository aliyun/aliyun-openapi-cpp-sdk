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

#include <alibabacloud/companyreg/model/QueryCommodityConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

QueryCommodityConfigResult::QueryCommodityConfigResult() :
	ServiceResult()
{}

QueryCommodityConfigResult::QueryCommodityConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCommodityConfigResult::~QueryCommodityConfigResult()
{}

void QueryCommodityConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ProductLine"].isNull())
		data_.productLine = dataNode["ProductLine"].asString();
	if(!dataNode["CommodityCode"].isNull())
		data_.commodityCode = dataNode["CommodityCode"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["StartingPrice"].isNull())
		data_.startingPrice = dataNode["StartingPrice"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = std::stoi(dataNode["Type"].asString());
	if(!dataNode["IconUrl"].isNull())
		data_.iconUrl = dataNode["IconUrl"].asString();
	if(!dataNode["ProtocolUrl"].isNull())
		data_.protocolUrl = dataNode["ProtocolUrl"].asString();
	auto allCommodityModulesNode = dataNode["CommodityModules"]["CommodityModulesItem"];
	for (auto dataNodeCommodityModulesCommodityModulesItem : allCommodityModulesNode)
	{
		Data::CommodityModulesItem commodityModulesItemObject;
		if(!dataNodeCommodityModulesCommodityModulesItem["ModuleCode"].isNull())
			commodityModulesItemObject.moduleCode = dataNodeCommodityModulesCommodityModulesItem["ModuleCode"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["ModuleName"].isNull())
			commodityModulesItemObject.moduleName = dataNodeCommodityModulesCommodityModulesItem["ModuleName"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["ModuleDescription"].isNull())
			commodityModulesItemObject.moduleDescription = dataNodeCommodityModulesCommodityModulesItem["ModuleDescription"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["ModuleType"].isNull())
			commodityModulesItemObject.moduleType = dataNodeCommodityModulesCommodityModulesItem["ModuleType"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["ModuleTip"].isNull())
			commodityModulesItemObject.moduleTip = dataNodeCommodityModulesCommodityModulesItem["ModuleTip"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["LxModuleCode"].isNull())
			commodityModulesItemObject.lxModuleCode = dataNodeCommodityModulesCommodityModulesItem["LxModuleCode"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["ModuleValue"].isNull())
			commodityModulesItemObject.moduleValue = dataNodeCommodityModulesCommodityModulesItem["ModuleValue"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["ModuleUrl"].isNull())
			commodityModulesItemObject.moduleUrl = dataNodeCommodityModulesCommodityModulesItem["ModuleUrl"].asString();
		if(!dataNodeCommodityModulesCommodityModulesItem["SortNumber"].isNull())
			commodityModulesItemObject.sortNumber = std::stoi(dataNodeCommodityModulesCommodityModulesItem["SortNumber"].asString());
		data_.commodityModules.push_back(commodityModulesItemObject);
	}

}

QueryCommodityConfigResult::Data QueryCommodityConfigResult::getData()const
{
	return data_;
}

