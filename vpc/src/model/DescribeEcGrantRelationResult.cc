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

#include <alibabacloud/vpc/model/DescribeEcGrantRelationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeEcGrantRelationResult::DescribeEcGrantRelationResult() :
	ServiceResult()
{}

DescribeEcGrantRelationResult::DescribeEcGrantRelationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEcGrantRelationResult::~DescribeEcGrantRelationResult()
{}

void DescribeEcGrantRelationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEcGrantRelationsNode = value["EcGrantRelations"]["EcGrantRelationModel"];
	for (auto valueEcGrantRelationsEcGrantRelationModel : allEcGrantRelationsNode)
	{
		EcGrantRelationModel ecGrantRelationsObject;
		if(!valueEcGrantRelationsEcGrantRelationModel["VbrOwnerUid"].isNull())
			ecGrantRelationsObject.vbrOwnerUid = std::stol(valueEcGrantRelationsEcGrantRelationModel["VbrOwnerUid"].asString());
		if(!valueEcGrantRelationsEcGrantRelationModel["VbrInstanceId"].isNull())
			ecGrantRelationsObject.vbrInstanceId = valueEcGrantRelationsEcGrantRelationModel["VbrInstanceId"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["InstanceId"].isNull())
			ecGrantRelationsObject.instanceId = valueEcGrantRelationsEcGrantRelationModel["InstanceId"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["AliUid"].isNull())
			ecGrantRelationsObject.aliUid = std::stol(valueEcGrantRelationsEcGrantRelationModel["AliUid"].asString());
		if(!valueEcGrantRelationsEcGrantRelationModel["RegionNo"].isNull())
			ecGrantRelationsObject.regionNo = valueEcGrantRelationsEcGrantRelationModel["RegionNo"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["Status"].isNull())
			ecGrantRelationsObject.status = valueEcGrantRelationsEcGrantRelationModel["Status"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["InstanceName"].isNull())
			ecGrantRelationsObject.instanceName = valueEcGrantRelationsEcGrantRelationModel["InstanceName"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["InstanceRouterId"].isNull())
			ecGrantRelationsObject.instanceRouterId = valueEcGrantRelationsEcGrantRelationModel["InstanceRouterId"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["VbrRegionNo"].isNull())
			ecGrantRelationsObject.vbrRegionNo = valueEcGrantRelationsEcGrantRelationModel["VbrRegionNo"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["GmtCreate"].isNull())
			ecGrantRelationsObject.gmtCreate = valueEcGrantRelationsEcGrantRelationModel["GmtCreate"].asString();
		if(!valueEcGrantRelationsEcGrantRelationModel["GrantType"].isNull())
			ecGrantRelationsObject.grantType = valueEcGrantRelationsEcGrantRelationModel["GrantType"].asString();
		ecGrantRelations_.push_back(ecGrantRelationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeEcGrantRelationResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEcGrantRelationResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeEcGrantRelationResult::EcGrantRelationModel> DescribeEcGrantRelationResult::getEcGrantRelations()const
{
	return ecGrantRelations_;
}

int DescribeEcGrantRelationResult::getPage()const
{
	return page_;
}

int DescribeEcGrantRelationResult::getCount()const
{
	return count_;
}

