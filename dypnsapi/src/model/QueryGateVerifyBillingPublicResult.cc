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

#include <alibabacloud/dypnsapi/model/QueryGateVerifyBillingPublicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

QueryGateVerifyBillingPublicResult::QueryGateVerifyBillingPublicResult() :
	ServiceResult()
{}

QueryGateVerifyBillingPublicResult::QueryGateVerifyBillingPublicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryGateVerifyBillingPublicResult::~QueryGateVerifyBillingPublicResult()
{}

void QueryGateVerifyBillingPublicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AmountSum"].isNull())
		data_.amountSum = dataNode["AmountSum"].asString();
	auto allSceneBillingListNode = dataNode["SceneBillingList"]["SceneBillingListItem"];
	for (auto dataNodeSceneBillingListSceneBillingListItem : allSceneBillingListNode)
	{
		Data::SceneBillingListItem sceneBillingListItemObject;
		if(!dataNodeSceneBillingListSceneBillingListItem["Add"].isNull())
			sceneBillingListItemObject.add = dataNodeSceneBillingListSceneBillingListItem["Add"].asString();
		if(!dataNodeSceneBillingListSceneBillingListItem["SinglePrice"].isNull())
			sceneBillingListItemObject.singlePrice = dataNodeSceneBillingListSceneBillingListItem["SinglePrice"].asString();
		if(!dataNodeSceneBillingListSceneBillingListItem["Amount"].isNull())
			sceneBillingListItemObject.amount = dataNodeSceneBillingListSceneBillingListItem["Amount"].asString();
		if(!dataNodeSceneBillingListSceneBillingListItem["ItemName"].isNull())
			sceneBillingListItemObject.itemName = dataNodeSceneBillingListSceneBillingListItem["ItemName"].asString();
		if(!dataNodeSceneBillingListSceneBillingListItem["SceneCode"].isNull())
			sceneBillingListItemObject.sceneCode = dataNodeSceneBillingListSceneBillingListItem["SceneCode"].asString();
		if(!dataNodeSceneBillingListSceneBillingListItem["AppName"].isNull())
			sceneBillingListItemObject.appName = dataNodeSceneBillingListSceneBillingListItem["AppName"].asString();
		if(!dataNodeSceneBillingListSceneBillingListItem["SceneName"].isNull())
			sceneBillingListItemObject.sceneName = dataNodeSceneBillingListSceneBillingListItem["SceneName"].asString();
		data_.sceneBillingList.push_back(sceneBillingListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryGateVerifyBillingPublicResult::getMessage()const
{
	return message_;
}

QueryGateVerifyBillingPublicResult::Data QueryGateVerifyBillingPublicResult::getData()const
{
	return data_;
}

std::string QueryGateVerifyBillingPublicResult::getCode()const
{
	return code_;
}

