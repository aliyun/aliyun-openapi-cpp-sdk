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

#include <alibabacloud/alikafka/model/GetTopicStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetTopicStatusResult::GetTopicStatusResult() :
	ServiceResult()
{}

GetTopicStatusResult::GetTopicStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTopicStatusResult::~GetTopicStatusResult()
{}

void GetTopicStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto topicStatusNode = value["TopicStatus"];
	if(!topicStatusNode["TotalCount"].isNull())
		topicStatus_.totalCount = std::stol(topicStatusNode["TotalCount"].asString());
	if(!topicStatusNode["LastTimeStamp"].isNull())
		topicStatus_.lastTimeStamp = std::stol(topicStatusNode["LastTimeStamp"].asString());
	auto allOffsetTableNode = topicStatusNode["OffsetTable"]["OffsetTableItem"];
	for (auto topicStatusNodeOffsetTableOffsetTableItem : allOffsetTableNode)
	{
		TopicStatus::OffsetTableItem offsetTableItemObject;
		if(!topicStatusNodeOffsetTableOffsetTableItem["Partition"].isNull())
			offsetTableItemObject.partition = std::stoi(topicStatusNodeOffsetTableOffsetTableItem["Partition"].asString());
		if(!topicStatusNodeOffsetTableOffsetTableItem["MinOffset"].isNull())
			offsetTableItemObject.minOffset = std::stol(topicStatusNodeOffsetTableOffsetTableItem["MinOffset"].asString());
		if(!topicStatusNodeOffsetTableOffsetTableItem["LastUpdateTimestamp"].isNull())
			offsetTableItemObject.lastUpdateTimestamp = std::stol(topicStatusNodeOffsetTableOffsetTableItem["LastUpdateTimestamp"].asString());
		if(!topicStatusNodeOffsetTableOffsetTableItem["MaxOffset"].isNull())
			offsetTableItemObject.maxOffset = std::stol(topicStatusNodeOffsetTableOffsetTableItem["MaxOffset"].asString());
		if(!topicStatusNodeOffsetTableOffsetTableItem["Topic"].isNull())
			offsetTableItemObject.topic = topicStatusNodeOffsetTableOffsetTableItem["Topic"].asString();
		topicStatus_.offsetTable.push_back(offsetTableItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetTopicStatusResult::getMessage()const
{
	return message_;
}

GetTopicStatusResult::TopicStatus GetTopicStatusResult::getTopicStatus()const
{
	return topicStatus_;
}

int GetTopicStatusResult::getCode()const
{
	return code_;
}

bool GetTopicStatusResult::getSuccess()const
{
	return success_;
}

