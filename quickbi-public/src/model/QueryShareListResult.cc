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

#include <alibabacloud/quickbi-public/model/QueryShareListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryShareListResult::QueryShareListResult() :
	ServiceResult()
{}

QueryShareListResult::QueryShareListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryShareListResult::~QueryShareListResult()
{}

void QueryShareListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["AuthPoint"].isNull())
			resultObject.authPoint = std::stoi(valueResultData["AuthPoint"].asString());
		if(!valueResultData["ExpireDate"].isNull())
			resultObject.expireDate = std::stol(valueResultData["ExpireDate"].asString());
		if(!valueResultData["ReportId"].isNull())
			resultObject.reportId = valueResultData["ReportId"].asString();
		if(!valueResultData["ShareId"].isNull())
			resultObject.shareId = valueResultData["ShareId"].asString();
		if(!valueResultData["ShareToId"].isNull())
			resultObject.shareToId = valueResultData["ShareToId"].asString();
		if(!valueResultData["ShareToName"].isNull())
			resultObject.shareToName = valueResultData["ShareToName"].asString();
		if(!valueResultData["ShareToType"].isNull())
			resultObject.shareToType = std::stoi(valueResultData["ShareToType"].asString());
		if(!valueResultData["ShareType"].isNull())
			resultObject.shareType = valueResultData["ShareType"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryShareListResult::getSuccess()const
{
	return success_;
}

std::vector<QueryShareListResult::Data> QueryShareListResult::getResult()const
{
	return result_;
}

