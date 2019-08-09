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

#include <alibabacloud/emr/model/MetastoreListKafkaTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListKafkaTopicResult::MetastoreListKafkaTopicResult() :
	ServiceResult()
{}

MetastoreListKafkaTopicResult::MetastoreListKafkaTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListKafkaTopicResult::~MetastoreListKafkaTopicResult()
{}

void MetastoreListKafkaTopicResult::parse(const std::string &payload)
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
		if(!value["Id"].isNull())
			topicListObject.id = value["Id"].asString();
		if(!value["DataSourceId"].isNull())
			topicListObject.dataSourceId = value["DataSourceId"].asString();
		if(!value["TopicName"].isNull())
			topicListObject.topicName = value["TopicName"].asString();
		if(!value["NumPartitions"].isNull())
			topicListObject.numPartitions = std::stoi(value["NumPartitions"].asString());
		if(!value["ReplicationFactor"].isNull())
			topicListObject.replicationFactor = std::stoi(value["ReplicationFactor"].asString());
		if(!value["GmtCreate"].isNull())
			topicListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			topicListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Status"].isNull())
			topicListObject.status = value["Status"].asString();
		if(!value["ReassignId"].isNull())
			topicListObject.reassignId = value["ReassignId"].asString();
		auto allAdvancedConfigList = value["AdvancedConfigList"]["AdvancedConfig"];
		for (auto value : allAdvancedConfigList)
		{
			Topic::AdvancedConfig advancedConfigListObject;
			if(!value["Key"].isNull())
				advancedConfigListObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				advancedConfigListObject.value = value["Value"].asString();
			topicListObject.advancedConfigList.push_back(advancedConfigListObject);
		}
		auto clusterNode = value["Cluster"];
		if(!clusterNode["ClusterBizId"].isNull())
			topicListObject.cluster.clusterBizId = clusterNode["ClusterBizId"].asString();
		if(!clusterNode["ClusterName"].isNull())
			topicListObject.cluster.clusterName = clusterNode["ClusterName"].asString();
		if(!clusterNode["ClusterStatus"].isNull())
			topicListObject.cluster.clusterStatus = clusterNode["ClusterStatus"].asString();
		topicList_.push_back(topicListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int MetastoreListKafkaTopicResult::getTotalCount()const
{
	return totalCount_;
}

int MetastoreListKafkaTopicResult::getPageSize()const
{
	return pageSize_;
}

int MetastoreListKafkaTopicResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<MetastoreListKafkaTopicResult::Topic> MetastoreListKafkaTopicResult::getTopicList()const
{
	return topicList_;
}

