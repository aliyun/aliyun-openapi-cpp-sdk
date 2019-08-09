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

#include <alibabacloud/cloudapi/model/DescribePurchasedApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribePurchasedApisResult::DescribePurchasedApisResult() :
	ServiceResult()
{}

DescribePurchasedApisResult::DescribePurchasedApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePurchasedApisResult::~DescribePurchasedApisResult()
{}

void DescribePurchasedApisResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allPurchasedApis = value["PurchasedApis"]["PurchasedApi"];
	for (auto value : allPurchasedApis)
	{
		PurchasedApi purchasedApisObject;
		if(!value["RegionId"].isNull())
			purchasedApisObject.regionId = value["RegionId"].asString();
		if(!value["GroupId"].isNull())
			purchasedApisObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			purchasedApisObject.groupName = value["GroupName"].asString();
		if(!value["ApiId"].isNull())
			purchasedApisObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			purchasedApisObject.apiName = value["ApiName"].asString();
		if(!value["StageName"].isNull())
			purchasedApisObject.stageName = value["StageName"].asString();
		if(!value["Description"].isNull())
			purchasedApisObject.description = value["Description"].asString();
		if(!value["PurchasedTime"].isNull())
			purchasedApisObject.purchasedTime = value["PurchasedTime"].asString();
		purchasedApis_.push_back(purchasedApisObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribePurchasedApisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePurchasedApisResult::getPageSize()const
{
	return pageSize_;
}

int DescribePurchasedApisResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePurchasedApisResult::PurchasedApi> DescribePurchasedApisResult::getPurchasedApis()const
{
	return purchasedApis_;
}

