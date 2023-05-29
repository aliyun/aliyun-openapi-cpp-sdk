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

#include <alibabacloud/market/model/DescribeProjectMessagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Market;
using namespace AlibabaCloud::Market::Model;

DescribeProjectMessagesResult::DescribeProjectMessagesResult() :
	ServiceResult()
{}

DescribeProjectMessagesResult::DescribeProjectMessagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProjectMessagesResult::~DescribeProjectMessagesResult()
{}

void DescribeProjectMessagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ProjectMessage"];
	for (auto valueResultProjectMessage : allResultNode)
	{
		ProjectMessage resultObject;
		if(!valueResultProjectMessage["GmtCreate"].isNull())
			resultObject.gmtCreate = std::stol(valueResultProjectMessage["GmtCreate"].asString());
		if(!valueResultProjectMessage["Operator"].isNull())
			resultObject._operator = std::stol(valueResultProjectMessage["Operator"].asString());
		if(!valueResultProjectMessage["OperatorRole"].isNull())
			resultObject.operatorRole = valueResultProjectMessage["OperatorRole"].asString();
		if(!valueResultProjectMessage["Content"].isNull())
			resultObject.content = valueResultProjectMessage["Content"].asString();
		if(!valueResultProjectMessage["OperatorName"].isNull())
			resultObject.operatorName = valueResultProjectMessage["OperatorName"].asString();
		result_.push_back(resultObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long DescribeProjectMessagesResult::getTotalCount()const
{
	return totalCount_;
}

bool DescribeProjectMessagesResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeProjectMessagesResult::ProjectMessage> DescribeProjectMessagesResult::getResult()const
{
	return result_;
}

