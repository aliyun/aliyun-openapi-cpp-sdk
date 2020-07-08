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

#include <alibabacloud/vcs/model/GetVideoComposeResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetVideoComposeResultResult::GetVideoComposeResultResult() :
	ServiceResult()
{}

GetVideoComposeResultResult::GetVideoComposeResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVideoComposeResultResult::~GetVideoComposeResultResult()
{}

void GetVideoComposeResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["VideoUrl"].isNull())
		videoUrl_ = value["VideoUrl"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string GetVideoComposeResultResult::getStatus()const
{
	return status_;
}

std::string GetVideoComposeResultResult::getMessage()const
{
	return message_;
}

std::string GetVideoComposeResultResult::getCode()const
{
	return code_;
}

std::string GetVideoComposeResultResult::getVideoUrl()const
{
	return videoUrl_;
}

