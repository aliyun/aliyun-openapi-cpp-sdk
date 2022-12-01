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

#include <alibabacloud/opensearch/model/ListQuotaReviewTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListQuotaReviewTasksResult::ListQuotaReviewTasksResult() :
	ServiceResult()
{}

ListQuotaReviewTasksResult::ListQuotaReviewTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListQuotaReviewTasksResult::~ListQuotaReviewTasksResult()
{}

void ListQuotaReviewTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["oldDocSize"].isNull())
			resultObject.oldDocSize = std::stoi(valueresultresultItem["oldDocSize"].asString());
		if(!valueresultresultItem["pending"].isNull())
			resultObject.pending = valueresultresultItem["pending"].asString() == "true";
		if(!valueresultresultItem["memo"].isNull())
			resultObject.memo = valueresultresultItem["memo"].asString();
		if(!valueresultresultItem["approved"].isNull())
			resultObject.approved = valueresultresultItem["approved"].asString() == "true";
		if(!valueresultresultItem["oldSpec"].isNull())
			resultObject.oldSpec = valueresultresultItem["oldSpec"].asString();
		if(!valueresultresultItem["oldComputeResource"].isNull())
			resultObject.oldComputeResource = std::stoi(valueresultresultItem["oldComputeResource"].asString());
		if(!valueresultresultItem["appGroupType"].isNull())
			resultObject.appGroupType = valueresultresultItem["appGroupType"].asString();
		if(!valueresultresultItem["available"].isNull())
			resultObject.available = valueresultresultItem["available"].asString() == "true";
		if(!valueresultresultItem["gmtCreate"].isNull())
			resultObject.gmtCreate = valueresultresultItem["gmtCreate"].asString();
		if(!valueresultresultItem["newSocSize"].isNull())
			resultObject.newSocSize = std::stoi(valueresultresultItem["newSocSize"].asString());
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stoi(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["appGroupId"].isNull())
			resultObject.appGroupId = std::stoi(valueresultresultItem["appGroupId"].asString());
		if(!valueresultresultItem["newComputeResource"].isNull())
			resultObject.newComputeResource = std::stoi(valueresultresultItem["newComputeResource"].asString());
		if(!valueresultresultItem["appGroupName"].isNull())
			resultObject.appGroupName = valueresultresultItem["appGroupName"].asString();
		if(!valueresultresultItem["gmtModified"].isNull())
			resultObject.gmtModified = valueresultresultItem["gmtModified"].asString();
		if(!valueresultresultItem["newSpec"].isNull())
			resultObject.newSpec = valueresultresultItem["newSpec"].asString();
		result_.push_back(resultObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListQuotaReviewTasksResult::ResultItem> ListQuotaReviewTasksResult::getresult()const
{
	return result_;
}

int ListQuotaReviewTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListQuotaReviewTasksResult::getRequestId()const
{
	return requestId_;
}

