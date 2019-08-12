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

#include <alibabacloud/scdn/model/DescribeScdnIpInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnIpInfoResult::DescribeScdnIpInfoResult() :
	ServiceResult()
{}

DescribeScdnIpInfoResult::DescribeScdnIpInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnIpInfoResult::~DescribeScdnIpInfoResult()
{}

void DescribeScdnIpInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Ip"].isNull())
		ip_ = value["Ip"].asString();
	if(!value["ISP"].isNull())
		iSP_ = value["ISP"].asString();
	if(!value["IspEname"].isNull())
		ispEname_ = value["IspEname"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["RegionEname"].isNull())
		regionEname_ = value["RegionEname"].asString();

}

std::string DescribeScdnIpInfoResult::getIp()const
{
	return ip_;
}

std::string DescribeScdnIpInfoResult::getISP()const
{
	return iSP_;
}

std::string DescribeScdnIpInfoResult::getRegion()const
{
	return region_;
}

std::string DescribeScdnIpInfoResult::getIspEname()const
{
	return ispEname_;
}

std::string DescribeScdnIpInfoResult::getRegionEname()const
{
	return regionEname_;
}

