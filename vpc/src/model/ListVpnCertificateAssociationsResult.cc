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

#include <alibabacloud/vpc/model/ListVpnCertificateAssociationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListVpnCertificateAssociationsResult::ListVpnCertificateAssociationsResult() :
	ServiceResult()
{}

ListVpnCertificateAssociationsResult::ListVpnCertificateAssociationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpnCertificateAssociationsResult::~ListVpnCertificateAssociationsResult()
{}

void ListVpnCertificateAssociationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpnCertificateRelationsNode = value["VpnCertificateRelations"]["VpnCertificateRelation"];
	for (auto valueVpnCertificateRelationsVpnCertificateRelation : allVpnCertificateRelationsNode)
	{
		VpnCertificateRelation vpnCertificateRelationsObject;
		if(!valueVpnCertificateRelationsVpnCertificateRelation["VpnGatewayId"].isNull())
			vpnCertificateRelationsObject.vpnGatewayId = valueVpnCertificateRelationsVpnCertificateRelation["VpnGatewayId"].asString();
		if(!valueVpnCertificateRelationsVpnCertificateRelation["CertificateType"].isNull())
			vpnCertificateRelationsObject.certificateType = valueVpnCertificateRelationsVpnCertificateRelation["CertificateType"].asString();
		if(!valueVpnCertificateRelationsVpnCertificateRelation["CertificateId"].isNull())
			vpnCertificateRelationsObject.certificateId = valueVpnCertificateRelationsVpnCertificateRelation["CertificateId"].asString();
		if(!valueVpnCertificateRelationsVpnCertificateRelation["AssociationTime"].isNull())
			vpnCertificateRelationsObject.associationTime = valueVpnCertificateRelationsVpnCertificateRelation["AssociationTime"].asString();
		if(!valueVpnCertificateRelationsVpnCertificateRelation["RegionId"].isNull())
			vpnCertificateRelationsObject.regionId = valueVpnCertificateRelationsVpnCertificateRelation["RegionId"].asString();
		vpnCertificateRelations_.push_back(vpnCertificateRelationsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListVpnCertificateAssociationsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListVpnCertificateAssociationsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListVpnCertificateAssociationsResult::VpnCertificateRelation> ListVpnCertificateAssociationsResult::getVpnCertificateRelations()const
{
	return vpnCertificateRelations_;
}

int ListVpnCertificateAssociationsResult::getMaxResults()const
{
	return maxResults_;
}

