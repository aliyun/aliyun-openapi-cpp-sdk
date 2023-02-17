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

#include <alibabacloud/mns-open/model/ListQueueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mns_open;
using namespace AlibabaCloud::Mns_open::Model;

ListQueueResult::ListQueueResult() :
	ServiceResult()
{}

ListQueueResult::ListQueueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQueueResult::~ListQueueResult()
{}

void ListQueueResult::parse(const std::string &payload)
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
	if(!dataNode["Size"].isNull())
		data_.size = std::stol(dataNode["Size"].asString());
	if(!dataNode["Pages"].isNull())
		data_.pages = std::stol(dataNode["Pages"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allPageDataNode = dataNode["PageData"]["pageDataItem"];
	for (auto dataNodePageDatapageDataItem : allPageDataNode)
	{
		Data::PageDataItem pageDataItemObject;
		if(!dataNodePageDatapageDataItem["QueueName"].isNull())
			pageDataItemObject.queueName = dataNodePageDatapageDataItem["QueueName"].asString();
		if(!dataNodePageDatapageDataItem["CreateTime"].isNull())
			pageDataItemObject.createTime = std::stol(dataNodePageDatapageDataItem["CreateTime"].asString());
		if(!dataNodePageDatapageDataItem["LastModifyTime"].isNull())
			pageDataItemObject.lastModifyTime = std::stol(dataNodePageDatapageDataItem["LastModifyTime"].asString());
		if(!dataNodePageDatapageDataItem["DelaySeconds"].isNull())
			pageDataItemObject.delaySeconds = std::stol(dataNodePageDatapageDataItem["DelaySeconds"].asString());
		if(!dataNodePageDatapageDataItem["MaximumMessageSize"].isNull())
			pageDataItemObject.maximumMessageSize = std::stol(dataNodePageDatapageDataItem["MaximumMessageSize"].asString());
		if(!dataNodePageDatapageDataItem["MessageRetentionPeriod"].isNull())
			pageDataItemObject.messageRetentionPeriod = std::stol(dataNodePageDatapageDataItem["MessageRetentionPeriod"].asString());
		if(!dataNodePageDatapageDataItem["VisibilityTimeout"].isNull())
			pageDataItemObject.visibilityTimeout = std::stol(dataNodePageDatapageDataItem["VisibilityTimeout"].asString());
		if(!dataNodePageDatapageDataItem["PollingWaitSeconds"].isNull())
			pageDataItemObject.pollingWaitSeconds = std::stol(dataNodePageDatapageDataItem["PollingWaitSeconds"].asString());
		if(!dataNodePageDatapageDataItem["ActiveMessages"].isNull())
			pageDataItemObject.activeMessages = std::stol(dataNodePageDatapageDataItem["ActiveMessages"].asString());
		if(!dataNodePageDatapageDataItem["InactiveMessages"].isNull())
			pageDataItemObject.inactiveMessages = std::stol(dataNodePageDatapageDataItem["InactiveMessages"].asString());
		if(!dataNodePageDatapageDataItem["DelayMessages"].isNull())
			pageDataItemObject.delayMessages = std::stol(dataNodePageDatapageDataItem["DelayMessages"].asString());
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

std::string ListQueueResult::getStatus()const
{
	return status_;
}

std::string ListQueueResult::getMessage()const
{
	return message_;
}

ListQueueResult::Data ListQueueResult::getData()const
{
	return data_;
}

long ListQueueResult::getCode()const
{
	return code_;
}

bool ListQueueResult::getSuccess()const
{
	return success_;
}

