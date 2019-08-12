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

#include <alibabacloud/emr/model/ListETLJobReleaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListETLJobReleaseResult::ListETLJobReleaseResult() :
	ServiceResult()
{}

ListETLJobReleaseResult::ListETLJobReleaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListETLJobReleaseResult::~ListETLJobReleaseResult()
{}

void ListETLJobReleaseResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allReleaseList = value["ReleaseList"]["Release"];
	for (auto value : allReleaseList)
	{
		Release releaseListObject;
		if(!value["EtlJobId"].isNull())
			releaseListObject.etlJobId = value["EtlJobId"].asString();
		if(!value["Id"].isNull())
			releaseListObject.id = value["Id"].asString();
		if(!value["ReleaseVersion"].isNull())
			releaseListObject.releaseVersion = std::stoi(value["ReleaseVersion"].asString());
		if(!value["Status"].isNull())
			releaseListObject.status = value["Status"].asString();
		if(!value["GmtCreate"].isNull())
			releaseListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			releaseListObject.gmtModified = std::stol(value["GmtModified"].asString());
		releaseList_.push_back(releaseListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListETLJobReleaseResult::getPageSize()const
{
	return pageSize_;
}

int ListETLJobReleaseResult::getPageNumber()const
{
	return pageNumber_;
}

int ListETLJobReleaseResult::getTotal()const
{
	return total_;
}

std::vector<ListETLJobReleaseResult::Release> ListETLJobReleaseResult::getReleaseList()const
{
	return releaseList_;
}

