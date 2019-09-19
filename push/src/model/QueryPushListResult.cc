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

#include <alibabacloud/push/model/QueryPushListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

QueryPushListResult::QueryPushListResult() :
	ServiceResult()
{}

QueryPushListResult::QueryPushListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPushListResult::~QueryPushListResult()
{}

void QueryPushListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPushMessageInfosNode = value["PushMessageInfos"]["PushMessageInfo"];
	for (auto valuePushMessageInfosPushMessageInfo : allPushMessageInfosNode)
	{
		PushMessageInfo pushMessageInfosObject;
		if(!valuePushMessageInfosPushMessageInfo["AppKey"].isNull())
			pushMessageInfosObject.appKey = std::stol(valuePushMessageInfosPushMessageInfo["AppKey"].asString());
		if(!valuePushMessageInfosPushMessageInfo["AppName"].isNull())
			pushMessageInfosObject.appName = valuePushMessageInfosPushMessageInfo["AppName"].asString();
		if(!valuePushMessageInfosPushMessageInfo["MessageId"].isNull())
			pushMessageInfosObject.messageId = valuePushMessageInfosPushMessageInfo["MessageId"].asString();
		if(!valuePushMessageInfosPushMessageInfo["Type"].isNull())
			pushMessageInfosObject.type = valuePushMessageInfosPushMessageInfo["Type"].asString();
		if(!valuePushMessageInfosPushMessageInfo["DeviceType"].isNull())
			pushMessageInfosObject.deviceType = valuePushMessageInfosPushMessageInfo["DeviceType"].asString();
		if(!valuePushMessageInfosPushMessageInfo["PushTime"].isNull())
			pushMessageInfosObject.pushTime = valuePushMessageInfosPushMessageInfo["PushTime"].asString();
		if(!valuePushMessageInfosPushMessageInfo["Title"].isNull())
			pushMessageInfosObject.title = valuePushMessageInfosPushMessageInfo["Title"].asString();
		if(!valuePushMessageInfosPushMessageInfo["Body"].isNull())
			pushMessageInfosObject.body = valuePushMessageInfosPushMessageInfo["Body"].asString();
		pushMessageInfos_.push_back(pushMessageInfosObject);
	}
	if(!value["HasNext"].isNull())
		hasNext_ = value["HasNext"].asString() == "true";
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int QueryPushListResult::getPageSize()const
{
	return pageSize_;
}

int QueryPushListResult::getPage()const
{
	return page_;
}

std::vector<QueryPushListResult::PushMessageInfo> QueryPushListResult::getPushMessageInfos()const
{
	return pushMessageInfos_;
}

bool QueryPushListResult::getHasNext()const
{
	return hasNext_;
}

