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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAcrs = value["Acrs"]["Acr"];
	for (auto value : allAcrs)
	{
		Acr acrsObject;
		if(!value["AcrId"].isNull())
			acrsObject.acrId = value["AcrId"].asString();
		if(!value["Description"].isNull())
			acrsObject.description = value["Description"].asString();
		if(!value["Direction"].isNull())
			acrsObject.direction = value["Direction"].asString();
		if(!value["SourceCidr"].isNull())
			acrsObject.sourceCidr = value["SourceCidr"].asString();
		if(!value["DestCidr"].isNull())
			acrsObject.destCidr = value["DestCidr"].asString();
		if(!value["IpProtocol"].isNull())
			acrsObject.ipProtocol = value["IpProtocol"].asString();
		if(!value["SourcePortRange"].isNull())
			acrsObject.sourcePortRange = value["SourcePortRange"].asString();
		if(!value["DestPortRange"].isNull())
			acrsObject.destPortRange = value["DestPortRange"].asString();
		if(!value["Policy"].isNull())
			acrsObject.policy = value["Policy"].asString();
		if(!value["Priority"].isNull())
			acrsObject.priority = std::stoi(value["Priority"].asString());
		if(!value["GmtCreate"].isNull())
			acrsObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["AclId"].isNull())
			acrsObject.aclId = value["AclId"].asString();
		if(!value["Type"].isNull())
			acrsObject.type = value["Type"].asString();
		acrs_.push_back(acrsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

