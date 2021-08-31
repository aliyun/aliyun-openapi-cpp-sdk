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

#include <alibabacloud/edas/model/ListEcuByRegionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListEcuByRegionResult::ListEcuByRegionResult() :
	ServiceResult()
{}

ListEcuByRegionResult::ListEcuByRegionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEcuByRegionResult::~ListEcuByRegionResult()
{}

void ListEcuByRegionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEcuEntityListNode = value["EcuEntityList"]["EcuEntity"];
	for (auto valueEcuEntityListEcuEntity : allEcuEntityListNode)
	{
		EcuEntity ecuEntityListObject;
		if(!valueEcuEntityListEcuEntity["EcuId"].isNull())
			ecuEntityListObject.ecuId = valueEcuEntityListEcuEntity["EcuId"].asString();
		if(!valueEcuEntityListEcuEntity["Online"].isNull())
			ecuEntityListObject.online = valueEcuEntityListEcuEntity["Online"].asString() == "true";
		if(!valueEcuEntityListEcuEntity["DockerEnv"].isNull())
			ecuEntityListObject.dockerEnv = valueEcuEntityListEcuEntity["DockerEnv"].asString() == "true";
		if(!valueEcuEntityListEcuEntity["CreateTime"].isNull())
			ecuEntityListObject.createTime = std::stol(valueEcuEntityListEcuEntity["CreateTime"].asString());
		if(!valueEcuEntityListEcuEntity["UpdateTime"].isNull())
			ecuEntityListObject.updateTime = std::stol(valueEcuEntityListEcuEntity["UpdateTime"].asString());
		if(!valueEcuEntityListEcuEntity["IpAddr"].isNull())
			ecuEntityListObject.ipAddr = valueEcuEntityListEcuEntity["IpAddr"].asString();
		if(!valueEcuEntityListEcuEntity["HeartbeatTime"].isNull())
			ecuEntityListObject.heartbeatTime = std::stol(valueEcuEntityListEcuEntity["HeartbeatTime"].asString());
		if(!valueEcuEntityListEcuEntity["UserId"].isNull())
			ecuEntityListObject.userId = valueEcuEntityListEcuEntity["UserId"].asString();
		if(!valueEcuEntityListEcuEntity["Name"].isNull())
			ecuEntityListObject.name = valueEcuEntityListEcuEntity["Name"].asString();
		if(!valueEcuEntityListEcuEntity["ZoneId"].isNull())
			ecuEntityListObject.zoneId = valueEcuEntityListEcuEntity["ZoneId"].asString();
		if(!valueEcuEntityListEcuEntity["RegionId"].isNull())
			ecuEntityListObject.regionId = valueEcuEntityListEcuEntity["RegionId"].asString();
		if(!valueEcuEntityListEcuEntity["InstanceId"].isNull())
			ecuEntityListObject.instanceId = valueEcuEntityListEcuEntity["InstanceId"].asString();
		if(!valueEcuEntityListEcuEntity["VpcId"].isNull())
			ecuEntityListObject.vpcId = valueEcuEntityListEcuEntity["VpcId"].asString();
		if(!valueEcuEntityListEcuEntity["AvailableCpu"].isNull())
			ecuEntityListObject.availableCpu = std::stoi(valueEcuEntityListEcuEntity["AvailableCpu"].asString());
		if(!valueEcuEntityListEcuEntity["AvailableMem"].isNull())
			ecuEntityListObject.availableMem = std::stoi(valueEcuEntityListEcuEntity["AvailableMem"].asString());
		if(!valueEcuEntityListEcuEntity["Cpu"].isNull())
			ecuEntityListObject.cpu = std::stoi(valueEcuEntityListEcuEntity["Cpu"].asString());
		if(!valueEcuEntityListEcuEntity["Mem"].isNull())
			ecuEntityListObject.mem = std::stoi(valueEcuEntityListEcuEntity["Mem"].asString());
		ecuEntityList_.push_back(ecuEntityListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListEcuByRegionResult::getMessage()const
{
	return message_;
}

std::vector<ListEcuByRegionResult::EcuEntity> ListEcuByRegionResult::getEcuEntityList()const
{
	return ecuEntityList_;
}

int ListEcuByRegionResult::getCode()const
{
	return code_;
}

