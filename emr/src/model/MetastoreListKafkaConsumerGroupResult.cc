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

#include <alibabacloud/emr/model/MetastoreListKafkaConsumerGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

MetastoreListKafkaConsumerGroupResult::MetastoreListKafkaConsumerGroupResult() :
	ServiceResult()
{}

MetastoreListKafkaConsumerGroupResult::MetastoreListKafkaConsumerGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

MetastoreListKafkaConsumerGroupResult::~MetastoreListKafkaConsumerGroupResult()
{}

void MetastoreListKafkaConsumerGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allConsumerGroupList = value["ConsumerGroupList"]["consumerGroup"];
	for (auto value : allConsumerGroupList)
	{
		ConsumerGroup consumerGroupListObject;
		if(!value["Id"].isNull())
			consumerGroupListObject.id = value["Id"].asString();
		if(!value["DataSourceId"].isNull())
			consumerGroupListObject.dataSourceId = value["DataSourceId"].asString();
		if(!value["ConsumerGroup"].isNull())
			consumerGroupListObject.consumerGroup = value["ConsumerGroup"].asString();
		if(!value["ConsumerType"].isNull())
			consumerGroupListObject.consumerType = value["ConsumerType"].asString();
		if(!value["TotalLag"].isNull())
			consumerGroupListObject.totalLag = std::stol(value["TotalLag"].asString());
		if(!value["GmtCreate"].isNull())
			consumerGroupListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			consumerGroupListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["PartitionProportion"].isNull())
			consumerGroupListObject.partitionProportion = value["PartitionProportion"].asString();
		consumerGroupList_.push_back(consumerGroupListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int MetastoreListKafkaConsumerGroupResult::getTotalCount()const
{
	return totalCount_;
}

int MetastoreListKafkaConsumerGroupResult::getPageSize()const
{
	return pageSize_;
}

int MetastoreListKafkaConsumerGroupResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<MetastoreListKafkaConsumerGroupResult::ConsumerGroup> MetastoreListKafkaConsumerGroupResult::getConsumerGroupList()const
{
	return consumerGroupList_;
}

