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

#include <alibabacloud/sae/model/DescribeComponentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeComponentsResult::DescribeComponentsResult() :
	ServiceResult()
{}

DescribeComponentsResult::DescribeComponentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeComponentsResult::~DescribeComponentsResult()
{}

void DescribeComponentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["ComponentKey"].isNull())
			dataObject.componentKey = valueDataDataItem["ComponentKey"].asString();
		if(!valueDataDataItem["ComponentDescription"].isNull())
			dataObject.componentDescription = valueDataDataItem["ComponentDescription"].asString();
		if(!valueDataDataItem["Expired"].isNull())
			dataObject.expired = valueDataDataItem["Expired"].asString() == "true";
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

std::string DescribeComponentsResult::getMessage()const
{
	return message_;
}

std::string DescribeComponentsResult::getTraceId()const
{
	return traceId_;
}

std::vector<DescribeComponentsResult::DataItem> DescribeComponentsResult::getData()const
{
	return data_;
}

std::string DescribeComponentsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeComponentsResult::getCode()const
{
	return code_;
}

bool DescribeComponentsResult::getSuccess()const
{
	return success_;
}

