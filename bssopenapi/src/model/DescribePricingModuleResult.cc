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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allModuleList = value["ModuleList"]["Module"];
	for (auto value : allModuleList)
	{
		Data::Module moduleObject;
		if(!value["ModuleCode"].isNull())
			moduleObject.moduleCode = value["ModuleCode"].asString();
		if(!value["ModuleName"].isNull())
			moduleObject.moduleName = value["ModuleName"].asString();
		if(!value["PriceType"].isNull())
			moduleObject.priceType = value["PriceType"].asString();
		if(!value["Currency"].isNull())
			moduleObject.currency = value["Currency"].asString();
		auto allConfigList = value["ConfigList"]["ConfigList"];
		for (auto value : allConfigList)
			moduleObject.configList.push_back(value.asString());
		data_.moduleList.push_back(moduleObject);
	}
	auto allAttributeList = value["AttributeList"]["Attribute"];
	for (auto value : allAttributeList)
	{
		Data::Attribute attributeObject;
		if(!value["Code"].isNull())
			attributeObject.code = value["Code"].asString();
		if(!value["Name"].isNull())
			attributeObject.name = value["Name"].asString();
		if(!value["Unit"].isNull())
			attributeObject.unit = value["Unit"].asString();
		auto allValues = value["Values"]["AttributeValue"];
		for (auto value : allValues)
		{
			Data::Attribute::AttributeValue valuesObject;
			if(!value["Type"].isNull())
				valuesObject.type = value["Type"].asString();
			if(!value["Name"].isNull())
				valuesObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				valuesObject.value = value["Value"].asString();
			if(!value["Remark"].isNull())
				valuesObject.remark = value["Remark"].asString();
			attributeObject.values.push_back(valuesObject);
		}
		data_.attributeList.push_back(attributeObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

