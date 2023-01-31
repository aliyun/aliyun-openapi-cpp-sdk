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

#include <alibabacloud/vpc/model/DescribeAccessPointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeAccessPointsResult::DescribeAccessPointsResult() :
	ServiceResult()
{}

DescribeAccessPointsResult::DescribeAccessPointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessPointsResult::~DescribeAccessPointsResult()
{}

void DescribeAccessPointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessPointSetNode = value["AccessPointSet"]["AccessPointType"];
	for (auto valueAccessPointSetAccessPointType : allAccessPointSetNode)
	{
		AccessPointType accessPointSetObject;
		if(!valueAccessPointSetAccessPointType["Status"].isNull())
			accessPointSetObject.status = valueAccessPointSetAccessPointType["Status"].asString();
		if(!valueAccessPointSetAccessPointType["Type"].isNull())
			accessPointSetObject.type = valueAccessPointSetAccessPointType["Type"].asString();
		if(!valueAccessPointSetAccessPointType["HostOperator"].isNull())
			accessPointSetObject.hostOperator = valueAccessPointSetAccessPointType["HostOperator"].asString();
		if(!valueAccessPointSetAccessPointType["Description"].isNull())
			accessPointSetObject.description = valueAccessPointSetAccessPointType["Description"].asString();
		if(!valueAccessPointSetAccessPointType["AttachedRegionNo"].isNull())
			accessPointSetObject.attachedRegionNo = valueAccessPointSetAccessPointType["AttachedRegionNo"].asString();
		if(!valueAccessPointSetAccessPointType["Name"].isNull())
			accessPointSetObject.name = valueAccessPointSetAccessPointType["Name"].asString();
		if(!valueAccessPointSetAccessPointType["AccessPointId"].isNull())
			accessPointSetObject.accessPointId = valueAccessPointSetAccessPointType["AccessPointId"].asString();
		if(!valueAccessPointSetAccessPointType["Location"].isNull())
			accessPointSetObject.location = valueAccessPointSetAccessPointType["Location"].asString();
		auto allAccessPointFeatureModelsNode = valueAccessPointSetAccessPointType["AccessPointFeatureModels"]["AccessPointFeatureModel"];
		for (auto valueAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel : allAccessPointFeatureModelsNode)
		{
			AccessPointType::AccessPointFeatureModel accessPointFeatureModelsObject;
			if(!valueAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel["FeatureValue"].isNull())
				accessPointFeatureModelsObject.featureValue = valueAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel["FeatureValue"].asString();
			if(!valueAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel["FeatureKey"].isNull())
				accessPointFeatureModelsObject.featureKey = valueAccessPointSetAccessPointTypeAccessPointFeatureModelsAccessPointFeatureModel["FeatureKey"].asString();
			accessPointSetObject.accessPointFeatureModels.push_back(accessPointFeatureModelsObject);
		}
		accessPointSet_.push_back(accessPointSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeAccessPointsResult::AccessPointType> DescribeAccessPointsResult::getAccessPointSet()const
{
	return accessPointSet_;
}

int DescribeAccessPointsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccessPointsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccessPointsResult::getPageNumber()const
{
	return pageNumber_;
}

