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

#include <alibabacloud/eventbridge/model/ListTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

ListTargetsResult::ListTargetsResult() :
	ServiceResult()
{}

ListTargetsResult::ListTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTargetsResult::~ListTargetsResult()
{}

void ListTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allTargetsNode = dataNode["Targets"]["TargetsItem"];
	for (auto dataNodeTargetsTargetsItem : allTargetsNode)
	{
		Data::TargetsItem targetsItemObject;
		if(!dataNodeTargetsTargetsItem["DetailMap"].isNull())
			targetsItemObject.detailMap = dataNodeTargetsTargetsItem["DetailMap"].asString();
		if(!dataNodeTargetsTargetsItem["Type"].isNull())
			targetsItemObject.type = dataNodeTargetsTargetsItem["Type"].asString();
		if(!dataNodeTargetsTargetsItem["Endpoint"].isNull())
			targetsItemObject.endpoint = dataNodeTargetsTargetsItem["Endpoint"].asString();
		if(!dataNodeTargetsTargetsItem["PushSelector"].isNull())
			targetsItemObject.pushSelector = dataNodeTargetsTargetsItem["PushSelector"].asString();
		if(!dataNodeTargetsTargetsItem["ErrorsTolerance"].isNull())
			targetsItemObject.errorsTolerance = dataNodeTargetsTargetsItem["ErrorsTolerance"].asString();
		if(!dataNodeTargetsTargetsItem["Id"].isNull())
			targetsItemObject.id = dataNodeTargetsTargetsItem["Id"].asString();
		if(!dataNodeTargetsTargetsItem["EventBusName"].isNull())
			targetsItemObject.eventBusName = dataNodeTargetsTargetsItem["EventBusName"].asString();
		if(!dataNodeTargetsTargetsItem["RuleName"].isNull())
			targetsItemObject.ruleName = dataNodeTargetsTargetsItem["RuleName"].asString();
		auto allParamListNode = dataNodeTargetsTargetsItem["ParamList"]["ParamListItem"];
		for (auto dataNodeTargetsTargetsItemParamListParamListItem : allParamListNode)
		{
			Data::TargetsItem::ParamListItem paramListObject;
			if(!dataNodeTargetsTargetsItemParamListParamListItem["Value"].isNull())
				paramListObject.value = dataNodeTargetsTargetsItemParamListParamListItem["Value"].asString();
			if(!dataNodeTargetsTargetsItemParamListParamListItem["Template"].isNull())
				paramListObject._template = dataNodeTargetsTargetsItemParamListParamListItem["Template"].asString();
			if(!dataNodeTargetsTargetsItemParamListParamListItem["Form"].isNull())
				paramListObject.form = dataNodeTargetsTargetsItemParamListParamListItem["Form"].asString();
			if(!dataNodeTargetsTargetsItemParamListParamListItem["ResourceKey"].isNull())
				paramListObject.resourceKey = dataNodeTargetsTargetsItemParamListParamListItem["ResourceKey"].asString();
			targetsItemObject.paramList.push_back(paramListObject);
		}
		data_.targets.push_back(targetsItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTargetsResult::getMessage()const
{
	return message_;
}

ListTargetsResult::Data ListTargetsResult::getData()const
{
	return data_;
}

std::string ListTargetsResult::getCode()const
{
	return code_;
}

bool ListTargetsResult::getSuccess()const
{
	return success_;
}

