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

#include <alibabacloud/ddoscoo/model/DescribeIpTrafficResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeIpTrafficResult::DescribeIpTrafficResult() :
	ServiceResult()
{}

DescribeIpTrafficResult::DescribeIpTrafficResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpTrafficResult::~DescribeIpTrafficResult()
{}

void DescribeIpTrafficResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpTrafficPointsNode = value["IpTrafficPoints"]["IpTrafficPoint"];
	for (auto valueIpTrafficPointsIpTrafficPoint : allIpTrafficPointsNode)
	{
		IpTrafficPoint ipTrafficPointsObject;
		if(!valueIpTrafficPointsIpTrafficPoint["Time"].isNull())
			ipTrafficPointsObject.time = std::stol(valueIpTrafficPointsIpTrafficPoint["Time"].asString());
		if(!valueIpTrafficPointsIpTrafficPoint["MaxInbps"].isNull())
			ipTrafficPointsObject.maxInbps = std::stol(valueIpTrafficPointsIpTrafficPoint["MaxInbps"].asString());
		if(!valueIpTrafficPointsIpTrafficPoint["MaxOutbps"].isNull())
			ipTrafficPointsObject.maxOutbps = std::stol(valueIpTrafficPointsIpTrafficPoint["MaxOutbps"].asString());
		if(!valueIpTrafficPointsIpTrafficPoint["Cps"].isNull())
			ipTrafficPointsObject.cps = std::stoi(valueIpTrafficPointsIpTrafficPoint["Cps"].asString());
		if(!valueIpTrafficPointsIpTrafficPoint["ActConns"].isNull())
			ipTrafficPointsObject.actConns = std::stoi(valueIpTrafficPointsIpTrafficPoint["ActConns"].asString());
		if(!valueIpTrafficPointsIpTrafficPoint["InactConns"].isNull())
			ipTrafficPointsObject.inactConns = std::stoi(valueIpTrafficPointsIpTrafficPoint["InactConns"].asString());
		ipTrafficPoints_.push_back(ipTrafficPointsObject);
	}
	if(!value["MaxInBps"].isNull())
		maxInBps_ = std::stol(value["MaxInBps"].asString());
	if(!value["AvgInBps"].isNull())
		avgInBps_ = std::stol(value["AvgInBps"].asString());
	if(!value["MaxOutBps"].isNull())
		maxOutBps_ = std::stol(value["MaxOutBps"].asString());
	if(!value["AvgOutBps"].isNull())
		avgOutBps_ = std::stol(value["AvgOutBps"].asString());

}

long DescribeIpTrafficResult::getMaxOutBps()const
{
	return maxOutBps_;
}

long DescribeIpTrafficResult::getMaxInBps()const
{
	return maxInBps_;
}

long DescribeIpTrafficResult::getAvgInBps()const
{
	return avgInBps_;
}

long DescribeIpTrafficResult::getAvgOutBps()const
{
	return avgOutBps_;
}

std::vector<DescribeIpTrafficResult::IpTrafficPoint> DescribeIpTrafficResult::getIpTrafficPoints()const
{
	return ipTrafficPoints_;
}

