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

#include <alibabacloud/computenest/model/ListServiceInstanceResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNest;
using namespace AlibabaCloud::ComputeNest::Model;

ListServiceInstanceResourcesResult::ListServiceInstanceResourcesResult() :
	ServiceResult()
{}

ListServiceInstanceResourcesResult::ListServiceInstanceResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceInstanceResourcesResult::~ListServiceInstanceResourcesResult()
{}

void ListServiceInstanceResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["ResourcesItem"];
	for (auto valueResourcesResourcesItem : allResourcesNode)
	{
		ResourcesItem resourcesObject;
		if(!valueResourcesResourcesItem["ResourceARN"].isNull())
			resourcesObject.resourceARN = valueResourcesResourcesItem["ResourceARN"].asString();
		if(!valueResourcesResourcesItem["PayType"].isNull())
			resourcesObject.payType = valueResourcesResourcesItem["PayType"].asString();
		if(!valueResourcesResourcesItem["RenewStatus"].isNull())
			resourcesObject.renewStatus = valueResourcesResourcesItem["RenewStatus"].asString();
		if(!valueResourcesResourcesItem["CreateTime"].isNull())
			resourcesObject.createTime = valueResourcesResourcesItem["CreateTime"].asString();
		if(!valueResourcesResourcesItem["ExpireTime"].isNull())
			resourcesObject.expireTime = valueResourcesResourcesItem["ExpireTime"].asString();
		if(!valueResourcesResourcesItem["RenewalPeriod"].isNull())
			resourcesObject.renewalPeriod = std::stoi(valueResourcesResourcesItem["RenewalPeriod"].asString());
		if(!valueResourcesResourcesItem["RenewalPeriodUnit"].isNull())
			resourcesObject.renewalPeriodUnit = valueResourcesResourcesItem["RenewalPeriodUnit"].asString();
		if(!valueResourcesResourcesItem["ProductType"].isNull())
			resourcesObject.productType = valueResourcesResourcesItem["ProductType"].asString();
		if(!valueResourcesResourcesItem["ProductCode"].isNull())
			resourcesObject.productCode = valueResourcesResourcesItem["ProductCode"].asString();
		if(!valueResourcesResourcesItem["Status"].isNull())
			resourcesObject.status = valueResourcesResourcesItem["Status"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListServiceInstanceResourcesResult::getNextToken()const
{
	return nextToken_;
}

int ListServiceInstanceResourcesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListServiceInstanceResourcesResult::ResourcesItem> ListServiceInstanceResourcesResult::getResources()const
{
	return resources_;
}

