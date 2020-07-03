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

#include <alibabacloud/airec/model/DescribeDataSetMessageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeDataSetMessageResult::DescribeDataSetMessageResult() :
	ServiceResult()
{}

DescribeDataSetMessageResult::DescribeDataSetMessageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSetMessageResult::~DescribeDataSetMessageResult()
{}

void DescribeDataSetMessageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Message"].isNull())
			resultObject.message = valueResultResultItem["Message"].asString();
		if(!valueResultResultItem["ErrorLevel"].isNull())
			resultObject.errorLevel = valueResultResultItem["ErrorLevel"].asString();
		if(!valueResultResultItem["ErrorType"].isNull())
			resultObject.errorType = valueResultResultItem["ErrorType"].asString();
		if(!valueResultResultItem["Timestamp"].isNull())
			resultObject.timestamp = valueResultResultItem["Timestamp"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeDataSetMessageResult::getMessage()const
{
	return message_;
}

std::string DescribeDataSetMessageResult::getCode()const
{
	return code_;
}

std::vector<DescribeDataSetMessageResult::ResultItem> DescribeDataSetMessageResult::getResult()const
{
	return result_;
}

