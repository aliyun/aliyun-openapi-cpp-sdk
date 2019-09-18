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

#include <alibabacloud/afs/model/AuthenticateSigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

AuthenticateSigResult::AuthenticateSigResult() :
	ServiceResult()
{}

AuthenticateSigResult::AuthenticateSigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AuthenticateSigResult::~AuthenticateSigResult()
{}

void AuthenticateSigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["RiskLevel"].isNull())
		riskLevel_ = value["RiskLevel"].asString();
	if(!value["Detail"].isNull())
		detail_ = value["Detail"].asString();

}

std::string AuthenticateSigResult::getMsg()const
{
	return msg_;
}

int AuthenticateSigResult::getCode()const
{
	return code_;
}

std::string AuthenticateSigResult::getRiskLevel()const
{
	return riskLevel_;
}

std::string AuthenticateSigResult::getDetail()const
{
	return detail_;
}

