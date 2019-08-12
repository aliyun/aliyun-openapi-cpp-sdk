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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorAclListsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIPv6TranslatorAclListsResult::DescribeIPv6TranslatorAclListsResult() :
	ServiceResult()
{}

DescribeIPv6TranslatorAclListsResult::DescribeIPv6TranslatorAclListsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIPv6TranslatorAclListsResult::~DescribeIPv6TranslatorAclListsResult()
{}

void DescribeIPv6TranslatorAclListsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allIpv6TranslatorAcls = value["Ipv6TranslatorAcls"]["IPv6TranslatorAcl"];
	for (auto value : allIpv6TranslatorAcls)
	{
		IPv6TranslatorAcl ipv6TranslatorAclsObject;
		if(!value["AclId"].isNull())
			ipv6TranslatorAclsObject.aclId = value["AclId"].asString();
		if(!value["AclName"].isNull())
			ipv6TranslatorAclsObject.aclName = value["AclName"].asString();
		ipv6TranslatorAcls_.push_back(ipv6TranslatorAclsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeIPv6TranslatorAclListsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIPv6TranslatorAclListsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIPv6TranslatorAclListsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeIPv6TranslatorAclListsResult::IPv6TranslatorAcl> DescribeIPv6TranslatorAclListsResult::getIpv6TranslatorAcls()const
{
	return ipv6TranslatorAcls_;
}

