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

#include <alibabacloud/alikafka/model/GetInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetInstanceListResult::GetInstanceListResult() :
	ServiceResult()
{}

GetInstanceListResult::GetInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceListResult::~GetInstanceListResult()
{}

void GetInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["InstanceVO"];
	for (auto valueInstanceListInstanceVO : allInstanceListNode)
	{
		InstanceVO instanceListObject;
		if(!valueInstanceListInstanceVO["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstanceVO["InstanceId"].asString();
		if(!valueInstanceListInstanceVO["RegionId"].isNull())
			instanceListObject.regionId = valueInstanceListInstanceVO["RegionId"].asString();
		if(!valueInstanceListInstanceVO["ServiceStatus"].isNull())
			instanceListObject.serviceStatus = std::stoi(valueInstanceListInstanceVO["ServiceStatus"].asString());
		if(!valueInstanceListInstanceVO["VpcId"].isNull())
			instanceListObject.vpcId = valueInstanceListInstanceVO["VpcId"].asString();
		if(!valueInstanceListInstanceVO["VSwitchId"].isNull())
			instanceListObject.vSwitchId = valueInstanceListInstanceVO["VSwitchId"].asString();
		if(!valueInstanceListInstanceVO["EndPoint"].isNull())
			instanceListObject.endPoint = valueInstanceListInstanceVO["EndPoint"].asString();
		if(!valueInstanceListInstanceVO["CreateTime"].isNull())
			instanceListObject.createTime = std::stol(valueInstanceListInstanceVO["CreateTime"].asString());
		if(!valueInstanceListInstanceVO["ExpiredTime"].isNull())
			instanceListObject.expiredTime = std::stol(valueInstanceListInstanceVO["ExpiredTime"].asString());
		if(!valueInstanceListInstanceVO["DeployType"].isNull())
			instanceListObject.deployType = std::stoi(valueInstanceListInstanceVO["DeployType"].asString());
		if(!valueInstanceListInstanceVO["SslEndPoint"].isNull())
			instanceListObject.sslEndPoint = valueInstanceListInstanceVO["SslEndPoint"].asString();
		if(!valueInstanceListInstanceVO["Name"].isNull())
			instanceListObject.name = valueInstanceListInstanceVO["Name"].asString();
		if(!valueInstanceListInstanceVO["IoMax"].isNull())
			instanceListObject.ioMax = std::stoi(valueInstanceListInstanceVO["IoMax"].asString());
		if(!valueInstanceListInstanceVO["EipMax"].isNull())
			instanceListObject.eipMax = std::stoi(valueInstanceListInstanceVO["EipMax"].asString());
		if(!valueInstanceListInstanceVO["DiskType"].isNull())
			instanceListObject.diskType = std::stoi(valueInstanceListInstanceVO["DiskType"].asString());
		if(!valueInstanceListInstanceVO["DiskSize"].isNull())
			instanceListObject.diskSize = std::stoi(valueInstanceListInstanceVO["DiskSize"].asString());
		if(!valueInstanceListInstanceVO["MsgRetain"].isNull())
			instanceListObject.msgRetain = std::stoi(valueInstanceListInstanceVO["MsgRetain"].asString());
		if(!valueInstanceListInstanceVO["TopicNumLimit"].isNull())
			instanceListObject.topicNumLimit = std::stoi(valueInstanceListInstanceVO["TopicNumLimit"].asString());
		if(!valueInstanceListInstanceVO["ZoneId"].isNull())
			instanceListObject.zoneId = valueInstanceListInstanceVO["ZoneId"].asString();
		if(!valueInstanceListInstanceVO["PaidType"].isNull())
			instanceListObject.paidType = std::stoi(valueInstanceListInstanceVO["PaidType"].asString());
		if(!valueInstanceListInstanceVO["SpecType"].isNull())
			instanceListObject.specType = valueInstanceListInstanceVO["SpecType"].asString();
		if(!valueInstanceListInstanceVO["SecurityGroup"].isNull())
			instanceListObject.securityGroup = valueInstanceListInstanceVO["SecurityGroup"].asString();
		if(!valueInstanceListInstanceVO["AllConfig"].isNull())
			instanceListObject.allConfig = valueInstanceListInstanceVO["AllConfig"].asString();
		auto allTagsNode = valueInstanceListInstanceVO["Tags"]["TagVO"];
		for (auto valueInstanceListInstanceVOTagsTagVO : allTagsNode)
		{
			InstanceVO::TagVO tagsObject;
			if(!valueInstanceListInstanceVOTagsTagVO["Key"].isNull())
				tagsObject.key = valueInstanceListInstanceVOTagsTagVO["Key"].asString();
			if(!valueInstanceListInstanceVOTagsTagVO["Value"].isNull())
				tagsObject.value = valueInstanceListInstanceVOTagsTagVO["Value"].asString();
			instanceListObject.tags.push_back(tagsObject);
		}
		auto upgradeServiceDetailInfoNode = value["UpgradeServiceDetailInfo"];
		if(!upgradeServiceDetailInfoNode["Current2OpenSourceVersion"].isNull())
			instanceListObject.upgradeServiceDetailInfo.current2OpenSourceVersion = upgradeServiceDetailInfoNode["Current2OpenSourceVersion"].asString();
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetInstanceListResult::getMessage()const
{
	return message_;
}

std::vector<GetInstanceListResult::InstanceVO> GetInstanceListResult::getInstanceList()const
{
	return instanceList_;
}

int GetInstanceListResult::getCode()const
{
	return code_;
}

bool GetInstanceListResult::getSuccess()const
{
	return success_;
}

