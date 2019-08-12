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

#include <alibabacloud/ons/model/OnsGroupSubDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsGroupSubDetailResult::OnsGroupSubDetailResult() :
	ServiceResult()
{}

OnsGroupSubDetailResult::OnsGroupSubDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsGroupSubDetailResult::~OnsGroupSubDetailResult()
{}

void OnsGroupSubDetailResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GroupId"].isNull())
		data_.groupId = dataNode["GroupId"].asString();
	if(!dataNode["Online"].isNull())
		data_.online = dataNode["Online"].asString() == "true";
	if(!dataNode["MessageModel"].isNull())
		data_.messageModel = dataNode["MessageModel"].asString();
	auto allSubscriptionDataList = value["SubscriptionDataList"]["SubscriptionDataListItem"];
	for (auto value : allSubscriptionDataList)
	{
		Data::SubscriptionDataListItem subscriptionDataListItemObject;
		if(!value["Topic"].isNull())
			subscriptionDataListItemObject.topic = value["Topic"].asString();
		if(!value["SubString"].isNull())
			subscriptionDataListItemObject.subString = value["SubString"].asString();
		data_.subscriptionDataList.push_back(subscriptionDataListItemObject);
	}

}

OnsGroupSubDetailResult::Data OnsGroupSubDetailResult::getData()const
{
	return data_;
}

