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

#include <alibabacloud/push/model/ListPushRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

ListPushRecordsResult::ListPushRecordsResult() :
	ServiceResult()
{}

ListPushRecordsResult::ListPushRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPushRecordsResult::~ListPushRecordsResult()
{}

void ListPushRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPushMessageInfos = value["PushMessageInfos"]["PushMessageInfo"];
	for (auto value : allPushMessageInfos)
	{
		PushMessageInfo pushMessageInfosObject;
		if(!value["AppKey"].isNull())
			pushMessageInfosObject.appKey = std::stol(value["AppKey"].asString());
		if(!value["AppName"].isNull())
			pushMessageInfosObject.appName = value["AppName"].asString();
		if(!value["MessageId"].isNull())
			pushMessageInfosObject.messageId = value["MessageId"].asString();
		if(!value["Type"].isNull())
			pushMessageInfosObject.type = value["Type"].asString();
		if(!value["DeviceType"].isNull())
			pushMessageInfosObject.deviceType = value["DeviceType"].asString();
		if(!value["PushTime"].isNull())
			pushMessageInfosObject.pushTime = value["PushTime"].asString();
		if(!value["Title"].isNull())
			pushMessageInfosObject.title = value["Title"].asString();
		if(!value["Body"].isNull())
			pushMessageInfosObject.body = value["Body"].asString();
		pushMessageInfos_.push_back(pushMessageInfosObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListPushRecordsResult::getPageSize()const
{
	return pageSize_;
}

int ListPushRecordsResult::getTotal()const
{
	return total_;
}

int ListPushRecordsResult::getPage()const
{
	return page_;
}

std::vector<ListPushRecordsResult::PushMessageInfo> ListPushRecordsResult::getPushMessageInfos()const
{
	return pushMessageInfos_;
}

