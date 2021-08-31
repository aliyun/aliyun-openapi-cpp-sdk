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

#include <alibabacloud/edas/model/ListResourceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListResourceGroupResult::ListResourceGroupResult() :
	ServiceResult()
{}

ListResourceGroupResult::ListResourceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceGroupResult::~ListResourceGroupResult()
{}

void ListResourceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceGroupListNode = value["ResourceGroupList"]["ResGroupEntity"];
	for (auto valueResourceGroupListResGroupEntity : allResourceGroupListNode)
	{
		ResGroupEntity resourceGroupListObject;
		if(!valueResourceGroupListResGroupEntity["Id"].isNull())
			resourceGroupListObject.id = std::stol(valueResourceGroupListResGroupEntity["Id"].asString());
		if(!valueResourceGroupListResGroupEntity["Name"].isNull())
			resourceGroupListObject.name = valueResourceGroupListResGroupEntity["Name"].asString();
		if(!valueResourceGroupListResGroupEntity["Description"].isNull())
			resourceGroupListObject.description = valueResourceGroupListResGroupEntity["Description"].asString();
		if(!valueResourceGroupListResGroupEntity["AdminUserId"].isNull())
			resourceGroupListObject.adminUserId = valueResourceGroupListResGroupEntity["AdminUserId"].asString();
		if(!valueResourceGroupListResGroupEntity["CreateTime"].isNull())
			resourceGroupListObject.createTime = std::stol(valueResourceGroupListResGroupEntity["CreateTime"].asString());
		if(!valueResourceGroupListResGroupEntity["UpdateTime"].isNull())
			resourceGroupListObject.updateTime = std::stol(valueResourceGroupListResGroupEntity["UpdateTime"].asString());
		if(!valueResourceGroupListResGroupEntity["RegionId"].isNull())
			resourceGroupListObject.regionId = valueResourceGroupListResGroupEntity["RegionId"].asString();
		auto allecsListNode = valueResourceGroupListResGroupEntity["ecsList"]["EcsEntity"];
		for (auto valueResourceGroupListResGroupEntityecsListEcsEntity : allecsListNode)
		{
			ResGroupEntity::EcsEntity ecsListObject;
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["InstanceId"].isNull())
				ecsListObject.instanceId = valueResourceGroupListResGroupEntityecsListEcsEntity["InstanceId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["InstanceName"].isNull())
				ecsListObject.instanceName = valueResourceGroupListResGroupEntityecsListEcsEntity["InstanceName"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["HostName"].isNull())
				ecsListObject.hostName = valueResourceGroupListResGroupEntityecsListEcsEntity["HostName"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["Description"].isNull())
				ecsListObject.description = valueResourceGroupListResGroupEntityecsListEcsEntity["Description"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["Status"].isNull())
				ecsListObject.status = valueResourceGroupListResGroupEntityecsListEcsEntity["Status"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["PublicIp"].isNull())
				ecsListObject.publicIp = valueResourceGroupListResGroupEntityecsListEcsEntity["PublicIp"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["InnerIp"].isNull())
				ecsListObject.innerIp = valueResourceGroupListResGroupEntityecsListEcsEntity["InnerIp"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["PrivateIp"].isNull())
				ecsListObject.privateIp = valueResourceGroupListResGroupEntityecsListEcsEntity["PrivateIp"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["Eip"].isNull())
				ecsListObject.eip = valueResourceGroupListResGroupEntityecsListEcsEntity["Eip"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["SerialNum"].isNull())
				ecsListObject.serialNum = valueResourceGroupListResGroupEntityecsListEcsEntity["SerialNum"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["UserId"].isNull())
				ecsListObject.userId = valueResourceGroupListResGroupEntityecsListEcsEntity["UserId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["ZoneId"].isNull())
				ecsListObject.zoneId = valueResourceGroupListResGroupEntityecsListEcsEntity["ZoneId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["RegionId"].isNull())
				ecsListObject.regionId = valueResourceGroupListResGroupEntityecsListEcsEntity["RegionId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["InstanceId"].isNull())
				ecsListObject.instanceId1 = valueResourceGroupListResGroupEntityecsListEcsEntity["InstanceId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["Expired"].isNull())
				ecsListObject.expired = valueResourceGroupListResGroupEntityecsListEcsEntity["Expired"].asString() == "true";
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["SgId"].isNull())
				ecsListObject.sgId = valueResourceGroupListResGroupEntityecsListEcsEntity["SgId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["VpcId"].isNull())
				ecsListObject.vpcId = valueResourceGroupListResGroupEntityecsListEcsEntity["VpcId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["GroupId"].isNull())
				ecsListObject.groupId = valueResourceGroupListResGroupEntityecsListEcsEntity["GroupId"].asString();
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["Cpu"].isNull())
				ecsListObject.cpu = std::stoi(valueResourceGroupListResGroupEntityecsListEcsEntity["Cpu"].asString());
			if(!valueResourceGroupListResGroupEntityecsListEcsEntity["Mem"].isNull())
				ecsListObject.mem = std::stoi(valueResourceGroupListResGroupEntityecsListEcsEntity["Mem"].asString());
			auto ecuEntityNode = value["EcuEntity"];
			if(!ecuEntityNode["EcuId"].isNull())
				ecsListObject.ecuEntity.ecuId = ecuEntityNode["EcuId"].asString();
			if(!ecuEntityNode["Online"].isNull())
				ecsListObject.ecuEntity.online = ecuEntityNode["Online"].asString() == "true";
			if(!ecuEntityNode["DockerEnv"].isNull())
				ecsListObject.ecuEntity.dockerEnv = ecuEntityNode["DockerEnv"].asString() == "true";
			if(!ecuEntityNode["CreateTime"].isNull())
				ecsListObject.ecuEntity.createTime = std::stol(ecuEntityNode["CreateTime"].asString());
			if(!ecuEntityNode["UpdateTime"].isNull())
				ecsListObject.ecuEntity.updateTime = std::stol(ecuEntityNode["UpdateTime"].asString());
			if(!ecuEntityNode["IpAddr"].isNull())
				ecsListObject.ecuEntity.ipAddr = ecuEntityNode["IpAddr"].asString();
			if(!ecuEntityNode["HeartbeatTime"].isNull())
				ecsListObject.ecuEntity.heartbeatTime = std::stol(ecuEntityNode["HeartbeatTime"].asString());
			if(!ecuEntityNode["UserId"].isNull())
				ecsListObject.ecuEntity.userId = ecuEntityNode["UserId"].asString();
			if(!ecuEntityNode["Name"].isNull())
				ecsListObject.ecuEntity.name = ecuEntityNode["Name"].asString();
			if(!ecuEntityNode["ZoneId"].isNull())
				ecsListObject.ecuEntity.zoneId = ecuEntityNode["ZoneId"].asString();
			if(!ecuEntityNode["RegionId"].isNull())
				ecsListObject.ecuEntity.regionId = ecuEntityNode["RegionId"].asString();
			if(!ecuEntityNode["InstanceId"].isNull())
				ecsListObject.ecuEntity.instanceId = ecuEntityNode["InstanceId"].asString();
			if(!ecuEntityNode["VpcId"].isNull())
				ecsListObject.ecuEntity.vpcId = ecuEntityNode["VpcId"].asString();
			if(!ecuEntityNode["AvailableCpu"].isNull())
				ecsListObject.ecuEntity.availableCpu = std::stoi(ecuEntityNode["AvailableCpu"].asString());
			if(!ecuEntityNode["AvailableMem"].isNull())
				ecsListObject.ecuEntity.availableMem = std::stoi(ecuEntityNode["AvailableMem"].asString());
			if(!ecuEntityNode["Cpu"].isNull())
				ecsListObject.ecuEntity.cpu = std::stoi(ecuEntityNode["Cpu"].asString());
			if(!ecuEntityNode["Mem"].isNull())
				ecsListObject.ecuEntity.mem = std::stoi(ecuEntityNode["Mem"].asString());
			auto vpcEntityNode = value["VpcEntity"];
			if(!vpcEntityNode["VpcId"].isNull())
				ecsListObject.vpcEntity.vpcId = vpcEntityNode["VpcId"].asString();
			if(!vpcEntityNode["VpcName"].isNull())
				ecsListObject.vpcEntity.vpcName = vpcEntityNode["VpcName"].asString();
			if(!vpcEntityNode["RegionId"].isNull())
				ecsListObject.vpcEntity.regionId = vpcEntityNode["RegionId"].asString();
			if(!vpcEntityNode["UserId"].isNull())
				ecsListObject.vpcEntity.userId = vpcEntityNode["UserId"].asString();
			if(!vpcEntityNode["Cidrblock"].isNull())
				ecsListObject.vpcEntity.cidrblock = vpcEntityNode["Cidrblock"].asString();
			if(!vpcEntityNode["Status"].isNull())
				ecsListObject.vpcEntity.status = vpcEntityNode["Status"].asString();
			if(!vpcEntityNode["Description"].isNull())
				ecsListObject.vpcEntity.description = vpcEntityNode["Description"].asString();
			if(!vpcEntityNode["Expired"].isNull())
				ecsListObject.vpcEntity.expired = vpcEntityNode["Expired"].asString() == "true";
			if(!vpcEntityNode["EcsNum"].isNull())
				ecsListObject.vpcEntity.ecsNum = std::stoi(vpcEntityNode["EcsNum"].asString());
			resourceGroupListObject.ecsList.push_back(ecsListObject);
		}
		auto allSlbListNode = valueResourceGroupListResGroupEntity["SlbList"]["SlbEntity"];
		for (auto valueResourceGroupListResGroupEntitySlbListSlbEntity : allSlbListNode)
		{
			ResGroupEntity::SlbEntity slbListObject;
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["SlbId"].isNull())
				slbListObject.slbId = valueResourceGroupListResGroupEntitySlbListSlbEntity["SlbId"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["SlbName"].isNull())
				slbListObject.slbName = valueResourceGroupListResGroupEntitySlbListSlbEntity["SlbName"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["RegionId"].isNull())
				slbListObject.regionId = valueResourceGroupListResGroupEntitySlbListSlbEntity["RegionId"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["UserId"].isNull())
				slbListObject.userId = valueResourceGroupListResGroupEntitySlbListSlbEntity["UserId"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["Address"].isNull())
				slbListObject.address = valueResourceGroupListResGroupEntitySlbListSlbEntity["Address"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["SlbStatus"].isNull())
				slbListObject.slbStatus = valueResourceGroupListResGroupEntitySlbListSlbEntity["SlbStatus"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["AddressType"].isNull())
				slbListObject.addressType = valueResourceGroupListResGroupEntitySlbListSlbEntity["AddressType"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["VswitchId"].isNull())
				slbListObject.vswitchId = valueResourceGroupListResGroupEntitySlbListSlbEntity["VswitchId"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["VpcId"].isNull())
				slbListObject.vpcId = valueResourceGroupListResGroupEntitySlbListSlbEntity["VpcId"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["NetworkType"].isNull())
				slbListObject.networkType = valueResourceGroupListResGroupEntitySlbListSlbEntity["NetworkType"].asString();
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["GroupId"].isNull())
				slbListObject.groupId = std::stoi(valueResourceGroupListResGroupEntitySlbListSlbEntity["GroupId"].asString());
			if(!valueResourceGroupListResGroupEntitySlbListSlbEntity["Expired"].isNull())
				slbListObject.expired = valueResourceGroupListResGroupEntitySlbListSlbEntity["Expired"].asString() == "true";
			resourceGroupListObject.slbList.push_back(slbListObject);
		}
		resourceGroupList_.push_back(resourceGroupListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListResourceGroupResult::getMessage()const
{
	return message_;
}

std::vector<ListResourceGroupResult::ResGroupEntity> ListResourceGroupResult::getResourceGroupList()const
{
	return resourceGroupList_;
}

int ListResourceGroupResult::getCode()const
{
	return code_;
}

