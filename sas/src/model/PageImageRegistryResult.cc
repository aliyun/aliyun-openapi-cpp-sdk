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

#include <alibabacloud/sas/model/PageImageRegistryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

PageImageRegistryResult::PageImageRegistryResult() :
	ServiceResult()
{}

PageImageRegistryResult::PageImageRegistryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageImageRegistryResult::~PageImageRegistryResult()
{}

void PageImageRegistryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["Id"].isNull())
			listObject.id = std::stol(valueListListItem["Id"].asString());
		if(!valueListListItem["GmtCreate"].isNull())
			listObject.gmtCreate = valueListListItem["GmtCreate"].asString();
		if(!valueListListItem["GmtModified"].isNull())
			listObject.gmtModified = valueListListItem["GmtModified"].asString();
		if(!valueListListItem["AliUid"].isNull())
			listObject.aliUid = std::stol(valueListListItem["AliUid"].asString());
		if(!valueListListItem["RegistryName"].isNull())
			listObject.registryName = valueListListItem["RegistryName"].asString();
		if(!valueListListItem["RegistryType"].isNull())
			listObject.registryType = valueListListItem["RegistryType"].asString();
		if(!valueListListItem["ProtocolType"].isNull())
			listObject.protocolType = std::stoi(valueListListItem["ProtocolType"].asString());
		if(!valueListListItem["NetType"].isNull())
			listObject.netType = std::stoi(valueListListItem["NetType"].asString());
		if(!valueListListItem["VpcId"].isNull())
			listObject.vpcId = valueListListItem["VpcId"].asString();
		if(!valueListListItem["RegistryHostIp"].isNull())
			listObject.registryHostIp = valueListListItem["RegistryHostIp"].asString();
		if(!valueListListItem["DomainName"].isNull())
			listObject.domainName = valueListListItem["DomainName"].asString();
		if(!valueListListItem["UserName"].isNull())
			listObject.userName = valueListListItem["UserName"].asString();
		if(!valueListListItem["Password"].isNull())
			listObject.password = valueListListItem["Password"].asString();
		if(!valueListListItem["RegionId"].isNull())
			listObject.regionId = valueListListItem["RegionId"].asString();
		if(!valueListListItem["Token"].isNull())
			listObject.token = valueListListItem["Token"].asString();
		if(!valueListListItem["WhiteList"].isNull())
			listObject.whiteList = valueListListItem["WhiteList"].asString();
		if(!valueListListItem["BlackList"].isNull())
			listObject.blackList = valueListListItem["BlackList"].asString();
		if(!valueListListItem["TransPerHour"].isNull())
			listObject.transPerHour = std::stoi(valueListListItem["TransPerHour"].asString());
		if(!valueListListItem["PersistenceDay"].isNull())
			listObject.persistenceDay = std::stoi(valueListListItem["PersistenceDay"].asString());
		if(!valueListListItem["ImageCount"].isNull())
			listObject.imageCount = std::stoi(valueListListItem["ImageCount"].asString());
		if(!valueListListItem["JenkinsEnv"].isNull())
			listObject.jenkinsEnv = valueListListItem["JenkinsEnv"].asString();
		list_.push_back(listObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

PageImageRegistryResult::PageInfo PageImageRegistryResult::getPageInfo()const
{
	return pageInfo_;
}

std::string PageImageRegistryResult::getMessage()const
{
	return message_;
}

std::vector<PageImageRegistryResult::ListItem> PageImageRegistryResult::getList()const
{
	return list_;
}

std::string PageImageRegistryResult::getCode()const
{
	return code_;
}

bool PageImageRegistryResult::getSuccess()const
{
	return success_;
}

