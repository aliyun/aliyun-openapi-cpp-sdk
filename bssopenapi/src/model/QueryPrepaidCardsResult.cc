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

#include <alibabacloud/bssopenapi/model/QueryPrepaidCardsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryPrepaidCardsResult::QueryPrepaidCardsResult() :
	ServiceResult()
{}

QueryPrepaidCardsResult::QueryPrepaidCardsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryPrepaidCardsResult::~QueryPrepaidCardsResult()
{}

void QueryPrepaidCardsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PrepaidCard"];
	for (auto valueDataPrepaidCard : allDataNode)
	{
		PrepaidCard dataObject;
		if(!valueDataPrepaidCard["Status"].isNull())
			dataObject.status = valueDataPrepaidCard["Status"].asString();
		if(!valueDataPrepaidCard["ExpiryTime"].isNull())
			dataObject.expiryTime = valueDataPrepaidCard["ExpiryTime"].asString();
		if(!valueDataPrepaidCard["GrantedTime"].isNull())
			dataObject.grantedTime = valueDataPrepaidCard["GrantedTime"].asString();
		if(!valueDataPrepaidCard["NominalValue"].isNull())
			dataObject.nominalValue = valueDataPrepaidCard["NominalValue"].asString();
		if(!valueDataPrepaidCard["EffectiveTime"].isNull())
			dataObject.effectiveTime = valueDataPrepaidCard["EffectiveTime"].asString();
		if(!valueDataPrepaidCard["PrepaidCardNo"].isNull())
			dataObject.prepaidCardNo = valueDataPrepaidCard["PrepaidCardNo"].asString();
		if(!valueDataPrepaidCard["ApplicableScenarios"].isNull())
			dataObject.applicableScenarios = valueDataPrepaidCard["ApplicableScenarios"].asString();
		if(!valueDataPrepaidCard["PrepaidCardId"].isNull())
			dataObject.prepaidCardId = std::stol(valueDataPrepaidCard["PrepaidCardId"].asString());
		if(!valueDataPrepaidCard["ApplicableProducts"].isNull())
			dataObject.applicableProducts = valueDataPrepaidCard["ApplicableProducts"].asString();
		if(!valueDataPrepaidCard["Balance"].isNull())
			dataObject.balance = valueDataPrepaidCard["Balance"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryPrepaidCardsResult::getMessage()const
{
	return message_;
}

std::vector<QueryPrepaidCardsResult::PrepaidCard> QueryPrepaidCardsResult::getData()const
{
	return data_;
}

std::string QueryPrepaidCardsResult::getCode()const
{
	return code_;
}

bool QueryPrepaidCardsResult::getSuccess()const
{
	return success_;
}

