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

#include <alibabacloud/emr/model/ListVswitchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListVswitchResult::ListVswitchResult() :
	ServiceResult()
{}

ListVswitchResult::ListVswitchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVswitchResult::~ListVswitchResult()
{}

void ListVswitchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVswitchListNode = value["VswitchList"]["Vswitch"];
	for (auto valueVswitchListVswitch : allVswitchListNode)
	{
		Vswitch vswitchListObject;
		if(!valueVswitchListVswitch["VSwitchId"].isNull())
			vswitchListObject.vSwitchId = valueVswitchListVswitch["VSwitchId"].asString();
		if(!valueVswitchListVswitch["VpcId"].isNull())
			vswitchListObject.vpcId = valueVswitchListVswitch["VpcId"].asString();
		if(!valueVswitchListVswitch["Status"].isNull())
			vswitchListObject.status = valueVswitchListVswitch["Status"].asString();
		if(!valueVswitchListVswitch["CidrBlock"].isNull())
			vswitchListObject.cidrBlock = valueVswitchListVswitch["CidrBlock"].asString();
		if(!valueVswitchListVswitch["ZoneId"].isNull())
			vswitchListObject.zoneId = valueVswitchListVswitch["ZoneId"].asString();
		if(!valueVswitchListVswitch["AvailableIpAddressCount"].isNull())
			vswitchListObject.availableIpAddressCount = valueVswitchListVswitch["AvailableIpAddressCount"].asString();
		if(!valueVswitchListVswitch["Description"].isNull())
			vswitchListObject.description = valueVswitchListVswitch["Description"].asString();
		if(!valueVswitchListVswitch["VSwitchName"].isNull())
			vswitchListObject.vSwitchName = valueVswitchListVswitch["VSwitchName"].asString();
		if(!valueVswitchListVswitch["CreationTime"].isNull())
			vswitchListObject.creationTime = valueVswitchListVswitch["CreationTime"].asString();
		if(!valueVswitchListVswitch["IsDefault"].isNull())
			vswitchListObject.isDefault = valueVswitchListVswitch["IsDefault"].asString() == "true";
		if(!valueVswitchListVswitch["ResourceGroupId"].isNull())
			vswitchListObject.resourceGroupId = valueVswitchListVswitch["ResourceGroupId"].asString();
		vswitchList_.push_back(vswitchListObject);
	}

}

std::vector<ListVswitchResult::Vswitch> ListVswitchResult::getVswitchList()const
{
	return vswitchList_;
}

