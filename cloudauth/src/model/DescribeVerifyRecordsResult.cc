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

#include <alibabacloud/cloudauth/model/DescribeVerifyRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeVerifyRecordsResult::DescribeVerifyRecordsResult() :
	ServiceResult()
{}

DescribeVerifyRecordsResult::DescribeVerifyRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVerifyRecordsResult::~DescribeVerifyRecordsResult()
{}

void DescribeVerifyRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsListNode = value["RecordsList"]["Records"];
	for (auto valueRecordsListRecords : allRecordsListNode)
	{
		Records recordsListObject;
		if(!valueRecordsListRecords["BizType"].isNull())
			recordsListObject.bizType = valueRecordsListRecords["BizType"].asString();
		if(!valueRecordsListRecords["BizId"].isNull())
			recordsListObject.bizId = valueRecordsListRecords["BizId"].asString();
		if(!valueRecordsListRecords["VerifyId"].isNull())
			recordsListObject.verifyId = valueRecordsListRecords["VerifyId"].asString();
		if(!valueRecordsListRecords["FinishTime"].isNull())
			recordsListObject.finishTime = std::stol(valueRecordsListRecords["FinishTime"].asString());
		if(!valueRecordsListRecords["Status"].isNull())
			recordsListObject.status = std::stoi(valueRecordsListRecords["Status"].asString());
		if(!valueRecordsListRecords["IdCardFaceComparisonScore"].isNull())
			recordsListObject.idCardFaceComparisonScore = std::stof(valueRecordsListRecords["IdCardFaceComparisonScore"].asString());
		if(!valueRecordsListRecords["AuthorityComparisonScore"].isNull())
			recordsListObject.authorityComparisonScore = std::stof(valueRecordsListRecords["AuthorityComparisonScore"].asString());
		auto materialNode = value["Material"];
		if(!materialNode["FaceImageUrl"].isNull())
			recordsListObject.material.faceImageUrl = materialNode["FaceImageUrl"].asString();
		if(!materialNode["IdCardName"].isNull())
			recordsListObject.material.idCardName = materialNode["IdCardName"].asString();
		if(!materialNode["IdCardNumber"].isNull())
			recordsListObject.material.idCardNumber = materialNode["IdCardNumber"].asString();
		auto idCardInfoNode = materialNode["IdCardInfo"];
		if(!idCardInfoNode["FrontImageUrl"].isNull())
			recordsListObject.material.idCardInfo.frontImageUrl = idCardInfoNode["FrontImageUrl"].asString();
		if(!idCardInfoNode["BackImageUrl"].isNull())
			recordsListObject.material.idCardInfo.backImageUrl = idCardInfoNode["BackImageUrl"].asString();
		if(!idCardInfoNode["Name"].isNull())
			recordsListObject.material.idCardInfo.name = idCardInfoNode["Name"].asString();
		if(!idCardInfoNode["Number"].isNull())
			recordsListObject.material.idCardInfo.number = idCardInfoNode["Number"].asString();
		if(!idCardInfoNode["Address"].isNull())
			recordsListObject.material.idCardInfo.address = idCardInfoNode["Address"].asString();
		if(!idCardInfoNode["Birth"].isNull())
			recordsListObject.material.idCardInfo.birth = idCardInfoNode["Birth"].asString();
		if(!idCardInfoNode["Sex"].isNull())
			recordsListObject.material.idCardInfo.sex = idCardInfoNode["Sex"].asString();
		if(!idCardInfoNode["Nationality"].isNull())
			recordsListObject.material.idCardInfo.nationality = idCardInfoNode["Nationality"].asString();
		if(!idCardInfoNode["Authority"].isNull())
			recordsListObject.material.idCardInfo.authority = idCardInfoNode["Authority"].asString();
		if(!idCardInfoNode["StartDate"].isNull())
			recordsListObject.material.idCardInfo.startDate = idCardInfoNode["StartDate"].asString();
		if(!idCardInfoNode["EndDate"].isNull())
			recordsListObject.material.idCardInfo.endDate = idCardInfoNode["EndDate"].asString();
		recordsList_.push_back(recordsListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["QueryId"].isNull())
		queryId_ = value["QueryId"].asString();

}

int DescribeVerifyRecordsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVerifyRecordsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVerifyRecordsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeVerifyRecordsResult::Records> DescribeVerifyRecordsResult::getRecordsList()const
{
	return recordsList_;
}

std::string DescribeVerifyRecordsResult::getQueryId()const
{
	return queryId_;
}

