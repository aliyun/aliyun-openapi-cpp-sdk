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

#include <alibabacloud/clickhouse/model/DescribeAccountAuthorityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeAccountAuthorityResult::DescribeAccountAuthorityResult() :
	ServiceResult()
{}

DescribeAccountAuthorityResult::DescribeAccountAuthorityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountAuthorityResult::~DescribeAccountAuthorityResult()
{}

void DescribeAccountAuthorityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTotalDatabases = value["TotalDatabases"]["TotalDatabases"];
	for (const auto &item : allTotalDatabases)
		totalDatabases_.push_back(item.asString());
	auto allTotalDictionaries = value["TotalDictionaries"]["TotalDictionaries"];
	for (const auto &item : allTotalDictionaries)
		totalDictionaries_.push_back(item.asString());
	auto allAllowDictionaries = value["AllowDictionaries"]["AllowDictionaries"];
	for (const auto &item : allAllowDictionaries)
		allowDictionaries_.push_back(item.asString());
	auto allAllowDatabases = value["AllowDatabases"]["AllowDatabases"];
	for (const auto &item : allAllowDatabases)
		allowDatabases_.push_back(item.asString());
	if(!value["DdlAuthority"].isNull())
		ddlAuthority_ = value["DdlAuthority"].asString() == "true";
	if(!value["DmlAuthority"].isNull())
		dmlAuthority_ = value["DmlAuthority"].asString();
	if(!value["AccountName"].isNull())
		accountName_ = value["AccountName"].asString();

}

bool DescribeAccountAuthorityResult::getDdlAuthority()const
{
	return ddlAuthority_;
}

std::string DescribeAccountAuthorityResult::getDmlAuthority()const
{
	return dmlAuthority_;
}

std::vector<std::string> DescribeAccountAuthorityResult::getTotalDatabases()const
{
	return totalDatabases_;
}

std::vector<std::string> DescribeAccountAuthorityResult::getTotalDictionaries()const
{
	return totalDictionaries_;
}

std::vector<std::string> DescribeAccountAuthorityResult::getAllowDictionaries()const
{
	return allowDictionaries_;
}

std::vector<std::string> DescribeAccountAuthorityResult::getAllowDatabases()const
{
	return allowDatabases_;
}

std::string DescribeAccountAuthorityResult::getAccountName()const
{
	return accountName_;
}

