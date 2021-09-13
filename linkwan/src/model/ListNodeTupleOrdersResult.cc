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

#include <alibabacloud/linkwan/model/ListNodeTupleOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListNodeTupleOrdersResult::ListNodeTupleOrdersResult() :
	ServiceResult()
{}

ListNodeTupleOrdersResult::ListNodeTupleOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNodeTupleOrdersResult::~ListNodeTupleOrdersResult()
{}

void ListNodeTupleOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["Order"];
	for (auto dataNodeListOrder : allListNode)
	{
		Data::Order orderObject;
		if(!dataNodeListOrder["OrderId"].isNull())
			orderObject.orderId = dataNodeListOrder["OrderId"].asString();
		if(!dataNodeListOrder["IsKpm"].isNull())
			orderObject.isKpm = dataNodeListOrder["IsKpm"].asString() == "true";
		if(!dataNodeListOrder["OrderState"].isNull())
			orderObject.orderState = dataNodeListOrder["OrderState"].asString();
		if(!dataNodeListOrder["RequiredCount"].isNull())
			orderObject.requiredCount = std::stol(dataNodeListOrder["RequiredCount"].asString());
		if(!dataNodeListOrder["CreatedMillis"].isNull())
			orderObject.createdMillis = std::stol(dataNodeListOrder["CreatedMillis"].asString());
		if(!dataNodeListOrder["AcceptedMillis"].isNull())
			orderObject.acceptedMillis = std::stol(dataNodeListOrder["AcceptedMillis"].asString());
		if(!dataNodeListOrder["LoraVersion"].isNull())
			orderObject.loraVersion = dataNodeListOrder["LoraVersion"].asString();
		if(!dataNodeListOrder["SuccessCount"].isNull())
			orderObject.successCount = std::stol(dataNodeListOrder["SuccessCount"].asString());
		if(!dataNodeListOrder["FailedCount"].isNull())
			orderObject.failedCount = std::stol(dataNodeListOrder["FailedCount"].asString());
		if(!dataNodeListOrder["TupleType"].isNull())
			orderObject.tupleType = dataNodeListOrder["TupleType"].asString();
		data_.list.push_back(orderObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListNodeTupleOrdersResult::Data ListNodeTupleOrdersResult::getData()const
{
	return data_;
}

bool ListNodeTupleOrdersResult::getSuccess()const
{
	return success_;
}

