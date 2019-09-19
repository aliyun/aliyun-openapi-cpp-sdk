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

#include <alibabacloud/aegis/model/DescribeWebshellListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWebshellListResult::DescribeWebshellListResult() :
	ServiceResult()
{}

DescribeWebshellListResult::DescribeWebshellListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebshellListResult::~DescribeWebshellListResult()
{}

void DescribeWebshellListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWebshellsNode = value["Webshells"]["Data"];
	for (auto valueWebshellsData : allWebshellsNode)
	{
		Data webshellsObject;
		if(!valueWebshellsData["FoundTime"].isNull())
			webshellsObject.foundTime = valueWebshellsData["FoundTime"].asString();
		if(!valueWebshellsData["TrojanType"].isNull())
			webshellsObject.trojanType = valueWebshellsData["TrojanType"].asString();
		if(!valueWebshellsData["TrojanSize"].isNull())
			webshellsObject.trojanSize = std::stoi(valueWebshellsData["TrojanSize"].asString());
		if(!valueWebshellsData["FirstFoundTime"].isNull())
			webshellsObject.firstFoundTime = valueWebshellsData["FirstFoundTime"].asString();
		if(!valueWebshellsData["Domain"].isNull())
			webshellsObject.domain = valueWebshellsData["Domain"].asString();
		if(!valueWebshellsData["DownloadUrl"].isNull())
			webshellsObject.downloadUrl = valueWebshellsData["DownloadUrl"].asString();
		if(!valueWebshellsData["TrojanPath"].isNull())
			webshellsObject.trojanPath = valueWebshellsData["TrojanPath"].asString();
		if(!valueWebshellsData["Uuid"].isNull())
			webshellsObject.uuid = valueWebshellsData["Uuid"].asString();
		if(!valueWebshellsData["MachineName"].isNull())
			webshellsObject.machineName = valueWebshellsData["MachineName"].asString();
		if(!valueWebshellsData["Status"].isNull())
			webshellsObject.status = std::stoi(valueWebshellsData["Status"].asString());
		if(!valueWebshellsData["MachineIp"].isNull())
			webshellsObject.machineIp = valueWebshellsData["MachineIp"].asString();
		webshells_.push_back(webshellsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Page"].isNull())
		page_ = std::stoi(value["Page"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebshellListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebshellListResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeWebshellListResult::Data> DescribeWebshellListResult::getWebshells()const
{
	return webshells_;
}

int DescribeWebshellListResult::getPage()const
{
	return page_;
}

bool DescribeWebshellListResult::getSuccess()const
{
	return success_;
}

