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

#include <alibabacloud/dms-enterprise/model/ListIndexesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListIndexesResult::ListIndexesResult() :
	ServiceResult()
{}

ListIndexesResult::ListIndexesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIndexesResult::~ListIndexesResult()
{}

void ListIndexesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIndexListNode = value["IndexList"]["Index"];
	for (auto valueIndexListIndex : allIndexListNode)
	{
		Index indexListObject;
		if(!valueIndexListIndex["IndexName"].isNull())
			indexListObject.indexName = valueIndexListIndex["IndexName"].asString();
		if(!valueIndexListIndex["IndexType"].isNull())
			indexListObject.indexType = valueIndexListIndex["IndexType"].asString();
		if(!valueIndexListIndex["TableId"].isNull())
			indexListObject.tableId = valueIndexListIndex["TableId"].asString();
		if(!valueIndexListIndex["IndexId"].isNull())
			indexListObject.indexId = valueIndexListIndex["IndexId"].asString();
		if(!valueIndexListIndex["IndexComment"].isNull())
			indexListObject.indexComment = valueIndexListIndex["IndexComment"].asString();
		indexList_.push_back(indexListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListIndexesResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListIndexesResult::Index> ListIndexesResult::getIndexList()const
{
	return indexList_;
}

std::string ListIndexesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListIndexesResult::getSuccess()const
{
	return success_;
}

