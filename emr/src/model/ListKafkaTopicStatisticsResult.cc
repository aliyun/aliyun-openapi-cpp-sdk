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

#include <alibabacloud/emr/model/ListKafkaTopicStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListKafkaTopicStatisticsResult::ListKafkaTopicStatisticsResult() :
	ServiceResult()
{}

ListKafkaTopicStatisticsResult::ListKafkaTopicStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKafkaTopicStatisticsResult::~ListKafkaTopicStatisticsResult()
{}

void ListKafkaTopicStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTopicList = value["TopicList"]["Topic"];
	for (auto value : allTopicList)
	{
		Topic topicListObject;
		if(!value["DataSourceId"].isNull())
			topicListObject.dataSourceId = value["DataSourceId"].asString();
		if(!value["TopicId"].isNull())
			topicListObject.topicId = value["TopicId"].asString();
		if(!value["TopicName"].isNull())
			topicListObject.topicName = value["TopicName"].asString();
		if(!value["NumPartitions"].isNull())
			topicListObject.numPartitions = std::stoi(value["NumPartitions"].asString());
		if(!value["OffsetSum"].isNull())
			topicListObject.offsetSum = std::stol(value["OffsetSum"].asString());
		if(!value["OffsetRate"].isNull())
			topicListObject.offsetRate = value["OffsetRate"].asString();
		if(!value["UnderReplicatedPercentage"].isNull())
			topicListObject.underReplicatedPercentage = value["UnderReplicatedPercentage"].asString();
		if(!value["MessageRate"].isNull())
			topicListObject.messageRate = value["MessageRate"].asString();
		if(!value["BytesInPerSecondRate"].isNull())
			topicListObject.bytesInPerSecondRate = value["BytesInPerSecondRate"].asString();
		if(!value["BytesOutPerSecondRate"].isNull())
			topicListObject.bytesOutPerSecondRate = value["BytesOutPerSecondRate"].asString();
		auto clusterNode = value["Cluster"];
		if(!clusterNode["ClusterId"].isNull())
			topicListObject.cluster.clusterId = clusterNode["ClusterId"].asString();
		if(!clusterNode["ClusterName"].isNull())
			topicListObject.cluster.clusterName = clusterNode["ClusterName"].asString();
		if(!clusterNode["ClusterStatus"].isNull())
			topicListObject.cluster.clusterStatus = clusterNode["ClusterStatus"].asString();
		topicList_.push_back(topicListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListKafkaTopicStatisticsResult::getPageSize()const
{
	return pageSize_;
}

int ListKafkaTopicStatisticsResult::getPageNumber()const
{
	return pageNumber_;
}

int ListKafkaTopicStatisticsResult::getTotal()const
{
	return total_;
}

std::vector<ListKafkaTopicStatisticsResult::Topic> ListKafkaTopicStatisticsResult::getTopicList()const
{
	return topicList_;
}

