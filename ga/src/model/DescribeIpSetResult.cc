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

#include <alibabacloud/ga/model/DescribeIpSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

DescribeIpSetResult::DescribeIpSetResult() :
	ServiceResult()
{}

DescribeIpSetResult::DescribeIpSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpSetResult::~DescribeIpSetResult()
{}

void DescribeIpSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpAddressList = value["IpAddressList"]["IpAddressList"];
	for (const auto &item : allIpAddressList)
		ipAddressList_.push_back(item.asString());
	if(!value["IpSetId"].isNull())
		ipSetId_ = value["IpSetId"].asString();
	if(!value["IpVersion"].isNull())
		ipVersion_ = value["IpVersion"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["Bandwidth"].isNull())
		bandwidth_ = std::stoi(value["Bandwidth"].asString());
	if(!value["IspType"].isNull())
		ispType_ = value["IspType"].asString();
	if(!value["AccelerateRegionId"].isNull())
		accelerateRegionId_ = value["AccelerateRegionId"].asString();
	if(!value["AcceleratorId"].isNull())
		acceleratorId_ = value["AcceleratorId"].asString();

}

std::string DescribeIpSetResult::getIpSetId()const
{
	return ipSetId_;
}

std::string DescribeIpSetResult::getIpVersion()const
{
	return ipVersion_;
}

std::string DescribeIpSetResult::getState()const
{
	return state_;
}

std::string DescribeIpSetResult::getIspType()const
{
	return ispType_;
}

int DescribeIpSetResult::getBandwidth()const
{
	return bandwidth_;
}

std::vector<std::string> DescribeIpSetResult::getIpAddressList()const
{
	return ipAddressList_;
}

std::string DescribeIpSetResult::getAccelerateRegionId()const
{
	return accelerateRegionId_;
}

std::string DescribeIpSetResult::getAcceleratorId()const
{
	return acceleratorId_;
}

