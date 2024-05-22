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

#include <alibabacloud/polardbx/model/DescribeAccountListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeAccountListResult::DescribeAccountListResult() :
	ServiceResult()
{}

DescribeAccountListResult::DescribeAccountListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountListResult::~DescribeAccountListResult()
{}

void DescribeAccountListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Account"];
	for (auto valueDataAccount : allDataNode)
	{
		Account dataObject;
		if(!valueDataAccount["GmtCreated"].isNull())
			dataObject.gmtCreated = valueDataAccount["GmtCreated"].asString();
		if(!valueDataAccount["DBInstanceName"].isNull())
			dataObject.dBInstanceName = valueDataAccount["DBInstanceName"].asString();
		if(!valueDataAccount["AccountDescription"].isNull())
			dataObject.accountDescription = valueDataAccount["AccountDescription"].asString();
		if(!valueDataAccount["DBName"].isNull())
			dataObject.dBName = valueDataAccount["DBName"].asString();
		if(!valueDataAccount["AccountPrivilege"].isNull())
			dataObject.accountPrivilege = valueDataAccount["AccountPrivilege"].asString();
		if(!valueDataAccount["AccountType"].isNull())
			dataObject.accountType = valueDataAccount["AccountType"].asString();
		if(!valueDataAccount["AccountName"].isNull())
			dataObject.accountName = valueDataAccount["AccountName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeAccountListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeAccountListResult::Account> DescribeAccountListResult::getData()const
{
	return data_;
}

bool DescribeAccountListResult::getSuccess()const
{
	return success_;
}

