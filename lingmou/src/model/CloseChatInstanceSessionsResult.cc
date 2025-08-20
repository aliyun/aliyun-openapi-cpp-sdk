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

#include <alibabacloud/lingmou/model/CloseChatInstanceSessionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LingMou;
using namespace AlibabaCloud::LingMou::Model;

CloseChatInstanceSessionsResult::CloseChatInstanceSessionsResult() :
	ServiceResult()
{}

CloseChatInstanceSessionsResult::CloseChatInstanceSessionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CloseChatInstanceSessionsResult::~CloseChatInstanceSessionsResult()
{}

void CloseChatInstanceSessionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto alldataNode = value["data"]["dataItem"];
	for (auto valuedatadataItem : alldataNode)
	{
		DataItem dataObject;
		if(!valuedatadataItem["sessionId"].isNull())
			dataObject.sessionId = valuedatadataItem["sessionId"].asString();
		if(!valuedatadataItem["mainAccountId"].isNull())
			dataObject.mainAccountId = std::stol(valuedatadataItem["mainAccountId"].asString());
		if(!valuedatadataItem["createdAt"].isNull())
			dataObject.createdAt = std::stol(valuedatadataItem["createdAt"].asString());
		data_.push_back(dataObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["httpStatusCode"].asString());

}

std::vector<CloseChatInstanceSessionsResult::DataItem> CloseChatInstanceSessionsResult::getdata()const
{
	return data_;
}

std::string CloseChatInstanceSessionsResult::getRequestId()const
{
	return requestId_;
}

std::string CloseChatInstanceSessionsResult::getMessage()const
{
	return message_;
}

int CloseChatInstanceSessionsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CloseChatInstanceSessionsResult::getCode()const
{
	return code_;
}

bool CloseChatInstanceSessionsResult::getSuccess()const
{
	return success_;
}

