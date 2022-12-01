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

#include <alibabacloud/opensearch/model/DescribeAppGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

DescribeAppGroupResult::DescribeAppGroupResult() :
	ServiceResult()
{}

DescribeAppGroupResult::DescribeAppGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppGroupResult::~DescribeAppGroupResult()
{}

void DescribeAppGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["created"].isNull())
		result_.created = std::stoi(resultNode["created"].asString());
	if(!resultNode["currentVersion"].isNull())
		result_.currentVersion = resultNode["currentVersion"].asString();
	if(!resultNode["pendingSecondRankAlgoDeploymentId"].isNull())
		result_.pendingSecondRankAlgoDeploymentId = std::stoi(resultNode["pendingSecondRankAlgoDeploymentId"].asString());
	if(!resultNode["lockMode"].isNull())
		result_.lockMode = resultNode["lockMode"].asString();
	if(!resultNode["updated"].isNull())
		result_.updated = std::stoi(resultNode["updated"].asString());
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!resultNode["chargeType"].isNull())
		result_.chargeType = resultNode["chargeType"].asString();
	if(!resultNode["hasPendingQuotaReviewTask"].isNull())
		result_.hasPendingQuotaReviewTask = std::stoi(resultNode["hasPendingQuotaReviewTask"].asString());
	if(!resultNode["secondRankAlgoDeploymentId"].isNull())
		result_.secondRankAlgoDeploymentId = std::stoi(resultNode["secondRankAlgoDeploymentId"].asString());
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["instanceId"].isNull())
		result_.instanceId = resultNode["instanceId"].asString();
	if(!resultNode["processingOrderId"].isNull())
		result_.processingOrderId = resultNode["processingOrderId"].asString();
	if(!resultNode["chargingWay"].isNull())
		result_.chargingWay = std::stoi(resultNode["chargingWay"].asString());
	if(!resultNode["type"].isNull())
		result_.type = resultNode["type"].asString();
	if(!resultNode["status"].isNull())
		result_.status = resultNode["status"].asString();
	if(!resultNode["projectId"].isNull())
		result_.projectId = resultNode["projectId"].asString();
	if(!resultNode["switchedTime"].isNull())
		result_.switchedTime = std::stoi(resultNode["switchedTime"].asString());
	if(!resultNode["commodityCode"].isNull())
		result_.commodityCode = resultNode["commodityCode"].asString();
	if(!resultNode["expireOn"].isNull())
		result_.expireOn = resultNode["expireOn"].asString();
	if(!resultNode["domain"].isNull())
		result_.domain = resultNode["domain"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["firstRankAlgoDeploymentId"].isNull())
		result_.firstRankAlgoDeploymentId = std::stoi(resultNode["firstRankAlgoDeploymentId"].asString());
	if(!resultNode["produced"].isNull())
		result_.produced = std::stoi(resultNode["produced"].asString());
	if(!resultNode["lockedByExpiration"].isNull())
		result_.lockedByExpiration = std::stoi(resultNode["lockedByExpiration"].asString());
	auto alltagsNode = resultNode["tags"]["tagsItem"];
	for (auto resultNodetagstagsItem : alltagsNode)
	{
		Result::TagsItem tagsItemObject;
		if(!resultNodetagstagsItem["key"].isNull())
			tagsItemObject.key = resultNodetagstagsItem["key"].asString();
		if(!resultNodetagstagsItem["value"].isNull())
			tagsItemObject.value = resultNodetagstagsItem["value"].asString();
		result_.tags.push_back(tagsItemObject);
	}
	auto quotaNode = resultNode["quota"];
	if(!quotaNode["spec"].isNull())
		result_.quota.spec = quotaNode["spec"].asString();
	if(!quotaNode["docSize"].isNull())
		result_.quota.docSize = std::stoi(quotaNode["docSize"].asString());
	if(!quotaNode["computeResource"].isNull())
		result_.quota.computeResource = std::stoi(quotaNode["computeResource"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string DescribeAppGroupResult::getRequestId()const
{
	return requestId_;
}

DescribeAppGroupResult::Result DescribeAppGroupResult::getResult()const
{
	return result_;
}

