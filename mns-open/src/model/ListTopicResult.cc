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

#include <alibabacloud/mns-open/model/ListTopicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

ListTopicResult::ListTopicResult() :
	ServiceResult()
{}

ListTopicResult::ListTopicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTopicResult::~ListTopicResult()
{}

void ListTopicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stol(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stol(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allPageDataNode = dataNode["PageData"]["pageDataItem"];
	for (auto dataNodePageDatapageDataItem : allPageDataNode)
	{
		Data::PageDataItem pageDataItemObject;
		if(!dataNodePageDatapageDataItem["TopicName"].isNull())
			pageDataItemObject.topicName = dataNodePageDatapageDataItem["TopicName"].asString();
		if(!dataNodePageDatapageDataItem["MessageCount"].isNull())
			pageDataItemObject.messageCount = std::stol(dataNodePageDatapageDataItem["MessageCount"].asString());
		if(!dataNodePageDatapageDataItem["MaxMessageSize"].isNull())
			pageDataItemObject.maxMessageSize = std::stol(dataNodePageDatapageDataItem["MaxMessageSize"].asString());
		if(!dataNodePageDatapageDataItem["MessageRetentionPeriod"].isNull())
			pageDataItemObject.messageRetentionPeriod = std::stol(dataNodePageDatapageDataItem["MessageRetentionPeriod"].asString());
		if(!dataNodePageDatapageDataItem["CreateTime"].isNull())
			pageDataItemObject.createTime = std::stol(dataNodePageDatapageDataItem["CreateTime"].asString());
		if(!dataNodePageDatapageDataItem["LastModifyTime"].isNull())
			pageDataItemObject.lastModifyTime = std::stol(dataNodePageDatapageDataItem["LastModifyTime"].asString());
		if(!dataNodePageDatapageDataItem["LoggingEnabled"].isNull())
			pageDataItemObject.loggingEnabled = dataNodePageDatapageDataItem["LoggingEnabled"].asString() == "true";
		data_.pageData.push_back(pageDataItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTopicResult::getStatus()const
{
	return status_;
}

std::string ListTopicResult::getMessage()const
{
	return message_;
}

ListTopicResult::Data ListTopicResult::getData()const
{
	return data_;
}

long ListTopicResult::getCode()const
{
	return code_;
}

bool ListTopicResult::getSuccess()const
{
	return success_;
}

