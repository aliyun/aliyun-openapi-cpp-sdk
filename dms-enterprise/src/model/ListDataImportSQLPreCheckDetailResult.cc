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

#include <alibabacloud/dms-enterprise/model/ListDataImportSQLPreCheckDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDataImportSQLPreCheckDetailResult::ListDataImportSQLPreCheckDetailResult() :
	ServiceResult()
{}

ListDataImportSQLPreCheckDetailResult::ListDataImportSQLPreCheckDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataImportSQLPreCheckDetailResult::~ListDataImportSQLPreCheckDetailResult()
{}

void ListDataImportSQLPreCheckDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPreCheckSQLDetailListNode = value["PreCheckSQLDetailList"]["PreCheckSQLDetail"];
	for (auto valuePreCheckSQLDetailListPreCheckSQLDetail : allPreCheckSQLDetailListNode)
	{
		PreCheckSQLDetail preCheckSQLDetailListObject;
		if(!valuePreCheckSQLDetailListPreCheckSQLDetail["SqlId"].isNull())
			preCheckSQLDetailListObject.sqlId = std::stol(valuePreCheckSQLDetailListPreCheckSQLDetail["SqlId"].asString());
		if(!valuePreCheckSQLDetailListPreCheckSQLDetail["SqlType"].isNull())
			preCheckSQLDetailListObject.sqlType = valuePreCheckSQLDetailListPreCheckSQLDetail["SqlType"].asString();
		if(!valuePreCheckSQLDetailListPreCheckSQLDetail["StatusCode"].isNull())
			preCheckSQLDetailListObject.statusCode = valuePreCheckSQLDetailListPreCheckSQLDetail["StatusCode"].asString();
		if(!valuePreCheckSQLDetailListPreCheckSQLDetail["Skip"].isNull())
			preCheckSQLDetailListObject.skip = valuePreCheckSQLDetailListPreCheckSQLDetail["Skip"].asString() == "true";
		preCheckSQLDetailList_.push_back(preCheckSQLDetailListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListDataImportSQLPreCheckDetailResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListDataImportSQLPreCheckDetailResult::PreCheckSQLDetail> ListDataImportSQLPreCheckDetailResult::getPreCheckSQLDetailList()const
{
	return preCheckSQLDetailList_;
}

std::string ListDataImportSQLPreCheckDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataImportSQLPreCheckDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataImportSQLPreCheckDetailResult::getSuccess()const
{
	return success_;
}

