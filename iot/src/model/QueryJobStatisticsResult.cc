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

#include <alibabacloud/iot/model/QueryJobStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryJobStatisticsResult::QueryJobStatisticsResult() :
	ServiceResult()
{}

QueryJobStatisticsResult::QueryJobStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryJobStatisticsResult::~QueryJobStatisticsResult()
{}

void QueryJobStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["Queued"].isNull())
		data_.queued = std::stoi(dataNode["Queued"].asString());
	if(!dataNode["Sent"].isNull())
		data_.sent = std::stoi(dataNode["Sent"].asString());
	if(!dataNode["InProgress"].isNull())
		data_.inProgress = std::stoi(dataNode["InProgress"].asString());
	if(!dataNode["Succeeded"].isNull())
		data_.succeeded = std::stoi(dataNode["Succeeded"].asString());
	if(!dataNode["Failed"].isNull())
		data_.failed = std::stoi(dataNode["Failed"].asString());
	if(!dataNode["Rejected"].isNull())
		data_.rejected = std::stoi(dataNode["Rejected"].asString());
	if(!dataNode["TimeOut"].isNull())
		data_.timeOut = std::stoi(dataNode["TimeOut"].asString());
	if(!dataNode["Cancelled"].isNull())
		data_.cancelled = std::stoi(dataNode["Cancelled"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryJobStatisticsResult::Data QueryJobStatisticsResult::getData()const
{
	return data_;
}

std::string QueryJobStatisticsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryJobStatisticsResult::getCode()const
{
	return code_;
}

bool QueryJobStatisticsResult::getSuccess()const
{
	return success_;
}

