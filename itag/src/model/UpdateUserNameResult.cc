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

#include <alibabacloud/itag/model/UpdateUserNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

UpdateUserNameResult::UpdateUserNameResult() :
	ServiceResult()
{}

UpdateUserNameResult::UpdateUserNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateUserNameResult::~UpdateUserNameResult()
{}

void UpdateUserNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Result"].isNull())
		result_ = value["Result"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string UpdateUserNameResult::getMsg()const
{
	return msg_;
}

long UpdateUserNameResult::getRt()const
{
	return rt_;
}

bool UpdateUserNameResult::getSucc()const
{
	return succ_;
}

std::string UpdateUserNameResult::getHost()const
{
	return host_;
}

std::string UpdateUserNameResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateUserNameResult::getErrInfo()const
{
	return errInfo_;
}

int UpdateUserNameResult::getCode()const
{
	return code_;
}

bool UpdateUserNameResult::getResult()const
{
	return result_;
}

