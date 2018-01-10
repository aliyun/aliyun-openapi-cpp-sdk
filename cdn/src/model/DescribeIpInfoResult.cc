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
	cdnIp_ = value["CdnIp"].asString();
	iSP_ = value["ISP"].asString();
	ispEname_ = value["IspEname"].asString();
	region_ = value["Region"].asString();
	regionEname_ = value["RegionEname"].asString();

}

std::string DescribeIpInfoResult::getISP()const
{
	return iSP_;
}

void DescribeIpInfoResult::setISP(const std::string& iSP)
{
	iSP_ = iSP;
}

std::string DescribeIpInfoResult::getRegion()const
{
	return region_;
}

void DescribeIpInfoResult::setRegion(const std::string& region)
{
	region_ = region;
}

std::string DescribeIpInfoResult::getIspEname()const
{
	return ispEname_;
}

void DescribeIpInfoResult::setIspEname(const std::string& ispEname)
{
	ispEname_ = ispEname;
}

std::string DescribeIpInfoResult::getCdnIp()const
{
	return cdnIp_;
}

void DescribeIpInfoResult::setCdnIp(const std::string& cdnIp)
{
	cdnIp_ = cdnIp;
}

std::string DescribeIpInfoResult::getRegionEname()const
{
	return regionEname_;
}

void DescribeIpInfoResult::setRegionEname(const std::string& regionEname)
{
	regionEname_ = regionEname;
}

