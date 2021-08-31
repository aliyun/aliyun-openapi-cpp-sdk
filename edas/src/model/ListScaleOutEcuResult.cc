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

#include <alibabacloud/edas/model/ListScaleOutEcuResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListScaleOutEcuResult::ListScaleOutEcuResult() :
	ServiceResult()
{}

ListScaleOutEcuResult::ListScaleOutEcuResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScaleOutEcuResult::~ListScaleOutEcuResult()
{}

void ListScaleOutEcuResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEcuInfoListNode = value["EcuInfoList"]["EcuInfo"];
	for (auto valueEcuInfoListEcuInfo : allEcuInfoListNode)
	{
		EcuInfo ecuInfoListObject;
		if(!valueEcuInfoListEcuInfo["EcuId"].isNull())
			ecuInfoListObject.ecuId = valueEcuInfoListEcuInfo["EcuId"].asString();
		if(!valueEcuInfoListEcuInfo["Online"].isNull())
			ecuInfoListObject.online = valueEcuInfoListEcuInfo["Online"].asString() == "true";
		if(!valueEcuInfoListEcuInfo["DockerEnv"].isNull())
			ecuInfoListObject.dockerEnv = valueEcuInfoListEcuInfo["DockerEnv"].asString() == "true";
		if(!valueEcuInfoListEcuInfo["CreateTime"].isNull())
			ecuInfoListObject.createTime = std::stol(valueEcuInfoListEcuInfo["CreateTime"].asString());
		if(!valueEcuInfoListEcuInfo["UpdateTime"].isNull())
			ecuInfoListObject.updateTime = std::stol(valueEcuInfoListEcuInfo["UpdateTime"].asString());
		if(!valueEcuInfoListEcuInfo["IpAddr"].isNull())
			ecuInfoListObject.ipAddr = valueEcuInfoListEcuInfo["IpAddr"].asString();
		if(!valueEcuInfoListEcuInfo["HeartbeatTime"].isNull())
			ecuInfoListObject.heartbeatTime = std::stol(valueEcuInfoListEcuInfo["HeartbeatTime"].asString());
		if(!valueEcuInfoListEcuInfo["UserId"].isNull())
			ecuInfoListObject.userId = valueEcuInfoListEcuInfo["UserId"].asString();
		if(!valueEcuInfoListEcuInfo["Name"].isNull())
			ecuInfoListObject.name = valueEcuInfoListEcuInfo["Name"].asString();
		if(!valueEcuInfoListEcuInfo["ZoneId"].isNull())
			ecuInfoListObject.zoneId = valueEcuInfoListEcuInfo["ZoneId"].asString();
		if(!valueEcuInfoListEcuInfo["RegionId"].isNull())
			ecuInfoListObject.regionId = valueEcuInfoListEcuInfo["RegionId"].asString();
		if(!valueEcuInfoListEcuInfo["InstanceId"].isNull())
			ecuInfoListObject.instanceId = valueEcuInfoListEcuInfo["InstanceId"].asString();
		if(!valueEcuInfoListEcuInfo["VpcId"].isNull())
			ecuInfoListObject.vpcId = valueEcuInfoListEcuInfo["VpcId"].asString();
		if(!valueEcuInfoListEcuInfo["AvailableCpu"].isNull())
			ecuInfoListObject.availableCpu = std::stoi(valueEcuInfoListEcuInfo["AvailableCpu"].asString());
		if(!valueEcuInfoListEcuInfo["AvailableMem"].isNull())
			ecuInfoListObject.availableMem = std::stoi(valueEcuInfoListEcuInfo["AvailableMem"].asString());
		ecuInfoList_.push_back(ecuInfoListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListScaleOutEcuResult::EcuInfo> ListScaleOutEcuResult::getEcuInfoList()const
{
	return ecuInfoList_;
}

std::string ListScaleOutEcuResult::getMessage()const
{
	return message_;
}

int ListScaleOutEcuResult::getCode()const
{
	return code_;
}

