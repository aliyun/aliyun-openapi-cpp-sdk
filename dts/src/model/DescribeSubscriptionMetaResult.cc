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

#include <alibabacloud/dts/model/DescribeSubscriptionMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSubscriptionMetaResult::DescribeSubscriptionMetaResult() :
	ServiceResult()
{}

DescribeSubscriptionMetaResult::DescribeSubscriptionMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSubscriptionMetaResult::~DescribeSubscriptionMetaResult()
{}

void DescribeSubscriptionMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubscriptionMetaListNode = value["SubscriptionMetaList"]["SubscriptionMetaListItem"];
	for (auto valueSubscriptionMetaListSubscriptionMetaListItem : allSubscriptionMetaListNode)
	{
		SubscriptionMetaListItem subscriptionMetaListObject;
		if(!valueSubscriptionMetaListSubscriptionMetaListItem["DProxyUrl"].isNull())
			subscriptionMetaListObject.dProxyUrl = valueSubscriptionMetaListSubscriptionMetaListItem["DProxyUrl"].asString();
		if(!valueSubscriptionMetaListSubscriptionMetaListItem["Topic"].isNull())
			subscriptionMetaListObject.topic = valueSubscriptionMetaListSubscriptionMetaListItem["Topic"].asString();
		if(!valueSubscriptionMetaListSubscriptionMetaListItem["Sid"].isNull())
			subscriptionMetaListObject.sid = valueSubscriptionMetaListSubscriptionMetaListItem["Sid"].asString();
		if(!valueSubscriptionMetaListSubscriptionMetaListItem["Checkpoint"].isNull())
			subscriptionMetaListObject.checkpoint = std::stol(valueSubscriptionMetaListSubscriptionMetaListItem["Checkpoint"].asString());
		if(!valueSubscriptionMetaListSubscriptionMetaListItem["DBList"].isNull())
			subscriptionMetaListObject.dBList = valueSubscriptionMetaListSubscriptionMetaListItem["DBList"].asString();
		subscriptionMetaList_.push_back(subscriptionMetaListObject);
	}
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::vector<DescribeSubscriptionMetaResult::SubscriptionMetaListItem> DescribeSubscriptionMetaResult::getSubscriptionMetaList()const
{
	return subscriptionMetaList_;
}

std::string DescribeSubscriptionMetaResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeSubscriptionMetaResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeSubscriptionMetaResult::getSuccess()const
{
	return success_;
}

std::string DescribeSubscriptionMetaResult::getErrCode()const
{
	return errCode_;
}

