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

#include <alibabacloud/vpc/model/DescribeBgpNetworksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeBgpNetworksResult::DescribeBgpNetworksResult() :
	ServiceResult()
{}

DescribeBgpNetworksResult::DescribeBgpNetworksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBgpNetworksResult::~DescribeBgpNetworksResult()
{}

void DescribeBgpNetworksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBgpNetworks = value["BgpNetworks"]["BgpNetwork"];
	for (auto value : allBgpNetworks)
	{
		BgpNetwork bgpNetworksObject;
		if(!value["VpcId"].isNull())
			bgpNetworksObject.vpcId = value["VpcId"].asString();
		if(!value["DstCidrBlock"].isNull())
			bgpNetworksObject.dstCidrBlock = value["DstCidrBlock"].asString();
		if(!value["RouterId"].isNull())
			bgpNetworksObject.routerId = value["RouterId"].asString();
		bgpNetworks_.push_back(bgpNetworksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeBgpNetworksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeBgpNetworksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBgpNetworksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBgpNetworksResult::BgpNetwork> DescribeBgpNetworksResult::getBgpNetworks()const
{
	return bgpNetworks_;
}

