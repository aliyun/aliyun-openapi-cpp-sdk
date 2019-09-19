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

#include <alibabacloud/companyreg/model/ListCompanyRegConsultationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

ListCompanyRegConsultationsResult::ListCompanyRegConsultationsResult() :
	ServiceResult()
{}

ListCompanyRegConsultationsResult::ListCompanyRegConsultationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCompanyRegConsultationsResult::~ListCompanyRegConsultationsResult()
{}

void ListCompanyRegConsultationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["CompanyRegConsultation"];
	for (auto valueDataCompanyRegConsultation : allDataNode)
	{
		CompanyRegConsultation dataObject;
		if(!valueDataCompanyRegConsultation["BizId"].isNull())
			dataObject.bizId = valueDataCompanyRegConsultation["BizId"].asString();
		if(!valueDataCompanyRegConsultation["ConsultInfo"].isNull())
			dataObject.consultInfo = valueDataCompanyRegConsultation["ConsultInfo"].asString();
		if(!valueDataCompanyRegConsultation["GmtModified"].isNull())
			dataObject.gmtModified = std::stol(valueDataCompanyRegConsultation["GmtModified"].asString());
		if(!valueDataCompanyRegConsultation["City"].isNull())
			dataObject.city = valueDataCompanyRegConsultation["City"].asString();
		if(!valueDataCompanyRegConsultation["PlatformName"].isNull())
			dataObject.platformName = valueDataCompanyRegConsultation["PlatformName"].asString();
		if(!valueDataCompanyRegConsultation["InboundPhone"].isNull())
			dataObject.inboundPhone = valueDataCompanyRegConsultation["InboundPhone"].asString();
		if(!valueDataCompanyRegConsultation["OutboundPhone"].isNull())
			dataObject.outboundPhone = valueDataCompanyRegConsultation["OutboundPhone"].asString();
		data_.push_back(dataObject);
	}
	if(!value["TotalItemNum"].isNull())
		totalItemNum_ = std::stoi(value["TotalItemNum"].asString());
	if(!value["CurrentPageNum"].isNull())
		currentPageNum_ = std::stoi(value["CurrentPageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalPageNum"].isNull())
		totalPageNum_ = std::stoi(value["TotalPageNum"].asString());
	if(!value["PrePage"].isNull())
		prePage_ = value["PrePage"].asString() == "true";
	if(!value["NextPage"].isNull())
		nextPage_ = value["NextPage"].asString() == "true";

}

bool ListCompanyRegConsultationsResult::getPrePage()const
{
	return prePage_;
}

int ListCompanyRegConsultationsResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int ListCompanyRegConsultationsResult::getPageSize()const
{
	return pageSize_;
}

int ListCompanyRegConsultationsResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<ListCompanyRegConsultationsResult::CompanyRegConsultation> ListCompanyRegConsultationsResult::getData()const
{
	return data_;
}

int ListCompanyRegConsultationsResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool ListCompanyRegConsultationsResult::getNextPage()const
{
	return nextPage_;
}

