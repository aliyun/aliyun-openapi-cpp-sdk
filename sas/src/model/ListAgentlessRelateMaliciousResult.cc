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

#include <alibabacloud/sas/model/ListAgentlessRelateMaliciousResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListAgentlessRelateMaliciousResult::ListAgentlessRelateMaliciousResult() :
	ServiceResult()
{}

ListAgentlessRelateMaliciousResult::ListAgentlessRelateMaliciousResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentlessRelateMaliciousResult::~ListAgentlessRelateMaliciousResult()
{}

void ListAgentlessRelateMaliciousResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["InstanceName"].isNull())
			listObject.instanceName = valueListListItem["InstanceName"].asString();
		if(!valueListListItem["InternetIp"].isNull())
			listObject.internetIp = valueListListItem["InternetIp"].asString();
		if(!valueListListItem["IntranetIp"].isNull())
			listObject.intranetIp = valueListListItem["IntranetIp"].asString();
		if(!valueListListItem["Uuid"].isNull())
			listObject.uuid = valueListListItem["Uuid"].asString();
		if(!valueListListItem["FirstScanTimestamp"].isNull())
			listObject.firstScanTimestamp = std::stol(valueListListItem["FirstScanTimestamp"].asString());
		if(!valueListListItem["LatestScanTimestamp"].isNull())
			listObject.latestScanTimestamp = std::stol(valueListListItem["LatestScanTimestamp"].asString());
		if(!valueListListItem["FilePath"].isNull())
			listObject.filePath = valueListListItem["FilePath"].asString();
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

}

ListAgentlessRelateMaliciousResult::PageInfo ListAgentlessRelateMaliciousResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<ListAgentlessRelateMaliciousResult::ListItem> ListAgentlessRelateMaliciousResult::getList()const
{
	return list_;
}

