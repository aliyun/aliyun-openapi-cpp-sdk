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

#include <alibabacloud/vcs/model/GetPersonDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

GetPersonDetailResult::GetPersonDetailResult() :
	ServiceResult()
{}

GetPersonDetailResult::GetPersonDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPersonDetailResult::~GetPersonDetailResult()
{}

void GetPersonDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PicUrl"].isNull())
		data_.picUrl = dataNode["PicUrl"].asString();
	if(!dataNode["PersonId"].isNull())
		data_.personId = dataNode["PersonId"].asString();
	auto allTagListNode = dataNode["TagList"]["TagListItem"];
	for (auto dataNodeTagListTagListItem : allTagListNode)
	{
		Data::TagListItem tagListItemObject;
		if(!dataNodeTagListTagListItem["TagCode"].isNull())
			tagListItemObject.tagCode = dataNodeTagListTagListItem["TagCode"].asString();
		if(!dataNodeTagListTagListItem["TagName"].isNull())
			tagListItemObject.tagName = dataNodeTagListTagListItem["TagName"].asString();
		if(!dataNodeTagListTagListItem["TagValue"].isNull())
			tagListItemObject.tagValue = dataNodeTagListTagListItem["TagValue"].asString();
		if(!dataNodeTagListTagListItem["TagValueId"].isNull())
			tagListItemObject.tagValueId = dataNodeTagListTagListItem["TagValueId"].asString();
		data_.tagList.push_back(tagListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetPersonDetailResult::getMessage()const
{
	return message_;
}

GetPersonDetailResult::Data GetPersonDetailResult::getData()const
{
	return data_;
}

std::string GetPersonDetailResult::getCode()const
{
	return code_;
}

