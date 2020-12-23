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

#include <alibabacloud/cdrs/model/CreateProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

CreateProjectResult::CreateProjectResult() :
	ServiceResult()
{}

CreateProjectResult::CreateProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProjectResult::~CreateProjectResult()
{}

void CreateProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["CorpId"].isNull())
		corpId_ = value["CorpId"].asString();

}

std::string CreateProjectResult::getCorpId()const
{
	return corpId_;
}

std::string CreateProjectResult::getMessage()const
{
	return message_;
}

std::string CreateProjectResult::getCode()const
{
	return code_;
}

