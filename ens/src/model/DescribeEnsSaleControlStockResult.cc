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

#include <alibabacloud/ens/model/DescribeEnsSaleControlStockResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeEnsSaleControlStockResult::DescribeEnsSaleControlStockResult() :
	ServiceResult()
{}

DescribeEnsSaleControlStockResult::DescribeEnsSaleControlStockResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnsSaleControlStockResult::~DescribeEnsSaleControlStockResult()
{}

void DescribeEnsSaleControlStockResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSaleControlNode = value["SaleControl"]["SaleControlItem"];
	for (auto valueSaleControlSaleControlItem : allSaleControlNode)
	{
		SaleControlItem saleControlObject;
		if(!valueSaleControlSaleControlItem["CommodityCode"].isNull())
			saleControlObject.commodityCode = valueSaleControlSaleControlItem["CommodityCode"].asString();
		if(!valueSaleControlSaleControlItem["OrderType"].isNull())
			saleControlObject.orderType = valueSaleControlSaleControlItem["OrderType"].asString();
		auto allSaleControlItemsNode = valueSaleControlSaleControlItem["SaleControlItems"]["SaleControlItemsItem"];
		for (auto valueSaleControlSaleControlItemSaleControlItemsSaleControlItemsItem : allSaleControlItemsNode)
		{
			SaleControlItem::SaleControlItemsItem saleControlItemsObject;
			if(!valueSaleControlSaleControlItemSaleControlItemsSaleControlItemsItem["ModuleCode"].isNull())
				saleControlItemsObject.moduleCode = valueSaleControlSaleControlItemSaleControlItemsSaleControlItemsItem["ModuleCode"].asString();
			auto saleControlItem1Node = value["SaleControlItem"];
			auto allConditionSaleControlNode = saleControlItem1Node["ConditionSaleControl"]["ConditionSaleControlItem"];
			for (auto saleControlItem1NodeConditionSaleControlConditionSaleControlItem : allConditionSaleControlNode)
			{
				SaleControlItem::SaleControlItemsItem::SaleControlItem1::ConditionSaleControlItem conditionSaleControlItemObject;
				if(!saleControlItem1NodeConditionSaleControlConditionSaleControlItem["StockValue"].isNull())
					conditionSaleControlItemObject.stockValue = saleControlItem1NodeConditionSaleControlConditionSaleControlItem["StockValue"].asString();
				auto conditionControlNode = value["ConditionControl"];
				if(!conditionControlNode["ConditionControlModuleCode"].isNull())
					conditionSaleControlItemObject.conditionControl.conditionControlModuleCode = conditionControlNode["ConditionControlModuleCode"].asString();
				if(!conditionControlNode["ConditionControlModuleValue"].isNull())
					conditionSaleControlItemObject.conditionControl.conditionControlModuleValue = conditionControlNode["ConditionControlModuleValue"].asString();
				auto moduleValueNode = value["ModuleValue"];
				if(!moduleValueNode["ModuleMinValue"].isNull())
					conditionSaleControlItemObject.moduleValue.moduleMinValue = moduleValueNode["ModuleMinValue"].asString();
				if(!moduleValueNode["ModuleMaxValue"].isNull())
					conditionSaleControlItemObject.moduleValue.moduleMaxValue = moduleValueNode["ModuleMaxValue"].asString();
				saleControlItemsObject.saleControlItem1.conditionSaleControl.push_back(conditionSaleControlItemObject);
			}
			auto basicSaleControlNode = saleControlItem1Node["BasicSaleControl"];
			if(!basicSaleControlNode["StockValue"].isNull())
				saleControlItemsObject.saleControlItem1.basicSaleControl.stockValue = basicSaleControlNode["StockValue"].asString();
			auto moduleValue2Node = basicSaleControlNode["ModuleValue"];
			if(!moduleValue2Node["ModuleMinValue"].isNull())
				saleControlItemsObject.saleControlItem1.basicSaleControl.moduleValue2.moduleMinValue = moduleValue2Node["ModuleMinValue"].asString();
			if(!moduleValue2Node["ModuleMaxValue"].isNull())
				saleControlItemsObject.saleControlItem1.basicSaleControl.moduleValue2.moduleMaxValue = moduleValue2Node["ModuleMaxValue"].asString();
			saleControlObject.saleControlItems.push_back(saleControlItemsObject);
		}
		saleControl_.push_back(saleControlObject);
	}

}

std::vector<DescribeEnsSaleControlStockResult::SaleControlItem> DescribeEnsSaleControlStockResult::getSaleControl()const
{
	return saleControl_;
}

