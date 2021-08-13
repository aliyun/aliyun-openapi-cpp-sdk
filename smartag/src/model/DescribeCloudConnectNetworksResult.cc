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

#include <alibabacloud/smartag/model/DescribeCloudConnectNetworksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeCloudConnectNetworksResult::DescribeCloudConnectNetworksResult() :
	ServiceResult()
{}

DescribeCloudConnectNetworksResult::DescribeCloudConnectNetworksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudConnectNetworksResult::~DescribeCloudConnectNetworksResult()
{}

void DescribeCloudConnectNetworksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCloudConnectNetworksNode = value["CloudConnectNetworks"]["CloudConnectNetwork"];
	for (auto valueCloudConnectNetworksCloudConnectNetwork : allCloudConnectNetworksNode)
	{
		CloudConnectNetwork cloudConnectNetworksObject;
		if(!valueCloudConnectNetworksCloudConnectNetwork["IsDefault"].isNull())
			cloudConnectNetworksObject.isDefault = valueCloudConnectNetworksCloudConnectNetwork["IsDefault"].asString() == "true";
		if(!valueCloudConnectNetworksCloudConnectNetwork["CreateTime"].isNull())
			cloudConnectNetworksObject.createTime = std::stol(valueCloudConnectNetworksCloudConnectNetwork["CreateTime"].asString());
		if(!valueCloudConnectNetworksCloudConnectNetwork["AssociatedCenOwnerId"].isNull())
			cloudConnectNetworksObject.associatedCenOwnerId = valueCloudConnectNetworksCloudConnectNetwork["AssociatedCenOwnerId"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["AssociatedCloudBoxCount"].isNull())
			cloudConnectNetworksObject.associatedCloudBoxCount = valueCloudConnectNetworksCloudConnectNetwork["AssociatedCloudBoxCount"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["InterworkingStatus"].isNull())
			cloudConnectNetworksObject.interworkingStatus = valueCloudConnectNetworksCloudConnectNetwork["InterworkingStatus"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["CcnId"].isNull())
			cloudConnectNetworksObject.ccnId = valueCloudConnectNetworksCloudConnectNetwork["CcnId"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["AvailableCloudBoxCount"].isNull())
			cloudConnectNetworksObject.availableCloudBoxCount = valueCloudConnectNetworksCloudConnectNetwork["AvailableCloudBoxCount"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["CidrBlock"].isNull())
			cloudConnectNetworksObject.cidrBlock = valueCloudConnectNetworksCloudConnectNetwork["CidrBlock"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["Description"].isNull())
			cloudConnectNetworksObject.description = valueCloudConnectNetworksCloudConnectNetwork["Description"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["SnatCidrBlock"].isNull())
			cloudConnectNetworksObject.snatCidrBlock = valueCloudConnectNetworksCloudConnectNetwork["SnatCidrBlock"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["AssociatedCenId"].isNull())
			cloudConnectNetworksObject.associatedCenId = valueCloudConnectNetworksCloudConnectNetwork["AssociatedCenId"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["Name"].isNull())
			cloudConnectNetworksObject.name = valueCloudConnectNetworksCloudConnectNetwork["Name"].asString();
		if(!valueCloudConnectNetworksCloudConnectNetwork["ResourceGroupId"].isNull())
			cloudConnectNetworksObject.resourceGroupId = valueCloudConnectNetworksCloudConnectNetwork["ResourceGroupId"].asString();
		auto allTagsNode = valueCloudConnectNetworksCloudConnectNetwork["Tags"]["Tag"];
		for (auto valueCloudConnectNetworksCloudConnectNetworkTagsTag : allTagsNode)
		{
			CloudConnectNetwork::Tag tagsObject;
			if(!valueCloudConnectNetworksCloudConnectNetworkTagsTag["Key"].isNull())
				tagsObject.key = valueCloudConnectNetworksCloudConnectNetworkTagsTag["Key"].asString();
			if(!valueCloudConnectNetworksCloudConnectNetworkTagsTag["Value"].isNull())
				tagsObject.value = valueCloudConnectNetworksCloudConnectNetworkTagsTag["Value"].asString();
			cloudConnectNetworksObject.tags.push_back(tagsObject);
		}
		cloudConnectNetworks_.push_back(cloudConnectNetworksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeCloudConnectNetworksResult::CloudConnectNetwork> DescribeCloudConnectNetworksResult::getCloudConnectNetworks()const
{
	return cloudConnectNetworks_;
}

int DescribeCloudConnectNetworksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeCloudConnectNetworksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeCloudConnectNetworksResult::getPageNumber()const
{
	return pageNumber_;
}

