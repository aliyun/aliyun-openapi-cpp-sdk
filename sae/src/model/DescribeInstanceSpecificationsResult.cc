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

#include <alibabacloud/sae/model/DescribeInstanceSpecificationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeInstanceSpecificationsResult::DescribeInstanceSpecificationsResult() :
	ServiceResult()
{}

DescribeInstanceSpecificationsResult::DescribeInstanceSpecificationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSpecificationsResult::~DescribeInstanceSpecificationsResult()
{}

void DescribeInstanceSpecificationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Cpu"].isNull())
			dataObject.cpu = std::stoi(valueDataDataItem["Cpu"].asString());
		if(!valueDataDataItem["Version"].isNull())
			dataObject.version = std::stoi(valueDataDataItem["Version"].asString());
		if(!valueDataDataItem["Memory"].isNull())
			dataObject.memory = std::stoi(valueDataDataItem["Memory"].asString());
		if(!valueDataDataItem["SpecInfo"].isNull())
			dataObject.specInfo = valueDataDataItem["SpecInfo"].asString();
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stoi(valueDataDataItem["Id"].asString());
		if(!valueDataDataItem["Enable"].isNull())
			dataObject.enable = valueDataDataItem["Enable"].asString() == "true";
		data_.push_back(dataObject);
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

std::string DescribeInstanceSpecificationsResult::getMessage()const
{
	return message_;
}

std::string DescribeInstanceSpecificationsResult::getTraceId()const
{
	return traceId_;
}

std::vector<DescribeInstanceSpecificationsResult::DataItem> DescribeInstanceSpecificationsResult::getData()const
{
	return data_;
}

std::string DescribeInstanceSpecificationsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeInstanceSpecificationsResult::getCode()const
{
	return code_;
}

bool DescribeInstanceSpecificationsResult::getSuccess()const
{
	return success_;
}

