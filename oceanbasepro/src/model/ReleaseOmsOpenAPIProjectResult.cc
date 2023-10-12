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

#include <alibabacloud/oceanbasepro/model/ReleaseOmsOpenAPIProjectResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

ReleaseOmsOpenAPIProjectResult::ReleaseOmsOpenAPIProjectResult() :
	ServiceResult()
{}

ReleaseOmsOpenAPIProjectResult::ReleaseOmsOpenAPIProjectResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ReleaseOmsOpenAPIProjectResult::~ReleaseOmsOpenAPIProjectResult()
{}

void ReleaseOmsOpenAPIProjectResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto errorDetailNode = value["ErrorDetail"];
	if(!errorDetailNode["Code"].isNull())
		errorDetail_.code = errorDetailNode["Code"].asString();
	if(!errorDetailNode["Level"].isNull())
		errorDetail_.level = errorDetailNode["Level"].asString();
	if(!errorDetailNode["Message"].isNull())
		errorDetail_.message = errorDetailNode["Message"].asString();
	if(!errorDetailNode["Proposal"].isNull())
		errorDetail_.proposal = errorDetailNode["Proposal"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Advice"].isNull())
		advice_ = value["Advice"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Cost"].isNull())
		cost_ = value["Cost"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";

}

ReleaseOmsOpenAPIProjectResult::ErrorDetail ReleaseOmsOpenAPIProjectResult::getErrorDetail()const
{
	return errorDetail_;
}

long ReleaseOmsOpenAPIProjectResult::getTotalCount()const
{
	return totalCount_;
}

std::string ReleaseOmsOpenAPIProjectResult::getMessage()const
{
	return message_;
}

int ReleaseOmsOpenAPIProjectResult::getPageSize()const
{
	return pageSize_;
}

int ReleaseOmsOpenAPIProjectResult::getPageNumber()const
{
	return pageNumber_;
}

bool ReleaseOmsOpenAPIProjectResult::getData()const
{
	return data_;
}

std::string ReleaseOmsOpenAPIProjectResult::getAdvice()const
{
	return advice_;
}

std::string ReleaseOmsOpenAPIProjectResult::getCode()const
{
	return code_;
}

std::string ReleaseOmsOpenAPIProjectResult::getCost()const
{
	return cost_;
}

bool ReleaseOmsOpenAPIProjectResult::getSuccess()const
{
	return success_;
}

