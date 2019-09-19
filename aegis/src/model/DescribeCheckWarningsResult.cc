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

#include <alibabacloud/aegis/model/DescribeCheckWarningsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeCheckWarningsResult::DescribeCheckWarningsResult() :
	ServiceResult()
{}

DescribeCheckWarningsResult::DescribeCheckWarningsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCheckWarningsResult::~DescribeCheckWarningsResult()
{}

void DescribeCheckWarningsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCheckWarningsNode = value["CheckWarnings"]["CheckWarning"];
	for (auto valueCheckWarningsCheckWarning : allCheckWarningsNode)
	{
		CheckWarning checkWarningsObject;
		if(!valueCheckWarningsCheckWarning["Uuid"].isNull())
			checkWarningsObject.uuid = valueCheckWarningsCheckWarning["Uuid"].asString();
		if(!valueCheckWarningsCheckWarning["CheckId"].isNull())
			checkWarningsObject.checkId = std::stol(valueCheckWarningsCheckWarning["CheckId"].asString());
		if(!valueCheckWarningsCheckWarning["CheckWarningId"].isNull())
			checkWarningsObject.checkWarningId = std::stol(valueCheckWarningsCheckWarning["CheckWarningId"].asString());
		if(!valueCheckWarningsCheckWarning["Level"].isNull())
			checkWarningsObject.level = valueCheckWarningsCheckWarning["Level"].asString();
		if(!valueCheckWarningsCheckWarning["Item"].isNull())
			checkWarningsObject.item = valueCheckWarningsCheckWarning["Item"].asString();
		if(!valueCheckWarningsCheckWarning["Type"].isNull())
			checkWarningsObject.type = valueCheckWarningsCheckWarning["Type"].asString();
		if(!valueCheckWarningsCheckWarning["Status"].isNull())
			checkWarningsObject.status = std::stoi(valueCheckWarningsCheckWarning["Status"].asString());
		if(!valueCheckWarningsCheckWarning["Reason"].isNull())
			checkWarningsObject.reason = valueCheckWarningsCheckWarning["Reason"].asString();
		checkWarnings_.push_back(checkWarningsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeCheckWarningsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeCheckWarningsResult::CheckWarning> DescribeCheckWarningsResult::getCheckWarnings()const
{
	return checkWarnings_;
}

int DescribeCheckWarningsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCheckWarningsResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeCheckWarningsResult::getCount()const
{
	return count_;
}

