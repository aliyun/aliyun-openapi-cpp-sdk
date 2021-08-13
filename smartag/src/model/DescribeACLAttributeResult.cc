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

#include <alibabacloud/smartag/model/DescribeACLAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeACLAttributeResult::DescribeACLAttributeResult() :
	ServiceResult()
{}

DescribeACLAttributeResult::DescribeACLAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeACLAttributeResult::~DescribeACLAttributeResult()
{}

void DescribeACLAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAcrsNode = value["Acrs"]["Acr"];
	for (auto valueAcrsAcr : allAcrsNode)
	{
		Acr acrsObject;
		if(!valueAcrsAcr["Direction"].isNull())
			acrsObject.direction = valueAcrsAcr["Direction"].asString();
		if(!valueAcrsAcr["Type"].isNull())
			acrsObject.type = valueAcrsAcr["Type"].asString();
		if(!valueAcrsAcr["IpProtocol"].isNull())
			acrsObject.ipProtocol = valueAcrsAcr["IpProtocol"].asString();
		if(!valueAcrsAcr["Priority"].isNull())
			acrsObject.priority = std::stoi(valueAcrsAcr["Priority"].asString());
		if(!valueAcrsAcr["AclId"].isNull())
			acrsObject.aclId = valueAcrsAcr["AclId"].asString();
		if(!valueAcrsAcr["Policy"].isNull())
			acrsObject.policy = valueAcrsAcr["Policy"].asString();
		if(!valueAcrsAcr["Description"].isNull())
			acrsObject.description = valueAcrsAcr["Description"].asString();
		if(!valueAcrsAcr["GmtCreate"].isNull())
			acrsObject.gmtCreate = std::stol(valueAcrsAcr["GmtCreate"].asString());
		if(!valueAcrsAcr["DestCidr"].isNull())
			acrsObject.destCidr = valueAcrsAcr["DestCidr"].asString();
		if(!valueAcrsAcr["DestPortRange"].isNull())
			acrsObject.destPortRange = valueAcrsAcr["DestPortRange"].asString();
		if(!valueAcrsAcr["Name"].isNull())
			acrsObject.name = valueAcrsAcr["Name"].asString();
		if(!valueAcrsAcr["AcrId"].isNull())
			acrsObject.acrId = valueAcrsAcr["AcrId"].asString();
		if(!valueAcrsAcr["SourceCidr"].isNull())
			acrsObject.sourceCidr = valueAcrsAcr["SourceCidr"].asString();
		if(!valueAcrsAcr["SourcePortRange"].isNull())
			acrsObject.sourcePortRange = valueAcrsAcr["SourcePortRange"].asString();
		auto allDpiSignatureIds = value["DpiSignatureIds"]["DpiSignatureId"];
		for (auto value : allDpiSignatureIds)
			acrsObject.dpiSignatureIds.push_back(value.asString());
		auto allDpiGroupIds = value["DpiGroupIds"]["DpiGroupId"];
		for (auto value : allDpiGroupIds)
			acrsObject.dpiGroupIds.push_back(value.asString());
		acrs_.push_back(acrsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeACLAttributeResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeACLAttributeResult::getPageSize()const
{
	return pageSize_;
}

int DescribeACLAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeACLAttributeResult::Acr> DescribeACLAttributeResult::getAcrs()const
{
	return acrs_;
}

