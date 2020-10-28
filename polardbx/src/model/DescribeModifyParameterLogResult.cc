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

#include <alibabacloud/polardbx/model/DescribeModifyParameterLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardbx;
using namespace AlibabaCloud::Polardbx::Model;

DescribeModifyParameterLogResult::DescribeModifyParameterLogResult() :
	ServiceResult()
{}

DescribeModifyParameterLogResult::DescribeModifyParameterLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeModifyParameterLogResult::~DescribeModifyParameterLogResult()
{}

void DescribeModifyParameterLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChangeLogsNode = value["ChangeLogs"]["ChangeLog"];
	for (auto valueChangeLogsChangeLog : allChangeLogsNode)
	{
		ChangeLog changeLogsObject;
		if(!valueChangeLogsChangeLog["ParameterName"].isNull())
			changeLogsObject.parameterName = valueChangeLogsChangeLog["ParameterName"].asString();
		if(!valueChangeLogsChangeLog["OldParameterValue"].isNull())
			changeLogsObject.oldParameterValue = valueChangeLogsChangeLog["OldParameterValue"].asString();
		if(!valueChangeLogsChangeLog["NewParameterValue"].isNull())
			changeLogsObject.newParameterValue = valueChangeLogsChangeLog["NewParameterValue"].asString();
		if(!valueChangeLogsChangeLog["Synced"].isNull())
			changeLogsObject.synced = std::stoi(valueChangeLogsChangeLog["Synced"].asString());
		if(!valueChangeLogsChangeLog["ChangeTime"].isNull())
			changeLogsObject.changeTime = valueChangeLogsChangeLog["ChangeTime"].asString();
		changeLogs_.push_back(changeLogsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeModifyParameterLogResult::ChangeLog> DescribeModifyParameterLogResult::getChangeLogs()const
{
	return changeLogs_;
}

int DescribeModifyParameterLogResult::getPageSize()const
{
	return pageSize_;
}

int DescribeModifyParameterLogResult::getPageNumber()const
{
	return pageNumber_;
}

