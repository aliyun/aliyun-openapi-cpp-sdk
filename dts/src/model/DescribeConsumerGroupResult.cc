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

#include <alibabacloud/dts/model/DescribeConsumerGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeConsumerGroupResult::DescribeConsumerGroupResult() :
	ServiceResult()
{}

DescribeConsumerGroupResult::DescribeConsumerGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConsumerGroupResult::~DescribeConsumerGroupResult()
{}

void DescribeConsumerGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConsumerChannelsNode = value["ConsumerChannels"]["DescribeConsumerChannel"];
	for (auto valueConsumerChannelsDescribeConsumerChannel : allConsumerChannelsNode)
	{
		DescribeConsumerChannel consumerChannelsObject;
		if(!valueConsumerChannelsDescribeConsumerChannel["ConsumerGroupID"].isNull())
			consumerChannelsObject.consumerGroupID = valueConsumerChannelsDescribeConsumerChannel["ConsumerGroupID"].asString();
		if(!valueConsumerChannelsDescribeConsumerChannel["ConsumerGroupName"].isNull())
			consumerChannelsObject.consumerGroupName = valueConsumerChannelsDescribeConsumerChannel["ConsumerGroupName"].asString();
		if(!valueConsumerChannelsDescribeConsumerChannel["ConsumerGroupUserName"].isNull())
			consumerChannelsObject.consumerGroupUserName = valueConsumerChannelsDescribeConsumerChannel["ConsumerGroupUserName"].asString();
		if(!valueConsumerChannelsDescribeConsumerChannel["ConsumptionCheckpoint"].isNull())
			consumerChannelsObject.consumptionCheckpoint = valueConsumerChannelsDescribeConsumerChannel["ConsumptionCheckpoint"].asString();
		if(!valueConsumerChannelsDescribeConsumerChannel["MessageDelay"].isNull())
			consumerChannelsObject.messageDelay = std::stol(valueConsumerChannelsDescribeConsumerChannel["MessageDelay"].asString());
		if(!valueConsumerChannelsDescribeConsumerChannel["UnconsumedData"].isNull())
			consumerChannelsObject.unconsumedData = std::stol(valueConsumerChannelsDescribeConsumerChannel["UnconsumedData"].asString());
		consumerChannels_.push_back(consumerChannelsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

int DescribeConsumerGroupResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeConsumerGroupResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeConsumerGroupResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeConsumerGroupResult::DescribeConsumerChannel> DescribeConsumerGroupResult::getConsumerChannels()const
{
	return consumerChannels_;
}

std::string DescribeConsumerGroupResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeConsumerGroupResult::getSuccess()const
{
	return success_;
}

std::string DescribeConsumerGroupResult::getErrCode()const
{
	return errCode_;
}

