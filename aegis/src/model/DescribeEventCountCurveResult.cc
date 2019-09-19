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

#include <alibabacloud/aegis/model/DescribeEventCountCurveResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeEventCountCurveResult::DescribeEventCountCurveResult() :
	ServiceResult()
{}

DescribeEventCountCurveResult::DescribeEventCountCurveResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventCountCurveResult::~DescribeEventCountCurveResult()
{}

void DescribeEventCountCurveResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto curveDataNode = value["CurveData"];
	auto allItemsNode = curveDataNode["Items"]["Item"];
	for (auto curveDataNodeItemsItem : allItemsNode)
	{
		CurveData::Item itemObject;
		if(!curveDataNodeItemsItem["Name"].isNull())
			itemObject.name = curveDataNodeItemsItem["Name"].asString();
		auto allDataNode = allItemsNode["Data"]["DataItem"];
		for (auto allItemsNodeDataDataItem : allDataNode)
		{
			CurveData::Item::DataItem dataObject;
			if(!allItemsNodeDataDataItem["High"].isNull())
				dataObject.high = std::stoi(allItemsNodeDataDataItem["High"].asString());
			if(!allItemsNodeDataDataItem["Total"].isNull())
				dataObject.total = std::stoi(allItemsNodeDataDataItem["Total"].asString());
			if(!allItemsNodeDataDataItem["Low"].isNull())
				dataObject.low = std::stoi(allItemsNodeDataDataItem["Low"].asString());
			if(!allItemsNodeDataDataItem["Serious"].isNull())
				dataObject.serious = std::stoi(allItemsNodeDataDataItem["Serious"].asString());
			if(!allItemsNodeDataDataItem["Suspicious"].isNull())
				dataObject.suspicious = std::stoi(allItemsNodeDataDataItem["Suspicious"].asString());
			if(!allItemsNodeDataDataItem["Remind"].isNull())
				dataObject.remind = std::stoi(allItemsNodeDataDataItem["Remind"].asString());
			if(!allItemsNodeDataDataItem["Medium"].isNull())
				dataObject.medium = std::stoi(allItemsNodeDataDataItem["Medium"].asString());
			itemObject.data.push_back(dataObject);
		}
		curveData_.items.push_back(itemObject);
	}
	auto timeScopeNode = curveDataNode["TimeScope"];
	if(!timeScopeNode["Start"].isNull())
		curveData_.timeScope.start = std::stol(timeScopeNode["Start"].asString());
	if(!timeScopeNode["End"].isNull())
		curveData_.timeScope.end = std::stol(timeScopeNode["End"].asString());
	if(!timeScopeNode["Interval"].isNull())
		curveData_.timeScope.interval = std::stoi(timeScopeNode["Interval"].asString());
	if(!timeScopeNode["Step"].isNull())
		curveData_.timeScope.step = std::stoi(timeScopeNode["Step"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeEventCountCurveResult::CurveData DescribeEventCountCurveResult::getCurveData()const
{
	return curveData_;
}

bool DescribeEventCountCurveResult::getSuccess()const
{
	return success_;
}

