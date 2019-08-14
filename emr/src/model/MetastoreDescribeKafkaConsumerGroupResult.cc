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

#include <alibabacloud/emr/model/MetastoreDescribeKafkaConsumerGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreDescribeKafkaConsumerGroupResult::MetastoreDescribeKafkaConsumerGroupResult() :
	ServiceResult()
{}

MetastoreDescribeKafkaConsumerGroupResult::MetastoreDescribeKafkaConsumerGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreDescribeKafkaConsumerGroupResult::~MetastoreDescribeKafkaConsumerGroupResult()
{}

void MetastoreDescribeKafkaConsumerGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPartitionList = value["PartitionList"]["Partition"];
	for (auto value : allPartitionList)
	{
		Partition partitionListObject;
		if(!value["DataSourceId"].isNull())
			partitionListObject.dataSourceId = value["DataSourceId"].asString();
		if(!value["ConsumerGroupId"].isNull())
			partitionListObject.consumerGroupId = value["ConsumerGroupId"].asString();
		if(!value["PartitionId"].isNull())
			partitionListObject.partitionId = std::stoi(value["PartitionId"].asString());
		if(!value["ConsumerOffset"].isNull())
			partitionListObject.consumerOffset = std::stol(value["ConsumerOffset"].asString());
		if(!value["LogEndOffset"].isNull())
			partitionListObject.logEndOffset = std::stol(value["LogEndOffset"].asString());
		if(!value["Lag"].isNull())
			partitionListObject.lag = std::stol(value["Lag"].asString());
		if(!value["ConsumerInstanceOwner"].isNull())
			partitionListObject.consumerInstanceOwner = value["ConsumerInstanceOwner"].asString();
		if(!value["GmtCreate"].isNull())
			partitionListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			partitionListObject.gmtModified = std::stol(value["GmtModified"].asString());
		partitionList_.push_back(partitionListObject);
	}
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["DataSourceId"].isNull())
		dataSourceId_ = value["DataSourceId"].asString();
	if(!value["ConsumerGroup"].isNull())
		consumerGroup_ = value["ConsumerGroup"].asString();
	if(!value["ConsumerType"].isNull())
		consumerType_ = value["ConsumerType"].asString();
	if(!value["TotalLag"].isNull())
		totalLag_ = std::stol(value["TotalLag"].asString());
	if(!value["PartitionProportion"].isNull())
		partitionProportion_ = value["PartitionProportion"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());
	if(!value["GmtModified"].isNull())
		gmtModified_ = std::stol(value["GmtModified"].asString());

}

long MetastoreDescribeKafkaConsumerGroupResult::getGmtCreate()const
{
	return gmtCreate_;
}

long MetastoreDescribeKafkaConsumerGroupResult::getGmtModified()const
{
	return gmtModified_;
}

std::string MetastoreDescribeKafkaConsumerGroupResult::getId()const
{
	return id_;
}

std::vector<MetastoreDescribeKafkaConsumerGroupResult::Partition> MetastoreDescribeKafkaConsumerGroupResult::getPartitionList()const
{
	return partitionList_;
}

std::string MetastoreDescribeKafkaConsumerGroupResult::getConsumerType()const
{
	return consumerType_;
}

std::string MetastoreDescribeKafkaConsumerGroupResult::getPartitionProportion()const
{
	return partitionProportion_;
}

std::string MetastoreDescribeKafkaConsumerGroupResult::getDataSourceId()const
{
	return dataSourceId_;
}

std::string MetastoreDescribeKafkaConsumerGroupResult::getConsumerGroup()const
{
	return consumerGroup_;
}

long MetastoreDescribeKafkaConsumerGroupResult::getTotalLag()const
{
	return totalLag_;
}

