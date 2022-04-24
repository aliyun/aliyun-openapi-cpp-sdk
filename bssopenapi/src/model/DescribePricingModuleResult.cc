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

#include <alibabacloud/bssopenapi/model/DescribePricingModuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

DescribePricingModuleResult::DescribePricingModuleResult() :
	ServiceResult()
{}

DescribePricingModuleResult::DescribePricingModuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePricingModuleResult::~DescribePricingModuleResult()
{}

void DescribePricingModuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allModuleListNode = dataNode["ModuleList"]["Module"];
	for (auto dataNodeModuleListModule : allModuleListNode)
	{
		Data::Module moduleObject;
		if(!dataNodeModuleListModule["ModuleName"].isNull())
			moduleObject.moduleName = dataNodeModuleListModule["ModuleName"].asString();
		if(!dataNodeModuleListModule["PriceType"].isNull())
			moduleObject.priceType = dataNodeModuleListModule["PriceType"].asString();
		if(!dataNodeModuleListModule["Currency"].isNull())
			moduleObject.currency = dataNodeModuleListModule["Currency"].asString();
		if(!dataNodeModuleListModule["ModuleCode"].isNull())
			moduleObject.moduleCode = dataNodeModuleListModule["ModuleCode"].asString();
		auto allConfigList = value["ConfigList"]["ConfigList"];
		for (auto value : allConfigList)
			moduleObject.configList.push_back(value.asString());
		data_.moduleList.push_back(moduleObject);
	}
	auto allAttributeListNode = dataNode["AttributeList"]["Attribute"];
	for (auto dataNodeAttributeListAttribute : allAttributeListNode)
	{
		Data::Attribute attributeObject;
		if(!dataNodeAttributeListAttribute["Code"].isNull())
			attributeObject.code = dataNodeAttributeListAttribute["Code"].asString();
		if(!dataNodeAttributeListAttribute["Name"].isNull())
			attributeObject.name = dataNodeAttributeListAttribute["Name"].asString();
		if(!dataNodeAttributeListAttribute["Unit"].isNull())
			attributeObject.unit = dataNodeAttributeListAttribute["Unit"].asString();
		auto allValuesNode = dataNodeAttributeListAttribute["Values"]["AttributeValue"];
		for (auto dataNodeAttributeListAttributeValuesAttributeValue : allValuesNode)
		{
			Data::Attribute::AttributeValue valuesObject;
			if(!dataNodeAttributeListAttributeValuesAttributeValue["Type"].isNull())
				valuesObject.type = dataNodeAttributeListAttributeValuesAttributeValue["Type"].asString();
			if(!dataNodeAttributeListAttributeValuesAttributeValue["Value"].isNull())
				valuesObject.value = dataNodeAttributeListAttributeValuesAttributeValue["Value"].asString();
			if(!dataNodeAttributeListAttributeValuesAttributeValue["Remark"].isNull())
				valuesObject.remark = dataNodeAttributeListAttributeValuesAttributeValue["Remark"].asString();
			if(!dataNodeAttributeListAttributeValuesAttributeValue["Name"].isNull())
				valuesObject.name = dataNodeAttributeListAttributeValuesAttributeValue["Name"].asString();
			attributeObject.values.push_back(valuesObject);
		}
		data_.attributeList.push_back(attributeObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribePricingModuleResult::getMessage()const
{
	return message_;
}

DescribePricingModuleResult::Data DescribePricingModuleResult::getData()const
{
	return data_;
}

std::string DescribePricingModuleResult::getCode()const
{
	return code_;
}

bool DescribePricingModuleResult::getSuccess()const
{
	return success_;
}

