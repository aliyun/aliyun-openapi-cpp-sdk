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

#include <alibabacloud/itag/model/GetTaskStatTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetTaskStatTypesResult::GetTaskStatTypesResult() :
	ServiceResult()
{}

GetTaskStatTypesResult::GetTaskStatTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskStatTypesResult::~GetTaskStatTypesResult()
{}

void GetTaskStatTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResult = value["Result"]["Result"];
	for (const auto &item : allResult)
		result_.push_back(item.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["Rt"].isNull())
		rt_ = std::stol(value["Rt"].asString());
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetTaskStatTypesResult::getMsg()const
{
	return msg_;
}

long GetTaskStatTypesResult::getRt()const
{
	return rt_;
}

bool GetTaskStatTypesResult::getSucc()const
{
	return succ_;
}

std::string GetTaskStatTypesResult::getHost()const
{
	return host_;
}

std::string GetTaskStatTypesResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTaskStatTypesResult::getErrInfo()const
{
	return errInfo_;
}

int GetTaskStatTypesResult::getCode()const
{
	return code_;
}

std::vector<std::string> GetTaskStatTypesResult::getResult()const
{
	return result_;
}

