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

#include <alibabacloud/imm/model/ListBatchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListBatchesResult::ListBatchesResult() :
	ServiceResult()
{}

ListBatchesResult::ListBatchesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBatchesResult::~ListBatchesResult()
{}

void ListBatchesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBatchesNode = value["Batches"]["BatchesItem"];
	for (auto valueBatchesBatchesItem : allBatchesNode)
	{
		BatchesItem batchesObject;
		if(!valueBatchesBatchesItem["Id"].isNull())
			batchesObject.id = valueBatchesBatchesItem["Id"].asString();
		if(!valueBatchesBatchesItem["State"].isNull())
			batchesObject.state = valueBatchesBatchesItem["State"].asString();
		if(!valueBatchesBatchesItem["Marker"].isNull())
			batchesObject.marker = valueBatchesBatchesItem["Marker"].asString();
		if(!valueBatchesBatchesItem["CreateTime"].isNull())
			batchesObject.createTime = valueBatchesBatchesItem["CreateTime"].asString();
		if(!valueBatchesBatchesItem["UpdateTime"].isNull())
			batchesObject.updateTime = valueBatchesBatchesItem["UpdateTime"].asString();
		if(!valueBatchesBatchesItem["Tags"].isNull())
			batchesObject.tags = valueBatchesBatchesItem["Tags"].asString();
		if(!valueBatchesBatchesItem["Error"].isNull())
			batchesObject.error = valueBatchesBatchesItem["Error"].asString();
		auto allActionsNode = valueBatchesBatchesItem["Actions"]["ActionsItem"];
		for (auto valueBatchesBatchesItemActionsActionsItem : allActionsNode)
		{
			BatchesItem::ActionsItem actionsObject;
			if(!valueBatchesBatchesItemActionsActionsItem["Name"].isNull())
				actionsObject.name = valueBatchesBatchesItemActionsActionsItem["Name"].asString();
			auto allParameters = value["Parameters"]["null"];
			for (auto value : allParameters)
				actionsObject.parameters.push_back(value.asString());
			batchesObject.actions.push_back(actionsObject);
		}
		auto inputNode = value["Input"];
		auto oSSNode = inputNode["OSS"];
		if(!oSSNode["Bucket"].isNull())
			batchesObject.input.oSS.bucket = oSSNode["Bucket"].asString();
		if(!oSSNode["Prefix"].isNull())
			batchesObject.input.oSS.prefix = oSSNode["Prefix"].asString();
			auto allMatchExpressions = oSSNode["MatchExpressions"]["null"];
			for (auto value : allMatchExpressions)
				batchesObject.input.oSS.matchExpressions.push_back(value.asString());
		auto notificationNode = value["Notification"];
		if(!notificationNode["Endpoint"].isNull())
			batchesObject.notification.endpoint = notificationNode["Endpoint"].asString();
		if(!notificationNode["Topic"].isNull())
			batchesObject.notification.topic = notificationNode["Topic"].asString();
		auto statisticNode = value["Statistic"];
		if(!statisticNode["SubmitSuccess"].isNull())
			batchesObject.statistic.submitSuccess = std::stol(statisticNode["SubmitSuccess"].asString());
		if(!statisticNode["SubmitFailure"].isNull())
			batchesObject.statistic.submitFailure = std::stol(statisticNode["SubmitFailure"].asString());
		batches_.push_back(batchesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListBatchesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListBatchesResult::BatchesItem> ListBatchesResult::getBatches()const
{
	return batches_;
}

