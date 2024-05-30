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

#include <alibabacloud/slb/model/DescribeMasterSlaveServerGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeMasterSlaveServerGroupsResult::DescribeMasterSlaveServerGroupsResult() :
	ServiceResult()
{}

DescribeMasterSlaveServerGroupsResult::DescribeMasterSlaveServerGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMasterSlaveServerGroupsResult::~DescribeMasterSlaveServerGroupsResult()
{}

void DescribeMasterSlaveServerGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMasterSlaveServerGroupsNode = value["MasterSlaveServerGroups"]["MasterSlaveServerGroup"];
	for (auto valueMasterSlaveServerGroupsMasterSlaveServerGroup : allMasterSlaveServerGroupsNode)
	{
		MasterSlaveServerGroup masterSlaveServerGroupsObject;
		if(!valueMasterSlaveServerGroupsMasterSlaveServerGroup["ServiceManagedMode"].isNull())
			masterSlaveServerGroupsObject.serviceManagedMode = valueMasterSlaveServerGroupsMasterSlaveServerGroup["ServiceManagedMode"].asString();
		if(!valueMasterSlaveServerGroupsMasterSlaveServerGroup["MasterSlaveServerGroupId"].isNull())
			masterSlaveServerGroupsObject.masterSlaveServerGroupId = valueMasterSlaveServerGroupsMasterSlaveServerGroup["MasterSlaveServerGroupId"].asString();
		if(!valueMasterSlaveServerGroupsMasterSlaveServerGroup["MasterSlaveServerGroupName"].isNull())
			masterSlaveServerGroupsObject.masterSlaveServerGroupName = valueMasterSlaveServerGroupsMasterSlaveServerGroup["MasterSlaveServerGroupName"].asString();
		if(!valueMasterSlaveServerGroupsMasterSlaveServerGroup["CreateTime"].isNull())
			masterSlaveServerGroupsObject.createTime = valueMasterSlaveServerGroupsMasterSlaveServerGroup["CreateTime"].asString();
		auto allTagsNode = valueMasterSlaveServerGroupsMasterSlaveServerGroup["Tags"]["Tag"];
		for (auto valueMasterSlaveServerGroupsMasterSlaveServerGroupTagsTag : allTagsNode)
		{
			MasterSlaveServerGroup::Tag tagsObject;
			if(!valueMasterSlaveServerGroupsMasterSlaveServerGroupTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueMasterSlaveServerGroupsMasterSlaveServerGroupTagsTag["TagKey"].asString();
			if(!valueMasterSlaveServerGroupsMasterSlaveServerGroupTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueMasterSlaveServerGroupsMasterSlaveServerGroupTagsTag["TagValue"].asString();
			masterSlaveServerGroupsObject.tags.push_back(tagsObject);
		}
		auto associatedObjectsNode = value["AssociatedObjects"];
		auto allListenersNode = associatedObjectsNode["Listeners"]["Listener"];
		for (auto associatedObjectsNodeListenersListener : allListenersNode)
		{
			MasterSlaveServerGroup::AssociatedObjects::Listener listenerObject;
			if(!associatedObjectsNodeListenersListener["Port"].isNull())
				listenerObject.port = std::stoi(associatedObjectsNodeListenersListener["Port"].asString());
			if(!associatedObjectsNodeListenersListener["Protocol"].isNull())
				listenerObject.protocol = associatedObjectsNodeListenersListener["Protocol"].asString();
			masterSlaveServerGroupsObject.associatedObjects.listeners.push_back(listenerObject);
		}
		masterSlaveServerGroups_.push_back(masterSlaveServerGroupsObject);
	}

}

std::vector<DescribeMasterSlaveServerGroupsResult::MasterSlaveServerGroup> DescribeMasterSlaveServerGroupsResult::getMasterSlaveServerGroups()const
{
	return masterSlaveServerGroups_;
}

