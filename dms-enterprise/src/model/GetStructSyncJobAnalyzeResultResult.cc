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

#include <alibabacloud/dms-enterprise/model/GetStructSyncJobAnalyzeResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetStructSyncJobAnalyzeResultResult::GetStructSyncJobAnalyzeResultResult() :
	ServiceResult()
{}

GetStructSyncJobAnalyzeResultResult::GetStructSyncJobAnalyzeResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStructSyncJobAnalyzeResultResult::~GetStructSyncJobAnalyzeResultResult()
{}

void GetStructSyncJobAnalyzeResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto structSyncJobAnalyzeResultNode = value["StructSyncJobAnalyzeResult"];
	auto allSummaryListNode = structSyncJobAnalyzeResultNode["SummaryList"]["Summary"];
	for (auto structSyncJobAnalyzeResultNodeSummaryListSummary : allSummaryListNode)
	{
		StructSyncJobAnalyzeResult::Summary summaryObject;
		if(!structSyncJobAnalyzeResultNodeSummaryListSummary["CompareType"].isNull())
			summaryObject.compareType = structSyncJobAnalyzeResultNodeSummaryListSummary["CompareType"].asString();
		if(!structSyncJobAnalyzeResultNodeSummaryListSummary["Count"].isNull())
			summaryObject.count = std::stol(structSyncJobAnalyzeResultNodeSummaryListSummary["Count"].asString());
		structSyncJobAnalyzeResult_.summaryList.push_back(summaryObject);
	}
	auto allResultListNode = structSyncJobAnalyzeResultNode["ResultList"]["Result"];
	for (auto structSyncJobAnalyzeResultNodeResultListResult : allResultListNode)
	{
		StructSyncJobAnalyzeResult::Result resultObject;
		if(!structSyncJobAnalyzeResultNodeResultListResult["SourceTableName"].isNull())
			resultObject.sourceTableName = structSyncJobAnalyzeResultNodeResultListResult["SourceTableName"].asString();
		if(!structSyncJobAnalyzeResultNodeResultListResult["TargetTableName"].isNull())
			resultObject.targetTableName = structSyncJobAnalyzeResultNodeResultListResult["TargetTableName"].asString();
		if(!structSyncJobAnalyzeResultNodeResultListResult["Script"].isNull())
			resultObject.script = structSyncJobAnalyzeResultNodeResultListResult["Script"].asString();
		structSyncJobAnalyzeResult_.resultList.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetStructSyncJobAnalyzeResultResult::StructSyncJobAnalyzeResult GetStructSyncJobAnalyzeResultResult::getStructSyncJobAnalyzeResult()const
{
	return structSyncJobAnalyzeResult_;
}

std::string GetStructSyncJobAnalyzeResultResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetStructSyncJobAnalyzeResultResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetStructSyncJobAnalyzeResultResult::getSuccess()const
{
	return success_;
}

