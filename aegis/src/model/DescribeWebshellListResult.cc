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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allWebshells = value["Webshells"]["Data"];
	for (auto value : allWebshells)
	{
		Data webshellsObject;
		if(!value["FoundTime"].isNull())
			webshellsObject.foundTime = value["FoundTime"].asString();
		if(!value["TrojanType"].isNull())
			webshellsObject.trojanType = value["TrojanType"].asString();
		if(!value["TrojanSize"].isNull())
			webshellsObject.trojanSize = std::stoi(value["TrojanSize"].asString());
		if(!value["FirstFoundTime"].isNull())
			webshellsObject.firstFoundTime = value["FirstFoundTime"].asString();
		if(!value["Domain"].isNull())
			webshellsObject.domain = value["Domain"].asString();
		if(!value["DownloadUrl"].isNull())
			webshellsObject.downloadUrl = value["DownloadUrl"].asString();
		if(!value["TrojanPath"].isNull())
			webshellsObject.trojanPath = value["TrojanPath"].asString();
		if(!value["Uuid"].isNull())
			webshellsObject.uuid = value["Uuid"].asString();
		if(!value["MachineName"].isNull())
			webshellsObject.machineName = value["MachineName"].asString();
		if(!value["Status"].isNull())
			webshellsObject.status = std::stoi(value["Status"].asString());
		if(!value["MachineIp"].isNull())
			webshellsObject.machineIp = value["MachineIp"].asString();
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

