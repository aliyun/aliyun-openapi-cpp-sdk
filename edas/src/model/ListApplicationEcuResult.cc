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

#include <alibabacloud/edas/model/ListApplicationEcuResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListApplicationEcuResult::ListApplicationEcuResult() :
	ServiceResult()
{}

ListApplicationEcuResult::ListApplicationEcuResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApplicationEcuResult::~ListApplicationEcuResult()
{}

void ListApplicationEcuResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEcuInfoListNode = value["EcuInfoList"]["EcuEntity"];
	for (auto valueEcuInfoListEcuEntity : allEcuInfoListNode)
	{
		EcuEntity ecuInfoListObject;
		if(!valueEcuInfoListEcuEntity["EcuId"].isNull())
			ecuInfoListObject.ecuId = valueEcuInfoListEcuEntity["EcuId"].asString();
		if(!valueEcuInfoListEcuEntity["Online"].isNull())
			ecuInfoListObject.online = valueEcuInfoListEcuEntity["Online"].asString() == "true";
		if(!valueEcuInfoListEcuEntity["DockerEnv"].isNull())
			ecuInfoListObject.dockerEnv = valueEcuInfoListEcuEntity["DockerEnv"].asString() == "true";
		if(!valueEcuInfoListEcuEntity["CreateTime"].isNull())
			ecuInfoListObject.createTime = std::stol(valueEcuInfoListEcuEntity["CreateTime"].asString());
		if(!valueEcuInfoListEcuEntity["UpdateTime"].isNull())
			ecuInfoListObject.updateTime = std::stol(valueEcuInfoListEcuEntity["UpdateTime"].asString());
		if(!valueEcuInfoListEcuEntity["IpAddr"].isNull())
			ecuInfoListObject.ipAddr = valueEcuInfoListEcuEntity["IpAddr"].asString();
		if(!valueEcuInfoListEcuEntity["HeartbeatTime"].isNull())
			ecuInfoListObject.heartbeatTime = std::stol(valueEcuInfoListEcuEntity["HeartbeatTime"].asString());
		if(!valueEcuInfoListEcuEntity["UserId"].isNull())
			ecuInfoListObject.userId = valueEcuInfoListEcuEntity["UserId"].asString();
		if(!valueEcuInfoListEcuEntity["Name"].isNull())
			ecuInfoListObject.name = valueEcuInfoListEcuEntity["Name"].asString();
		if(!valueEcuInfoListEcuEntity["ZoneId"].isNull())
			ecuInfoListObject.zoneId = valueEcuInfoListEcuEntity["ZoneId"].asString();
		if(!valueEcuInfoListEcuEntity["RegionId"].isNull())
			ecuInfoListObject.regionId = valueEcuInfoListEcuEntity["RegionId"].asString();
		if(!valueEcuInfoListEcuEntity["InstanceId"].isNull())
			ecuInfoListObject.instanceId = valueEcuInfoListEcuEntity["InstanceId"].asString();
		if(!valueEcuInfoListEcuEntity["VpcId"].isNull())
			ecuInfoListObject.vpcId = valueEcuInfoListEcuEntity["VpcId"].asString();
		if(!valueEcuInfoListEcuEntity["AvailableCpu"].isNull())
			ecuInfoListObject.availableCpu = std::stoi(valueEcuInfoListEcuEntity["AvailableCpu"].asString());
		if(!valueEcuInfoListEcuEntity["AvailableMem"].isNull())
			ecuInfoListObject.availableMem = std::stoi(valueEcuInfoListEcuEntity["AvailableMem"].asString());
		if(!valueEcuInfoListEcuEntity["Cpu"].isNull())
			ecuInfoListObject.cpu = std::stoi(valueEcuInfoListEcuEntity["Cpu"].asString());
		if(!valueEcuInfoListEcuEntity["Mem"].isNull())
			ecuInfoListObject.mem = std::stoi(valueEcuInfoListEcuEntity["Mem"].asString());
		if(!valueEcuInfoListEcuEntity["AppId"].isNull())
			ecuInfoListObject.appId = valueEcuInfoListEcuEntity["AppId"].asString();
		ecuInfoList_.push_back(ecuInfoListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListApplicationEcuResult::EcuEntity> ListApplicationEcuResult::getEcuInfoList()const
{
	return ecuInfoList_;
}

std::string ListApplicationEcuResult::getMessage()const
{
	return message_;
}

int ListApplicationEcuResult::getCode()const
{
	return code_;
}

