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

#include <alibabacloud/alikafka/model/GetAllowedIpListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetAllowedIpListResult::GetAllowedIpListResult() :
	ServiceResult()
{}

GetAllowedIpListResult::GetAllowedIpListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAllowedIpListResult::~GetAllowedIpListResult()
{}

void GetAllowedIpListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allowedListNode = value["AllowedList"];
	if(!allowedListNode["DeployType"].isNull())
		allowedList_.deployType = std::stoi(allowedListNode["DeployType"].asString());
	auto allVpcListNode = allowedListNode["VpcList"]["IPListVO"];
	for (auto allowedListNodeVpcListIPListVO : allVpcListNode)
	{
		AllowedList::IPListVO iPListVOObject;
		if(!allowedListNodeVpcListIPListVO["PortRange"].isNull())
			iPListVOObject.portRange = allowedListNodeVpcListIPListVO["PortRange"].asString();
		if(!allowedListNodeVpcListIPListVO["AllowedIpGroup"].isNull())
			iPListVOObject.allowedIpGroup = allowedListNodeVpcListIPListVO["AllowedIpGroup"].asString();
		auto allAllowedIpList = value["AllowedIpList"]["IPVO"];
		for (auto value : allAllowedIpList)
			iPListVOObject.allowedIpList.push_back(value.asString());
		allowedList_.vpcList.push_back(iPListVOObject);
	}
	auto allInternetListNode = allowedListNode["InternetList"]["IPListVO"];
	for (auto allowedListNodeInternetListIPListVO : allInternetListNode)
	{
		AllowedList::IPListVO iPListVOObject;
		if(!allowedListNodeInternetListIPListVO["PortRange"].isNull())
			iPListVOObject.portRange = allowedListNodeInternetListIPListVO["PortRange"].asString();
		if(!allowedListNodeInternetListIPListVO["AllowedIpGroup"].isNull())
			iPListVOObject.allowedIpGroup = allowedListNodeInternetListIPListVO["AllowedIpGroup"].asString();
		auto allAllowedIpList = value["AllowedIpList"]["IPVO"];
		for (auto value : allAllowedIpList)
			iPListVOObject.allowedIpList.push_back(value.asString());
		allowedList_.internetList.push_back(iPListVOObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetAllowedIpListResult::AllowedList GetAllowedIpListResult::getAllowedList()const
{
	return allowedList_;
}

std::string GetAllowedIpListResult::getMessage()const
{
	return message_;
}

int GetAllowedIpListResult::getCode()const
{
	return code_;
}

bool GetAllowedIpListResult::getSuccess()const
{
	return success_;
}

