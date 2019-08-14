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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorAclListAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeIPv6TranslatorAclListAttributesResult::DescribeIPv6TranslatorAclListAttributesResult() :
	ServiceResult()
{}

DescribeIPv6TranslatorAclListAttributesResult::DescribeIPv6TranslatorAclListAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIPv6TranslatorAclListAttributesResult::~DescribeIPv6TranslatorAclListAttributesResult()
{}

void DescribeIPv6TranslatorAclListAttributesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAclEntries = value["AclEntries"]["AclEntry"];
	for (auto value : allAclEntries)
	{
		AclEntry aclEntriesObject;
		if(!value["AclEntryId"].isNull())
			aclEntriesObject.aclEntryId = value["AclEntryId"].asString();
		if(!value["AclEntryIp"].isNull())
			aclEntriesObject.aclEntryIp = value["AclEntryIp"].asString();
		if(!value["AclEntryComment"].isNull())
			aclEntriesObject.aclEntryComment = value["AclEntryComment"].asString();
		aclEntries_.push_back(aclEntriesObject);
	}
	if(!value["AclId"].isNull())
		aclId_ = value["AclId"].asString();
	if(!value["AclName"].isNull())
		aclName_ = value["AclName"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeIPv6TranslatorAclListAttributesResult::AclEntry> DescribeIPv6TranslatorAclListAttributesResult::getAclEntries()const
{
	return aclEntries_;
}

int DescribeIPv6TranslatorAclListAttributesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeIPv6TranslatorAclListAttributesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIPv6TranslatorAclListAttributesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeIPv6TranslatorAclListAttributesResult::getAclId()const
{
	return aclId_;
}

std::string DescribeIPv6TranslatorAclListAttributesResult::getAclName()const
{
	return aclName_;
}

