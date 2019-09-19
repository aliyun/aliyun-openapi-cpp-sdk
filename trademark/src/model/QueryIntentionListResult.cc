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

#include <alibabacloud/trademark/model/QueryIntentionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

QueryIntentionListResult::QueryIntentionListResult() :
	ServiceResult()
{}

QueryIntentionListResult::QueryIntentionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryIntentionListResult::~QueryIntentionListResult()
{}

void QueryIntentionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Intention"];
	for (auto valueDataIntention : allDataNode)
	{
		Intention dataObject;
		if(!valueDataIntention["UserId"].isNull())
			dataObject.userId = valueDataIntention["UserId"].asString();
		if(!valueDataIntention["RegisterNumber"].isNull())
			dataObject.registerNumber = valueDataIntention["RegisterNumber"].asString();
		if(!valueDataIntention["Classification"].isNull())
			dataObject.classification = valueDataIntention["Classification"].asString();
		if(!valueDataIntention["Type"].isNull())
			dataObject.type = std::stoi(valueDataIntention["Type"].asString());
		if(!valueDataIntention["BizId"].isNull())
			dataObject.bizId = valueDataIntention["BizId"].asString();
		if(!valueDataIntention["Description"].isNull())
			dataObject.description = valueDataIntention["Description"].asString();
		if(!valueDataIntention["Status"].isNull())
			dataObject.status = std::stoi(valueDataIntention["Status"].asString());
		if(!valueDataIntention["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataIntention["UpdateTime"].asString());
		if(!valueDataIntention["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataIntention["CreateTime"].asString());
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

int QueryIntentionListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryIntentionListResult::getPageSize()const
{
	return pageSize_;
}

int QueryIntentionListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryIntentionListResult::Intention> QueryIntentionListResult::getData()const
{
	return data_;
}

int QueryIntentionListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

