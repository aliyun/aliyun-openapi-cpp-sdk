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

#include <alibabacloud/edas/model/ListEcsNotInClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListEcsNotInClusterResult::ListEcsNotInClusterResult() :
	ServiceResult()
{}

ListEcsNotInClusterResult::ListEcsNotInClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEcsNotInClusterResult::~ListEcsNotInClusterResult()
{}

void ListEcsNotInClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEcsEntityListNode = value["EcsEntityList"]["EcsEntity"];
	for (auto valueEcsEntityListEcsEntity : allEcsEntityListNode)
	{
		EcsEntity ecsEntityListObject;
		if(!valueEcsEntityListEcsEntity["InstanceId"].isNull())
			ecsEntityListObject.instanceId = valueEcsEntityListEcsEntity["InstanceId"].asString();
		if(!valueEcsEntityListEcsEntity["InstanceName"].isNull())
			ecsEntityListObject.instanceName = valueEcsEntityListEcsEntity["InstanceName"].asString();
		if(!valueEcsEntityListEcsEntity["VpcId"].isNull())
			ecsEntityListObject.vpcId = valueEcsEntityListEcsEntity["VpcId"].asString();
		if(!valueEcsEntityListEcsEntity["VpcName"].isNull())
			ecsEntityListObject.vpcName = valueEcsEntityListEcsEntity["VpcName"].asString();
		if(!valueEcsEntityListEcsEntity["Expired"].isNull())
			ecsEntityListObject.expired = valueEcsEntityListEcsEntity["Expired"].asString() == "true";
		if(!valueEcsEntityListEcsEntity["Status"].isNull())
			ecsEntityListObject.status = valueEcsEntityListEcsEntity["Status"].asString();
		if(!valueEcsEntityListEcsEntity["RegionId"].isNull())
			ecsEntityListObject.regionId = valueEcsEntityListEcsEntity["RegionId"].asString();
		if(!valueEcsEntityListEcsEntity["Cpu"].isNull())
			ecsEntityListObject.cpu = std::stoi(valueEcsEntityListEcsEntity["Cpu"].asString());
		if(!valueEcsEntityListEcsEntity["Mem"].isNull())
			ecsEntityListObject.mem = std::stoi(valueEcsEntityListEcsEntity["Mem"].asString());
		if(!valueEcsEntityListEcsEntity["PublicIp"].isNull())
			ecsEntityListObject.publicIp = valueEcsEntityListEcsEntity["PublicIp"].asString();
		if(!valueEcsEntityListEcsEntity["InnerIp"].isNull())
			ecsEntityListObject.innerIp = valueEcsEntityListEcsEntity["InnerIp"].asString();
		if(!valueEcsEntityListEcsEntity["PrivateIp"].isNull())
			ecsEntityListObject.privateIp = valueEcsEntityListEcsEntity["PrivateIp"].asString();
		if(!valueEcsEntityListEcsEntity["Eip"].isNull())
			ecsEntityListObject.eip = valueEcsEntityListEcsEntity["Eip"].asString();
		ecsEntityList_.push_back(ecsEntityListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListEcsNotInClusterResult::getMessage()const
{
	return message_;
}

int ListEcsNotInClusterResult::getCode()const
{
	return code_;
}

std::vector<ListEcsNotInClusterResult::EcsEntity> ListEcsNotInClusterResult::getEcsEntityList()const
{
	return ecsEntityList_;
}

