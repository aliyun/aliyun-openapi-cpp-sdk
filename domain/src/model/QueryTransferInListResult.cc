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

#include <alibabacloud/domain/model/QueryTransferInListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryTransferInListResult::QueryTransferInListResult() :
	ServiceResult()
{}

QueryTransferInListResult::QueryTransferInListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTransferInListResult::~QueryTransferInListResult()
{}

void QueryTransferInListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["TransferInInfo"];
	for (auto value : allData)
	{
		TransferInInfo dataObject;
		if(!value["SubmissionDate"].isNull())
			dataObject.submissionDate = value["SubmissionDate"].asString();
		if(!value["ModificationDate"].isNull())
			dataObject.modificationDate = value["ModificationDate"].asString();
		if(!value["UserId"].isNull())
			dataObject.userId = value["UserId"].asString();
		if(!value["InstanceId"].isNull())
			dataObject.instanceId = value["InstanceId"].asString();
		if(!value["DomainName"].isNull())
			dataObject.domainName = value["DomainName"].asString();
		if(!value["Status"].isNull())
			dataObject.status = std::stoi(value["Status"].asString());
		if(!value["SimpleTransferInStatus"].isNull())
			dataObject.simpleTransferInStatus = value["SimpleTransferInStatus"].asString();
		if(!value["ResultCode"].isNull())
			dataObject.resultCode = value["ResultCode"].asString();
		if(!value["ResultDate"].isNull())
			dataObject.resultDate = value["ResultDate"].asString();
		if(!value["ResultMsg"].isNull())
			dataObject.resultMsg = value["ResultMsg"].asString();
		if(!value["TransferAuthorizationCodeSubmissionDate"].isNull())
			dataObject.transferAuthorizationCodeSubmissionDate = value["TransferAuthorizationCodeSubmissionDate"].asString();
		if(!value["NeedMailCheck"].isNull())
			dataObject.needMailCheck = value["NeedMailCheck"].asString() == "true";
		if(!value["Email"].isNull())
			dataObject.email = value["Email"].asString();
		if(!value["WhoisMailStatus"].isNull())
			dataObject.whoisMailStatus = value["WhoisMailStatus"].asString() == "true";
		if(!value["ExpirationDate"].isNull())
			dataObject.expirationDate = value["ExpirationDate"].asString();
		if(!value["ProgressBarType"].isNull())
			dataObject.progressBarType = std::stoi(value["ProgressBarType"].asString());
		if(!value["SubmissionDateLong"].isNull())
			dataObject.submissionDateLong = std::stol(value["SubmissionDateLong"].asString());
		if(!value["ModificationDateLong"].isNull())
			dataObject.modificationDateLong = std::stol(value["ModificationDateLong"].asString());
		if(!value["ResultDateLong"].isNull())
			dataObject.resultDateLong = std::stol(value["ResultDateLong"].asString());
		if(!value["ExpirationDateLong"].isNull())
			dataObject.expirationDateLong = std::stol(value["ExpirationDateLong"].asString());
		if(!value["TransferAuthorizationCodeSubmissionDateLong"].isNull())
			dataObject.transferAuthorizationCodeSubmissionDateLong = std::stol(value["TransferAuthorizationCodeSubmissionDateLong"].asString());
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

bool QueryTransferInListResult::getPrePage()const
{
	return prePage_;
}

int QueryTransferInListResult::getCurrentPageNum()const
{
	return currentPageNum_;
}

int QueryTransferInListResult::getPageSize()const
{
	return pageSize_;
}

int QueryTransferInListResult::getTotalPageNum()const
{
	return totalPageNum_;
}

std::vector<QueryTransferInListResult::TransferInInfo> QueryTransferInListResult::getData()const
{
	return data_;
}

int QueryTransferInListResult::getTotalItemNum()const
{
	return totalItemNum_;
}

bool QueryTransferInListResult::getNextPage()const
{
	return nextPage_;
}

