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

#include <alibabacloud/companyreg/model/ListIntentionNoteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListIntentionNoteResult::ListIntentionNoteResult() :
	ServiceResult()
{}

ListIntentionNoteResult::ListIntentionNoteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIntentionNoteResult::~ListIntentionNoteResult()
{}

void ListIntentionNoteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Note"];
	for (auto valueDataNote : allDataNode)
	{
		Note dataObject;
		if(!valueDataNote["IntentionBizId"].isNull())
			dataObject.intentionBizId = valueDataNote["IntentionBizId"].asString();
		if(!valueDataNote["Note"].isNull())
			dataObject.note = valueDataNote["Note"].asString();
		if(!valueDataNote["Source"].isNull())
			dataObject.source = std::stoi(valueDataNote["Source"].asString());
		if(!valueDataNote["CreateTime"].isNull())
			dataObject.createTime = valueDataNote["CreateTime"].asString();
		if(!valueDataNote["Type"].isNull())
			dataObject.type = valueDataNote["Type"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());

}

int ListIntentionNoteResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListIntentionNoteResult::getPageSize()const
{
	return pageSize_;
}

int ListIntentionNoteResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListIntentionNoteResult::Note> ListIntentionNoteResult::getData()const
{
	return data_;
}

int ListIntentionNoteResult::getTotalItemNum()const
{
	return totalItemNum_;
}

