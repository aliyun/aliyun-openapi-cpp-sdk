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

#include <alibabacloud/emr/model/ListHostPoolResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListHostPoolResult::ListHostPoolResult() :
	ServiceResult()
{}

ListHostPoolResult::ListHostPoolResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHostPoolResult::~ListHostPoolResult()
{}

void ListHostPoolResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allHostPoolList = value["HostPoolList"]["HostPool"];
	for (auto value : allHostPoolList)
	{
		HostPool hostPoolListObject;
		if(!value["Name"].isNull())
			hostPoolListObject.name = value["Name"].asString();
		if(!value["BizId"].isNull())
			hostPoolListObject.bizId = value["BizId"].asString();
		if(!value["Status"].isNull())
			hostPoolListObject.status = value["Status"].asString();
		if(!value["Type"].isNull())
			hostPoolListObject.type = value["Type"].asString();
		if(!value["Description"].isNull())
			hostPoolListObject.description = value["Description"].asString();
		if(!value["HostCount"].isNull())
			hostPoolListObject.hostCount = std::stoi(value["HostCount"].asString());
		if(!value["GmtCreate"].isNull())
			hostPoolListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		hostPoolList_.push_back(hostPoolListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListHostPoolResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListHostPoolResult::HostPool> ListHostPoolResult::getHostPoolList()const
{
	return hostPoolList_;
}

int ListHostPoolResult::getPageSize()const
{
	return pageSize_;
}

int ListHostPoolResult::getPageNumber()const
{
	return pageNumber_;
}

