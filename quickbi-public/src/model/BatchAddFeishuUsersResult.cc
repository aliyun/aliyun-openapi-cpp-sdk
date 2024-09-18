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

#include <alibabacloud/quickbi-public/model/BatchAddFeishuUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

BatchAddFeishuUsersResult::BatchAddFeishuUsersResult() :
	ServiceResult()
{}

BatchAddFeishuUsersResult::BatchAddFeishuUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchAddFeishuUsersResult::~BatchAddFeishuUsersResult()
{}

void BatchAddFeishuUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["FailCount"].isNull())
		result_.failCount = std::stoi(resultNode["FailCount"].asString());
	if(!resultNode["OkCount"].isNull())
		result_.okCount = std::stoi(resultNode["OkCount"].asString());
	auto allFailResultsNode = resultNode["FailResults"]["FailResultsItem"];
	for (auto resultNodeFailResultsFailResultsItem : allFailResultsNode)
	{
		Result::FailResultsItem failResultsItemObject;
		auto allFailInfosNode = resultNodeFailResultsFailResultsItem["FailInfos"]["FailInfosItem"];
		for (auto resultNodeFailResultsFailResultsItemFailInfosFailInfosItem : allFailInfosNode)
		{
			Result::FailResultsItem::FailInfosItem failInfosObject;
			if(!resultNodeFailResultsFailResultsItemFailInfosFailInfosItem["Code"].isNull())
				failInfosObject.code = resultNodeFailResultsFailResultsItemFailInfosFailInfosItem["Code"].asString();
			if(!resultNodeFailResultsFailResultsItemFailInfosFailInfosItem["CodeDesc"].isNull())
				failInfosObject.codeDesc = resultNodeFailResultsFailResultsItemFailInfosFailInfosItem["CodeDesc"].asString();
			if(!resultNodeFailResultsFailResultsItemFailInfosFailInfosItem["Input"].isNull())
				failInfosObject.input = resultNodeFailResultsFailResultsItemFailInfosFailInfosItem["Input"].asString();
			failResultsItemObject.failInfos.push_back(failInfosObject);
		}
		result_.failResults.push_back(failResultsItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool BatchAddFeishuUsersResult::getSuccess()const
{
	return success_;
}

BatchAddFeishuUsersResult::Result BatchAddFeishuUsersResult::getResult()const
{
	return result_;
}

