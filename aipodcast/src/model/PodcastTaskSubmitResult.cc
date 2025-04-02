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

#include <alibabacloud/aipodcast/model/PodcastTaskSubmitResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIPodcast;
using namespace AlibabaCloud::AIPodcast::Model;

PodcastTaskSubmitResult::PodcastTaskSubmitResult() :
	ServiceResult()
{}

PodcastTaskSubmitResult::PodcastTaskSubmitResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PodcastTaskSubmitResult::~PodcastTaskSubmitResult()
{}

void PodcastTaskSubmitResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["data"];
	if(!dataNode["taskId"].isNull())
		data_.taskId = dataNode["taskId"].asString();
	if(!dataNode["taskStatus"].isNull())
		data_.taskStatus = dataNode["taskStatus"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["httpStatusCode"].isNull())
		httpStatusCode_ = value["httpStatusCode"].asString();

}

std::string PodcastTaskSubmitResult::getMessage()const
{
	return message_;
}

std::string PodcastTaskSubmitResult::getRequestId()const
{
	return requestId_;
}

std::string PodcastTaskSubmitResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

PodcastTaskSubmitResult::Data PodcastTaskSubmitResult::getData()const
{
	return data_;
}

std::string PodcastTaskSubmitResult::getCode()const
{
	return code_;
}

bool PodcastTaskSubmitResult::getSuccess()const
{
	return success_;
}

