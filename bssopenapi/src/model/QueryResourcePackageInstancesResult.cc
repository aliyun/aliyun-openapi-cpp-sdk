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

#include <alibabacloud/bssopenapi/model/QueryResourcePackageInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryResourcePackageInstancesResult::QueryResourcePackageInstancesResult() :
	ServiceResult()
{}

QueryResourcePackageInstancesResult::QueryResourcePackageInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryResourcePackageInstancesResult::~QueryResourcePackageInstancesResult()
{}

void QueryResourcePackageInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = dataNode["PageNum"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = dataNode["PageSize"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = dataNode["TotalCount"].asString();
	if(!dataNode["HostId"].isNull())
		data_.hostId = dataNode["HostId"].asString();
	auto allInstancesNode = dataNode["Instances"]["Instance"];
	for (auto dataNodeInstancesInstance : allInstancesNode)
	{
		Data::Instance instanceObject;
		if(!dataNodeInstancesInstance["ExpiryTime"].isNull())
			instanceObject.expiryTime = dataNodeInstancesInstance["ExpiryTime"].asString();
		if(!dataNodeInstancesInstance["Status"].isNull())
			instanceObject.status = dataNodeInstancesInstance["Status"].asString();
		if(!dataNodeInstancesInstance["Remark"].isNull())
			instanceObject.remark = dataNodeInstancesInstance["Remark"].asString();
		if(!dataNodeInstancesInstance["RemainingAmountUnit"].isNull())
			instanceObject.remainingAmountUnit = dataNodeInstancesInstance["RemainingAmountUnit"].asString();
		if(!dataNodeInstancesInstance["InstanceId"].isNull())
			instanceObject.instanceId = dataNodeInstancesInstance["InstanceId"].asString();
		if(!dataNodeInstancesInstance["PackageType"].isNull())
			instanceObject.packageType = dataNodeInstancesInstance["PackageType"].asString();
		if(!dataNodeInstancesInstance["EffectiveTime"].isNull())
			instanceObject.effectiveTime = dataNodeInstancesInstance["EffectiveTime"].asString();
		if(!dataNodeInstancesInstance["Region"].isNull())
			instanceObject.region = dataNodeInstancesInstance["Region"].asString();
		if(!dataNodeInstancesInstance["TotalAmount"].isNull())
			instanceObject.totalAmount = dataNodeInstancesInstance["TotalAmount"].asString();
		if(!dataNodeInstancesInstance["DeductType"].isNull())
			instanceObject.deductType = dataNodeInstancesInstance["DeductType"].asString();
		if(!dataNodeInstancesInstance["TotalAmountUnit"].isNull())
			instanceObject.totalAmountUnit = dataNodeInstancesInstance["TotalAmountUnit"].asString();
		if(!dataNodeInstancesInstance["RemainingAmount"].isNull())
			instanceObject.remainingAmount = dataNodeInstancesInstance["RemainingAmount"].asString();
		if(!dataNodeInstancesInstance["CommodityCode"].isNull())
			instanceObject.commodityCode = dataNodeInstancesInstance["CommodityCode"].asString();
		auto allApplicableProducts = value["ApplicableProducts"]["Product"];
		for (auto value : allApplicableProducts)
			instanceObject.applicableProducts.push_back(value.asString());
		data_.instances.push_back(instanceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());

}

std::string QueryResourcePackageInstancesResult::getMessage()const
{
	return message_;
}

int QueryResourcePackageInstancesResult::getPageSize()const
{
	return pageSize_;
}

int QueryResourcePackageInstancesResult::getTotal()const
{
	return total_;
}

QueryResourcePackageInstancesResult::Data QueryResourcePackageInstancesResult::getData()const
{
	return data_;
}

int QueryResourcePackageInstancesResult::getPage()const
{
	return page_;
}

std::string QueryResourcePackageInstancesResult::getCode()const
{
	return code_;
}

bool QueryResourcePackageInstancesResult::getSuccess()const
{
	return success_;
}

