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

#include <alibabacloud/linkwan/model/GetGatewayTupleOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetGatewayTupleOrderResult::GetGatewayTupleOrderResult() :
	ServiceResult()
{}

GetGatewayTupleOrderResult::GetGatewayTupleOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayTupleOrderResult::~GetGatewayTupleOrderResult()
{}

void GetGatewayTupleOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["OrderId"].isNull())
		data_.orderId = dataNode["OrderId"].asString();
	if(!dataNode["OrderState"].isNull())
		data_.orderState = dataNode["OrderState"].asString();
	if(!dataNode["RequiredCount"].isNull())
		data_.requiredCount = std::stol(dataNode["RequiredCount"].asString());
	if(!dataNode["CreatedMillis"].isNull())
		data_.createdMillis = std::stol(dataNode["CreatedMillis"].asString());
	if(!dataNode["AcceptedMillis"].isNull())
		data_.acceptedMillis = std::stol(dataNode["AcceptedMillis"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetGatewayTupleOrderResult::Data GetGatewayTupleOrderResult::getData()const
{
	return data_;
}

bool GetGatewayTupleOrderResult::getSuccess()const
{
	return success_;
}

