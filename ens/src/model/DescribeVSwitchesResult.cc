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

#include <alibabacloud/ens/model/DescribeVSwitchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeVSwitchesResult::DescribeVSwitchesResult() :
	ServiceResult()
{}

DescribeVSwitchesResult::DescribeVSwitchesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVSwitchesResult::~DescribeVSwitchesResult()
{}

void DescribeVSwitchesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVSwitchesNode = value["VSwitches"]["VSwitch"];
	for (auto valueVSwitchesVSwitch : allVSwitchesNode)
	{
		VSwitch vSwitchesObject;
		if(!valueVSwitchesVSwitch["EnsRegionId"].isNull())
			vSwitchesObject.ensRegionId = valueVSwitchesVSwitch["EnsRegionId"].asString();
		if(!valueVSwitchesVSwitch["Status"].isNull())
			vSwitchesObject.status = valueVSwitchesVSwitch["Status"].asString();
		if(!valueVSwitchesVSwitch["FreeIpCount"].isNull())
			vSwitchesObject.freeIpCount = std::stol(valueVSwitchesVSwitch["FreeIpCount"].asString());
		if(!valueVSwitchesVSwitch["VSwitchId"].isNull())
			vSwitchesObject.vSwitchId = valueVSwitchesVSwitch["VSwitchId"].asString();
		if(!valueVSwitchesVSwitch["CidrBlock"].isNull())
			vSwitchesObject.cidrBlock = valueVSwitchesVSwitch["CidrBlock"].asString();
		if(!valueVSwitchesVSwitch["Description"].isNull())
			vSwitchesObject.description = valueVSwitchesVSwitch["Description"].asString();
		if(!valueVSwitchesVSwitch["NetworkId"].isNull())
			vSwitchesObject.networkId = valueVSwitchesVSwitch["NetworkId"].asString();
		if(!valueVSwitchesVSwitch["CreatedTime"].isNull())
			vSwitchesObject.createdTime = valueVSwitchesVSwitch["CreatedTime"].asString();
		if(!valueVSwitchesVSwitch["VSwitchName"].isNull())
			vSwitchesObject.vSwitchName = valueVSwitchesVSwitch["VSwitchName"].asString();
		vSwitches_.push_back(vSwitchesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVSwitchesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVSwitchesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVSwitchesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVSwitchesResult::VSwitch> DescribeVSwitchesResult::getVSwitches()const
{
	return vSwitches_;
}

