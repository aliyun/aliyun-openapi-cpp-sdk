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

#include <alibabacloud/cms/model/DescribeFolderListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeFolderListResult::DescribeFolderListResult() :
	ServiceResult()
{}

DescribeFolderListResult::DescribeFolderListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFolderListResult::~DescribeFolderListResult()
{}

void DescribeFolderListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	if(!resourceNode["Name"].isNull())
		resource_.name = resourceNode["Name"].asString();
	if(!resourceNode["ServiceId"].isNull())
		resource_.serviceId = std::stol(resourceNode["ServiceId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeFolderListResult::getMessage()const
{
	return message_;
}

int DescribeFolderListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFolderListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeFolderListResult::getTotal()const
{
	return total_;
}

DescribeFolderListResult::Resource DescribeFolderListResult::getResource()const
{
	return resource_;
}

int DescribeFolderListResult::getCode()const
{
	return code_;
}

bool DescribeFolderListResult::getSuccess()const
{
	return success_;
}

