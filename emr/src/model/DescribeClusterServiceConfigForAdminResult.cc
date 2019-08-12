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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigForAdminResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterServiceConfigForAdminResult::DescribeClusterServiceConfigForAdminResult() :
	ServiceResult()
{}

DescribeClusterServiceConfigForAdminResult::DescribeClusterServiceConfigForAdminResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterServiceConfigForAdminResult::~DescribeClusterServiceConfigForAdminResult()
{}

void DescribeClusterServiceConfigForAdminResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto configNode = value["Config"];
	if(!configNode["ServiceName"].isNull())
		config_.serviceName = configNode["ServiceName"].asString();
	if(!configNode["ConfigVersion"].isNull())
		config_.configVersion = configNode["ConfigVersion"].asString();
	if(!configNode["Applied"].isNull())
		config_.applied = configNode["Applied"].asString();
	if(!configNode["CreateTime"].isNull())
		config_.createTime = configNode["CreateTime"].asString();
	if(!configNode["Author"].isNull())
		config_.author = configNode["Author"].asString();
	if(!configNode["Comment"].isNull())
		config_.comment = configNode["Comment"].asString();
	auto allConfigValueList = value["ConfigValueList"]["ConfigValue"];
	for (auto value : allConfigValueList)
	{
		Config::ConfigValue configValueObject;
		if(!value["ConfigName"].isNull())
			configValueObject.configName = value["ConfigName"].asString();
		if(!value["AllowCustom"].isNull())
			configValueObject.allowCustom = value["AllowCustom"].asString() == "true";
		auto allConfigItemValueList = value["ConfigItemValueList"]["ConfigItemValue"];
		for (auto value : allConfigItemValueList)
		{
			Config::ConfigValue::ConfigItemValue configItemValueListObject;
			if(!value["ItemName"].isNull())
				configItemValueListObject.itemName = value["ItemName"].asString();
			if(!value["Value"].isNull())
				configItemValueListObject.value = value["Value"].asString();
			if(!value["IsCustom"].isNull())
				configItemValueListObject.isCustom = value["IsCustom"].asString() == "true";
			if(!value["Description"].isNull())
				configItemValueListObject.description = value["Description"].asString();
			configValueObject.configItemValueList.push_back(configItemValueListObject);
		}
		config_.configValueList.push_back(configValueObject);
	}
	auto allPropertyInfoList = value["PropertyInfoList"]["PropertyInfo"];
	for (auto value : allPropertyInfoList)
	{
		Config::PropertyInfo propertyInfoObject;
		if(!value["Name"].isNull())
			propertyInfoObject.name = value["Name"].asString();
		if(!value["Value"].isNull())
			propertyInfoObject.value = value["Value"].asString();
		if(!value["Description"].isNull())
			propertyInfoObject.description = value["Description"].asString();
		if(!value["FileName"].isNull())
			propertyInfoObject.fileName = value["FileName"].asString();
		if(!value["DisplayName"].isNull())
			propertyInfoObject.displayName = value["DisplayName"].asString();
		if(!value["ServiceName"].isNull())
			propertyInfoObject.serviceName = value["ServiceName"].asString();
		if(!value["Component"].isNull())
			propertyInfoObject.component = value["Component"].asString();
		auto propertyValueAttributesNode = value["PropertyValueAttributes"];
		if(!propertyValueAttributesNode["Type"].isNull())
			propertyInfoObject.propertyValueAttributes.type = propertyValueAttributesNode["Type"].asString();
		if(!propertyValueAttributesNode["Maximum"].isNull())
			propertyInfoObject.propertyValueAttributes.maximum = propertyValueAttributesNode["Maximum"].asString();
		if(!propertyValueAttributesNode["Mimimum"].isNull())
			propertyInfoObject.propertyValueAttributes.mimimum = propertyValueAttributesNode["Mimimum"].asString();
		if(!propertyValueAttributesNode["Unit"].isNull())
			propertyInfoObject.propertyValueAttributes.unit = propertyValueAttributesNode["Unit"].asString();
		if(!propertyValueAttributesNode["ReadOnly"].isNull())
			propertyInfoObject.propertyValueAttributes.readOnly = propertyValueAttributesNode["ReadOnly"].asString() == "true";
		if(!propertyValueAttributesNode["Hidden"].isNull())
			propertyInfoObject.propertyValueAttributes.hidden = propertyValueAttributesNode["Hidden"].asString() == "true";
		if(!propertyValueAttributesNode["IncrememtStep"].isNull())
			propertyInfoObject.propertyValueAttributes.incrememtStep = propertyValueAttributesNode["IncrememtStep"].asString();
		auto allEntries = value["Entries"]["ValueEntryInfo"];
		for (auto value : allEntries)
		{
			Config::PropertyInfo::PropertyValueAttributes::ValueEntryInfo valueEntryInfoObject;
			if(!value["Value"].isNull())
				valueEntryInfoObject.value = value["Value"].asString();
			if(!value["Label"].isNull())
				valueEntryInfoObject.label = value["Label"].asString();
			if(!value["Description"].isNull())
				valueEntryInfoObject.description = value["Description"].asString();
			propertyInfoObject.propertyValueAttributes.entries.push_back(valueEntryInfoObject);
		}
		auto effectWayNode = value["EffectWay"];
		if(!effectWayNode["EffectType"].isNull())
			propertyInfoObject.effectWay.effectType = effectWayNode["EffectType"].asString();
		if(!effectWayNode["InvokeServiceName"].isNull())
			propertyInfoObject.effectWay.invokeServiceName = effectWayNode["InvokeServiceName"].asString();
		auto allPropertyTypes = value["PropertyTypes"]["propertyType"];
		for (auto value : allPropertyTypes)
			propertyInfoObject.propertyTypes.push_back(value.asString());
		config_.propertyInfoList.push_back(propertyInfoObject);
	}

}

DescribeClusterServiceConfigForAdminResult::Config DescribeClusterServiceConfigForAdminResult::getConfig()const
{
	return config_;
}

