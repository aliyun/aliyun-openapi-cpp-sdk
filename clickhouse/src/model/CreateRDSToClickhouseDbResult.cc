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

#include <alibabacloud/clickhouse/model/CreateRDSToClickhouseDbResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

CreateRDSToClickhouseDbResult::CreateRDSToClickhouseDbResult() :
	ServiceResult()
{}

CreateRDSToClickhouseDbResult::CreateRDSToClickhouseDbResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRDSToClickhouseDbResult::~CreateRDSToClickhouseDbResult()
{}

void CreateRDSToClickhouseDbResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRepeatedDbs = value["RepeatedDbs"]["dbs"];
	for (const auto &item : allRepeatedDbs)
		repeatedDbs_.push_back(item.asString());
	if(!value["Status"].isNull())
		status_ = std::stol(value["Status"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

long CreateRDSToClickhouseDbResult::getStatus()const
{
	return status_;
}

std::vector<std::string> CreateRDSToClickhouseDbResult::getRepeatedDbs()const
{
	return repeatedDbs_;
}

std::string CreateRDSToClickhouseDbResult::getErrorMsg()const
{
	return errorMsg_;
}

