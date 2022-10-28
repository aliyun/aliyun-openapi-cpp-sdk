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

#include <alibabacloud/dms-enterprise/model/ListSQLReviewOriginSQLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListSQLReviewOriginSQLResult::ListSQLReviewOriginSQLResult() :
	ServiceResult()
{}

ListSQLReviewOriginSQLResult::ListSQLReviewOriginSQLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSQLReviewOriginSQLResult::~ListSQLReviewOriginSQLResult()
{}

void ListSQLReviewOriginSQLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOriginSQLListNode = value["OriginSQLList"]["OriginSQLListItem"];
	for (auto valueOriginSQLListOriginSQLListItem : allOriginSQLListNode)
	{
		OriginSQLListItem originSQLListObject;
		if(!valueOriginSQLListOriginSQLListItem["SQLId"].isNull())
			originSQLListObject.sQLId = std::stol(valueOriginSQLListOriginSQLListItem["SQLId"].asString());
		if(!valueOriginSQLListOriginSQLListItem["FileId"].isNull())
			originSQLListObject.fileId = std::stol(valueOriginSQLListOriginSQLListItem["FileId"].asString());
		if(!valueOriginSQLListOriginSQLListItem["FileName"].isNull())
			originSQLListObject.fileName = valueOriginSQLListOriginSQLListItem["FileName"].asString();
		if(!valueOriginSQLListOriginSQLListItem["SQLContent"].isNull())
			originSQLListObject.sQLContent = valueOriginSQLListOriginSQLListItem["SQLContent"].asString();
		if(!valueOriginSQLListOriginSQLListItem["CheckStatus"].isNull())
			originSQLListObject.checkStatus = valueOriginSQLListOriginSQLListItem["CheckStatus"].asString();
		if(!valueOriginSQLListOriginSQLListItem["StatusDesc"].isNull())
			originSQLListObject.statusDesc = valueOriginSQLListOriginSQLListItem["StatusDesc"].asString();
		if(!valueOriginSQLListOriginSQLListItem["CheckedTime"].isNull())
			originSQLListObject.checkedTime = valueOriginSQLListOriginSQLListItem["CheckedTime"].asString();
		if(!valueOriginSQLListOriginSQLListItem["SqlHash"].isNull())
			originSQLListObject.sqlHash = valueOriginSQLListOriginSQLListItem["SqlHash"].asString();
		if(!valueOriginSQLListOriginSQLListItem["ReviewSummary"].isNull())
			originSQLListObject.reviewSummary = valueOriginSQLListOriginSQLListItem["ReviewSummary"].asString();
		if(!valueOriginSQLListOriginSQLListItem["SQLReviewQueryKey"].isNull())
			originSQLListObject.sQLReviewQueryKey = valueOriginSQLListOriginSQLListItem["SQLReviewQueryKey"].asString();
		if(!valueOriginSQLListOriginSQLListItem["SQLName"].isNull())
			originSQLListObject.sQLName = valueOriginSQLListOriginSQLListItem["SQLName"].asString();
		originSQLList_.push_back(originSQLListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListSQLReviewOriginSQLResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSQLReviewOriginSQLResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSQLReviewOriginSQLResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListSQLReviewOriginSQLResult::OriginSQLListItem> ListSQLReviewOriginSQLResult::getOriginSQLList()const
{
	return originSQLList_;
}

bool ListSQLReviewOriginSQLResult::getSuccess()const
{
	return success_;
}

