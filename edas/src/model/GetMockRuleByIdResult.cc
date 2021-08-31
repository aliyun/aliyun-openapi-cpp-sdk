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

#include <alibabacloud/edas/model/GetMockRuleByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetMockRuleByIdResult::GetMockRuleByIdResult() :
	ServiceResult()
{}

GetMockRuleByIdResult::GetMockRuleByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMockRuleByIdResult::~GetMockRuleByIdResult()
{}

void GetMockRuleByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccountId"].isNull())
		data_.accountId = dataNode["AccountId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["ConsumerAppId"].isNull())
		data_.consumerAppId = dataNode["ConsumerAppId"].asString();
	if(!dataNode["ConsumerAppName"].isNull())
		data_.consumerAppName = dataNode["ConsumerAppName"].asString();
	if(!dataNode["Enable"].isNull())
		data_.enable = dataNode["Enable"].asString() == "true";
	if(!dataNode["ExtraJson"].isNull())
		data_.extraJson = dataNode["ExtraJson"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["ProviderAppId"].isNull())
		data_.providerAppId = dataNode["ProviderAppId"].asString();
	if(!dataNode["ProviderAppName"].isNull())
		data_.providerAppName = dataNode["ProviderAppName"].asString();
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	if(!dataNode["Source"].isNull())
		data_.source = dataNode["Source"].asString();
	auto allScMockItemsNode = dataNode["ScMockItems"]["SpringCloudMockItem"];
	for (auto dataNodeScMockItemsSpringCloudMockItem : allScMockItemsNode)
	{
		Data::SpringCloudMockItem springCloudMockItemObject;
		if(!dataNodeScMockItemsSpringCloudMockItem["ExceptionClassName"].isNull())
			springCloudMockItemObject.exceptionClassName = dataNodeScMockItemsSpringCloudMockItem["ExceptionClassName"].asString();
		if(!dataNodeScMockItemsSpringCloudMockItem["ExecuteCondition"].isNull())
			springCloudMockItemObject.executeCondition = dataNodeScMockItemsSpringCloudMockItem["ExecuteCondition"].asString();
		if(!dataNodeScMockItemsSpringCloudMockItem["Method"].isNull())
			springCloudMockItemObject.method = dataNodeScMockItemsSpringCloudMockItem["Method"].asString();
		if(!dataNodeScMockItemsSpringCloudMockItem["Oper"].isNull())
			springCloudMockItemObject.oper = dataNodeScMockItemsSpringCloudMockItem["Oper"].asString();
		if(!dataNodeScMockItemsSpringCloudMockItem["Path"].isNull())
			springCloudMockItemObject.path = dataNodeScMockItemsSpringCloudMockItem["Path"].asString();
		if(!dataNodeScMockItemsSpringCloudMockItem["ServiceName"].isNull())
			springCloudMockItemObject.serviceName = dataNodeScMockItemsSpringCloudMockItem["ServiceName"].asString();
		if(!dataNodeScMockItemsSpringCloudMockItem["Value"].isNull())
			springCloudMockItemObject.value = dataNodeScMockItemsSpringCloudMockItem["Value"].asString();
		data_.scMockItems.push_back(springCloudMockItemObject);
	}
	auto allDubboMockItemsNode = dataNode["DubboMockItems"]["DubboMockItem"];
	for (auto dataNodeDubboMockItemsDubboMockItem : allDubboMockItemsNode)
	{
		Data::DubboMockItem dubboMockItemObject;
		if(!dataNodeDubboMockItemsDubboMockItem["ExceptionClassName"].isNull())
			dubboMockItemObject.exceptionClassName = dataNodeDubboMockItemsDubboMockItem["ExceptionClassName"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["ExecuteCondition"].isNull())
			dubboMockItemObject.executeCondition = dataNodeDubboMockItemsDubboMockItem["ExecuteCondition"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["MethodName"].isNull())
			dubboMockItemObject.methodName = dataNodeDubboMockItemsDubboMockItem["MethodName"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["Oper"].isNull())
			dubboMockItemObject.oper = dataNodeDubboMockItemsDubboMockItem["Oper"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["Path"].isNull())
			dubboMockItemObject.path = dataNodeDubboMockItemsDubboMockItem["Path"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["ServiceName"].isNull())
			dubboMockItemObject.serviceName = dataNodeDubboMockItemsDubboMockItem["ServiceName"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["Value"].isNull())
			dubboMockItemObject.value = dataNodeDubboMockItemsDubboMockItem["Value"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["Version"].isNull())
			dubboMockItemObject.version = dataNodeDubboMockItemsDubboMockItem["Version"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["Group"].isNull())
			dubboMockItemObject.group = dataNodeDubboMockItemsDubboMockItem["Group"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["ParamTypes"].isNull())
			dubboMockItemObject.paramTypes = dataNodeDubboMockItemsDubboMockItem["ParamTypes"].asString();
		if(!dataNodeDubboMockItemsDubboMockItem["ExceptionMessage"].isNull())
			dubboMockItemObject.exceptionMessage = dataNodeDubboMockItemsDubboMockItem["ExceptionMessage"].asString();
		data_.dubboMockItems.push_back(dubboMockItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetMockRuleByIdResult::getMessage()const
{
	return message_;
}

GetMockRuleByIdResult::Data GetMockRuleByIdResult::getData()const
{
	return data_;
}

std::string GetMockRuleByIdResult::getCode()const
{
	return code_;
}

bool GetMockRuleByIdResult::getSuccess()const
{
	return success_;
}

