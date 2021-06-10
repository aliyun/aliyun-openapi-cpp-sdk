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

#include <alibabacloud/dms-enterprise/model/GetSQLReviewCheckResultStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetSQLReviewCheckResultStatusResult::GetSQLReviewCheckResultStatusResult() :
	ServiceResult()
{}

GetSQLReviewCheckResultStatusResult::GetSQLReviewCheckResultStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSQLReviewCheckResultStatusResult::~GetSQLReviewCheckResultStatusResult()
{}

void GetSQLReviewCheckResultStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto checkResultStatusNode = value["CheckResultStatus"];
	if(!checkResultStatusNode["TotalSQLCount"].isNull())
		checkResultStatus_.totalSQLCount = std::stol(checkResultStatusNode["TotalSQLCount"].asString());
	if(!checkResultStatusNode["CheckedCount"].isNull())
		checkResultStatus_.checkedCount = std::stol(checkResultStatusNode["CheckedCount"].asString());
	auto checkStatusResultNode = checkResultStatusNode["CheckStatusResult"];
	if(!checkStatusResultNode["New"].isNull())
		checkResultStatus_.checkStatusResult._new = std::stol(checkStatusResultNode["New"].asString());
	if(!checkStatusResultNode["Unknown"].isNull())
		checkResultStatus_.checkStatusResult.unknown = std::stol(checkStatusResultNode["Unknown"].asString());
	if(!checkStatusResultNode["CheckNotPass"].isNull())
		checkResultStatus_.checkStatusResult.checkNotPass = std::stol(checkStatusResultNode["CheckNotPass"].asString());
	if(!checkStatusResultNode["CheckPass"].isNull())
		checkResultStatus_.checkStatusResult.checkPass = std::stol(checkStatusResultNode["CheckPass"].asString());
	if(!checkStatusResultNode["ForcePass"].isNull())
		checkResultStatus_.checkStatusResult.forcePass = std::stol(checkStatusResultNode["ForcePass"].asString());
	if(!checkStatusResultNode["ForceNotPass"].isNull())
		checkResultStatus_.checkStatusResult.forceNotPass = std::stol(checkStatusResultNode["ForceNotPass"].asString());
	auto sQLReviewResultNode = checkResultStatusNode["SQLReviewResult"];
	if(!sQLReviewResultNode["MustImprove"].isNull())
		checkResultStatus_.sQLReviewResult.mustImprove = std::stol(sQLReviewResultNode["MustImprove"].asString());
	if(!sQLReviewResultNode["PotentialIssue"].isNull())
		checkResultStatus_.sQLReviewResult.potentialIssue = std::stol(sQLReviewResultNode["PotentialIssue"].asString());
	if(!sQLReviewResultNode["SuggestImprove"].isNull())
		checkResultStatus_.sQLReviewResult.suggestImprove = std::stol(sQLReviewResultNode["SuggestImprove"].asString());
	if(!sQLReviewResultNode["UseDmsToolkit"].isNull())
		checkResultStatus_.sQLReviewResult.useDmsToolkit = std::stol(sQLReviewResultNode["UseDmsToolkit"].asString());
	if(!sQLReviewResultNode["UseDmsDmlUnlock"].isNull())
		checkResultStatus_.sQLReviewResult.useDmsDmlUnlock = std::stol(sQLReviewResultNode["UseDmsDmlUnlock"].asString());
	if(!sQLReviewResultNode["TableIndexSuggest"].isNull())
		checkResultStatus_.sQLReviewResult.tableIndexSuggest = std::stol(sQLReviewResultNode["TableIndexSuggest"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetSQLReviewCheckResultStatusResult::getErrorCode()const
{
	return errorCode_;
}

GetSQLReviewCheckResultStatusResult::CheckResultStatus GetSQLReviewCheckResultStatusResult::getCheckResultStatus()const
{
	return checkResultStatus_;
}

std::string GetSQLReviewCheckResultStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetSQLReviewCheckResultStatusResult::getSuccess()const
{
	return success_;
}

