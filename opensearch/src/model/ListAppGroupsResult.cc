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

#include <alibabacloud/opensearch/model/ListAppGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListAppGroupsResult::ListAppGroupsResult() :
	ServiceResult()
{}

ListAppGroupsResult::ListAppGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppGroupsResult::~ListAppGroupsResult()
{}

void ListAppGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["created"].isNull())
			resultObject.created = std::stoi(valueresultresultItem["created"].asString());
		if(!valueresultresultItem["currentVersion"].isNull())
			resultObject.currentVersion = valueresultresultItem["currentVersion"].asString();
		if(!valueresultresultItem["pendingSecondRankAlgoDeploymentId"].isNull())
			resultObject.pendingSecondRankAlgoDeploymentId = std::stoi(valueresultresultItem["pendingSecondRankAlgoDeploymentId"].asString());
		if(!valueresultresultItem["lockMode"].isNull())
			resultObject.lockMode = valueresultresultItem["lockMode"].asString();
		if(!valueresultresultItem["updated"].isNull())
			resultObject.updated = std::stoi(valueresultresultItem["updated"].asString());
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = valueresultresultItem["id"].asString();
		if(!valueresultresultItem["chargeType"].isNull())
			resultObject.chargeType = valueresultresultItem["chargeType"].asString();
		if(!valueresultresultItem["hasPendingQuotaReviewTask"].isNull())
			resultObject.hasPendingQuotaReviewTask = std::stoi(valueresultresultItem["hasPendingQuotaReviewTask"].asString());
		if(!valueresultresultItem["secondRankAlgoDeploymentId"].isNull())
			resultObject.secondRankAlgoDeploymentId = std::stoi(valueresultresultItem["secondRankAlgoDeploymentId"].asString());
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["instanceId"].isNull())
			resultObject.instanceId = valueresultresultItem["instanceId"].asString();
		if(!valueresultresultItem["processingOrderId"].isNull())
			resultObject.processingOrderId = valueresultresultItem["processingOrderId"].asString();
		if(!valueresultresultItem["chargingWay"].isNull())
			resultObject.chargingWay = std::stoi(valueresultresultItem["chargingWay"].asString());
		if(!valueresultresultItem["type"].isNull())
			resultObject.type = valueresultresultItem["type"].asString();
		if(!valueresultresultItem["status"].isNull())
			resultObject.status = valueresultresultItem["status"].asString();
		if(!valueresultresultItem["projectId"].isNull())
			resultObject.projectId = valueresultresultItem["projectId"].asString();
		if(!valueresultresultItem["switchedTime"].isNull())
			resultObject.switchedTime = std::stoi(valueresultresultItem["switchedTime"].asString());
		if(!valueresultresultItem["commodityCode"].isNull())
			resultObject.commodityCode = valueresultresultItem["commodityCode"].asString();
		if(!valueresultresultItem["expireOn"].isNull())
			resultObject.expireOn = valueresultresultItem["expireOn"].asString();
		if(!valueresultresultItem["domain"].isNull())
			resultObject.domain = valueresultresultItem["domain"].asString();
		if(!valueresultresultItem["description"].isNull())
			resultObject.description = valueresultresultItem["description"].asString();
		if(!valueresultresultItem["firstRankAlgoDeploymentId"].isNull())
			resultObject.firstRankAlgoDeploymentId = std::stoi(valueresultresultItem["firstRankAlgoDeploymentId"].asString());
		if(!valueresultresultItem["produced"].isNull())
			resultObject.produced = std::stoi(valueresultresultItem["produced"].asString());
		if(!valueresultresultItem["lockedByExpiration"].isNull())
			resultObject.lockedByExpiration = std::stoi(valueresultresultItem["lockedByExpiration"].asString());
		auto alltagsNode = valueresultresultItem["tags"]["tagsItem"];
		for (auto valueresultresultItemtagstagsItem : alltagsNode)
		{
			ResultItem::TagsItem tagsObject;
			if(!valueresultresultItemtagstagsItem["key"].isNull())
				tagsObject.key = valueresultresultItemtagstagsItem["key"].asString();
			if(!valueresultresultItemtagstagsItem["value"].isNull())
				tagsObject.value = valueresultresultItemtagstagsItem["value"].asString();
			resultObject.tags.push_back(tagsObject);
		}
		auto quotaNode = value["quota"];
		if(!quotaNode["spec"].isNull())
			resultObject.quota.spec = quotaNode["spec"].asString();
		if(!quotaNode["docSize"].isNull())
			resultObject.quota.docSize = std::stoi(quotaNode["docSize"].asString());
		if(!quotaNode["computeResource"].isNull())
			resultObject.quota.computeResource = std::stoi(quotaNode["computeResource"].asString());
		result_.push_back(resultObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::vector<ListAppGroupsResult::ResultItem> ListAppGroupsResult::getresult()const
{
	return result_;
}

int ListAppGroupsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAppGroupsResult::getRequestId()const
{
	return requestId_;
}

