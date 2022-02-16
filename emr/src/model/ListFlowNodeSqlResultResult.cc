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

#include <alibabacloud/emr/model/ListFlowNodeSqlResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowNodeSqlResultResult::ListFlowNodeSqlResultResult() :
	ServiceResult()
{}

ListFlowNodeSqlResultResult::ListFlowNodeSqlResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowNodeSqlResultResult::~ListFlowNodeSqlResultResult()
{}

void ListFlowNodeSqlResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRowListNode = value["RowList"]["Row"];
	for (auto valueRowListRow : allRowListNode)
	{
		Row rowListObject;
		if(!valueRowListRow["RowIndex"].isNull())
			rowListObject.rowIndex = std::stoi(valueRowListRow["RowIndex"].asString());
		auto allRowItemList = value["RowItemList"]["rowItem"];
		for (auto value : allRowItemList)
			rowListObject.rowItemList.push_back(value.asString());
		rowList_.push_back(rowListObject);
	}
	auto allHeaderList = value["HeaderList"]["Header"];
	for (const auto &item : allHeaderList)
		headerList_.push_back(item.asString());
	if(!value["End"].isNull())
		end_ = value["End"].asString() == "true";

}

std::vector<ListFlowNodeSqlResultResult::Row> ListFlowNodeSqlResultResult::getRowList()const
{
	return rowList_;
}

std::vector<std::string> ListFlowNodeSqlResultResult::getHeaderList()const
{
	return headerList_;
}

bool ListFlowNodeSqlResultResult::getEnd()const
{
	return end_;
}

