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

#include <alibabacloud/dms-enterprise/model/GetDataExportPreCheckDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataExportPreCheckDetailResult::GetDataExportPreCheckDetailResult() :
	ServiceResult()
{}

GetDataExportPreCheckDetailResult::GetDataExportPreCheckDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataExportPreCheckDetailResult::~GetDataExportPreCheckDetailResult()
{}

void GetDataExportPreCheckDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto preCheckResultNode = value["PreCheckResult"];
	if(!preCheckResultNode["IgnoreAffectRows"].isNull())
		preCheckResult_.ignoreAffectRows = preCheckResultNode["IgnoreAffectRows"].asString() == "true";
	auto allPreCheckDetailListNode = preCheckResultNode["PreCheckDetailList"]["PreCheckDetailListItem"];
	for (auto preCheckResultNodePreCheckDetailListPreCheckDetailListItem : allPreCheckDetailListNode)
	{
		PreCheckResult::PreCheckDetailListItem preCheckDetailListItemObject;
		if(!preCheckResultNodePreCheckDetailListPreCheckDetailListItem["AffectRows"].isNull())
			preCheckDetailListItemObject.affectRows = std::stol(preCheckResultNodePreCheckDetailListPreCheckDetailListItem["AffectRows"].asString());
		if(!preCheckResultNodePreCheckDetailListPreCheckDetailListItem["SQL"].isNull())
			preCheckDetailListItemObject.sQL = preCheckResultNodePreCheckDetailListPreCheckDetailListItem["SQL"].asString();
		preCheckResult_.preCheckDetailList.push_back(preCheckDetailListItemObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDataExportPreCheckDetailResult::PreCheckResult GetDataExportPreCheckDetailResult::getPreCheckResult()const
{
	return preCheckResult_;
}

std::string GetDataExportPreCheckDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataExportPreCheckDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataExportPreCheckDetailResult::getSuccess()const
{
	return success_;
}

