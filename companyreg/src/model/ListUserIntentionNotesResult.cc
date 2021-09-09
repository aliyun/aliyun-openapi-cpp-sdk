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

#include <alibabacloud/companyreg/model/ListUserIntentionNotesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListUserIntentionNotesResult::ListUserIntentionNotesResult() :
	ServiceResult()
{}

ListUserIntentionNotesResult::ListUserIntentionNotesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserIntentionNotesResult::~ListUserIntentionNotesResult()
{}

void ListUserIntentionNotesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["OpateLogs"];
	for (auto valueDataOpateLogs : allDataNode)
	{
		OpateLogs dataObject;
		if(!valueDataOpateLogs["CreateTime"].isNull())
			dataObject.createTime = valueDataOpateLogs["CreateTime"].asString();
		if(!valueDataOpateLogs["Note"].isNull())
			dataObject.note = valueDataOpateLogs["Note"].asString();
		data_.push_back(dataObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int ListUserIntentionNotesResult::getPageNum()const
{
	return pageNum_;
}

int ListUserIntentionNotesResult::getPageSize()const
{
	return pageSize_;
}

int ListUserIntentionNotesResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListUserIntentionNotesResult::OpateLogs> ListUserIntentionNotesResult::getData()const
{
	return data_;
}

int ListUserIntentionNotesResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListUserIntentionNotesResult::getSuccess()const
{
	return success_;
}

