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

#include <alibabacloud/cbn/model/DescribeCenAttachedChildInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

DescribeCenAttachedChildInstancesResult::DescribeCenAttachedChildInstancesResult() :
	ServiceResult()
{}

DescribeCenAttachedChildInstancesResult::DescribeCenAttachedChildInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCenAttachedChildInstancesResult::~DescribeCenAttachedChildInstancesResult()
{}

void DescribeCenAttachedChildInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChildInstancesNode = value["ChildInstances"]["ChildInstance"];
	for (auto valueChildInstancesChildInstance : allChildInstancesNode)
	{
		ChildInstance childInstancesObject;
		if(!valueChildInstancesChildInstance["ChildInstanceType"].isNull())
			childInstancesObject.childInstanceType = valueChildInstancesChildInstance["ChildInstanceType"].asString();
		if(!valueChildInstancesChildInstance["Status"].isNull())
			childInstancesObject.status = valueChildInstancesChildInstance["Status"].asString();
		if(!valueChildInstancesChildInstance["ChildInstanceRegionId"].isNull())
			childInstancesObject.childInstanceRegionId = valueChildInstancesChildInstance["ChildInstanceRegionId"].asString();
		if(!valueChildInstancesChildInstance["ChildInstanceOwnerId"].isNull())
			childInstancesObject.childInstanceOwnerId = std::stol(valueChildInstancesChildInstance["ChildInstanceOwnerId"].asString());
		if(!valueChildInstancesChildInstance["ChildInstanceId"].isNull())
			childInstancesObject.childInstanceId = valueChildInstancesChildInstance["ChildInstanceId"].asString();
		if(!valueChildInstancesChildInstance["CenId"].isNull())
			childInstancesObject.cenId = valueChildInstancesChildInstance["CenId"].asString();
		if(!valueChildInstancesChildInstance["ChildInstanceAttachTime"].isNull())
			childInstancesObject.childInstanceAttachTime = valueChildInstancesChildInstance["ChildInstanceAttachTime"].asString();
		childInstances_.push_back(childInstancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeCenAttachedChildInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCenAttachedChildInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCenAttachedChildInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCenAttachedChildInstancesResult::ChildInstance> DescribeCenAttachedChildInstancesResult::getChildInstances()const
{
	return childInstances_;
}

