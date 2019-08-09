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

#include <alibabacloud/pvtz/model/DescribeChangeLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

DescribeChangeLogsResult::DescribeChangeLogsResult() :
	ServiceResult()
{}

DescribeChangeLogsResult::DescribeChangeLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeChangeLogsResult::~DescribeChangeLogsResult()
{}

void DescribeChangeLogsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allChangeLogs = value["ChangeLogs"]["ChangeLog"];
	for (auto value : allChangeLogs)
	{
		ChangeLog changeLogsObject;
		if(!value["OperTime"].isNull())
			changeLogsObject.operTime = value["OperTime"].asString();
		if(!value["OperAction"].isNull())
			changeLogsObject.operAction = value["OperAction"].asString();
		if(!value["OperObject"].isNull())
			changeLogsObject.operObject = value["OperObject"].asString();
		if(!value["EntityId"].isNull())
			changeLogsObject.entityId = value["EntityId"].asString();
		if(!value["EntityName"].isNull())
			changeLogsObject.entityName = value["EntityName"].asString();
		if(!value["OperIp"].isNull())
			changeLogsObject.operIp = value["OperIp"].asString();
		if(!value["OperTimestamp"].isNull())
			changeLogsObject.operTimestamp = std::stol(value["OperTimestamp"].asString());
		if(!value["Id"].isNull())
			changeLogsObject.id = std::stol(value["Id"].asString());
		if(!value["Content"].isNull())
			changeLogsObject.content = value["Content"].asString();
		changeLogs_.push_back(changeLogsObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeChangeLogsResult::ChangeLog> DescribeChangeLogsResult::getChangeLogs()const
{
	return changeLogs_;
}

int DescribeChangeLogsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeChangeLogsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeChangeLogsResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeChangeLogsResult::getTotalItems()const
{
	return totalItems_;
}

