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
	auto allInstanceList = value["InstanceList"]["Instance"];
	for (auto value : allInstanceList)
	{
		Data::Instance instanceObject;
		if(!value["OwnerId"].isNull())
			instanceObject.ownerId = std::stol(value["OwnerId"].asString());
		if(!value["SellerId"].isNull())
			instanceObject.sellerId = std::stol(value["SellerId"].asString());
		if(!value["ProductCode"].isNull())
			instanceObject.productCode = value["ProductCode"].asString();
		if(!value["ProductType"].isNull())
			instanceObject.productType = value["ProductType"].asString();
		if(!value["SubscriptionType"].isNull())
			instanceObject.subscriptionType = value["SubscriptionType"].asString();
		if(!value["InstanceID"].isNull())
			instanceObject.instanceID = value["InstanceID"].asString();
		if(!value["Region"].isNull())
			instanceObject.region = value["Region"].asString();
		if(!value["CreateTime"].isNull())
			instanceObject.createTime = value["CreateTime"].asString();
		if(!value["EndTime"].isNull())
			instanceObject.endTime = value["EndTime"].asString();
		if(!value["StopTime"].isNull())
			instanceObject.stopTime = value["StopTime"].asString();
		if(!value["ReleaseTime"].isNull())
			instanceObject.releaseTime = value["ReleaseTime"].asString();
		if(!value["ExpectedReleaseTime"].isNull())
			instanceObject.expectedReleaseTime = value["ExpectedReleaseTime"].asString();
		if(!value["Status"].isNull())
			instanceObject.status = value["Status"].asString();
		if(!value["SubStatus"].isNull())
			instanceObject.subStatus = value["SubStatus"].asString();
		if(!value["RenewStatus"].isNull())
			instanceObject.renewStatus = value["RenewStatus"].asString();
		if(!value["RenewalDuration"].isNull())
			instanceObject.renewalDuration = std::stoi(value["RenewalDuration"].asString());
		if(!value["RenewalDurationUnit"].isNull())
			instanceObject.renewalDurationUnit = value["RenewalDurationUnit"].asString();
		if(!value["Seller"].isNull())
			instanceObject.seller = value["Seller"].asString();
		data_.instanceList.push_back(instanceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

