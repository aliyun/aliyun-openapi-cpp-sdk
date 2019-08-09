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

#include <alibabacloud/aegis/model/DescribeStrategyExecDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeStrategyExecDetailResult::DescribeStrategyExecDetailResult() :
	ServiceResult()
{}

DescribeStrategyExecDetailResult::DescribeStrategyExecDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStrategyExecDetailResult::~DescribeStrategyExecDetailResult()
{}

void DescribeStrategyExecDetailResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allFailedEcsList = value["FailedEcsList"]["FailedEcs"];
	for (auto value : allFailedEcsList)
	{
		FailedEcs failedEcsListObject;
		if(!value["Reason"].isNull())
			failedEcsListObject.reason = value["Reason"].asString();
		if(!value["InstanceName"].isNull())
			failedEcsListObject.instanceName = value["InstanceName"].asString();
		if(!value["IP"].isNull())
			failedEcsListObject.iP = value["IP"].asString();
		if(!value["InternetIp"].isNull())
			failedEcsListObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			failedEcsListObject.intranetIp = value["IntranetIp"].asString();
		failedEcsList_.push_back(failedEcsListObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["Source"].isNull())
		source_ = value["Source"].asString();
	if(!value["Percent"].isNull())
		percent_ = value["Percent"].asString();
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["FailCount"].isNull())
		failCount_ = std::stoi(value["FailCount"].asString());
	if(!value["InProcessCount"].isNull())
		inProcessCount_ = std::stoi(value["InProcessCount"].asString());

}

std::string DescribeStrategyExecDetailResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeStrategyExecDetailResult::getPercent()const
{
	return percent_;
}

int DescribeStrategyExecDetailResult::getFailCount()const
{
	return failCount_;
}

std::string DescribeStrategyExecDetailResult::getStartTime()const
{
	return startTime_;
}

int DescribeStrategyExecDetailResult::getSuccessCount()const
{
	return successCount_;
}

std::vector<DescribeStrategyExecDetailResult::FailedEcs> DescribeStrategyExecDetailResult::getFailedEcsList()const
{
	return failedEcsList_;
}

std::string DescribeStrategyExecDetailResult::getSource()const
{
	return source_;
}

int DescribeStrategyExecDetailResult::getInProcessCount()const
{
	return inProcessCount_;
}

