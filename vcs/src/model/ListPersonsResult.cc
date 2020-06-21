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

#include <alibabacloud/vcs/model/ListPersonsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vcs;
using namespace AlibabaCloud::Vcs::Model;

ListPersonsResult::ListPersonsResult() :
	ServiceResult()
{}

ListPersonsResult::ListPersonsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonsResult::~ListPersonsResult()
{}

void ListPersonsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = dataNode["PageNo"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = dataNode["PageSize"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = dataNode["TotalCount"].asString();
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = dataNode["TotalPage"].asString();
	auto allRecordsNode = dataNode["Records"]["RecordsItem"];
	for (auto dataNodeRecordsRecordsItem : allRecordsNode)
	{
		Data::RecordsItem recordsItemObject;
		if(!dataNodeRecordsRecordsItem["FirstAppearTime"].isNull())
			recordsItemObject.firstAppearTime = dataNodeRecordsRecordsItem["FirstAppearTime"].asString();
		if(!dataNodeRecordsRecordsItem["PersonId"].isNull())
			recordsItemObject.personId = dataNodeRecordsRecordsItem["PersonId"].asString();
		if(!dataNodeRecordsRecordsItem["PicUrl"].isNull())
			recordsItemObject.picUrl = dataNodeRecordsRecordsItem["PicUrl"].asString();
		auto allTagListNode = allRecordsNode["TagList"]["TagListItem"];
		for (auto allRecordsNodeTagListTagListItem : allTagListNode)
		{
			Data::RecordsItem::TagListItem tagListObject;
			if(!allRecordsNodeTagListTagListItem["TagCode"].isNull())
				tagListObject.tagCode = allRecordsNodeTagListTagListItem["TagCode"].asString();
			if(!allRecordsNodeTagListTagListItem["TagName"].isNull())
				tagListObject.tagName = allRecordsNodeTagListTagListItem["TagName"].asString();
			if(!allRecordsNodeTagListTagListItem["TagValue"].isNull())
				tagListObject.tagValue = allRecordsNodeTagListTagListItem["TagValue"].asString();
			if(!allRecordsNodeTagListTagListItem["TagValueId"].isNull())
				tagListObject.tagValueId = allRecordsNodeTagListTagListItem["TagValueId"].asString();
			recordsItemObject.tagList.push_back(tagListObject);
		}
		data_.records.push_back(recordsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListPersonsResult::getMessage()const
{
	return message_;
}

ListPersonsResult::Data ListPersonsResult::getData()const
{
	return data_;
}

std::string ListPersonsResult::getCode()const
{
	return code_;
}

