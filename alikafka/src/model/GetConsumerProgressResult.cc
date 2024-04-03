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

#include <alibabacloud/alikafka/model/GetConsumerProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetConsumerProgressResult::GetConsumerProgressResult() :
	ServiceResult()
{}

GetConsumerProgressResult::GetConsumerProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetConsumerProgressResult::~GetConsumerProgressResult()
{}

void GetConsumerProgressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto consumerProgressNode = value["ConsumerProgress"];
	if(!consumerProgressNode["LastTimestamp"].isNull())
		consumerProgress_.lastTimestamp = std::stol(consumerProgressNode["LastTimestamp"].asString());
	if(!consumerProgressNode["TotalDiff"].isNull())
		consumerProgress_.totalDiff = std::stol(consumerProgressNode["TotalDiff"].asString());
	auto allTopicListNode = consumerProgressNode["TopicList"]["TopicListItem"];
	for (auto consumerProgressNodeTopicListTopicListItem : allTopicListNode)
	{
		ConsumerProgress::TopicListItem topicListItemObject;
		if(!consumerProgressNodeTopicListTopicListItem["TotalDiff"].isNull())
			topicListItemObject.totalDiff = std::stol(consumerProgressNodeTopicListTopicListItem["TotalDiff"].asString());
		if(!consumerProgressNodeTopicListTopicListItem["LastTimestamp"].isNull())
			topicListItemObject.lastTimestamp = std::stol(consumerProgressNodeTopicListTopicListItem["LastTimestamp"].asString());
		if(!consumerProgressNodeTopicListTopicListItem["Topic"].isNull())
			topicListItemObject.topic = consumerProgressNodeTopicListTopicListItem["Topic"].asString();
		auto allOffsetListNode = consumerProgressNodeTopicListTopicListItem["OffsetList"]["OffsetListItem"];
		for (auto consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem : allOffsetListNode)
		{
			ConsumerProgress::TopicListItem::OffsetListItem offsetListObject;
			if(!consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["Partition"].isNull())
				offsetListObject.partition = std::stoi(consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["Partition"].asString());
			if(!consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["BrokerOffset"].isNull())
				offsetListObject.brokerOffset = std::stol(consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["BrokerOffset"].asString());
			if(!consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["ConsumerOffset"].isNull())
				offsetListObject.consumerOffset = std::stol(consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["ConsumerOffset"].asString());
			if(!consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["LastTimestamp"].isNull())
				offsetListObject.lastTimestamp = std::stol(consumerProgressNodeTopicListTopicListItemOffsetListOffsetListItem["LastTimestamp"].asString());
			topicListItemObject.offsetList.push_back(offsetListObject);
		}
		consumerProgress_.topicList.push_back(topicListItemObject);
	}
	auto allRebalanceInfoListNode = consumerProgressNode["RebalanceInfoList"]["RebalanceInfoListItem"];
	for (auto consumerProgressNodeRebalanceInfoListRebalanceInfoListItem : allRebalanceInfoListNode)
	{
		ConsumerProgress::RebalanceInfoListItem rebalanceInfoListItemObject;
		if(!consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["Generation"].isNull())
			rebalanceInfoListItemObject.generation = std::stol(consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["Generation"].asString());
		if(!consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["LastRebalanceTimestamp"].isNull())
			rebalanceInfoListItemObject.lastRebalanceTimestamp = std::stol(consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["LastRebalanceTimestamp"].asString());
		if(!consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["Reason"].isNull())
			rebalanceInfoListItemObject.reason = consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["Reason"].asString();
		if(!consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["GroupId"].isNull())
			rebalanceInfoListItemObject.groupId = consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["GroupId"].asString();
		if(!consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["RebalanceTimeConsuming"].isNull())
			rebalanceInfoListItemObject.rebalanceTimeConsuming = std::stol(consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["RebalanceTimeConsuming"].asString());
		if(!consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["RebalanceSuccess"].isNull())
			rebalanceInfoListItemObject.rebalanceSuccess = consumerProgressNodeRebalanceInfoListRebalanceInfoListItem["RebalanceSuccess"].asString() == "true";
		consumerProgress_.rebalanceInfoList.push_back(rebalanceInfoListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetConsumerProgressResult::getMessage()const
{
	return message_;
}

GetConsumerProgressResult::ConsumerProgress GetConsumerProgressResult::getConsumerProgress()const
{
	return consumerProgress_;
}

int GetConsumerProgressResult::getCode()const
{
	return code_;
}

bool GetConsumerProgressResult::getSuccess()const
{
	return success_;
}

