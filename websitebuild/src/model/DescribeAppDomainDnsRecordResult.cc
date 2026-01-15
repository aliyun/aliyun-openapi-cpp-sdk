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

#include <alibabacloud/websitebuild/model/DescribeAppDomainDnsRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

DescribeAppDomainDnsRecordResult::DescribeAppDomainDnsRecordResult() :
	ServiceResult()
{}

DescribeAppDomainDnsRecordResult::DescribeAppDomainDnsRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppDomainDnsRecordResult::~DescribeAppDomainDnsRecordResult()
{}

void DescribeAppDomainDnsRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["RecordType"].isNull())
		module_.recordType = moduleNode["RecordType"].asString();
	if(!moduleNode["Host"].isNull())
		module_.host = moduleNode["Host"].asString();
	if(!moduleNode["Value"].isNull())
		module_.value = moduleNode["Value"].asString();
	auto allErrorArgs = value["ErrorArgs"]["ErrorArg"];
	for (const auto &item : allErrorArgs)
		errorArgs_.push_back(item.asString());
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Synchro"].isNull())
		synchro_ = value["Synchro"].asString() == "true";
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();
	if(!value["RootErrorMsg"].isNull())
		rootErrorMsg_ = value["RootErrorMsg"].asString();
	if(!value["RootErrorCode"].isNull())
		rootErrorCode_ = value["RootErrorCode"].asString();
	if(!value["AllowRetry"].isNull())
		allowRetry_ = value["AllowRetry"].asString() == "true";
	if(!value["AppName"].isNull())
		appName_ = value["AppName"].asString();

}

std::string DescribeAppDomainDnsRecordResult::getRootErrorMsg()const
{
	return rootErrorMsg_;
}

std::string DescribeAppDomainDnsRecordResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

bool DescribeAppDomainDnsRecordResult::getAllowRetry()const
{
	return allowRetry_;
}

bool DescribeAppDomainDnsRecordResult::getSynchro()const
{
	return synchro_;
}

std::vector<std::string> DescribeAppDomainDnsRecordResult::getErrorArgs()const
{
	return errorArgs_;
}

std::string DescribeAppDomainDnsRecordResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeAppDomainDnsRecordResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

DescribeAppDomainDnsRecordResult::Module DescribeAppDomainDnsRecordResult::getModule()const
{
	return module_;
}

std::string DescribeAppDomainDnsRecordResult::getRootErrorCode()const
{
	return rootErrorCode_;
}

std::string DescribeAppDomainDnsRecordResult::getAppName()const
{
	return appName_;
}

