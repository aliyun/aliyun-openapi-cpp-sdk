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
	auto allCloudConnectNetworks = value["CloudConnectNetworks"]["CloudConnectNetwork"];
	for (auto value : allCloudConnectNetworks)
	{
		CloudConnectNetwork cloudConnectNetworksObject;
		if(!value["CcnId"].isNull())
			cloudConnectNetworksObject.ccnId = value["CcnId"].asString();
		if(!value["Name"].isNull())
			cloudConnectNetworksObject.name = value["Name"].asString();
		if(!value["AssociatedCloudBoxCount"].isNull())
			cloudConnectNetworksObject.associatedCloudBoxCount = value["AssociatedCloudBoxCount"].asString();
		if(!value["AvailableCloudBoxCount"].isNull())
			cloudConnectNetworksObject.availableCloudBoxCount = value["AvailableCloudBoxCount"].asString();
		if(!value["AssociatedCenId"].isNull())
			cloudConnectNetworksObject.associatedCenId = value["AssociatedCenId"].asString();
		if(!value["AssociatedCenOwnerId"].isNull())
			cloudConnectNetworksObject.associatedCenOwnerId = value["AssociatedCenOwnerId"].asString();
		if(!value["Description"].isNull())
			cloudConnectNetworksObject.description = value["Description"].asString();
		if(!value["CreateTime"].isNull())
			cloudConnectNetworksObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["IsDefault"].isNull())
			cloudConnectNetworksObject.isDefault = value["IsDefault"].asString() == "true";
		if(!value["CidrBlock"].isNull())
			cloudConnectNetworksObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["SnatCidrBlock"].isNull())
			cloudConnectNetworksObject.snatCidrBlock = value["SnatCidrBlock"].asString();
		if(!value["InterworkingStatus"].isNull())
			cloudConnectNetworksObject.interworkingStatus = value["InterworkingStatus"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			CloudConnectNetwork::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			cloudConnectNetworksObject.tags.push_back(tagsObject);
		}
		cloudConnectNetworks_.push_back(cloudConnectNetworksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

