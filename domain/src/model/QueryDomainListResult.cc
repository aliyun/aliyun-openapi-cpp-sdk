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

#include <alibabacloud/domain/model/QueryDomainListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDomainListResult::QueryDomainListResult() :
	ServiceResult()
{}

QueryDomainListResult::QueryDomainListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDomainListResult::~QueryDomainListResult()
{}

void QueryDomainListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Domain"];
	for (auto value : allData)
	{
		Domain dataObject;
		if(!value["DomainName"].isNull())
			dataObject.domainName = value["DomainName"].asString();
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		if(!value["ExpirationDate"].isNull())
			dataObject.expirationDate = value["ExpirationDate"].asString();
		if(!value["RegistrationDate"].isNull())
			dataObject.registrationDate = value["RegistrationDate"].asString();
		if(!value["DomainType"].isNull())
			dataObject.domainType = value["DomainType"].asString();
		if(!value["DomainStatus"].isNull())
			dataObject.domainStatus = value["DomainStatus"].asString();
		if(!value["ProductId"].isNull())
			dataObject.productId = value["ProductId"].asString();
		if(!value["ExpirationDateLong"].isNull())
			dataObject.expirationDateLong = std::stol(value["ExpirationDateLong"].asString());
		if(!value["RegistrationDateLong"].isNull())
			dataObject.registrationDateLong = std::stol(value["RegistrationDateLong"].asString());
		if(!value["Premium"].isNull())
			dataObject.premium = value["Premium"].asString() == "true";
		if(!value["DomainAuditStatus"].isNull())
			dataObject.domainAuditStatus = value["DomainAuditStatus"].asString();
		if(!value["ExpirationDateStatus"].isNull())
			dataObject.expirationDateStatus = value["ExpirationDateStatus"].asString();
		if(!value["RegistrantType"].isNull())
			dataObject.registrantType = value["RegistrantType"].asString();
		if(!value["DomainGroupId"].isNull())
			dataObject.domainGroupId = value["DomainGroupId"].asString();
		if(!value["Remark"].isNull())
			dataObject.remark = value["Remark"].asString();
		if(!value["DomainGroupName"].isNull())
			dataObject.domainGroupName = value["DomainGroupName"].asString();
		if(!value["ExpirationCurrDateDiff"].isNull())
			dataObject.expirationCurrDateDiff = std::stoi(value["ExpirationCurrDateDiff"].asString());
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool QueryDomainListResult::getPrePage()const
{
	return prePage_;
}

int QueryDomainListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryDomainListResult::getPageSize()const
{
	return pageSize_;
}

int QueryDomainListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryDomainListResult::Domain> QueryDomainListResult::getData()const
{
	return data_;
}

int QueryDomainListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryDomainListResult::getNextPage()const
{
	return nextPage_;
}

