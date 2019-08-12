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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["HostId"].isNull())
		data_.hostId = dataNode["HostId"].asString();
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = dataNode["PageNum"].asString();
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = dataNode["PageSize"].asString();
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = dataNode["TotalCount"].asString();
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Data::Instance instanceObject;
		if(!value["InstanceId"].isNull())
			instanceObject.instanceId = value["InstanceId"].asString();
		if(!value["Region"].isNull())
			instanceObject.region = value["Region"].asString();
		if(!value["TotalAmount"].isNull())
			instanceObject.totalAmount = value["TotalAmount"].asString();
		if(!value["TotalAmountUnit"].isNull())
			instanceObject.totalAmountUnit = value["TotalAmountUnit"].asString();
		if(!value["RemainingAmount"].isNull())
			instanceObject.remainingAmount = value["RemainingAmount"].asString();
		if(!value["RemainingAmountUnit"].isNull())
			instanceObject.remainingAmountUnit = value["RemainingAmountUnit"].asString();
		if(!value["EffectiveTime"].isNull())
			instanceObject.effectiveTime = value["EffectiveTime"].asString();
		if(!value["ExpiryTime"].isNull())
			instanceObject.expiryTime = value["ExpiryTime"].asString();
		if(!value["Remark"].isNull())
			instanceObject.remark = value["Remark"].asString();
		if(!value["PackageType"].isNull())
			instanceObject.packageType = value["PackageType"].asString();
		if(!value["Status"].isNull())
			instanceObject.status = value["Status"].asString();
		if(!value["DeductType"].isNull())
			instanceObject.deductType = value["DeductType"].asString();
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
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

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

