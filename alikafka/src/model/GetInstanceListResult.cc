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
		if(!valueInstanceListInstanceVO["VpcId"].isNull())
			instanceListObject.vpcId = valueInstanceListInstanceVO["VpcId"].asString();
		if(!valueInstanceListInstanceVO["SpecType"].isNull())
			instanceListObject.specType = valueInstanceListInstanceVO["SpecType"].asString();
		if(!valueInstanceListInstanceVO["DeployType"].isNull())
			instanceListObject.deployType = std::stoi(valueInstanceListInstanceVO["DeployType"].asString());
		if(!valueInstanceListInstanceVO["CreateTime"].isNull())
			instanceListObject.createTime = std::stol(valueInstanceListInstanceVO["CreateTime"].asString());
		if(!valueInstanceListInstanceVO["DiskSize"].isNull())
			instanceListObject.diskSize = std::stoi(valueInstanceListInstanceVO["DiskSize"].asString());
		if(!valueInstanceListInstanceVO["DiskType"].isNull())
			instanceListObject.diskType = std::stoi(valueInstanceListInstanceVO["DiskType"].asString());
		if(!valueInstanceListInstanceVO["SecurityGroup"].isNull())
			instanceListObject.securityGroup = valueInstanceListInstanceVO["SecurityGroup"].asString();
		if(!valueInstanceListInstanceVO["SslEndPoint"].isNull())
			instanceListObject.sslEndPoint = valueInstanceListInstanceVO["SslEndPoint"].asString();
		if(!valueInstanceListInstanceVO["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstanceVO["InstanceId"].asString();
		if(!valueInstanceListInstanceVO["AllConfig"].isNull())
			instanceListObject.allConfig = valueInstanceListInstanceVO["AllConfig"].asString();
		if(!valueInstanceListInstanceVO["ServiceStatus"].isNull())
			instanceListObject.serviceStatus = std::stoi(valueInstanceListInstanceVO["ServiceStatus"].asString());
		if(!valueInstanceListInstanceVO["EipMax"].isNull())
			instanceListObject.eipMax = std::stoi(valueInstanceListInstanceVO["EipMax"].asString());
		if(!valueInstanceListInstanceVO["RegionId"].isNull())
			instanceListObject.regionId = valueInstanceListInstanceVO["RegionId"].asString();
		if(!valueInstanceListInstanceVO["MsgRetain"].isNull())
			instanceListObject.msgRetain = std::stoi(valueInstanceListInstanceVO["MsgRetain"].asString());
		if(!valueInstanceListInstanceVO["VSwitchId"].isNull())
			instanceListObject.vSwitchId = valueInstanceListInstanceVO["VSwitchId"].asString();
		if(!valueInstanceListInstanceVO["ExpiredTime"].isNull())
			instanceListObject.expiredTime = std::stol(valueInstanceListInstanceVO["ExpiredTime"].asString());
		if(!valueInstanceListInstanceVO["TopicNumLimit"].isNull())
			instanceListObject.topicNumLimit = std::stoi(valueInstanceListInstanceVO["TopicNumLimit"].asString());
		if(!valueInstanceListInstanceVO["ZoneId"].isNull())
			instanceListObject.zoneId = valueInstanceListInstanceVO["ZoneId"].asString();
		if(!valueInstanceListInstanceVO["IoMax"].isNull())
			instanceListObject.ioMax = std::stoi(valueInstanceListInstanceVO["IoMax"].asString());
		if(!valueInstanceListInstanceVO["PaidType"].isNull())
			instanceListObject.paidType = std::stoi(valueInstanceListInstanceVO["PaidType"].asString());
		if(!valueInstanceListInstanceVO["Name"].isNull())
			instanceListObject.name = valueInstanceListInstanceVO["Name"].asString();
		if(!valueInstanceListInstanceVO["EndPoint"].isNull())
			instanceListObject.endPoint = valueInstanceListInstanceVO["EndPoint"].asString();
		if(!valueInstanceListInstanceVO["DomainEndpoint"].isNull())
			instanceListObject.domainEndpoint = valueInstanceListInstanceVO["DomainEndpoint"].asString();
		if(!valueInstanceListInstanceVO["SslDomainEndpoint"].isNull())
			instanceListObject.sslDomainEndpoint = valueInstanceListInstanceVO["SslDomainEndpoint"].asString();
		if(!valueInstanceListInstanceVO["SaslDomainEndpoint"].isNull())
			instanceListObject.saslDomainEndpoint = valueInstanceListInstanceVO["SaslDomainEndpoint"].asString();
		if(!valueInstanceListInstanceVO["ResourceGroupId"].isNull())
			instanceListObject.resourceGroupId = valueInstanceListInstanceVO["ResourceGroupId"].asString();
		if(!valueInstanceListInstanceVO["UsedTopicCount"].isNull())
			instanceListObject.usedTopicCount = std::stoi(valueInstanceListInstanceVO["UsedTopicCount"].asString());
		if(!valueInstanceListInstanceVO["UsedGroupCount"].isNull())
			instanceListObject.usedGroupCount = std::stoi(valueInstanceListInstanceVO["UsedGroupCount"].asString());
		if(!valueInstanceListInstanceVO["UsedPartitionCount"].isNull())
			instanceListObject.usedPartitionCount = std::stoi(valueInstanceListInstanceVO["UsedPartitionCount"].asString());
		if(!valueInstanceListInstanceVO["KmsKeyId"].isNull())
			instanceListObject.kmsKeyId = valueInstanceListInstanceVO["KmsKeyId"].asString();
		if(!valueInstanceListInstanceVO["StandardZoneId"].isNull())
			instanceListObject.standardZoneId = valueInstanceListInstanceVO["StandardZoneId"].asString();
		if(!valueInstanceListInstanceVO["IoMaxSpec"].isNull())
			instanceListObject.ioMaxSpec = valueInstanceListInstanceVO["IoMaxSpec"].asString();
		if(!valueInstanceListInstanceVO["ReservedPublishCapacity"].isNull())
			instanceListObject.reservedPublishCapacity = std::stoi(valueInstanceListInstanceVO["ReservedPublishCapacity"].asString());
		if(!valueInstanceListInstanceVO["ReservedSubscribeCapacity"].isNull())
			instanceListObject.reservedSubscribeCapacity = std::stoi(valueInstanceListInstanceVO["ReservedSubscribeCapacity"].asString());
		if(!valueInstanceListInstanceVO["ViewInstanceStatusCode"].isNull())
			instanceListObject.viewInstanceStatusCode = std::stoi(valueInstanceListInstanceVO["ViewInstanceStatusCode"].asString());
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
		auto confluentConfigNode = value["ConfluentConfig"];
		if(!confluentConfigNode["KafkaCU"].isNull())
			instanceListObject.confluentConfig.kafkaCU = std::stoi(confluentConfigNode["KafkaCU"].asString());
		if(!confluentConfigNode["KafkaStorage"].isNull())
			instanceListObject.confluentConfig.kafkaStorage = std::stoi(confluentConfigNode["KafkaStorage"].asString());
		if(!confluentConfigNode["KafkaReplica"].isNull())
			instanceListObject.confluentConfig.kafkaReplica = std::stoi(confluentConfigNode["KafkaReplica"].asString());
		if(!confluentConfigNode["ZooKeeperCU"].isNull())
			instanceListObject.confluentConfig.zooKeeperCU = std::stoi(confluentConfigNode["ZooKeeperCU"].asString());
		if(!confluentConfigNode["ZooKeeperStorage"].isNull())
			instanceListObject.confluentConfig.zooKeeperStorage = std::stoi(confluentConfigNode["ZooKeeperStorage"].asString());
		if(!confluentConfigNode["ZooKeeperReplica"].isNull())
			instanceListObject.confluentConfig.zooKeeperReplica = std::stoi(confluentConfigNode["ZooKeeperReplica"].asString());
		if(!confluentConfigNode["ControlCenterCU"].isNull())
			instanceListObject.confluentConfig.controlCenterCU = std::stoi(confluentConfigNode["ControlCenterCU"].asString());
		if(!confluentConfigNode["ControlCenterStorage"].isNull())
			instanceListObject.confluentConfig.controlCenterStorage = std::stoi(confluentConfigNode["ControlCenterStorage"].asString());
		if(!confluentConfigNode["ControlCenterReplica"].isNull())
			instanceListObject.confluentConfig.controlCenterReplica = std::stoi(confluentConfigNode["ControlCenterReplica"].asString());
		if(!confluentConfigNode["SchemaRegistryCU"].isNull())
			instanceListObject.confluentConfig.schemaRegistryCU = std::stoi(confluentConfigNode["SchemaRegistryCU"].asString());
		if(!confluentConfigNode["SchemaRegistryReplica"].isNull())
			instanceListObject.confluentConfig.schemaRegistryReplica = std::stoi(confluentConfigNode["SchemaRegistryReplica"].asString());
		if(!confluentConfigNode["ConnectCU"].isNull())
			instanceListObject.confluentConfig.connectCU = std::stoi(confluentConfigNode["ConnectCU"].asString());
		if(!confluentConfigNode["ConnectReplica"].isNull())
			instanceListObject.confluentConfig.connectReplica = std::stoi(confluentConfigNode["ConnectReplica"].asString());
		if(!confluentConfigNode["KsqlCU"].isNull())
			instanceListObject.confluentConfig.ksqlCU = std::stoi(confluentConfigNode["KsqlCU"].asString());
		if(!confluentConfigNode["KsqlStorage"].isNull())
			instanceListObject.confluentConfig.ksqlStorage = std::stoi(confluentConfigNode["KsqlStorage"].asString());
		if(!confluentConfigNode["KsqlReplica"].isNull())
			instanceListObject.confluentConfig.ksqlReplica = std::stoi(confluentConfigNode["KsqlReplica"].asString());
		if(!confluentConfigNode["KafkaRestProxyCU"].isNull())
			instanceListObject.confluentConfig.kafkaRestProxyCU = std::stoi(confluentConfigNode["KafkaRestProxyCU"].asString());
		if(!confluentConfigNode["KafkaRestProxyReplica"].isNull())
			instanceListObject.confluentConfig.kafkaRestProxyReplica = std::stoi(confluentConfigNode["KafkaRestProxyReplica"].asString());
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

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

