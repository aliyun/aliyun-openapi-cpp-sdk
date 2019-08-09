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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allMasterSlaveServerGroups = value["MasterSlaveServerGroups"]["MasterSlaveServerGroup"];
	for (auto value : allMasterSlaveServerGroups)
	{
		MasterSlaveServerGroup masterSlaveServerGroupsObject;
		if(!value["MasterSlaveServerGroupId"].isNull())
			masterSlaveServerGroupsObject.masterSlaveServerGroupId = value["MasterSlaveServerGroupId"].asString();
		if(!value["MasterSlaveServerGroupName"].isNull())
			masterSlaveServerGroupsObject.masterSlaveServerGroupName = value["MasterSlaveServerGroupName"].asString();
		auto associatedObjectsNode = value["AssociatedObjects"];
		auto allListeners = value["Listeners"]["Listener"];
		for (auto value : allListeners)
		{
			MasterSlaveServerGroup::AssociatedObjects::Listener listenerObject;
			if(!value["Protocol"].isNull())
				listenerObject.protocol = value["Protocol"].asString();
			if(!value["Port"].isNull())
				listenerObject.port = std::stoi(value["Port"].asString());
			masterSlaveServerGroupsObject.associatedObjects.listeners.push_back(listenerObject);
		}
		masterSlaveServerGroups_.push_back(masterSlaveServerGroupsObject);
	}

}

std::vector<DescribeMasterSlaveServerGroupsResult::MasterSlaveServerGroup> DescribeMasterSlaveServerGroupsResult::getMasterSlaveServerGroups()const
{
	return masterSlaveServerGroups_;
}

