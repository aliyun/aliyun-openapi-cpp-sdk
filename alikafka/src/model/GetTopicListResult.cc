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

#include <alibabacloud/alikafka/model/GetTopicListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

GetTopicListResult::GetTopicListResult() :
	ServiceResult()
{}

GetTopicListResult::GetTopicListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTopicListResult::~GetTopicListResult()
{}

void GetTopicListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopicListNode = value["TopicList"]["TopicVO"];
	for (auto valueTopicListTopicVO : allTopicListNode)
	{
		TopicVO topicListObject;
		if(!valueTopicListTopicVO["Status"].isNull())
			topicListObject.status = std::stoi(valueTopicListTopicVO["Status"].asString());
		if(!valueTopicListTopicVO["PartitionNum"].isNull())
			topicListObject.partitionNum = std::stoi(valueTopicListTopicVO["PartitionNum"].asString());
		if(!valueTopicListTopicVO["Remark"].isNull())
			topicListObject.remark = valueTopicListTopicVO["Remark"].asString();
		if(!valueTopicListTopicVO["CreateTime"].isNull())
			topicListObject.createTime = std::stol(valueTopicListTopicVO["CreateTime"].asString());
		if(!valueTopicListTopicVO["Topic"].isNull())
			topicListObject.topic = valueTopicListTopicVO["Topic"].asString();
		if(!valueTopicListTopicVO["StatusName"].isNull())
			topicListObject.statusName = valueTopicListTopicVO["StatusName"].asString();
		if(!valueTopicListTopicVO["CompactTopic"].isNull())
			topicListObject.compactTopic = valueTopicListTopicVO["CompactTopic"].asString() == "true";
		if(!valueTopicListTopicVO["InstanceId"].isNull())
			topicListObject.instanceId = valueTopicListTopicVO["InstanceId"].asString();
		if(!valueTopicListTopicVO["LocalTopic"].isNull())
			topicListObject.localTopic = valueTopicListTopicVO["LocalTopic"].asString() == "true";
		if(!valueTopicListTopicVO["RegionId"].isNull())
			topicListObject.regionId = valueTopicListTopicVO["RegionId"].asString();
		if(!valueTopicListTopicVO["AutoCreate"].isNull())
			topicListObject.autoCreate = valueTopicListTopicVO["AutoCreate"].asString() == "true";
		auto allTagsNode = valueTopicListTopicVO["Tags"]["TagVO"];
		for (auto valueTopicListTopicVOTagsTagVO : allTagsNode)
		{
			TopicVO::TagVO tagsObject;
			if(!valueTopicListTopicVOTagsTagVO["Key"].isNull())
				tagsObject.key = valueTopicListTopicVOTagsTagVO["Key"].asString();
			if(!valueTopicListTopicVOTagsTagVO["Value"].isNull())
				tagsObject.value = valueTopicListTopicVOTagsTagVO["Value"].asString();
			topicListObject.tags.push_back(tagsObject);
		}
		topicList_.push_back(topicListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string GetTopicListResult::getMessage()const
{
	return message_;
}

int GetTopicListResult::getPageSize()const
{
	return pageSize_;
}

int GetTopicListResult::getCurrentPage()const
{
	return currentPage_;
}

int GetTopicListResult::getTotal()const
{
	return total_;
}

std::vector<GetTopicListResult::TopicVO> GetTopicListResult::getTopicList()const
{
	return topicList_;
}

int GetTopicListResult::getCode()const
{
	return code_;
}

bool GetTopicListResult::getSuccess()const
{
	return success_;
}

