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

#include <alibabacloud/dts/model/DescribeConsumerChannelResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeConsumerChannelResult::DescribeConsumerChannelResult() :
	ServiceResult()
{}

DescribeConsumerChannelResult::DescribeConsumerChannelResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeConsumerChannelResult::~DescribeConsumerChannelResult()
{}

void DescribeConsumerChannelResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConsumerChannelsNode = value["ConsumerChannels"]["ConsumerChannel"];
	for (auto valueConsumerChannelsConsumerChannel : allConsumerChannelsNode)
	{
		ConsumerChannel consumerChannelsObject;
		if(!valueConsumerChannelsConsumerChannel["ConsumerGroupUserName"].isNull())
			consumerChannelsObject.consumerGroupUserName = valueConsumerChannelsConsumerChannel["ConsumerGroupUserName"].asString();
		if(!valueConsumerChannelsConsumerChannel["ConsumerGroupId"].isNull())
			consumerChannelsObject.consumerGroupId = valueConsumerChannelsConsumerChannel["ConsumerGroupId"].asString();
		if(!valueConsumerChannelsConsumerChannel["MessageDelay"].isNull())
			consumerChannelsObject.messageDelay = std::stol(valueConsumerChannelsConsumerChannel["MessageDelay"].asString());
		if(!valueConsumerChannelsConsumerChannel["ConsumerGroupName"].isNull())
			consumerChannelsObject.consumerGroupName = valueConsumerChannelsConsumerChannel["ConsumerGroupName"].asString();
		if(!valueConsumerChannelsConsumerChannel["ConsumptionCheckpoint"].isNull())
			consumerChannelsObject.consumptionCheckpoint = valueConsumerChannelsConsumerChannel["ConsumptionCheckpoint"].asString();
		if(!valueConsumerChannelsConsumerChannel["UnconsumedData"].isNull())
			consumerChannelsObject.unconsumedData = std::stol(valueConsumerChannelsConsumerChannel["UnconsumedData"].asString());
		consumerChannels_.push_back(consumerChannelsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

long DescribeConsumerChannelResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeConsumerChannelResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeConsumerChannelResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeConsumerChannelResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<DescribeConsumerChannelResult::ConsumerChannel> DescribeConsumerChannelResult::getConsumerChannels()const
{
	return consumerChannels_;
}

std::string DescribeConsumerChannelResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeConsumerChannelResult::getSuccess()const
{
	return success_;
}

std::string DescribeConsumerChannelResult::getErrCode()const
{
	return errCode_;
}

