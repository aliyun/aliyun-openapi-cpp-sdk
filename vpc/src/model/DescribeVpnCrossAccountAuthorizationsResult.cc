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

#include <alibabacloud/vpc/model/DescribeVpnCrossAccountAuthorizationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnCrossAccountAuthorizationsResult::DescribeVpnCrossAccountAuthorizationsResult() :
	ServiceResult()
{}

DescribeVpnCrossAccountAuthorizationsResult::DescribeVpnCrossAccountAuthorizationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnCrossAccountAuthorizationsResult::~DescribeVpnCrossAccountAuthorizationsResult()
{}

void DescribeVpnCrossAccountAuthorizationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCrossAccountAuthorizationsNode = value["CrossAccountAuthorizations"]["CrossAccountAuthorization"];
	for (auto valueCrossAccountAuthorizationsCrossAccountAuthorization : allCrossAccountAuthorizationsNode)
	{
		CrossAccountAuthorization crossAccountAuthorizationsObject;
		if(!valueCrossAccountAuthorizationsCrossAccountAuthorization["VpnConnectionId"].isNull())
			crossAccountAuthorizationsObject.vpnConnectionId = valueCrossAccountAuthorizationsCrossAccountAuthorization["VpnConnectionId"].asString();
		if(!valueCrossAccountAuthorizationsCrossAccountAuthorization["BindUid"].isNull())
			crossAccountAuthorizationsObject.bindUid = std::stol(valueCrossAccountAuthorizationsCrossAccountAuthorization["BindUid"].asString());
		if(!valueCrossAccountAuthorizationsCrossAccountAuthorization["BindProduct"].isNull())
			crossAccountAuthorizationsObject.bindProduct = valueCrossAccountAuthorizationsCrossAccountAuthorization["BindProduct"].asString();
		if(!valueCrossAccountAuthorizationsCrossAccountAuthorization["BindInstance"].isNull())
			crossAccountAuthorizationsObject.bindInstance = valueCrossAccountAuthorizationsCrossAccountAuthorization["BindInstance"].asString();
		if(!valueCrossAccountAuthorizationsCrossAccountAuthorization["AliUid"].isNull())
			crossAccountAuthorizationsObject.aliUid = std::stol(valueCrossAccountAuthorizationsCrossAccountAuthorization["AliUid"].asString());
		if(!valueCrossAccountAuthorizationsCrossAccountAuthorization["CreationTime"].isNull())
			crossAccountAuthorizationsObject.creationTime = std::stol(valueCrossAccountAuthorizationsCrossAccountAuthorization["CreationTime"].asString());
		crossAccountAuthorizations_.push_back(crossAccountAuthorizationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVpnCrossAccountAuthorizationsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVpnCrossAccountAuthorizationsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVpnCrossAccountAuthorizationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVpnCrossAccountAuthorizationsResult::CrossAccountAuthorization> DescribeVpnCrossAccountAuthorizationsResult::getCrossAccountAuthorizations()const
{
	return crossAccountAuthorizations_;
}

