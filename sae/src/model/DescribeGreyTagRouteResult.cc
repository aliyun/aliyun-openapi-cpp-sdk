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

#include <alibabacloud/sae/model/DescribeGreyTagRouteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeGreyTagRouteResult::DescribeGreyTagRouteResult() :
	ServiceResult()
{}

DescribeGreyTagRouteResult::DescribeGreyTagRouteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGreyTagRouteResult::~DescribeGreyTagRouteResult()
{}

void DescribeGreyTagRouteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GreyTagRouteId"].isNull())
		data_.greyTagRouteId = std::stol(dataNode["GreyTagRouteId"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["UpdateTime"].isNull())
		data_.updateTime = std::stol(dataNode["UpdateTime"].asString());
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	auto allScRulesNode = dataNode["ScRules"]["scRule"];
	for (auto dataNodeScRulesscRule : allScRulesNode)
	{
		Data::ScRule scRuleObject;
		if(!dataNodeScRulesscRule["path"].isNull())
			scRuleObject.path = dataNodeScRulesscRule["path"].asString();
		if(!dataNodeScRulesscRule["condition"].isNull())
			scRuleObject.condition = dataNodeScRulesscRule["condition"].asString();
		auto allitemsNode = dataNodeScRulesscRule["items"]["Scrulesitem"];
		for (auto dataNodeScRulesscRuleitemsScrulesitem : allitemsNode)
		{
			Data::ScRule::Scrulesitem itemsObject;
			if(!dataNodeScRulesscRuleitemsScrulesitem["type"].isNull())
				itemsObject.type = dataNodeScRulesscRuleitemsScrulesitem["type"].asString();
			if(!dataNodeScRulesscRuleitemsScrulesitem["name"].isNull())
				itemsObject.name = dataNodeScRulesscRuleitemsScrulesitem["name"].asString();
			if(!dataNodeScRulesscRuleitemsScrulesitem["operator"].isNull())
				itemsObject._operator = dataNodeScRulesscRuleitemsScrulesitem["operator"].asString();
			if(!dataNodeScRulesscRuleitemsScrulesitem["value"].isNull())
				itemsObject.value = dataNodeScRulesscRuleitemsScrulesitem["value"].asString();
			if(!dataNodeScRulesscRuleitemsScrulesitem["cond"].isNull())
				itemsObject.cond = dataNodeScRulesscRuleitemsScrulesitem["cond"].asString();
			if(!dataNodeScRulesscRuleitemsScrulesitem["index"].isNull())
				itemsObject.index = std::stoi(dataNodeScRulesscRuleitemsScrulesitem["index"].asString());
			if(!dataNodeScRulesscRuleitemsScrulesitem["expr"].isNull())
				itemsObject.expr = dataNodeScRulesscRuleitemsScrulesitem["expr"].asString();
			scRuleObject.items.push_back(itemsObject);
		}
		data_.scRules.push_back(scRuleObject);
	}
	auto allAlbRulesNode = dataNode["AlbRules"]["albRule"];
	for (auto dataNodeAlbRulesalbRule : allAlbRulesNode)
	{
		Data::AlbRule albRuleObject;
		if(!dataNodeAlbRulesalbRule["serviceId"].isNull())
			albRuleObject.serviceId = dataNodeAlbRulesalbRule["serviceId"].asString();
		if(!dataNodeAlbRulesalbRule["ingressId"].isNull())
			albRuleObject.ingressId = dataNodeAlbRulesalbRule["ingressId"].asString();
		if(!dataNodeAlbRulesalbRule["condition"].isNull())
			albRuleObject.condition = dataNodeAlbRulesalbRule["condition"].asString();
		auto allitems1Node = dataNodeAlbRulesalbRule["items"]["Scrulesitem"];
		for (auto dataNodeAlbRulesalbRuleitemsScrulesitem : allitems1Node)
		{
			Data::AlbRule::Scrulesitem2 items1Object;
			if(!dataNodeAlbRulesalbRuleitemsScrulesitem["type"].isNull())
				items1Object.type = dataNodeAlbRulesalbRuleitemsScrulesitem["type"].asString();
			if(!dataNodeAlbRulesalbRuleitemsScrulesitem["name"].isNull())
				items1Object.name = dataNodeAlbRulesalbRuleitemsScrulesitem["name"].asString();
			if(!dataNodeAlbRulesalbRuleitemsScrulesitem["operator"].isNull())
				items1Object._operator = dataNodeAlbRulesalbRuleitemsScrulesitem["operator"].asString();
			if(!dataNodeAlbRulesalbRuleitemsScrulesitem["value"].isNull())
				items1Object.value = dataNodeAlbRulesalbRuleitemsScrulesitem["value"].asString();
			if(!dataNodeAlbRulesalbRuleitemsScrulesitem["cond"].isNull())
				items1Object.cond = dataNodeAlbRulesalbRuleitemsScrulesitem["cond"].asString();
			if(!dataNodeAlbRulesalbRuleitemsScrulesitem["index"].isNull())
				items1Object.index = std::stoi(dataNodeAlbRulesalbRuleitemsScrulesitem["index"].asString());
			if(!dataNodeAlbRulesalbRuleitemsScrulesitem["expr"].isNull())
				items1Object.expr = dataNodeAlbRulesalbRuleitemsScrulesitem["expr"].asString();
			albRuleObject.items1.push_back(items1Object);
		}
		data_.albRules.push_back(albRuleObject);
	}
	auto allDubboRulesNode = dataNode["DubboRules"]["dubboRule"];
	for (auto dataNodeDubboRulesdubboRule : allDubboRulesNode)
	{
		Data::DubboRule dubboRuleObject;
		if(!dataNodeDubboRulesdubboRule["serviceName"].isNull())
			dubboRuleObject.serviceName = dataNodeDubboRulesdubboRule["serviceName"].asString();
		if(!dataNodeDubboRulesdubboRule["group"].isNull())
			dubboRuleObject.group = dataNodeDubboRulesdubboRule["group"].asString();
		if(!dataNodeDubboRulesdubboRule["version"].isNull())
			dubboRuleObject.version = dataNodeDubboRulesdubboRule["version"].asString();
		if(!dataNodeDubboRulesdubboRule["methodName"].isNull())
			dubboRuleObject.methodName = dataNodeDubboRulesdubboRule["methodName"].asString();
		if(!dataNodeDubboRulesdubboRule["condition"].isNull())
			dubboRuleObject.condition = dataNodeDubboRulesdubboRule["condition"].asString();
		auto allitems3Node = dataNodeDubboRulesdubboRule["items"]["item"];
		for (auto dataNodeDubboRulesdubboRuleitemsitem : allitems3Node)
		{
			Data::DubboRule::Item items3Object;
			if(!dataNodeDubboRulesdubboRuleitemsitem["index"].isNull())
				items3Object.index = std::stoi(dataNodeDubboRulesdubboRuleitemsitem["index"].asString());
			if(!dataNodeDubboRulesdubboRuleitemsitem["expr"].isNull())
				items3Object.expr = dataNodeDubboRulesdubboRuleitemsitem["expr"].asString();
			if(!dataNodeDubboRulesdubboRuleitemsitem["operator"].isNull())
				items3Object._operator = dataNodeDubboRulesdubboRuleitemsitem["operator"].asString();
			if(!dataNodeDubboRulesdubboRuleitemsitem["value"].isNull())
				items3Object.value = dataNodeDubboRulesdubboRuleitemsitem["value"].asString();
			if(!dataNodeDubboRulesdubboRuleitemsitem["cond"].isNull())
				items3Object.cond = dataNodeDubboRulesdubboRuleitemsitem["cond"].asString();
			if(!dataNodeDubboRulesdubboRuleitemsitem["type"].isNull())
				items3Object.type = dataNodeDubboRulesdubboRuleitemsitem["type"].asString();
			if(!dataNodeDubboRulesdubboRuleitemsitem["name"].isNull())
				items3Object.name = dataNodeDubboRulesdubboRuleitemsitem["name"].asString();
			dubboRuleObject.items3.push_back(items3Object);
		}
		data_.dubboRules.push_back(dubboRuleObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeGreyTagRouteResult::getMessage()const
{
	return message_;
}

std::string DescribeGreyTagRouteResult::getTraceId()const
{
	return traceId_;
}

DescribeGreyTagRouteResult::Data DescribeGreyTagRouteResult::getData()const
{
	return data_;
}

std::string DescribeGreyTagRouteResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeGreyTagRouteResult::getCode()const
{
	return code_;
}

bool DescribeGreyTagRouteResult::getSuccess()const
{
	return success_;
}

