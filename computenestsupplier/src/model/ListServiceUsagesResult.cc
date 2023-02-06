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

#include <alibabacloud/computenestsupplier/model/ListServiceUsagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ComputeNestSupplier;
using namespace AlibabaCloud::ComputeNestSupplier::Model;

ListServiceUsagesResult::ListServiceUsagesResult() :
	ServiceResult()
{}

ListServiceUsagesResult::ListServiceUsagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceUsagesResult::~ListServiceUsagesResult()
{}

void ListServiceUsagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allServiceUsagesNode = value["ServiceUsages"]["Policy"];
	for (auto valueServiceUsagesPolicy : allServiceUsagesNode)
	{
		Policy serviceUsagesObject;
		if(!valueServiceUsagesPolicy["UserAliUid"].isNull())
			serviceUsagesObject.userAliUid = std::stol(valueServiceUsagesPolicy["UserAliUid"].asString());
		if(!valueServiceUsagesPolicy["ServiceId"].isNull())
			serviceUsagesObject.serviceId = valueServiceUsagesPolicy["ServiceId"].asString();
		if(!valueServiceUsagesPolicy["ServiceName"].isNull())
			serviceUsagesObject.serviceName = valueServiceUsagesPolicy["ServiceName"].asString();
		if(!valueServiceUsagesPolicy["SupplierName"].isNull())
			serviceUsagesObject.supplierName = valueServiceUsagesPolicy["SupplierName"].asString();
		if(!valueServiceUsagesPolicy["Status"].isNull())
			serviceUsagesObject.status = valueServiceUsagesPolicy["Status"].asString();
		if(!valueServiceUsagesPolicy["Comments"].isNull())
			serviceUsagesObject.comments = valueServiceUsagesPolicy["Comments"].asString();
		if(!valueServiceUsagesPolicy["CreateTime"].isNull())
			serviceUsagesObject.createTime = valueServiceUsagesPolicy["CreateTime"].asString();
		if(!valueServiceUsagesPolicy["UpdateTime"].isNull())
			serviceUsagesObject.updateTime = valueServiceUsagesPolicy["UpdateTime"].asString();
		auto userInformationNode = value["UserInformation"];
		if(!userInformationNode["Name"].isNull())
			serviceUsagesObject.userInformation.name = userInformationNode["Name"].asString();
		if(!userInformationNode["EmailAddress"].isNull())
			serviceUsagesObject.userInformation.emailAddress = userInformationNode["EmailAddress"].asString();
		if(!userInformationNode["Company"].isNull())
			serviceUsagesObject.userInformation.company = userInformationNode["Company"].asString();
		if(!userInformationNode["Country"].isNull())
			serviceUsagesObject.userInformation.country = userInformationNode["Country"].asString();
		if(!userInformationNode["Telephone"].isNull())
			serviceUsagesObject.userInformation.telephone = userInformationNode["Telephone"].asString();
		if(!userInformationNode["Title"].isNull())
			serviceUsagesObject.userInformation.title = userInformationNode["Title"].asString();
		if(!userInformationNode["Industry"].isNull())
			serviceUsagesObject.userInformation.industry = userInformationNode["Industry"].asString();
		if(!userInformationNode["Source"].isNull())
			serviceUsagesObject.userInformation.source = userInformationNode["Source"].asString();
		serviceUsages_.push_back(serviceUsagesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListServiceUsagesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListServiceUsagesResult::getNextToken()const
{
	return nextToken_;
}

int ListServiceUsagesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListServiceUsagesResult::Policy> ListServiceUsagesResult::getServiceUsages()const
{
	return serviceUsages_;
}

