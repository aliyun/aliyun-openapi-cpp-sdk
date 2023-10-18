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

#include <alibabacloud/live/model/DescribeLiveIpInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveIpInfoResult::DescribeLiveIpInfoResult() :
	ServiceResult()
{}

DescribeLiveIpInfoResult::DescribeLiveIpInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveIpInfoResult::~DescribeLiveIpInfoResult()
{}

void DescribeLiveIpInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IspEname"].isNull())
		ispEname_ = value["IspEname"].asString();
	if(!value["RegionEname"].isNull())
		regionEname_ = value["RegionEname"].asString();
	if(!value["ISP"].isNull())
		iSP_ = value["ISP"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();

}

std::string DescribeLiveIpInfoResult::getISP()const
{
	return iSP_;
}

std::string DescribeLiveIpInfoResult::getRegion()const
{
	return region_;
}

std::string DescribeLiveIpInfoResult::getIspEname()const
{
	return ispEname_;
}

std::string DescribeLiveIpInfoResult::getRegionEname()const
{
	return regionEname_;
}

