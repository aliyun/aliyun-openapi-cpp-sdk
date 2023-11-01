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

#include <alibabacloud/avatar/model/QueryRunningInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

QueryRunningInstanceResult::QueryRunningInstanceResult() :
	ServiceResult()
{}

QueryRunningInstanceResult::QueryRunningInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryRunningInstanceResult::~QueryRunningInstanceResult()
{}

void QueryRunningInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["SessionId"].isNull())
			dataObject.sessionId = valueDatadataItem["SessionId"].asString();
		if(!valueDatadataItem["Token"].isNull())
			dataObject.token = valueDatadataItem["Token"].asString();
		auto channelNode = value["Channel"];
		if(!channelNode["ChannelId"].isNull())
			dataObject.channel.channelId = channelNode["ChannelId"].asString();
		if(!channelNode["Token"].isNull())
			dataObject.channel.token = channelNode["Token"].asString();
		if(!channelNode["Type"].isNull())
			dataObject.channel.type = channelNode["Type"].asString();
		if(!channelNode["ExpiredTime"].isNull())
			dataObject.channel.expiredTime = channelNode["ExpiredTime"].asString();
		if(!channelNode["Nonce"].isNull())
			dataObject.channel.nonce = channelNode["Nonce"].asString();
		if(!channelNode["UserId"].isNull())
			dataObject.channel.userId = channelNode["UserId"].asString();
		if(!channelNode["AppId"].isNull())
			dataObject.channel.appId = channelNode["AppId"].asString();
		if(!channelNode["UserInfoInChannel"].isNull())
			dataObject.channel.userInfoInChannel = channelNode["UserInfoInChannel"].asString();
			auto allGslb = channelNode["Gslb"]["gslb"];
			for (auto value : allGslb)
				dataObject.channel.gslb.push_back(value.asString());
		auto userNode = value["User"];
		if(!userNode["UserId"].isNull())
			dataObject.user.userId = userNode["UserId"].asString();
		if(!userNode["UserName"].isNull())
			dataObject.user.userName = userNode["UserName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryRunningInstanceResult::getMessage()const
{
	return message_;
}

std::vector<QueryRunningInstanceResult::DataItem> QueryRunningInstanceResult::getData()const
{
	return data_;
}

std::string QueryRunningInstanceResult::getCode()const
{
	return code_;
}

bool QueryRunningInstanceResult::getSuccess()const
{
	return success_;
}

