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

#include <alibabacloud/imm/model/GetBatchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetBatchResult::GetBatchResult() :
	ServiceResult()
{}

GetBatchResult::GetBatchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBatchResult::~GetBatchResult()
{}

void GetBatchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto batchNode = value["Batch"];
	if(!batchNode["Id"].isNull())
		batch_.id = batchNode["Id"].asString();
	if(!batchNode["State"].isNull())
		batch_.state = batchNode["State"].asString();
	if(!batchNode["Marker"].isNull())
		batch_.marker = batchNode["Marker"].asString();
	if(!batchNode["CreateTime"].isNull())
		batch_.createTime = batchNode["CreateTime"].asString();
	if(!batchNode["UpdateTime"].isNull())
		batch_.updateTime = batchNode["UpdateTime"].asString();
	if(!batchNode["Tags"].isNull())
		batch_.tags = batchNode["Tags"].asString();
	if(!batchNode["Error"].isNull())
		batch_.error = batchNode["Error"].asString();
	auto allActionsNode = batchNode["Actions"]["ActionsItem"];
	for (auto batchNodeActionsActionsItem : allActionsNode)
	{
		Batch::ActionsItem actionsItemObject;
		if(!batchNodeActionsActionsItem["Name"].isNull())
			actionsItemObject.name = batchNodeActionsActionsItem["Name"].asString();
		auto allParameters = value["Parameters"]["null"];
		for (auto value : allParameters)
			actionsItemObject.parameters.push_back(value.asString());
		batch_.actions.push_back(actionsItemObject);
	}
	auto inputNode = batchNode["Input"];
	auto oSSNode = inputNode["OSS"];
	if(!oSSNode["Bucket"].isNull())
		batch_.input.oSS.bucket = oSSNode["Bucket"].asString();
	if(!oSSNode["Prefix"].isNull())
		batch_.input.oSS.prefix = oSSNode["Prefix"].asString();
		auto allMatchExpressions = oSSNode["MatchExpressions"]["null"];
		for (auto value : allMatchExpressions)
			batch_.input.oSS.matchExpressions.push_back(value.asString());
	auto notificationNode = batchNode["Notification"];
	if(!notificationNode["Endpoint"].isNull())
		batch_.notification.endpoint = notificationNode["Endpoint"].asString();
	if(!notificationNode["Topic"].isNull())
		batch_.notification.topic = notificationNode["Topic"].asString();
	auto statisticNode = batchNode["Statistic"];
	if(!statisticNode["SubmitSuccess"].isNull())
		batch_.statistic.submitSuccess = std::stol(statisticNode["SubmitSuccess"].asString());
	if(!statisticNode["SubmitFailure"].isNull())
		batch_.statistic.submitFailure = std::stol(statisticNode["SubmitFailure"].asString());

}

GetBatchResult::Batch GetBatchResult::getBatch()const
{
	return batch_;
}

