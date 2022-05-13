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

#include <alibabacloud/mse/model/QueryUserVpcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

QueryUserVpcResult::QueryUserVpcResult() :
	ServiceResult()
{}

QueryUserVpcResult::QueryUserVpcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserVpcResult::~QueryUserVpcResult()
{}

void QueryUserVpcResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Vpcs"];
	for (auto valueDataVpcs : allDataNode)
	{
		Vpcs dataObject;
		if(!valueDataVpcs["VpcId"].isNull())
			dataObject.vpcId = valueDataVpcs["VpcId"].asString();
		if(!valueDataVpcs["VpcName"].isNull())
			dataObject.vpcName = valueDataVpcs["VpcName"].asString();
		auto allVSwitchListNode = valueDataVpcs["VSwitchList"]["VSwitchListItem"];
		for (auto valueDataVpcsVSwitchListVSwitchListItem : allVSwitchListNode)
		{
			Vpcs::VSwitchListItem vSwitchListObject;
			if(!valueDataVpcsVSwitchListVSwitchListItem["VswitchId"].isNull())
				vSwitchListObject.vswitchId = valueDataVpcsVSwitchListVSwitchListItem["VswitchId"].asString();
			if(!valueDataVpcsVSwitchListVSwitchListItem["VswitchName"].isNull())
				vSwitchListObject.vswitchName = valueDataVpcsVSwitchListVSwitchListItem["VswitchName"].asString();
			if(!valueDataVpcsVSwitchListVSwitchListItem["ZoneId"].isNull())
				vSwitchListObject.zoneId = valueDataVpcsVSwitchListVSwitchListItem["ZoneId"].asString();
			dataObject.vSwitchList.push_back(vSwitchListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryUserVpcResult::getMessage()const
{
	return message_;
}

int QueryUserVpcResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<QueryUserVpcResult::Vpcs> QueryUserVpcResult::getData()const
{
	return data_;
}

int QueryUserVpcResult::getCode()const
{
	return code_;
}

bool QueryUserVpcResult::getSuccess()const
{
	return success_;
}

