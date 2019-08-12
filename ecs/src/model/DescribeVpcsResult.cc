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

#include <alibabacloud/ecs/model/DescribeVpcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeVpcsResult::DescribeVpcsResult() :
	ServiceResult()
{}

DescribeVpcsResult::DescribeVpcsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpcsResult::~DescribeVpcsResult()
{}

void DescribeVpcsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVpcs = value["Vpcs"]["Vpc"];
	for (auto value : allVpcs)
	{
		Vpc vpcsObject;
		if(!value["VpcId"].isNull())
			vpcsObject.vpcId = value["VpcId"].asString();
		if(!value["RegionId"].isNull())
			vpcsObject.regionId = value["RegionId"].asString();
		if(!value["Status"].isNull())
			vpcsObject.status = value["Status"].asString();
		if(!value["VpcName"].isNull())
			vpcsObject.vpcName = value["VpcName"].asString();
		if(!value["CreationTime"].isNull())
			vpcsObject.creationTime = value["CreationTime"].asString();
		if(!value["CidrBlock"].isNull())
			vpcsObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["VRouterId"].isNull())
			vpcsObject.vRouterId = value["VRouterId"].asString();
		if(!value["Description"].isNull())
			vpcsObject.description = value["Description"].asString();
		if(!value["IsDefault"].isNull())
			vpcsObject.isDefault = value["IsDefault"].asString() == "true";
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			vpcsObject.vSwitchIds.push_back(value.asString());
		auto allUserCidrs = value["UserCidrs"]["UserCidr"];
		for (auto value : allUserCidrs)
			vpcsObject.userCidrs.push_back(value.asString());
		vpcs_.push_back(vpcsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeVpcsResult::Vpc> DescribeVpcsResult::getVpcs()const
{
	return vpcs_;
}

int DescribeVpcsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVpcsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVpcsResult::getPageNumber()const
{
	return pageNumber_;
}

