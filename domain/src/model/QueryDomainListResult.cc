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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Domain"];
	for (auto valueDataDomain : allDataNode)
	{
		Domain dataObject;
		if(!valueDataDomain["DomainAuditStatus"].isNull())
			dataObject.domainAuditStatus = valueDataDomain["DomainAuditStatus"].asString();
		if(!valueDataDomain["DomainGroupId"].isNull())
			dataObject.domainGroupId = valueDataDomain["DomainGroupId"].asString();
		if(!valueDataDomain["Remark"].isNull())
			dataObject.remark = valueDataDomain["Remark"].asString();
		if(!valueDataDomain["DomainGroupName"].isNull())
			dataObject.domainGroupName = valueDataDomain["DomainGroupName"].asString();
		if(!valueDataDomain["RegistrationDate"].isNull())
			dataObject.registrationDate = valueDataDomain["RegistrationDate"].asString();
		if(!valueDataDomain["InstanceId"].isNull())
			dataObject.instanceId = valueDataDomain["InstanceId"].asString();
		if(!valueDataDomain["DomainName"].isNull())
			dataObject.domainName = valueDataDomain["DomainName"].asString();
		if(!valueDataDomain["ExpirationDateStatus"].isNull())
			dataObject.expirationDateStatus = valueDataDomain["ExpirationDateStatus"].asString();
		if(!valueDataDomain["ExpirationDate"].isNull())
			dataObject.expirationDate = valueDataDomain["ExpirationDate"].asString();
		if(!valueDataDomain["RegistrantType"].isNull())
			dataObject.registrantType = valueDataDomain["RegistrantType"].asString();
		if(!valueDataDomain["ExpirationDateLong"].isNull())
			dataObject.expirationDateLong = std::stol(valueDataDomain["ExpirationDateLong"].asString());
		if(!valueDataDomain["ExpirationCurrDateDiff"].isNull())
			dataObject.expirationCurrDateDiff = std::stoi(valueDataDomain["ExpirationCurrDateDiff"].asString());
		if(!valueDataDomain["Premium"].isNull())
			dataObject.premium = valueDataDomain["Premium"].asString() == "true";
		if(!valueDataDomain["RegistrationDateLong"].isNull())
			dataObject.registrationDateLong = std::stol(valueDataDomain["RegistrationDateLong"].asString());
		if(!valueDataDomain["ProductId"].isNull())
			dataObject.productId = valueDataDomain["ProductId"].asString();
		if(!valueDataDomain["DomainStatus"].isNull())
			dataObject.domainStatus = valueDataDomain["DomainStatus"].asString();
		if(!valueDataDomain["DomainType"].isNull())
			dataObject.domainType = valueDataDomain["DomainType"].asString();
		if(!valueDataDomain["ResourceGroupId"].isNull())
			dataObject.resourceGroupId = valueDataDomain["ResourceGroupId"].asString();
		if(!valueDataDomain["Ccompany"].isNull())
			dataObject.ccompany = valueDataDomain["Ccompany"].asString();
		if(!valueDataDomain["ChgholderStatus"].isNull())
			dataObject.chgholderStatus = valueDataDomain["ChgholderStatus"].asString();
		auto allTagNode = valueDataDomain["Tag"]["TagItem"];
		for (auto valueDataDomainTagTagItem : allTagNode)
		{
			Domain::TagItem tagObject;
			if(!valueDataDomainTagTagItem["Key"].isNull())
				tagObject.key = valueDataDomainTagTagItem["Key"].asString();
			if(!valueDataDomainTagTagItem["Value"].isNull())
				tagObject.value = valueDataDomainTagTagItem["Value"].asString();
			dataObject.tag.push_back(tagObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
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

