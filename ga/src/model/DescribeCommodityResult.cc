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

#include <alibabacloud/ga/model/DescribeCommodityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeCommodityResult::DescribeCommodityResult() :
	ServiceResult()
{}

DescribeCommodityResult::DescribeCommodityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCommodityResult::~DescribeCommodityResult()
{}

void DescribeCommodityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allComponentsNode = value["Components"]["componentsItem"];
	for (auto valueComponentscomponentsItem : allComponentsNode)
	{
		ComponentsItem componentsObject;
		if(!valueComponentscomponentsItem["ComponentCode"].isNull())
			componentsObject.componentCode = valueComponentscomponentsItem["ComponentCode"].asString();
		if(!valueComponentscomponentsItem["ComponentName"].isNull())
			componentsObject.componentName = valueComponentscomponentsItem["ComponentName"].asString();
		auto allPropertiesNode = valueComponentscomponentsItem["Properties"]["propertiesItem"];
		for (auto valueComponentscomponentsItemPropertiespropertiesItem : allPropertiesNode)
		{
			ComponentsItem::PropertiesItem propertiesObject;
			if(!valueComponentscomponentsItemPropertiespropertiesItem["Code"].isNull())
				propertiesObject.code = valueComponentscomponentsItemPropertiespropertiesItem["Code"].asString();
			if(!valueComponentscomponentsItemPropertiespropertiesItem["Name"].isNull())
				propertiesObject.name = valueComponentscomponentsItemPropertiespropertiesItem["Name"].asString();
			auto allPropertyValueListNode = valueComponentscomponentsItemPropertiespropertiesItem["PropertyValueList"]["propertyValueListItem"];
			for (auto valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem : allPropertyValueListNode)
			{
				ComponentsItem::PropertiesItem::PropertyValueListItem propertyValueListObject;
				if(!valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["Text"].isNull())
					propertyValueListObject.text = valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["Text"].asString();
				if(!valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["Value"].isNull())
					propertyValueListObject.value = valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["Value"].asString();
				if(!valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["Tips"].isNull())
					propertyValueListObject.tips = valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["Tips"].asString();
				if(!valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["OrderIndex"].isNull())
					propertyValueListObject.orderIndex = std::stol(valueComponentscomponentsItemPropertiespropertiesItemPropertyValueListpropertyValueListItem["OrderIndex"].asString());
				propertiesObject.propertyValueList.push_back(propertyValueListObject);
			}
			componentsObject.properties.push_back(propertiesObject);
		}
		components_.push_back(componentsObject);
	}
	if(!value["CommodityCode"].isNull())
		commodityCode_ = value["CommodityCode"].asString();
	if(!value["CommodityName"].isNull())
		commodityName_ = value["CommodityName"].asString();

}

std::vector<DescribeCommodityResult::ComponentsItem> DescribeCommodityResult::getComponents()const
{
	return components_;
}

std::string DescribeCommodityResult::getCommodityCode()const
{
	return commodityCode_;
}

std::string DescribeCommodityResult::getCommodityName()const
{
	return commodityName_;
}

