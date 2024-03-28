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

#include <alibabacloud/devops/model/ListCommitStatusesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListCommitStatusesResult::ListCommitStatusesResult() :
	ServiceResult()
{}

ListCommitStatusesResult::ListCommitStatusesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCommitStatusesResult::~ListCommitStatusesResult()
{}

void ListCommitStatusesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["sha"].isNull())
			resultObject.sha = valueresultresultItem["sha"].asString();
		if(!valueresultresultItem["context"].isNull())
			resultObject.context = valueresultresultItem["context"].asString();
		if(!valueresultresultItem["state"].isNull())
			resultObject.state = valueresultresultItem["state"].asString();
		if(!valueresultresultItem["targetUrl"].isNull())
			resultObject.targetUrl = valueresultresultItem["targetUrl"].asString();
		if(!valueresultresultItem["description"].isNull())
			resultObject.description = valueresultresultItem["description"].asString();
		auto creatorNode = value["creator"];
		if(!creatorNode["aliyunPk"].isNull())
			resultObject.creator.aliyunPk = creatorNode["aliyunPk"].asString();
		if(!creatorNode["login"].isNull())
			resultObject.creator.login = creatorNode["login"].asString();
		if(!creatorNode["avatarUrl"].isNull())
			resultObject.creator.avatarUrl = creatorNode["avatarUrl"].asString();
		if(!creatorNode["type"].isNull())
			resultObject.creator.type = creatorNode["type"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListCommitStatusesResult::ResultItem> ListCommitStatusesResult::getresult()const
{
	return result_;
}

std::string ListCommitStatusesResult::getRequestId()const
{
	return requestId_;
}

long ListCommitStatusesResult::getTotal()const
{
	return total_;
}

std::string ListCommitStatusesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListCommitStatusesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListCommitStatusesResult::getSuccess()const
{
	return success_;
}

