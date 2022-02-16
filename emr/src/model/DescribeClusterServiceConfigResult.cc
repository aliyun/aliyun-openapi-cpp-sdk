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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterServiceConfigResult::DescribeClusterServiceConfigResult() :
	ServiceResult()
{}

DescribeClusterServiceConfigResult::DescribeClusterServiceConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterServiceConfigResult::~DescribeClusterServiceConfigResult()
{}

void DescribeClusterServiceConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
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
	auto allConfigValueListNode = configNode["ConfigValueList"]["ConfigValue"];
	for (auto configNodeConfigValueListConfigValue : allConfigValueListNode)
	{
		Config::ConfigValue configValueObject;
		if(!configNodeConfigValueListConfigValue["ConfigName"].isNull())
			configValueObject.configName = configNodeConfigValueListConfigValue["ConfigName"].asString();
		if(!configNodeConfigValueListConfigValue["AllowCustom"].isNull())
			configValueObject.allowCustom = configNodeConfigValueListConfigValue["AllowCustom"].asString() == "true";
		if(!configNodeConfigValueListConfigValue["Scope"].isNull())
			configValueObject.scope = configNodeConfigValueListConfigValue["Scope"].asString();
		if(!configNodeConfigValueListConfigValue["ScopeId"].isNull())
			configValueObject.scopeId = std::stol(configNodeConfigValueListConfigValue["ScopeId"].asString());
		auto allConfigItemValueListNode = configNodeConfigValueListConfigValue["ConfigItemValueList"]["ConfigItemValue"];
		for (auto configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue : allConfigItemValueListNode)
		{
			Config::ConfigValue::ConfigItemValue configItemValueListObject;
			if(!configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["ItemName"].isNull())
				configItemValueListObject.itemName = configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["ItemName"].asString();
			if(!configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["Value"].isNull())
				configItemValueListObject.value = configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["Value"].asString();
			if(!configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["IsCustom"].isNull())
				configItemValueListObject.isCustom = configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["IsCustom"].asString() == "true";
			if(!configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["Description"].isNull())
				configItemValueListObject.description = configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["Description"].asString();
			if(!configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["ValueScope"].isNull())
				configItemValueListObject.valueScope = configNodeConfigValueListConfigValueConfigItemValueListConfigItemValue["ValueScope"].asString();
			configValueObject.configItemValueList.push_back(configItemValueListObject);
		}
		config_.configValueList.push_back(configValueObject);
	}
	auto allPropertyInfoListNode = configNode["PropertyInfoList"]["PropertyInfo"];
	for (auto configNodePropertyInfoListPropertyInfo : allPropertyInfoListNode)
	{
		Config::PropertyInfo propertyInfoObject;
		if(!configNodePropertyInfoListPropertyInfo["Name"].isNull())
			propertyInfoObject.name = configNodePropertyInfoListPropertyInfo["Name"].asString();
		if(!configNodePropertyInfoListPropertyInfo["Value"].isNull())
			propertyInfoObject.value = configNodePropertyInfoListPropertyInfo["Value"].asString();
		if(!configNodePropertyInfoListPropertyInfo["Description"].isNull())
			propertyInfoObject.description = configNodePropertyInfoListPropertyInfo["Description"].asString();
		if(!configNodePropertyInfoListPropertyInfo["FileName"].isNull())
			propertyInfoObject.fileName = configNodePropertyInfoListPropertyInfo["FileName"].asString();
		if(!configNodePropertyInfoListPropertyInfo["DisplayName"].isNull())
			propertyInfoObject.displayName = configNodePropertyInfoListPropertyInfo["DisplayName"].asString();
		if(!configNodePropertyInfoListPropertyInfo["ServiceName"].isNull())
			propertyInfoObject.serviceName = configNodePropertyInfoListPropertyInfo["ServiceName"].asString();
		if(!configNodePropertyInfoListPropertyInfo["Component"].isNull())
			propertyInfoObject.component = configNodePropertyInfoListPropertyInfo["Component"].asString();
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
		auto allEntriesNode = propertyValueAttributesNode["Entries"]["ValueEntryInfo"];
		for (auto propertyValueAttributesNodeEntriesValueEntryInfo : allEntriesNode)
		{
			Config::PropertyInfo::PropertyValueAttributes::ValueEntryInfo valueEntryInfoObject;
			if(!propertyValueAttributesNodeEntriesValueEntryInfo["Value"].isNull())
				valueEntryInfoObject.value = propertyValueAttributesNodeEntriesValueEntryInfo["Value"].asString();
			if(!propertyValueAttributesNodeEntriesValueEntryInfo["Label"].isNull())
				valueEntryInfoObject.label = propertyValueAttributesNodeEntriesValueEntryInfo["Label"].asString();
			if(!propertyValueAttributesNodeEntriesValueEntryInfo["Description"].isNull())
				valueEntryInfoObject.description = propertyValueAttributesNodeEntriesValueEntryInfo["Description"].asString();
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

DescribeClusterServiceConfigResult::Config DescribeClusterServiceConfigResult::getConfig()const
{
	return config_;
}

