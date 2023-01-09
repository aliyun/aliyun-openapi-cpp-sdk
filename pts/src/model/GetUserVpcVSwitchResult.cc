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

#include <alibabacloud/pts/model/GetUserVpcVSwitchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetUserVpcVSwitchResult::GetUserVpcVSwitchResult() :
	ServiceResult()
{}

GetUserVpcVSwitchResult::GetUserVpcVSwitchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserVpcVSwitchResult::~GetUserVpcVSwitchResult()
{}

void GetUserVpcVSwitchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVSwitchListNode = value["VSwitchList"]["VSwitch"];
	for (auto valueVSwitchListVSwitch : allVSwitchListNode)
	{
		VSwitch vSwitchListObject;
		if(!valueVSwitchListVSwitch["VpcId"].isNull())
			vSwitchListObject.vpcId = valueVSwitchListVSwitch["VpcId"].asString();
		if(!valueVSwitchListVSwitch["MaxAgentCount"].isNull())
			vSwitchListObject.maxAgentCount = std::stoi(valueVSwitchListVSwitch["MaxAgentCount"].asString());
		if(!valueVSwitchListVSwitch["AvailableIpAddressCount"].isNull())
			vSwitchListObject.availableIpAddressCount = std::stol(valueVSwitchListVSwitch["AvailableIpAddressCount"].asString());
		if(!valueVSwitchListVSwitch["VSwitchId"].isNull())
			vSwitchListObject.vSwitchId = valueVSwitchListVSwitch["VSwitchId"].asString();
		if(!valueVSwitchListVSwitch["VSwitchName"].isNull())
			vSwitchListObject.vSwitchName = valueVSwitchListVSwitch["VSwitchName"].asString();
		vSwitchList_.push_back(vSwitchListObject);
	}
	if(!value["VSwitchCount"].isNull())
		vSwitchCount_ = std::stoi(value["VSwitchCount"].asString());
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

int GetUserVpcVSwitchResult::getVSwitchCount()const
{
	return vSwitchCount_;
}

std::string GetUserVpcVSwitchResult::getMessage()const
{
	return message_;
}

int GetUserVpcVSwitchResult::getPageSize()const
{
	return pageSize_;
}

int GetUserVpcVSwitchResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<GetUserVpcVSwitchResult::VSwitch> GetUserVpcVSwitchResult::getVSwitchList()const
{
	return vSwitchList_;
}

int GetUserVpcVSwitchResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetUserVpcVSwitchResult::getCode()const
{
	return code_;
}

bool GetUserVpcVSwitchResult::getSuccess()const
{
	return success_;
}

