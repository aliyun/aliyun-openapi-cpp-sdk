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

#include <alibabacloud/hitsdb/model/GetInstanceIpWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

GetInstanceIpWhiteListResult::GetInstanceIpWhiteListResult() :
	ServiceResult()
{}

GetInstanceIpWhiteListResult::GetInstanceIpWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceIpWhiteListResult::~GetInstanceIpWhiteListResult()
{}

void GetInstanceIpWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupListNode = value["GroupList"]["GroupListItem"];
	for (auto valueGroupListGroupListItem : allGroupListNode)
	{
		GroupListItem groupListObject;
		if(!valueGroupListGroupListItem["GroupName"].isNull())
			groupListObject.groupName = valueGroupListGroupListItem["GroupName"].asString();
		if(!valueGroupListGroupListItem["SecurityIpList"].isNull())
			groupListObject.securityIpList = valueGroupListGroupListItem["SecurityIpList"].asString();
		groupList_.push_back(groupListObject);
	}
	auto allIpList = value["IpList"]["IpList"];
	for (const auto &item : allIpList)
		ipList_.push_back(item.asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::vector<GetInstanceIpWhiteListResult::GroupListItem> GetInstanceIpWhiteListResult::getGroupList()const
{
	return groupList_;
}

std::vector<std::string> GetInstanceIpWhiteListResult::getIpList()const
{
	return ipList_;
}

std::string GetInstanceIpWhiteListResult::getInstanceId()const
{
	return instanceId_;
}

