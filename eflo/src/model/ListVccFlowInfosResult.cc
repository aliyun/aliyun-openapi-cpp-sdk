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

#include <alibabacloud/eflo/model/ListVccFlowInfosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

ListVccFlowInfosResult::ListVccFlowInfosResult() :
	ServiceResult()
{}

ListVccFlowInfosResult::ListVccFlowInfosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVccFlowInfosResult::~ListVccFlowInfosResult()
{}

void ListVccFlowInfosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Total"].isNull())
		content_.total = std::stol(contentNode["Total"].asString());
	auto allDataNode = contentNode["Data"]["DataItem"];
	for (auto contentNodeDataDataItem : allDataNode)
	{
		Content::DataItem dataItemObject;
		if(!contentNodeDataDataItem["RegionId"].isNull())
			dataItemObject.regionId = contentNodeDataDataItem["RegionId"].asString();
		if(!contentNodeDataDataItem["VccId"].isNull())
			dataItemObject.vccId = contentNodeDataDataItem["VccId"].asString();
		if(!contentNodeDataDataItem["MetricName"].isNull())
			dataItemObject.metricName = contentNodeDataDataItem["MetricName"].asString();
		if(!contentNodeDataDataItem["Direction"].isNull())
			dataItemObject.direction = contentNodeDataDataItem["Direction"].asString();
		if(!contentNodeDataDataItem["Timestamp"].isNull())
			dataItemObject.timestamp = std::stol(contentNodeDataDataItem["Timestamp"].asString());
		if(!contentNodeDataDataItem["Value"].isNull())
			dataItemObject.value = contentNodeDataDataItem["Value"].asString();
		content_.data.push_back(dataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListVccFlowInfosResult::getMessage()const
{
	return message_;
}

ListVccFlowInfosResult::Content ListVccFlowInfosResult::getContent()const
{
	return content_;
}

int ListVccFlowInfosResult::getCode()const
{
	return code_;
}

