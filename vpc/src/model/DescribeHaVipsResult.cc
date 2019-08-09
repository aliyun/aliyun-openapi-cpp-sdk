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

#include <alibabacloud/vpc/model/DescribeHaVipsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeHaVipsResult::DescribeHaVipsResult() :
	ServiceResult()
{}

DescribeHaVipsResult::DescribeHaVipsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHaVipsResult::~DescribeHaVipsResult()
{}

void DescribeHaVipsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHaVips = value["HaVips"]["HaVip"];
	for (auto value : allHaVips)
	{
		HaVip haVipsObject;
		if(!value["HaVipId"].isNull())
			haVipsObject.haVipId = value["HaVipId"].asString();
		if(!value["RegionId"].isNull())
			haVipsObject.regionId = value["RegionId"].asString();
		if(!value["VpcId"].isNull())
			haVipsObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			haVipsObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["IpAddress"].isNull())
			haVipsObject.ipAddress = value["IpAddress"].asString();
		if(!value["Status"].isNull())
			haVipsObject.status = value["Status"].asString();
		if(!value["MasterInstanceId"].isNull())
			haVipsObject.masterInstanceId = value["MasterInstanceId"].asString();
		if(!value["Description"].isNull())
			haVipsObject.description = value["Description"].asString();
		if(!value["Name"].isNull())
			haVipsObject.name = value["Name"].asString();
		if(!value["ChargeType"].isNull())
			haVipsObject.chargeType = value["ChargeType"].asString();
		if(!value["CreateTime"].isNull())
			haVipsObject.createTime = value["CreateTime"].asString();
		auto allAssociatedInstances = value["AssociatedInstances"]["associatedInstance"];
		for (auto value : allAssociatedInstances)
			haVipsObject.associatedInstances.push_back(value.asString());
		auto allAssociatedEipAddresses = value["AssociatedEipAddresses"]["associatedEipAddresse"];
		for (auto value : allAssociatedEipAddresses)
			haVipsObject.associatedEipAddresses.push_back(value.asString());
		haVips_.push_back(haVipsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeHaVipsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeHaVipsResult::HaVip> DescribeHaVipsResult::getHaVips()const
{
	return haVips_;
}

int DescribeHaVipsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHaVipsResult::getPageNumber()const
{
	return pageNumber_;
}

