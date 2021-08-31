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

#include <alibabacloud/edas/model/GetAccountMockRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetAccountMockRuleResult::GetAccountMockRuleResult() :
	ServiceResult()
{}

GetAccountMockRuleResult::GetAccountMockRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountMockRuleResult::~GetAccountMockRuleResult()
{}

void GetAccountMockRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	auto allResultNode = dataNode["Result"]["MseMockRules"];
	for (auto dataNodeResultMseMockRules : allResultNode)
	{
		Data::MseMockRules mseMockRulesObject;
		if(!dataNodeResultMseMockRules["Id"].isNull())
			mseMockRulesObject.id = std::stoi(dataNodeResultMseMockRules["Id"].asString());
		if(!dataNodeResultMseMockRules["Name"].isNull())
			mseMockRulesObject.name = dataNodeResultMseMockRules["Name"].asString();
		if(!dataNodeResultMseMockRules["Region"].isNull())
			mseMockRulesObject.region = dataNodeResultMseMockRules["Region"].asString();
		if(!dataNodeResultMseMockRules["Enable"].isNull())
			mseMockRulesObject.enable = dataNodeResultMseMockRules["Enable"].asString() == "true";
		if(!dataNodeResultMseMockRules["Status"].isNull())
			mseMockRulesObject.status = std::stoi(dataNodeResultMseMockRules["Status"].asString());
		if(!dataNodeResultMseMockRules["ProviderAppId"].isNull())
			mseMockRulesObject.providerAppId = dataNodeResultMseMockRules["ProviderAppId"].asString();
		if(!dataNodeResultMseMockRules["ProviderAppName"].isNull())
			mseMockRulesObject.providerAppName = dataNodeResultMseMockRules["ProviderAppName"].asString();
		if(!dataNodeResultMseMockRules["ConsumerAppId"].isNull())
			mseMockRulesObject.consumerAppId = dataNodeResultMseMockRules["ConsumerAppId"].asString();
		if(!dataNodeResultMseMockRules["ConsumerAppName"].isNull())
			mseMockRulesObject.consumerAppName = dataNodeResultMseMockRules["ConsumerAppName"].asString();
		if(!dataNodeResultMseMockRules["GmtCreate"].isNull())
			mseMockRulesObject.gmtCreate = dataNodeResultMseMockRules["GmtCreate"].asString();
		if(!dataNodeResultMseMockRules["GmtModified"].isNull())
			mseMockRulesObject.gmtModified = dataNodeResultMseMockRules["GmtModified"].asString();
		auto allDubboMockItemsNode = dataNodeResultMseMockRules["DubboMockItems"]["DubboMockItem"];
		for (auto dataNodeResultMseMockRulesDubboMockItemsDubboMockItem : allDubboMockItemsNode)
		{
			Data::MseMockRules::DubboMockItem dubboMockItemsObject;
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["MethodName"].isNull())
				dubboMockItemsObject.methodName = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["MethodName"].asString();
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Oper"].isNull())
				dubboMockItemsObject.oper = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Oper"].asString();
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["ExceptionClassName"].isNull())
				dubboMockItemsObject.exceptionClassName = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["ExceptionClassName"].asString();
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["ServiceName"].isNull())
				dubboMockItemsObject.serviceName = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["ServiceName"].asString();
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Value"].isNull())
				dubboMockItemsObject.value = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Value"].asString();
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Version"].isNull())
				dubboMockItemsObject.version = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Version"].asString();
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["ExecuteCondition"].isNull())
				dubboMockItemsObject.executeCondition = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["ExecuteCondition"].asString();
			if(!dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Group"].isNull())
				dubboMockItemsObject.group = dataNodeResultMseMockRulesDubboMockItemsDubboMockItem["Group"].asString();
			auto allParamTypes = value["ParamTypes"]["ParamTypes"];
			for (auto value : allParamTypes)
				dubboMockItemsObject.paramTypes.push_back(value.asString());
			mseMockRulesObject.dubboMockItems.push_back(dubboMockItemsObject);
		}
		auto allScMockItemsNode = dataNodeResultMseMockRules["ScMockItems"]["SpringCloudMockItem"];
		for (auto dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem : allScMockItemsNode)
		{
			Data::MseMockRules::SpringCloudMockItem scMockItemsObject;
			if(!dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["ExceptionClassName"].isNull())
				scMockItemsObject.exceptionClassName = dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["ExceptionClassName"].asString();
			if(!dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["ExecuteCondition"].isNull())
				scMockItemsObject.executeCondition = dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["ExecuteCondition"].asString();
			if(!dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Method"].isNull())
				scMockItemsObject.method = dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Method"].asString();
			if(!dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Oper"].isNull())
				scMockItemsObject.oper = dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Oper"].asString();
			if(!dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Path"].isNull())
				scMockItemsObject.path = dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Path"].asString();
			if(!dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["ServiceName"].isNull())
				scMockItemsObject.serviceName = dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["ServiceName"].asString();
			if(!dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Value"].isNull())
				scMockItemsObject.value = dataNodeResultMseMockRulesScMockItemsSpringCloudMockItem["Value"].asString();
			mseMockRulesObject.scMockItems.push_back(scMockItemsObject);
		}
		data_.result.push_back(mseMockRulesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAccountMockRuleResult::getMessage()const
{
	return message_;
}

GetAccountMockRuleResult::Data GetAccountMockRuleResult::getData()const
{
	return data_;
}

std::string GetAccountMockRuleResult::getCode()const
{
	return code_;
}

bool GetAccountMockRuleResult::getSuccess()const
{
	return success_;
}

