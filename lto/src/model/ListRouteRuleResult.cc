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

#include <alibabacloud/lto/model/ListRouteRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Lto;
using namespace AlibabaCloud::Lto::Model;

ListRouteRuleResult::ListRouteRuleResult() :
	ServiceResult()
{}

ListRouteRuleResult::ListRouteRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRouteRuleResult::~ListRouteRuleResult()
{}

void ListRouteRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Num"].isNull())
		data_.num = std::stoi(dataNode["Num"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Size"].isNull())
		data_.size = std::stoi(dataNode["Size"].asString());
	auto allPageDataNode = dataNode["PageData"]["RouteRuleInfo"];
	for (auto dataNodePageDataRouteRuleInfo : allPageDataNode)
	{
		Data::RouteRuleInfo routeRuleInfoObject;
		if(!dataNodePageDataRouteRuleInfo["ContractName"].isNull())
			routeRuleInfoObject.contractName = dataNodePageDataRouteRuleInfo["ContractName"].asString();
		if(!dataNodePageDataRouteRuleInfo["DeviceGroupId"].isNull())
			routeRuleInfoObject.deviceGroupId = dataNodePageDataRouteRuleInfo["DeviceGroupId"].asString();
		if(!dataNodePageDataRouteRuleInfo["Remark"].isNull())
			routeRuleInfoObject.remark = dataNodePageDataRouteRuleInfo["Remark"].asString();
		if(!dataNodePageDataRouteRuleInfo["DeviceGroupName"].isNull())
			routeRuleInfoObject.deviceGroupName = dataNodePageDataRouteRuleInfo["DeviceGroupName"].asString();
		if(!dataNodePageDataRouteRuleInfo["PrivacyRuleId"].isNull())
			routeRuleInfoObject.privacyRuleId = dataNodePageDataRouteRuleInfo["PrivacyRuleId"].asString();
		if(!dataNodePageDataRouteRuleInfo["BizChainId"].isNull())
			routeRuleInfoObject.bizChainId = std::stol(dataNodePageDataRouteRuleInfo["BizChainId"].asString());
		if(!dataNodePageDataRouteRuleInfo["PrivacyRuleName"].isNull())
			routeRuleInfoObject.privacyRuleName = dataNodePageDataRouteRuleInfo["PrivacyRuleName"].asString();
		if(!dataNodePageDataRouteRuleInfo["InvokeType"].isNull())
			routeRuleInfoObject.invokeType = dataNodePageDataRouteRuleInfo["InvokeType"].asString();
		if(!dataNodePageDataRouteRuleInfo["RouteRuleId"].isNull())
			routeRuleInfoObject.routeRuleId = dataNodePageDataRouteRuleInfo["RouteRuleId"].asString();
		if(!dataNodePageDataRouteRuleInfo["BizChainName"].isNull())
			routeRuleInfoObject.bizChainName = dataNodePageDataRouteRuleInfo["BizChainName"].asString();
		if(!dataNodePageDataRouteRuleInfo["ContractTemplateId"].isNull())
			routeRuleInfoObject.contractTemplateId = dataNodePageDataRouteRuleInfo["ContractTemplateId"].asString();
		if(!dataNodePageDataRouteRuleInfo["BlockChainType"].isNull())
			routeRuleInfoObject.blockChainType = dataNodePageDataRouteRuleInfo["BlockChainType"].asString();
		if(!dataNodePageDataRouteRuleInfo["ChainUpMode"].isNull())
			routeRuleInfoObject.chainUpMode = dataNodePageDataRouteRuleInfo["ChainUpMode"].asString();
		data_.pageData.push_back(routeRuleInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListRouteRuleResult::getMessage()const
{
	return message_;
}

int ListRouteRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListRouteRuleResult::Data ListRouteRuleResult::getData()const
{
	return data_;
}

std::string ListRouteRuleResult::getCode()const
{
	return code_;
}

bool ListRouteRuleResult::getSuccess()const
{
	return success_;
}

