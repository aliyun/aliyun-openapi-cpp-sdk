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

#include <alibabacloud/ots/model/ListTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ots;
using namespace AlibabaCloud::Ots::Model;

ListTagsResult::ListTagsResult() :
	ServiceResult()
{}

ListTagsResult::ListTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagsResult::~ListTagsResult()
{}

void ListTagsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTagInfos = value["TagInfos"]["TagInfo"];
	for (auto value : allTagInfos)
	{
		TagInfo tagInfosObject;
		if(!value["TagKey"].isNull())
			tagInfosObject.tagKey = value["TagKey"].asString();
		if(!value["TagValue"].isNull())
			tagInfosObject.tagValue = value["TagValue"].asString();
		tagInfos_.push_back(tagInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::vector<ListTagsResult::TagInfo> ListTagsResult::getTagInfos()const
{
	return tagInfos_;
}

long ListTagsResult::getTotalCount()const
{
	return totalCount_;
}

long ListTagsResult::getPageNum()const
{
	return pageNum_;
}

long ListTagsResult::getPageSize()const
{
	return pageSize_;
}

