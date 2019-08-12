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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSupportServiceList = value["SupportServiceList"]["SupportService"];
	for (auto value : allSupportServiceList)
	{
		SupportService supportServiceListObject;
		if(!value["ServiceName"].isNull())
			supportServiceListObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceDisplayName"].isNull())
			supportServiceListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
		if(!value["ServiceVersion"].isNull())
			supportServiceListObject.serviceVersion = value["ServiceVersion"].asString();
		if(!value["ServiceEcmVersion"].isNull())
			supportServiceListObject.serviceEcmVersion = value["ServiceEcmVersion"].asString();
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

