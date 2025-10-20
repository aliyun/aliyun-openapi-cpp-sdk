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

#include <alibabacloud/eiam/model/ListBrandsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListBrandsResult::ListBrandsResult() :
	ServiceResult()
{}

ListBrandsResult::ListBrandsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListBrandsResult::~ListBrandsResult()
{}

void ListBrandsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBrandsNode = value["Brands"]["Brand"];
	for (auto valueBrandsBrand : allBrandsNode)
	{
		Brand brandsObject;
		if(!valueBrandsBrand["InstanceId"].isNull())
			brandsObject.instanceId = valueBrandsBrand["InstanceId"].asString();
		if(!valueBrandsBrand["BrandId"].isNull())
			brandsObject.brandId = valueBrandsBrand["BrandId"].asString();
		if(!valueBrandsBrand["BrandName"].isNull())
			brandsObject.brandName = valueBrandsBrand["BrandName"].asString();
		if(!valueBrandsBrand["BrandType"].isNull())
			brandsObject.brandType = valueBrandsBrand["BrandType"].asString();
		if(!valueBrandsBrand["Status"].isNull())
			brandsObject.status = valueBrandsBrand["Status"].asString();
		brands_.push_back(brandsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PreviousToken"].isNull())
		previousToken_ = value["PreviousToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stol(value["MaxResults"].asString());

}

long ListBrandsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListBrandsResult::getPreviousToken()const
{
	return previousToken_;
}

std::string ListBrandsResult::getNextToken()const
{
	return nextToken_;
}

long ListBrandsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListBrandsResult::Brand> ListBrandsResult::getBrands()const
{
	return brands_;
}

