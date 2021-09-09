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

#include <alibabacloud/companyreg/model/ListIcpApplicationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListIcpApplicationsResult::ListIcpApplicationsResult() :
	ServiceResult()
{}

ListIcpApplicationsResult::ListIcpApplicationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIcpApplicationsResult::~ListIcpApplicationsResult()
{}

void ListIcpApplicationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["Application"];
	for (auto valueApplicationsApplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsApplication["OrderId"].isNull())
			applicationsObject.orderId = valueApplicationsApplication["OrderId"].asString();
		if(!valueApplicationsApplication["OrderPrice"].isNull())
			applicationsObject.orderPrice = std::stof(valueApplicationsApplication["OrderPrice"].asString());
		if(!valueApplicationsApplication["ApplicationStatus"].isNull())
			applicationsObject.applicationStatus = std::stoi(valueApplicationsApplication["ApplicationStatus"].asString());
		if(!valueApplicationsApplication["CompanyName"].isNull())
			applicationsObject.companyName = valueApplicationsApplication["CompanyName"].asString();
		if(!valueApplicationsApplication["LegalPersonName"].isNull())
			applicationsObject.legalPersonName = valueApplicationsApplication["LegalPersonName"].asString();
		if(!valueApplicationsApplication["ApplicationType"].isNull())
			applicationsObject.applicationType = std::stoi(valueApplicationsApplication["ApplicationType"].asString());
		if(!valueApplicationsApplication["CompanyAddress"].isNull())
			applicationsObject.companyAddress = valueApplicationsApplication["CompanyAddress"].asString();
		if(!valueApplicationsApplication["Domain"].isNull())
			applicationsObject.domain = valueApplicationsApplication["Domain"].asString();
		if(!valueApplicationsApplication["IncludeForeignInvestment"].isNull())
			applicationsObject.includeForeignInvestment = valueApplicationsApplication["IncludeForeignInvestment"].asString() == "true";
		if(!valueApplicationsApplication["PartnerCode"].isNull())
			applicationsObject.partnerCode = valueApplicationsApplication["PartnerCode"].asString();
		if(!valueApplicationsApplication["UserId"].isNull())
			applicationsObject.userId = valueApplicationsApplication["UserId"].asString();
		if(!valueApplicationsApplication["BizId"].isNull())
			applicationsObject.bizId = valueApplicationsApplication["BizId"].asString();
		if(!valueApplicationsApplication["IntentionBizId"].isNull())
			applicationsObject.intentionBizId = valueApplicationsApplication["IntentionBizId"].asString();
		if(!valueApplicationsApplication["CompanyArea"].isNull())
			applicationsObject.companyArea = valueApplicationsApplication["CompanyArea"].asString();
		if(!valueApplicationsApplication["UpdateTime"].isNull())
			applicationsObject.updateTime = std::stol(valueApplicationsApplication["UpdateTime"].asString());
		if(!valueApplicationsApplication["Type"].isNull())
			applicationsObject.type = std::stoi(valueApplicationsApplication["Type"].asString());
		if(!valueApplicationsApplication["ActionType"].isNull())
			applicationsObject.actionType = valueApplicationsApplication["ActionType"].asString();
		if(!valueApplicationsApplication["Version"].isNull())
			applicationsObject.version = valueApplicationsApplication["Version"].asString();
		if(!valueApplicationsApplication["ProduceVersion"].isNull())
			applicationsObject.produceVersion = valueApplicationsApplication["ProduceVersion"].asString();
		applications_.push_back(applicationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Source"].isNull())
		source_ = value["Source"].asString();

}

int ListIcpApplicationsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListIcpApplicationsResult::Application> ListIcpApplicationsResult::getApplications()const
{
	return applications_;
}

int ListIcpApplicationsResult::getPageSize()const
{
	return pageSize_;
}

int ListIcpApplicationsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListIcpApplicationsResult::getSource()const
{
	return source_;
}

