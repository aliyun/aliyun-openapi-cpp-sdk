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

#include <alibabacloud/pvtz/model/DescribeZoneInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Pvtz;
using namespace AlibabaCloud::Pvtz::Model;

DescribeZoneInfoResult::DescribeZoneInfoResult() :
	ServiceResult()
{}

DescribeZoneInfoResult::DescribeZoneInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeZoneInfoResult::~DescribeZoneInfoResult()
{}

void DescribeZoneInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBindVpcs = value["BindVpcs"]["Vpc"];
	for (auto value : allBindVpcs)
	{
		Vpc bindVpcsObject;
		if(!value["ReionId"].isNull())
			bindVpcsObject.reionId = value["ReionId"].asString();
		if(!value["VpcId"].isNull())
			bindVpcsObject.vpcId = value["VpcId"].asString();
		if(!value["VpcName"].isNull())
			bindVpcsObject.vpcName = value["VpcName"].asString();
		if(!value["RegionName"].isNull())
			bindVpcsObject.regionName = value["RegionName"].asString();
		bindVpcs_.push_back(bindVpcsObject);
	}
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["ZoneName"].isNull())
		zoneName_ = value["ZoneName"].asString();
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["RecordCount"].isNull())
		recordCount_ = std::stoi(value["RecordCount"].asString());
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["UpdateTimestamp"].isNull())
		updateTimestamp_ = std::stol(value["UpdateTimestamp"].asString());
	if(!value["IsPtr"].isNull())
		isPtr_ = value["IsPtr"].asString() == "true";

}

std::string DescribeZoneInfoResult::getZoneName()const
{
	return zoneName_;
}

std::string DescribeZoneInfoResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeZoneInfoResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeZoneInfoResult::getUpdateTime()const
{
	return updateTime_;
}

long DescribeZoneInfoResult::getUpdateTimestamp()const
{
	return updateTimestamp_;
}

std::vector<DescribeZoneInfoResult::Vpc> DescribeZoneInfoResult::getBindVpcs()const
{
	return bindVpcs_;
}

int DescribeZoneInfoResult::getRecordCount()const
{
	return recordCount_;
}

long DescribeZoneInfoResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

bool DescribeZoneInfoResult::getIsPtr()const
{
	return isPtr_;
}

std::string DescribeZoneInfoResult::getRemark()const
{
	return remark_;
}

