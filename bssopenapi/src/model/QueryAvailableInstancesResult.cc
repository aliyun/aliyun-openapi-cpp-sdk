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

#include <alibabacloud/bssopenapi/model/QueryAvailableInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryAvailableInstancesResult::QueryAvailableInstancesResult() :
	ServiceResult()
{}

QueryAvailableInstancesResult::QueryAvailableInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAvailableInstancesResult::~QueryAvailableInstancesResult()
{}

void QueryAvailableInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allInstanceListNode = dataNode["InstanceList"]["Instance"];
	for (auto dataNodeInstanceListInstance : allInstanceListNode)
	{
		Data::Instance instanceObject;
		if(!dataNodeInstanceListInstance["SubStatus"].isNull())
			instanceObject.subStatus = dataNodeInstanceListInstance["SubStatus"].asString();
		if(!dataNodeInstanceListInstance["Status"].isNull())
			instanceObject.status = dataNodeInstanceListInstance["Status"].asString();
		if(!dataNodeInstanceListInstance["ExpectedReleaseTime"].isNull())
			instanceObject.expectedReleaseTime = dataNodeInstanceListInstance["ExpectedReleaseTime"].asString();
		if(!dataNodeInstanceListInstance["RenewStatus"].isNull())
			instanceObject.renewStatus = dataNodeInstanceListInstance["RenewStatus"].asString();
		if(!dataNodeInstanceListInstance["CreateTime"].isNull())
			instanceObject.createTime = dataNodeInstanceListInstance["CreateTime"].asString();
		if(!dataNodeInstanceListInstance["SellerId"].isNull())
			instanceObject.sellerId = std::stol(dataNodeInstanceListInstance["SellerId"].asString());
		if(!dataNodeInstanceListInstance["InstanceID"].isNull())
			instanceObject.instanceID = dataNodeInstanceListInstance["InstanceID"].asString();
		if(!dataNodeInstanceListInstance["Seller"].isNull())
			instanceObject.seller = dataNodeInstanceListInstance["Seller"].asString();
		if(!dataNodeInstanceListInstance["StopTime"].isNull())
			instanceObject.stopTime = dataNodeInstanceListInstance["StopTime"].asString();
		if(!dataNodeInstanceListInstance["RenewalDurationUnit"].isNull())
			instanceObject.renewalDurationUnit = dataNodeInstanceListInstance["RenewalDurationUnit"].asString();
		if(!dataNodeInstanceListInstance["SubscriptionType"].isNull())
			instanceObject.subscriptionType = dataNodeInstanceListInstance["SubscriptionType"].asString();
		if(!dataNodeInstanceListInstance["OwnerId"].isNull())
			instanceObject.ownerId = std::stol(dataNodeInstanceListInstance["OwnerId"].asString());
		if(!dataNodeInstanceListInstance["EndTime"].isNull())
			instanceObject.endTime = dataNodeInstanceListInstance["EndTime"].asString();
		if(!dataNodeInstanceListInstance["ProductType"].isNull())
			instanceObject.productType = dataNodeInstanceListInstance["ProductType"].asString();
		if(!dataNodeInstanceListInstance["Region"].isNull())
			instanceObject.region = dataNodeInstanceListInstance["Region"].asString();
		if(!dataNodeInstanceListInstance["ReleaseTime"].isNull())
			instanceObject.releaseTime = dataNodeInstanceListInstance["ReleaseTime"].asString();
		if(!dataNodeInstanceListInstance["RenewalDuration"].isNull())
			instanceObject.renewalDuration = std::stoi(dataNodeInstanceListInstance["RenewalDuration"].asString());
		if(!dataNodeInstanceListInstance["ProductCode"].isNull())
			instanceObject.productCode = dataNodeInstanceListInstance["ProductCode"].asString();
		data_.instanceList.push_back(instanceObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryAvailableInstancesResult::getMessage()const
{
	return message_;
}

QueryAvailableInstancesResult::Data QueryAvailableInstancesResult::getData()const
{
	return data_;
}

std::string QueryAvailableInstancesResult::getCode()const
{
	return code_;
}

bool QueryAvailableInstancesResult::getSuccess()const
{
	return success_;
}

