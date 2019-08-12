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

#include <alibabacloud/r-kvstore/model/DescribeStaticVerificationListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeStaticVerificationListResult::DescribeStaticVerificationListResult() :
	ServiceResult()
{}

DescribeStaticVerificationListResult::DescribeStaticVerificationListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStaticVerificationListResult::~DescribeStaticVerificationListResult()
{}

void DescribeStaticVerificationListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ItemsItem"];
	for (auto value : allItems)
	{
		ItemsItem itemsObject;
		if(!value["AbnormalType"].isNull())
			itemsObject.abnormalType = value["AbnormalType"].asString();
		if(!value["SourceDetail"].isNull())
			itemsObject.sourceDetail = value["SourceDetail"].asString();
		if(!value["DestinationDetail"].isNull())
			itemsObject.destinationDetail = value["DestinationDetail"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["ReplicaId"].isNull())
		replicaId_ = value["ReplicaId"].asString();
	if(!value["SourceInstanceId"].isNull())
		sourceInstanceId_ = value["SourceInstanceId"].asString();
	if(!value["SourceDBNumber"].isNull())
		sourceDBNumber_ = std::stoi(value["SourceDBNumber"].asString());
	if(!value["SourceTableNumber"].isNull())
		sourceTableNumber_ = std::stoi(value["SourceTableNumber"].asString());
	if(!value["SourceCountNumber"].isNull())
		sourceCountNumber_ = std::stoi(value["SourceCountNumber"].asString());
	if(!value["SourceDBSize"].isNull())
		sourceDBSize_ = std::stoi(value["SourceDBSize"].asString());
	if(!value["DestinationInstanceId"].isNull())
		destinationInstanceId_ = value["DestinationInstanceId"].asString();
	if(!value["DestinationDBNumber"].isNull())
		destinationDBNumber_ = std::stoi(value["DestinationDBNumber"].asString());
	if(!value["DestinationTableNumber"].isNull())
		destinationTableNumber_ = std::stoi(value["DestinationTableNumber"].asString());
	if(!value["DestinationCountNumber"].isNull())
		destinationCountNumber_ = std::stoi(value["DestinationCountNumber"].asString());
	if(!value["DestinationDBSize"].isNull())
		destinationDBSize_ = std::stoi(value["DestinationDBSize"].asString());
	if(!value["ConsistencyPercent"].isNull())
		consistencyPercent_ = value["ConsistencyPercent"].asString();

}

int DescribeStaticVerificationListResult::getDestinationTableNumber()const
{
	return destinationTableNumber_;
}

std::string DescribeStaticVerificationListResult::getDestinationInstanceId()const
{
	return destinationInstanceId_;
}

int DescribeStaticVerificationListResult::getDestinationDBNumber()const
{
	return destinationDBNumber_;
}

std::string DescribeStaticVerificationListResult::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

int DescribeStaticVerificationListResult::getSourceDBNumber()const
{
	return sourceDBNumber_;
}

std::string DescribeStaticVerificationListResult::getReplicaId()const
{
	return replicaId_;
}

int DescribeStaticVerificationListResult::getSourceDBSize()const
{
	return sourceDBSize_;
}

int DescribeStaticVerificationListResult::getSourceCountNumber()const
{
	return sourceCountNumber_;
}

int DescribeStaticVerificationListResult::getDestinationCountNumber()const
{
	return destinationCountNumber_;
}

std::string DescribeStaticVerificationListResult::getConsistencyPercent()const
{
	return consistencyPercent_;
}

std::vector<DescribeStaticVerificationListResult::ItemsItem> DescribeStaticVerificationListResult::getItems()const
{
	return items_;
}

int DescribeStaticVerificationListResult::getDestinationDBSize()const
{
	return destinationDBSize_;
}

int DescribeStaticVerificationListResult::getSourceTableNumber()const
{
	return sourceTableNumber_;
}

