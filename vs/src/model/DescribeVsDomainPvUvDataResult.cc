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

#include <alibabacloud/vs/model/DescribeVsDomainPvUvDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsDomainPvUvDataResult::DescribeVsDomainPvUvDataResult() :
	ServiceResult()
{}

DescribeVsDomainPvUvDataResult::DescribeVsDomainPvUvDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsDomainPvUvDataResult::~DescribeVsDomainPvUvDataResult()
{}

void DescribeVsDomainPvUvDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPvUvDataInfosNode = value["PvUvDataInfos"]["PvUvDataInfo"];
	for (auto valuePvUvDataInfosPvUvDataInfo : allPvUvDataInfosNode)
	{
		PvUvDataInfo pvUvDataInfosObject;
		if(!valuePvUvDataInfosPvUvDataInfo["PV"].isNull())
			pvUvDataInfosObject.pV = valuePvUvDataInfosPvUvDataInfo["PV"].asString();
		if(!valuePvUvDataInfosPvUvDataInfo["UV"].isNull())
			pvUvDataInfosObject.uV = valuePvUvDataInfosPvUvDataInfo["UV"].asString();
		if(!valuePvUvDataInfosPvUvDataInfo["TimeStamp"].isNull())
			pvUvDataInfosObject.timeStamp = valuePvUvDataInfosPvUvDataInfo["TimeStamp"].asString();
		pvUvDataInfos_.push_back(pvUvDataInfosObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();

}

std::string DescribeVsDomainPvUvDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVsDomainPvUvDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVsDomainPvUvDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVsDomainPvUvDataResult::getDataInterval()const
{
	return dataInterval_;
}

std::vector<DescribeVsDomainPvUvDataResult::PvUvDataInfo> DescribeVsDomainPvUvDataResult::getPvUvDataInfos()const
{
	return pvUvDataInfos_;
}

