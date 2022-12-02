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

#include <alibabacloud/dts/model/DescribeDedicatedClusterMonitorRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeDedicatedClusterMonitorRuleResult::DescribeDedicatedClusterMonitorRuleResult() :
	ServiceResult()
{}

DescribeDedicatedClusterMonitorRuleResult::DescribeDedicatedClusterMonitorRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedClusterMonitorRuleResult::~DescribeDedicatedClusterMonitorRuleResult()
{}

void DescribeDedicatedClusterMonitorRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["DedicatedClusterId"].isNull())
		dedicatedClusterId_ = value["DedicatedClusterId"].asString();
	if(!value["NoticeSwitch"].isNull())
		noticeSwitch_ = value["NoticeSwitch"].asString();
	if(!value["DuAlarmThreshold"].isNull())
		duAlarmThreshold_ = value["DuAlarmThreshold"].asString();
	if(!value["CpuAlarmThreshold"].isNull())
		cpuAlarmThreshold_ = value["CpuAlarmThreshold"].asString();
	if(!value["MemAlarmThreshold"].isNull())
		memAlarmThreshold_ = value["MemAlarmThreshold"].asString();
	if(!value["DiskAlarmThreshold"].isNull())
		diskAlarmThreshold_ = value["DiskAlarmThreshold"].asString();
	if(!value["Phones"].isNull())
		phones_ = value["Phones"].asString();

}

std::string DescribeDedicatedClusterMonitorRuleResult::getNoticeSwitch()const
{
	return noticeSwitch_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getDedicatedClusterId()const
{
	return dedicatedClusterId_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getPhones()const
{
	return phones_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getDuAlarmThreshold()const
{
	return duAlarmThreshold_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getCpuAlarmThreshold()const
{
	return cpuAlarmThreshold_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getMemAlarmThreshold()const
{
	return memAlarmThreshold_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getDiskAlarmThreshold()const
{
	return diskAlarmThreshold_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getSuccess()const
{
	return success_;
}

std::string DescribeDedicatedClusterMonitorRuleResult::getErrCode()const
{
	return errCode_;
}

