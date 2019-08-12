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

#include <alibabacloud/cloudapi/model/DescribeDomainsResolutionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeDomainsResolutionResult::DescribeDomainsResolutionResult() :
	ServiceResult()
{}

DescribeDomainsResolutionResult::DescribeDomainsResolutionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainsResolutionResult::~DescribeDomainsResolutionResult()
{}

void DescribeDomainsResolutionResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomainResolutions = value["DomainResolutions"]["DomainResolution"];
	for (auto value : allDomainResolutions)
	{
		DomainResolution domainResolutionsObject;
		if(!value["DomainName"].isNull())
			domainResolutionsObject.domainName = value["DomainName"].asString();
		if(!value["DomainResolutionStatus"].isNull())
			domainResolutionsObject.domainResolutionStatus = value["DomainResolutionStatus"].asString();
		domainResolutions_.push_back(domainResolutionsObject);
	}
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();

}

std::vector<DescribeDomainsResolutionResult::DomainResolution> DescribeDomainsResolutionResult::getDomainResolutions()const
{
	return domainResolutions_;
}

std::string DescribeDomainsResolutionResult::getGroupId()const
{
	return groupId_;
}

