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

#include <alibabacloud/cams/model/ListProductResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

ListProductResult::ListProductResult() :
	ServiceResult()
{}

ListProductResult::ListProductResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProductResult::~ListProductResult()
{}

void ListProductResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto modelNode = value["Model"];
	auto pagingNode = modelNode["Paging"];
	auto cursorsNode = pagingNode["Cursors"];
	if(!cursorsNode["Before"].isNull())
		model_.paging.cursors.before = cursorsNode["Before"].asString();
	if(!cursorsNode["After"].isNull())
		model_.paging.cursors.after = cursorsNode["After"].asString();
		auto allData = modelNode["Data"]["data"];
		for (auto value : allData)
			model_.data.push_back(value.asString());
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListProductResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string ListProductResult::getMessage()const
{
	return message_;
}

ListProductResult::Model ListProductResult::getModel()const
{
	return model_;
}

std::string ListProductResult::getCode()const
{
	return code_;
}

bool ListProductResult::getSuccess()const
{
	return success_;
}

