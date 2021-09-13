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

#include <alibabacloud/linkwan/model/ListGatewayTupleOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListGatewayTupleOrdersResult::ListGatewayTupleOrdersResult() :
	ServiceResult()
{}

ListGatewayTupleOrdersResult::ListGatewayTupleOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayTupleOrdersResult::~ListGatewayTupleOrdersResult()
{}

void ListGatewayTupleOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["GatewayTupleOrder"];
	for (auto dataNodeListGatewayTupleOrder : allListNode)
	{
		Data::GatewayTupleOrder gatewayTupleOrderObject;
		if(!dataNodeListGatewayTupleOrder["OrderId"].isNull())
			gatewayTupleOrderObject.orderId = dataNodeListGatewayTupleOrder["OrderId"].asString();
		if(!dataNodeListGatewayTupleOrder["OrderState"].isNull())
			gatewayTupleOrderObject.orderState = dataNodeListGatewayTupleOrder["OrderState"].asString();
		if(!dataNodeListGatewayTupleOrder["RequiredCount"].isNull())
			gatewayTupleOrderObject.requiredCount = std::stol(dataNodeListGatewayTupleOrder["RequiredCount"].asString());
		if(!dataNodeListGatewayTupleOrder["CreatedMillis"].isNull())
			gatewayTupleOrderObject.createdMillis = std::stol(dataNodeListGatewayTupleOrder["CreatedMillis"].asString());
		if(!dataNodeListGatewayTupleOrder["AcceptedMillis"].isNull())
			gatewayTupleOrderObject.acceptedMillis = std::stol(dataNodeListGatewayTupleOrder["AcceptedMillis"].asString());
		if(!dataNodeListGatewayTupleOrder["TupleType"].isNull())
			gatewayTupleOrderObject.tupleType = dataNodeListGatewayTupleOrder["TupleType"].asString();
		data_.list.push_back(gatewayTupleOrderObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ListGatewayTupleOrdersResult::Data ListGatewayTupleOrdersResult::getData()const
{
	return data_;
}

bool ListGatewayTupleOrdersResult::getSuccess()const
{
	return success_;
}

