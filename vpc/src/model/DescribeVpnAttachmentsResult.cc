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

#include <alibabacloud/vpc/model/DescribeVpnAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpnAttachmentsResult::DescribeVpnAttachmentsResult() :
	ServiceResult()
{}

DescribeVpnAttachmentsResult::DescribeVpnAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpnAttachmentsResult::~DescribeVpnAttachmentsResult()
{}

void DescribeVpnAttachmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpnAttachmentsNode = value["VpnAttachments"]["vpnAttachment"];
	for (auto valueVpnAttachmentsvpnAttachment : allVpnAttachmentsNode)
	{
		VpnAttachment vpnAttachmentsObject;
		if(!valueVpnAttachmentsvpnAttachment["InstanceId"].isNull())
			vpnAttachmentsObject.instanceId = valueVpnAttachmentsvpnAttachment["InstanceId"].asString();
		if(!valueVpnAttachmentsvpnAttachment["Name"].isNull())
			vpnAttachmentsObject.name = valueVpnAttachmentsvpnAttachment["Name"].asString();
		if(!valueVpnAttachmentsvpnAttachment["Description"].isNull())
			vpnAttachmentsObject.description = valueVpnAttachmentsvpnAttachment["Description"].asString();
		if(!valueVpnAttachmentsvpnAttachment["AttachType"].isNull())
			vpnAttachmentsObject.attachType = valueVpnAttachmentsvpnAttachment["AttachType"].asString();
		if(!valueVpnAttachmentsvpnAttachment["TransitRouterId"].isNull())
			vpnAttachmentsObject.transitRouterId = valueVpnAttachmentsvpnAttachment["TransitRouterId"].asString();
		if(!valueVpnAttachmentsvpnAttachment["TransitRouterName"].isNull())
			vpnAttachmentsObject.transitRouterName = valueVpnAttachmentsvpnAttachment["TransitRouterName"].asString();
		if(!valueVpnAttachmentsvpnAttachment["CrossAccountAuthorized"].isNull())
			vpnAttachmentsObject.crossAccountAuthorized = valueVpnAttachmentsvpnAttachment["CrossAccountAuthorized"].asString() == "true";
		if(!valueVpnAttachmentsvpnAttachment["Tag"].isNull())
			vpnAttachmentsObject.tag = valueVpnAttachmentsvpnAttachment["Tag"].asString();
		auto allTagsNode = valueVpnAttachmentsvpnAttachment["Tags"]["Tag"];
		for (auto valueVpnAttachmentsvpnAttachmentTagsTag : allTagsNode)
		{
			VpnAttachment::Tag tagsObject;
			if(!valueVpnAttachmentsvpnAttachmentTagsTag["Key"].isNull())
				tagsObject.key = valueVpnAttachmentsvpnAttachmentTagsTag["Key"].asString();
			if(!valueVpnAttachmentsvpnAttachmentTagsTag["Value"].isNull())
				tagsObject.value = valueVpnAttachmentsvpnAttachmentTagsTag["Value"].asString();
			vpnAttachmentsObject.tags.push_back(tagsObject);
		}
		vpnAttachments_.push_back(vpnAttachmentsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVpnAttachmentsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVpnAttachmentsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVpnAttachmentsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVpnAttachmentsResult::VpnAttachment> DescribeVpnAttachmentsResult::getVpnAttachments()const
{
	return vpnAttachments_;
}

