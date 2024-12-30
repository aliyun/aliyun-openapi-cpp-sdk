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

#include <alibabacloud/quickbi-public/model/QueryAuditLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryAuditLogResult::QueryAuditLogResult() :
	ServiceResult()
{}

QueryAuditLogResult::QueryAuditLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAuditLogResult::~QueryAuditLogResult()
{}

void QueryAuditLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["LogApiResultModel"];
	for (auto valueResultLogApiResultModel : allResultNode)
	{
		LogApiResultModel resultObject;
		if(!valueResultLogApiResultModel["GmtCreate"].isNull())
			resultObject.gmtCreate = valueResultLogApiResultModel["GmtCreate"].asString();
		if(!valueResultLogApiResultModel["OperatorAccountName"].isNull())
			resultObject.operatorAccountName = valueResultLogApiResultModel["OperatorAccountName"].asString();
		if(!valueResultLogApiResultModel["OperatorName"].isNull())
			resultObject.operatorName = valueResultLogApiResultModel["OperatorName"].asString();
		if(!valueResultLogApiResultModel["OperatorType"].isNull())
			resultObject.operatorType = valueResultLogApiResultModel["OperatorType"].asString();
		if(!valueResultLogApiResultModel["TargetName"].isNull())
			resultObject.targetName = valueResultLogApiResultModel["TargetName"].asString();
		if(!valueResultLogApiResultModel["TargetType"].isNull())
			resultObject.targetType = valueResultLogApiResultModel["TargetType"].asString();
		if(!valueResultLogApiResultModel["WorkspaceId"].isNull())
			resultObject.workspaceId = valueResultLogApiResultModel["WorkspaceId"].asString();
		if(!valueResultLogApiResultModel["TargetId"].isNull())
			resultObject.targetId = valueResultLogApiResultModel["TargetId"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryAuditLogResult::getSuccess()const
{
	return success_;
}

std::vector<QueryAuditLogResult::LogApiResultModel> QueryAuditLogResult::getResult()const
{
	return result_;
}

