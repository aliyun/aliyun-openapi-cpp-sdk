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
	auto allBatchResultDetailsNode = value["BatchResultDetails"]["BatchResultDetail"];
	for (auto valueBatchResultDetailsBatchResultDetail : allBatchResultDetailsNode)
	{
		BatchResultDetail batchResultDetailsObject;
		if(!valueBatchResultDetailsBatchResultDetail["Status"].isNull())
			batchResultDetailsObject.status = valueBatchResultDetailsBatchResultDetail["Status"].asString() == "true";
		if(!valueBatchResultDetailsBatchResultDetail["Type"].isNull())
			batchResultDetailsObject.type = valueBatchResultDetailsBatchResultDetail["Type"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Domain"].isNull())
			batchResultDetailsObject.domain = valueBatchResultDetailsBatchResultDetail["Domain"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Remark"].isNull())
			batchResultDetailsObject.remark = valueBatchResultDetailsBatchResultDetail["Remark"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["RecordId"].isNull())
			batchResultDetailsObject.recordId = valueBatchResultDetailsBatchResultDetail["RecordId"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Rr"].isNull())
			batchResultDetailsObject.rr = valueBatchResultDetailsBatchResultDetail["Rr"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Priority"].isNull())
			batchResultDetailsObject.priority = valueBatchResultDetailsBatchResultDetail["Priority"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["RrStatus"].isNull())
			batchResultDetailsObject.rrStatus = valueBatchResultDetailsBatchResultDetail["RrStatus"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["OperateDateStr"].isNull())
			batchResultDetailsObject.operateDateStr = valueBatchResultDetailsBatchResultDetail["OperateDateStr"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["NewValue"].isNull())
			batchResultDetailsObject.newValue = valueBatchResultDetailsBatchResultDetail["NewValue"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Value"].isNull())
			batchResultDetailsObject.value = valueBatchResultDetailsBatchResultDetail["Value"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Ttl"].isNull())
			batchResultDetailsObject.ttl = valueBatchResultDetailsBatchResultDetail["Ttl"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["BatchType"].isNull())
			batchResultDetailsObject.batchType = valueBatchResultDetailsBatchResultDetail["BatchType"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Line"].isNull())
			batchResultDetailsObject.line = valueBatchResultDetailsBatchResultDetail["Line"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["NewRr"].isNull())
			batchResultDetailsObject.newRr = valueBatchResultDetailsBatchResultDetail["NewRr"].asString();
		if(!valueBatchResultDetailsBatchResultDetail["Reason"].isNull())
			batchResultDetailsObject.reason = valueBatchResultDetailsBatchResultDetail["Reason"].asString();
		batchResultDetails_.push_back(batchResultDetailsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

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

