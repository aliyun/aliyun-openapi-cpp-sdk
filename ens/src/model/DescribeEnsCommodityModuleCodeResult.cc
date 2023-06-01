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

#include <alibabacloud/ens/model/DescribeEnsCommodityModuleCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsCommodityModuleCodeResult::DescribeEnsCommodityModuleCodeResult() :
	ServiceResult()
{}

DescribeEnsCommodityModuleCodeResult::DescribeEnsCommodityModuleCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsCommodityModuleCodeResult::~DescribeEnsCommodityModuleCodeResult()
{}

void DescribeEnsCommodityModuleCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCommodityCodesInfoNode = value["CommodityCodesInfo"]["CommodityCodesInfoItem"];
	for (auto valueCommodityCodesInfoCommodityCodesInfoItem : allCommodityCodesInfoNode)
	{
		CommodityCodesInfoItem commodityCodesInfoObject;
		if(!valueCommodityCodesInfoCommodityCodesInfoItem["CommodityCode"].isNull())
			commodityCodesInfoObject.commodityCode = valueCommodityCodesInfoCommodityCodesInfoItem["CommodityCode"].asString();
		auto allModuleCodesInfoNode = valueCommodityCodesInfoCommodityCodesInfoItem["ModuleCodesInfo"]["ModuleCodesInfoItem"];
		for (auto valueCommodityCodesInfoCommodityCodesInfoItemModuleCodesInfoModuleCodesInfoItem : allModuleCodesInfoNode)
		{
			CommodityCodesInfoItem::ModuleCodesInfoItem moduleCodesInfoObject;
			if(!valueCommodityCodesInfoCommodityCodesInfoItemModuleCodesInfoModuleCodesInfoItem["ModuleCode"].isNull())
				moduleCodesInfoObject.moduleCode = valueCommodityCodesInfoCommodityCodesInfoItemModuleCodesInfoModuleCodesInfoItem["ModuleCode"].asString();
			if(!valueCommodityCodesInfoCommodityCodesInfoItemModuleCodesInfoModuleCodesInfoItem["ModuleName"].isNull())
				moduleCodesInfoObject.moduleName = valueCommodityCodesInfoCommodityCodesInfoItemModuleCodesInfoModuleCodesInfoItem["ModuleName"].asString();
			commodityCodesInfoObject.moduleCodesInfo.push_back(moduleCodesInfoObject);
		}
		commodityCodesInfo_.push_back(commodityCodesInfoObject);
	}

}

std::vector<DescribeEnsCommodityModuleCodeResult::CommodityCodesInfoItem> DescribeEnsCommodityModuleCodeResult::getCommodityCodesInfo()const
{
	return commodityCodesInfo_;
}

