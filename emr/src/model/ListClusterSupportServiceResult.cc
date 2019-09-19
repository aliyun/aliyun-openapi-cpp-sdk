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

#include <alibabacloud/emr/model/ListClusterSupportServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListClusterSupportServiceResult::ListClusterSupportServiceResult() :
	ServiceResult()
{}

ListClusterSupportServiceResult::ListClusterSupportServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClusterSupportServiceResult::~ListClusterSupportServiceResult()
{}

void ListClusterSupportServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSupportServiceListNode = value["SupportServiceList"]["SupportService"];
	for (auto valueSupportServiceListSupportService : allSupportServiceListNode)
	{
		SupportService supportServiceListObject;
		if(!valueSupportServiceListSupportService["ServiceName"].isNull())
			supportServiceListObject.serviceName = valueSupportServiceListSupportService["ServiceName"].asString();
		if(!valueSupportServiceListSupportService["ServiceDisplayName"].isNull())
			supportServiceListObject.serviceDisplayName = valueSupportServiceListSupportService["ServiceDisplayName"].asString();
		if(!valueSupportServiceListSupportService["ServiceVersion"].isNull())
			supportServiceListObject.serviceVersion = valueSupportServiceListSupportService["ServiceVersion"].asString();
		if(!valueSupportServiceListSupportService["ServiceEcmVersion"].isNull())
			supportServiceListObject.serviceEcmVersion = valueSupportServiceListSupportService["ServiceEcmVersion"].asString();
		supportServiceList_.push_back(supportServiceListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::vector<ListClusterSupportServiceResult::SupportService> ListClusterSupportServiceResult::getSupportServiceList()const
{
	return supportServiceList_;
}

std::string ListClusterSupportServiceResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListClusterSupportServiceResult::getPageNumber()const
{
	return pageNumber_;
}

