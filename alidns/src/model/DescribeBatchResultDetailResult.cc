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

#include <alibabacloud/alidns/model/DescribeBatchResultDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeBatchResultDetailResult::DescribeBatchResultDetailResult() :
	ServiceResult()
{}

DescribeBatchResultDetailResult::DescribeBatchResultDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBatchResultDetailResult::~DescribeBatchResultDetailResult()
{}

void DescribeBatchResultDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBatchResultDetails = value["BatchResultDetails"]["BatchResultDetail"];
	for (auto value : allBatchResultDetails)
	{
		BatchResultDetail batchResultDetailsObject;
		if(!value["Domain"].isNull())
			batchResultDetailsObject.domain = value["Domain"].asString();
		if(!value["Type"].isNull())
			batchResultDetailsObject.type = value["Type"].asString();
		if(!value["Rr"].isNull())
			batchResultDetailsObject.rr = value["Rr"].asString();
		if(!value["Value"].isNull())
			batchResultDetailsObject.value = value["Value"].asString();
		if(!value["Status"].isNull())
			batchResultDetailsObject.status = value["Status"].asString() == "true";
		if(!value["Reason"].isNull())
			batchResultDetailsObject.reason = value["Reason"].asString();
		if(!value["NewRr"].isNull())
			batchResultDetailsObject.newRr = value["NewRr"].asString();
		if(!value["NewValue"].isNull())
			batchResultDetailsObject.newValue = value["NewValue"].asString();
		if(!value["BatchType"].isNull())
			batchResultDetailsObject.batchType = value["BatchType"].asString();
		if(!value["OperateDateStr"].isNull())
			batchResultDetailsObject.operateDateStr = value["OperateDateStr"].asString();
		if(!value["Line"].isNull())
			batchResultDetailsObject.line = value["Line"].asString();
		if(!value["Priority"].isNull())
			batchResultDetailsObject.priority = std::stoi(value["Priority"].asString());
		if(!value["Ttl"].isNull())
			batchResultDetailsObject.ttl = std::stoi(value["Ttl"].asString());
		if(!value["RecordId"].isNull())
			batchResultDetailsObject.recordId = value["RecordId"].asString();
		if(!value["Remark"].isNull())
			batchResultDetailsObject.remark = value["Remark"].asString();
		if(!value["RrStatus"].isNull())
			batchResultDetailsObject.rrStatus = value["RrStatus"].asString();
		batchResultDetails_.push_back(batchResultDetailsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::vector<DescribeBatchResultDetailResult::BatchResultDetail> DescribeBatchResultDetailResult::getBatchResultDetails()const
{
	return batchResultDetails_;
}

long DescribeBatchResultDetailResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeBatchResultDetailResult::getPageSize()const
{
	return pageSize_;
}

long DescribeBatchResultDetailResult::getPageNumber()const
{
	return pageNumber_;
}

