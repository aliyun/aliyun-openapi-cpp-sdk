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

#include <alibabacloud/vod/model/OpenVodServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

OpenVodServiceResult::OpenVodServiceResult() :
	ServiceResult()
{}

OpenVodServiceResult::OpenVodServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpenVodServiceResult::~OpenVodServiceResult()
{}

void OpenVodServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::string OpenVodServiceResult::getRequestId()const
{
	return requestId_;
}

std::string OpenVodServiceResult::getMessage()const
{
	return message_;
}

std::string OpenVodServiceResult::getCode()const
{
	return code_;
}

bool OpenVodServiceResult::getSuccess()const
{
	return success_;
}

