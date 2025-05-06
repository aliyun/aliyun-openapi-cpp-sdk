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

#include <alibabacloud/itag/model/OnlineTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

OnlineTaskResult::OnlineTaskResult() :
	ServiceResult()
{}

OnlineTaskResult::OnlineTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnlineTaskResult::~OnlineTaskResult()
{}

void OnlineTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Result"].isNull())
		result_ = value["Result"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string OnlineTaskResult::getMsg()const
{
	return msg_;
}

bool OnlineTaskResult::getSucc()const
{
	return succ_;
}

std::string OnlineTaskResult::getErrorCode()const
{
	return errorCode_;
}

std::string OnlineTaskResult::getErrInfo()const
{
	return errInfo_;
}

std::string OnlineTaskResult::getCode()const
{
	return code_;
}

bool OnlineTaskResult::getResult()const
{
	return result_;
}

