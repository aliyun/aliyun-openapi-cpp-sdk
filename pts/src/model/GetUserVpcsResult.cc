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

#include <alibabacloud/pts/model/GetUserVpcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetUserVpcsResult::GetUserVpcsResult() :
	ServiceResult()
{}

GetUserVpcsResult::GetUserVpcsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserVpcsResult::~GetUserVpcsResult()
{}

void GetUserVpcsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpcsNode = value["Vpcs"]["Vpc"];
	for (auto valueVpcsVpc : allVpcsNode)
	{
		Vpc vpcsObject;
		if(!valueVpcsVpc["VpcId"].isNull())
			vpcsObject.vpcId = valueVpcsVpc["VpcId"].asString();
		if(!valueVpcsVpc["RegionId"].isNull())
			vpcsObject.regionId = valueVpcsVpc["RegionId"].asString();
		if(!valueVpcsVpc["VpcName"].isNull())
			vpcsObject.vpcName = valueVpcsVpc["VpcName"].asString();
		if(!valueVpcsVpc["CidrBlock"].isNull())
			vpcsObject.cidrBlock = valueVpcsVpc["CidrBlock"].asString();
		if(!valueVpcsVpc["Description"].isNull())
			vpcsObject.description = valueVpcsVpc["Description"].asString();
		if(!valueVpcsVpc["ResourceGroupId"].isNull())
			vpcsObject.resourceGroupId = valueVpcsVpc["ResourceGroupId"].asString();
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			vpcsObject.vSwitchIds.push_back(value.asString());
		auto allRouterTableIds = value["RouterTableIds"]["RouterTableId"];
		for (auto value : allRouterTableIds)
			vpcsObject.routerTableIds.push_back(value.asString());
		vpcs_.push_back(vpcsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<GetUserVpcsResult::Vpc> GetUserVpcsResult::getVpcs()const
{
	return vpcs_;
}

long GetUserVpcsResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetUserVpcsResult::getMessage()const
{
	return message_;
}

int GetUserVpcsResult::getPageSize()const
{
	return pageSize_;
}

int GetUserVpcsResult::getPageNumber()const
{
	return pageNumber_;
}

int GetUserVpcsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetUserVpcsResult::getCode()const
{
	return code_;
}

bool GetUserVpcsResult::getSuccess()const
{
	return success_;
}

