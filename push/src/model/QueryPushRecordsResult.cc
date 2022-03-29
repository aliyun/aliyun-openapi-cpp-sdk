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

#include <alibabacloud/push/model/QueryPushRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryPushRecordsResult::QueryPushRecordsResult() :
	ServiceResult()
{}

QueryPushRecordsResult::QueryPushRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPushRecordsResult::~QueryPushRecordsResult()
{}

void QueryPushRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPushInfosNode = value["PushInfos"]["PushInfo"];
	for (auto valuePushInfosPushInfo : allPushInfosNode)
	{
		PushInfo pushInfosObject;
		if(!valuePushInfosPushInfo["Status"].isNull())
			pushInfosObject.status = valuePushInfosPushInfo["Status"].asString();
		if(!valuePushInfosPushInfo["MessageId"].isNull())
			pushInfosObject.messageId = valuePushInfosPushInfo["MessageId"].asString();
		if(!valuePushInfosPushInfo["AppKey"].isNull())
			pushInfosObject.appKey = std::stol(valuePushInfosPushInfo["AppKey"].asString());
		if(!valuePushInfosPushInfo["DeviceType"].isNull())
			pushInfosObject.deviceType = valuePushInfosPushInfo["DeviceType"].asString();
		if(!valuePushInfosPushInfo["PushType"].isNull())
			pushInfosObject.pushType = valuePushInfosPushInfo["PushType"].asString();
		if(!valuePushInfosPushInfo["Body"].isNull())
			pushInfosObject.body = valuePushInfosPushInfo["Body"].asString();
		if(!valuePushInfosPushInfo["Title"].isNull())
			pushInfosObject.title = valuePushInfosPushInfo["Title"].asString();
		if(!valuePushInfosPushInfo["Source"].isNull())
			pushInfosObject.source = valuePushInfosPushInfo["Source"].asString();
		if(!valuePushInfosPushInfo["PushTime"].isNull())
			pushInfosObject.pushTime = valuePushInfosPushInfo["PushTime"].asString();
		if(!valuePushInfosPushInfo["Target"].isNull())
			pushInfosObject.target = valuePushInfosPushInfo["Target"].asString();
		pushInfos_.push_back(pushInfosObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());

}

std::vector<QueryPushRecordsResult::PushInfo> QueryPushRecordsResult::getPushInfos()const
{
	return pushInfos_;
}

std::string QueryPushRecordsResult::getNextToken()const
{
	return nextToken_;
}

int QueryPushRecordsResult::getPageSize()const
{
	return pageSize_;
}

int QueryPushRecordsResult::getTotal()const
{
	return total_;
}

int QueryPushRecordsResult::getPage()const
{
	return page_;
}

