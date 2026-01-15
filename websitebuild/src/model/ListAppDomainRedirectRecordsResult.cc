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

#include <alibabacloud/websitebuild/model/ListAppDomainRedirectRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::WebsiteBuild;
using namespace AlibabaCloud::WebsiteBuild::Model;

ListAppDomainRedirectRecordsResult::ListAppDomainRedirectRecordsResult() :
	ServiceResult()
{}

ListAppDomainRedirectRecordsResult::ListAppDomainRedirectRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppDomainRedirectRecordsResult::~ListAppDomainRedirectRecordsResult()
{}

void ListAppDomainRedirectRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moduleNode = value["Module"];
	if(!moduleNode["TotalItemNum"].isNull())
		module_.totalItemNum = std::stoi(moduleNode["TotalItemNum"].asString());
	if(!moduleNode["CurrentPageNum"].isNull())
		module_.currentPageNum = std::stoi(moduleNode["CurrentPageNum"].asString());
	if(!moduleNode["PageSize"].isNull())
		module_.pageSize = std::stoi(moduleNode["PageSize"].asString());
	if(!moduleNode["TotalPageNum"].isNull())
		module_.totalPageNum = std::stoi(moduleNode["TotalPageNum"].asString());
	if(!moduleNode["PrePage"].isNull())
		module_.prePage = moduleNode["PrePage"].asString() == "true";
	if(!moduleNode["NextPage"].isNull())
		module_.nextPage = moduleNode["NextPage"].asString() == "true";
	if(!moduleNode["ResultLimit"].isNull())
		module_.resultLimit = moduleNode["ResultLimit"].asString() == "true";
	auto allDataNode = moduleNode["Data"]["DataItem"];
	for (auto moduleNodeDataDataItem : allDataNode)
	{
		Module::DataItem dataItemObject;
		if(!moduleNodeDataDataItem["RecordId"].isNull())
			dataItemObject.recordId = moduleNodeDataDataItem["RecordId"].asString();
		if(!moduleNodeDataDataItem["SourceDomain"].isNull())
			dataItemObject.sourceDomain = moduleNodeDataDataItem["SourceDomain"].asString();
		if(!moduleNodeDataDataItem["TargetDomain"].isNull())
			dataItemObject.targetDomain = moduleNodeDataDataItem["TargetDomain"].asString();
		module_.data.push_back(dataItemObject);
	}
	auto nextNode = moduleNode["Next"];
	if(!nextNode["RecordId"].isNull())
		module_.next.recordId = nextNode["RecordId"].asString();
	if(!nextNode["SourceDomain"].isNull())
		module_.next.sourceDomain = nextNode["SourceDomain"].asString();
	if(!nextNode["TargetDomain"].isNull())
		module_.next.targetDomain = nextNode["TargetDomain"].asString();
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
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListAppDomainRedirectRecordsResult::getRootErrorMsg()const
{
	return rootErrorMsg_;
}

std::string ListAppDomainRedirectRecordsResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

bool ListAppDomainRedirectRecordsResult::getAllowRetry()const
{
	return allowRetry_;
}

std::string ListAppDomainRedirectRecordsResult::getNextToken()const
{
	return nextToken_;
}

bool ListAppDomainRedirectRecordsResult::getSynchro()const
{
	return synchro_;
}

int ListAppDomainRedirectRecordsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<std::string> ListAppDomainRedirectRecordsResult::getErrorArgs()const
{
	return errorArgs_;
}

std::string ListAppDomainRedirectRecordsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListAppDomainRedirectRecordsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

ListAppDomainRedirectRecordsResult::Module ListAppDomainRedirectRecordsResult::getModule()const
{
	return module_;
}

std::string ListAppDomainRedirectRecordsResult::getRootErrorCode()const
{
	return rootErrorCode_;
}

std::string ListAppDomainRedirectRecordsResult::getAppName()const
{
	return appName_;
}

