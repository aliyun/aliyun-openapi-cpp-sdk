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

#include <alibabacloud/emr/model/MetastoreDescribeKafkaTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreDescribeKafkaTopicResult::MetastoreDescribeKafkaTopicResult() :
	ServiceResult()
{}

MetastoreDescribeKafkaTopicResult::MetastoreDescribeKafkaTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreDescribeKafkaTopicResult::~MetastoreDescribeKafkaTopicResult()
{}

void MetastoreDescribeKafkaTopicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAdvancedConfigList = value["AdvancedConfigList"]["AdvancedConfig"];
	for (auto value : allAdvancedConfigList)
	{
		AdvancedConfig advancedConfigListObject;
		if(!value["Key"].isNull())
			advancedConfigListObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			advancedConfigListObject.value = value["Value"].asString();
		advancedConfigList_.push_back(advancedConfigListObject);
	}
	auto allSummaryList = value["SummaryList"]["Summary"];
	for (auto value : allSummaryList)
	{
		Summary summaryListObject;
		if(!value["Key"].isNull())
			summaryListObject.key = value["Key"].asString();
		if(!value["Value"].isNull())
			summaryListObject.value = value["Value"].asString();
		summaryList_.push_back(summaryListObject);
	}
	auto allDistributionList = value["DistributionList"]["Distribution"];
	for (auto value : allDistributionList)
	{
		Distribution distributionListObject;
		if(!value["Partition"].isNull())
			distributionListObject.partition = std::stoi(value["Partition"].asString());
		if(!value["Offset"].isNull())
			distributionListObject.offset = std::stol(value["Offset"].asString());
		if(!value["Leader"].isNull())
			distributionListObject.leader = std::stoi(value["Leader"].asString());
		if(!value["PreferredLeader"].isNull())
			distributionListObject.preferredLeader = value["PreferredLeader"].asString() == "true";
		if(!value["UnderReplicated"].isNull())
			distributionListObject.underReplicated = value["UnderReplicated"].asString() == "true";
		if(!value["LogEndOffset"].isNull())
			distributionListObject.logEndOffset = std::stol(value["LogEndOffset"].asString());
		auto allIsrList = value["IsrList"]["Isr"];
		for (auto value : allIsrList)
			distributionListObject.isrList.push_back(value.asString());
		auto allReplicaList = value["ReplicaList"]["Replica"];
		for (auto value : allReplicaList)
			distributionListObject.replicaList.push_back(value.asString());
		distributionList_.push_back(distributionListObject);
	}
	auto clusterNode = value["Cluster"];
	if(!clusterNode["ClusterBizId"].isNull())
		cluster_.clusterBizId = clusterNode["ClusterBizId"].asString();
	if(!clusterNode["ClusterName"].isNull())
		cluster_.clusterName = clusterNode["ClusterName"].asString();
	if(!clusterNode["ClusterStatus"].isNull())
		cluster_.clusterStatus = clusterNode["ClusterStatus"].asString();
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["DataSourceId"].isNull())
		dataSourceId_ = value["DataSourceId"].asString();
	if(!value["TopicName"].isNull())
		topicName_ = value["TopicName"].asString();
	if(!value["NumPartitions"].isNull())
		numPartitions_ = std::stoi(value["NumPartitions"].asString());
	if(!value["ReplicationFactor"].isNull())
		replicationFactor_ = std::stoi(value["ReplicationFactor"].asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());
	if(!value["BrokerTotal"].isNull())
		brokerTotal_ = std::stoi(value["BrokerTotal"].asString());
	if(!value["NumUsingBrokers"].isNull())
		numUsingBrokers_ = std::stoi(value["NumUsingBrokers"].asString());
	if(!value["BrokersLeaderSkewPercentage"].isNull())
		brokersLeaderSkewPercentage_ = value["BrokersLeaderSkewPercentage"].asString();
	if(!value["UnderReplicatedPercentage"].isNull())
		underReplicatedPercentage_ = value["UnderReplicatedPercentage"].asString();
	if(!value["PreferredReplicasPercentage"].isNull())
		preferredReplicasPercentage_ = value["PreferredReplicasPercentage"].asString();

}

std::vector<MetastoreDescribeKafkaTopicResult::AdvancedConfig> MetastoreDescribeKafkaTopicResult::getAdvancedConfigList()const
{
	return advancedConfigList_;
}

int MetastoreDescribeKafkaTopicResult::getReplicationFactor()const
{
	return replicationFactor_;
}

std::vector<MetastoreDescribeKafkaTopicResult::Summary> MetastoreDescribeKafkaTopicResult::getSummaryList()const
{
	return summaryList_;
}

long MetastoreDescribeKafkaTopicResult::getGmtModified()const
{
	return gmtModified_;
}

MetastoreDescribeKafkaTopicResult::Cluster MetastoreDescribeKafkaTopicResult::getCluster()const
{
	return cluster_;
}

std::string MetastoreDescribeKafkaTopicResult::getPreferredReplicasPercentage()const
{
	return preferredReplicasPercentage_;
}

int MetastoreDescribeKafkaTopicResult::getBrokerTotal()const
{
	return brokerTotal_;
}

std::string MetastoreDescribeKafkaTopicResult::getTopicName()const
{
	return topicName_;
}

std::string MetastoreDescribeKafkaTopicResult::getUnderReplicatedPercentage()const
{
	return underReplicatedPercentage_;
}

long MetastoreDescribeKafkaTopicResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string MetastoreDescribeKafkaTopicResult::getBrokersLeaderSkewPercentage()const
{
	return brokersLeaderSkewPercentage_;
}

int MetastoreDescribeKafkaTopicResult::getNumUsingBrokers()const
{
	return numUsingBrokers_;
}

int MetastoreDescribeKafkaTopicResult::getNumPartitions()const
{
	return numPartitions_;
}

std::string MetastoreDescribeKafkaTopicResult::getId()const
{
	return id_;
}

std::string MetastoreDescribeKafkaTopicResult::getDataSourceId()const
{
	return dataSourceId_;
}

std::vector<MetastoreDescribeKafkaTopicResult::Distribution> MetastoreDescribeKafkaTopicResult::getDistributionList()const
{
	return distributionList_;
}

