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

#include <alibabacloud/dcdn/model/DescribeDcdnIpInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnIpInfoResult::DescribeDcdnIpInfoResult() :
	ServiceResult()
{}

DescribeDcdnIpInfoResult::DescribeDcdnIpInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnIpInfoResult::~DescribeDcdnIpInfoResult()
{}

void DescribeDcdnIpInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["RegionEname"].isNull())
		regionEname_ = value["RegionEname"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["IspEname"].isNull())
		ispEname_ = value["IspEname"].asString();
	if(!value["DcdnIp"].isNull())
		dcdnIp_ = value["DcdnIp"].asString();
	if(!value["ISP"].isNull())
		iSP_ = value["ISP"].asString();

}

std::string DescribeDcdnIpInfoResult::getISP()const
{
	return iSP_;
}

std::string DescribeDcdnIpInfoResult::getRegion()const
{
	return region_;
}

std::string DescribeDcdnIpInfoResult::getIspEname()const
{
	return ispEname_;
}

std::string DescribeDcdnIpInfoResult::getRegionEname()const
{
	return regionEname_;
}

std::string DescribeDcdnIpInfoResult::getDcdnIp()const
{
	return dcdnIp_;
}

