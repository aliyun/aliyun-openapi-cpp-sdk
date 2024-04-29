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

#include <alibabacloud/live/model/DescribeLiveRecordNotifyRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveRecordNotifyRecordsResult::DescribeLiveRecordNotifyRecordsResult() :
	ServiceResult()
{}

DescribeLiveRecordNotifyRecordsResult::DescribeLiveRecordNotifyRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveRecordNotifyRecordsResult::~DescribeLiveRecordNotifyRecordsResult()
{}

void DescribeLiveRecordNotifyRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCallbackListNode = value["CallbackList"]["Callback"];
	for (auto valueCallbackListCallback : allCallbackListNode)
	{
		Callback callbackListObject;
		if(!valueCallbackListCallback["AppName"].isNull())
			callbackListObject.appName = valueCallbackListCallback["AppName"].asString();
		if(!valueCallbackListCallback["Description"].isNull())
			callbackListObject.description = valueCallbackListCallback["Description"].asString();
		if(!valueCallbackListCallback["DomainName"].isNull())
			callbackListObject.domainName = valueCallbackListCallback["DomainName"].asString();
		if(!valueCallbackListCallback["NotifyContent"].isNull())
			callbackListObject.notifyContent = valueCallbackListCallback["NotifyContent"].asString();
		if(!valueCallbackListCallback["NotifyResult"].isNull())
			callbackListObject.notifyResult = valueCallbackListCallback["NotifyResult"].asString();
		if(!valueCallbackListCallback["NotifyTime"].isNull())
			callbackListObject.notifyTime = valueCallbackListCallback["NotifyTime"].asString();
		if(!valueCallbackListCallback["NotifyType"].isNull())
			callbackListObject.notifyType = valueCallbackListCallback["NotifyType"].asString();
		if(!valueCallbackListCallback["NotifyUrl"].isNull())
			callbackListObject.notifyUrl = valueCallbackListCallback["NotifyUrl"].asString();
		if(!valueCallbackListCallback["StreamName"].isNull())
			callbackListObject.streamName = valueCallbackListCallback["StreamName"].asString();
		callbackList_.push_back(callbackListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["TotalPage"].isNull())
		totalPage_ = std::stoi(value["TotalPage"].asString());

}

std::string DescribeLiveRecordNotifyRecordsResult::getMsg()const
{
	return msg_;
}

int DescribeLiveRecordNotifyRecordsResult::getTotalNum()const
{
	return totalNum_;
}

std::vector<DescribeLiveRecordNotifyRecordsResult::Callback> DescribeLiveRecordNotifyRecordsResult::getCallbackList()const
{
	return callbackList_;
}

int DescribeLiveRecordNotifyRecordsResult::getPageNum()const
{
	return pageNum_;
}

int DescribeLiveRecordNotifyRecordsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLiveRecordNotifyRecordsResult::getTotalPage()const
{
	return totalPage_;
}

int DescribeLiveRecordNotifyRecordsResult::getCode()const
{
	return code_;
}

