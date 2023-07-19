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

#include <alibabacloud/dts/model/DescribeEtlJobLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeEtlJobLogsResult::DescribeEtlJobLogsResult() :
	ServiceResult()
{}

DescribeEtlJobLogsResult::DescribeEtlJobLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEtlJobLogsResult::~DescribeEtlJobLogsResult()
{}

void DescribeEtlJobLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEtlRunningLogsNode = value["EtlRunningLogs"]["EtlRunningLog"];
	for (auto valueEtlRunningLogsEtlRunningLog : allEtlRunningLogsNode)
	{
		EtlRunningLog etlRunningLogsObject;
		if(!valueEtlRunningLogsEtlRunningLog["EtlId"].isNull())
			etlRunningLogsObject.etlId = valueEtlRunningLogsEtlRunningLog["EtlId"].asString();
		if(!valueEtlRunningLogsEtlRunningLog["UserId"].isNull())
			etlRunningLogsObject.userId = valueEtlRunningLogsEtlRunningLog["UserId"].asString();
		if(!valueEtlRunningLogsEtlRunningLog["ContentKey"].isNull())
			etlRunningLogsObject.contentKey = valueEtlRunningLogsEtlRunningLog["ContentKey"].asString();
		if(!valueEtlRunningLogsEtlRunningLog["Content"].isNull())
			etlRunningLogsObject.content = valueEtlRunningLogsEtlRunningLog["Content"].asString();
		if(!valueEtlRunningLogsEtlRunningLog["Status"].isNull())
			etlRunningLogsObject.status = valueEtlRunningLogsEtlRunningLog["Status"].asString();
		if(!valueEtlRunningLogsEtlRunningLog["LogDatetime"].isNull())
			etlRunningLogsObject.logDatetime = valueEtlRunningLogsEtlRunningLog["LogDatetime"].asString();
		etlRunningLogs_.push_back(etlRunningLogsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();

}

std::vector<DescribeEtlJobLogsResult::EtlRunningLog> DescribeEtlJobLogsResult::getEtlRunningLogs()const
{
	return etlRunningLogs_;
}

int DescribeEtlJobLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeEtlJobLogsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeEtlJobLogsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeEtlJobLogsResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeEtlJobLogsResult::getSuccess()const
{
	return success_;
}

std::string DescribeEtlJobLogsResult::getErrCode()const
{
	return errCode_;
}

