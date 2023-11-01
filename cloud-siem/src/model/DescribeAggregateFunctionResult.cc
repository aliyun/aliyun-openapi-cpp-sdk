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

#include <alibabacloud/cloud-siem/model/DescribeAggregateFunctionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloud_siem;
using namespace AlibabaCloud::Cloud_siem::Model;

DescribeAggregateFunctionResult::DescribeAggregateFunctionResult() :
	ServiceResult()
{}

DescribeAggregateFunctionResult::DescribeAggregateFunctionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAggregateFunctionResult::~DescribeAggregateFunctionResult()
{}

void DescribeAggregateFunctionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Function"].isNull())
			dataObject.function = valueDataDataItem["Function"].asString();
		if(!valueDataDataItem["FunctionName"].isNull())
			dataObject.functionName = valueDataDataItem["FunctionName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeAggregateFunctionResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAggregateFunctionResult::DataItem> DescribeAggregateFunctionResult::getData()const
{
	return data_;
}

int DescribeAggregateFunctionResult::getCode()const
{
	return code_;
}

bool DescribeAggregateFunctionResult::getSuccess()const
{
	return success_;
}

