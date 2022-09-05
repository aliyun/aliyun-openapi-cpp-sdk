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

#include <alibabacloud/cdn/model/DescribeIpInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeIpInfoResult::DescribeIpInfoResult() :
	ServiceResult()
{}

DescribeIpInfoResult::DescribeIpInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIpInfoResult::~DescribeIpInfoResult()
{}

void DescribeIpInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CdnIp"].isNull())
		cdnIp_ = value["CdnIp"].asString();
	if(!value["RegionEname"].isNull())
		regionEname_ = value["RegionEname"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["IspEname"].isNull())
		ispEname_ = value["IspEname"].asString();
	if(!value["ISP"].isNull())
		iSP_ = value["ISP"].asString();

}

std::string DescribeIpInfoResult::getISP()const
{
	return iSP_;
}

std::string DescribeIpInfoResult::getRegion()const
{
	return region_;
}

std::string DescribeIpInfoResult::getIspEname()const
{
	return ispEname_;
}

std::string DescribeIpInfoResult::getCdnIp()const
{
	return cdnIp_;
}

std::string DescribeIpInfoResult::getRegionEname()const
{
	return regionEname_;
}

