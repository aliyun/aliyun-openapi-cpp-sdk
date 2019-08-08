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

#include <alibabacloud/emr/model/DescribeKafkaBrokerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeKafkaBrokerResult::DescribeKafkaBrokerResult() :
	ServiceResult()
{}

DescribeKafkaBrokerResult::DescribeKafkaBrokerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeKafkaBrokerResult::~DescribeKafkaBrokerResult()
{}

void DescribeKafkaBrokerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTopicList = value["TopicList"]["Topic"];
	for (auto value : allTopicList)
	{
		Topic topicListObject;
		if(!value["TopicId"].isNull())
			topicListObject.topicId = value["TopicId"].asString();
		if(!value["TopicName"].isNull())
			topicListObject.topicName = value["TopicName"].asString();
		if(!value["NumPartitions"].isNull())
			topicListObject.numPartitions = std::stoi(value["NumPartitions"].asString());
		if(!value["ReplicationFactor"].isNull())
			topicListObject.replicationFactor = std::stoi(value["ReplicationFactor"].asString());
		if(!value["BrokerNumPartitions"].isNull())
			topicListObject.brokerNumPartitions = std::stoi(value["BrokerNumPartitions"].asString());
		if(!value["LeaderCount"].isNull())
			topicListObject.leaderCount = std::stoi(value["LeaderCount"].asString());
		auto allPartitionList = value["partitionList"]["Partition"];
		for (auto value : allPartitionList)
			topicListObject.partitionList.push_back(value.asString());
		topicList_.push_back(topicListObject);
	}
	if(!value["BrokerId"].isNull())
		brokerId_ = std::stoi(value["BrokerId"].asString());
	if(!value["HostId"].isNull())
		hostId_ = value["HostId"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["HostIp"].isNull())
		hostIp_ = value["HostIp"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["PartitionCount"].isNull())
		partitionCount_ = std::stoi(value["PartitionCount"].asString());
	if(!value["LeaderCount"].isNull())
		leaderCount_ = std::stoi(value["LeaderCount"].asString());
	if(!value["TopicCount"].isNull())
		topicCount_ = std::stoi(value["TopicCount"].asString());
	if(!value["DiskUnbalanceRate"].isNull())
		diskUnbalanceRate_ = value["DiskUnbalanceRate"].asString();
	if(!value["DiskUsageMean"].isNull())
		diskUsageMean_ = value["DiskUsageMean"].asString();
	if(!value["DiskUsageMax"].isNull())
		diskUsageMax_ = value["DiskUsageMax"].asString();
	if(!value["DiskCapacity"].isNull())
		diskCapacity_ = std::stoi(value["DiskCapacity"].asString());
	if(!value["Traffic"].isNull())
		traffic_ = value["Traffic"].asString();

}

std::string DescribeKafkaBrokerResult::getHostIp()const
{
	return hostIp_;
}

std::string DescribeKafkaBrokerResult::getStatus()const
{
	return status_;
}

int DescribeKafkaBrokerResult::getLeaderCount()const
{
	return leaderCount_;
}

int DescribeKafkaBrokerResult::getBrokerId()const
{
	return brokerId_;
}

std::string DescribeKafkaBrokerResult::getDiskUsageMean()const
{
	return diskUsageMean_;
}

std::string DescribeKafkaBrokerResult::getDiskUsageMax()const
{
	return diskUsageMax_;
}

std::string DescribeKafkaBrokerResult::getTraffic()const
{
	return traffic_;
}

int DescribeKafkaBrokerResult::getTopicCount()const
{
	return topicCount_;
}

std::string DescribeKafkaBrokerResult::getHostId()const
{
	return hostId_;
}

int DescribeKafkaBrokerResult::getDiskCapacity()const
{
	return diskCapacity_;
}

std::string DescribeKafkaBrokerResult::getDiskUnbalanceRate()const
{
	return diskUnbalanceRate_;
}

std::vector<DescribeKafkaBrokerResult::Topic> DescribeKafkaBrokerResult::getTopicList()const
{
	return topicList_;
}

std::string DescribeKafkaBrokerResult::getHostName()const
{
	return hostName_;
}

int DescribeKafkaBrokerResult::getPartitionCount()const
{
	return partitionCount_;
}

