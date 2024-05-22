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

#include <alibabacloud/polardbx/model/DescribeDbListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeDbListResult::DescribeDbListResult() :
	ServiceResult()
{}

DescribeDbListResult::DescribeDbListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDbListResult::~DescribeDbListResult()
{}

void DescribeDbListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DB"];
	for (auto valueDataDB : allDataNode)
	{
		DB dataObject;
		if(!valueDataDB["DBName"].isNull())
			dataObject.dBName = valueDataDB["DBName"].asString();
		if(!valueDataDB["DBDescription"].isNull())
			dataObject.dBDescription = valueDataDB["DBDescription"].asString();
		if(!valueDataDB["DBInstanceName"].isNull())
			dataObject.dBInstanceName = valueDataDB["DBInstanceName"].asString();
		if(!valueDataDB["CharacterSetName"].isNull())
			dataObject.characterSetName = valueDataDB["CharacterSetName"].asString();
		auto allAccountsNode = valueDataDB["Accounts"]["Account"];
		for (auto valueDataDBAccountsAccount : allAccountsNode)
		{
			DB::Account accountsObject;
			if(!valueDataDBAccountsAccount["AccountPrivilege"].isNull())
				accountsObject.accountPrivilege = valueDataDBAccountsAccount["AccountPrivilege"].asString();
			if(!valueDataDBAccountsAccount["AccountName"].isNull())
				accountsObject.accountName = valueDataDBAccountsAccount["AccountName"].asString();
			dataObject.accounts.push_back(accountsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeDbListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeDbListResult::DB> DescribeDbListResult::getData()const
{
	return data_;
}

bool DescribeDbListResult::getSuccess()const
{
	return success_;
}

