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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TransferInInfo"];
	for (auto valueDataTransferInInfo : allDataNode)
	{
		TransferInInfo dataObject;
		if(!valueDataTransferInInfo["Status"].isNull())
			dataObject.status = std::stoi(valueDataTransferInInfo["Status"].asString());
		if(!valueDataTransferInInfo["UserId"].isNull())
			dataObject.userId = valueDataTransferInInfo["UserId"].asString();
		if(!valueDataTransferInInfo["ModificationDate"].isNull())
			dataObject.modificationDate = valueDataTransferInInfo["ModificationDate"].asString();
		if(!valueDataTransferInInfo["TransferAuthorizationCodeSubmissionDateLong"].isNull())
			dataObject.transferAuthorizationCodeSubmissionDateLong = std::stol(valueDataTransferInInfo["TransferAuthorizationCodeSubmissionDateLong"].asString());
		if(!valueDataTransferInInfo["SubmissionDateLong"].isNull())
			dataObject.submissionDateLong = std::stol(valueDataTransferInInfo["SubmissionDateLong"].asString());
		if(!valueDataTransferInInfo["ResultCode"].isNull())
			dataObject.resultCode = valueDataTransferInInfo["ResultCode"].asString();
		if(!valueDataTransferInInfo["NeedMailCheck"].isNull())
			dataObject.needMailCheck = valueDataTransferInInfo["NeedMailCheck"].asString() == "true";
		if(!valueDataTransferInInfo["ModificationDateLong"].isNull())
			dataObject.modificationDateLong = std::stol(valueDataTransferInInfo["ModificationDateLong"].asString());
		if(!valueDataTransferInInfo["InstanceId"].isNull())
			dataObject.instanceId = valueDataTransferInInfo["InstanceId"].asString();
		if(!valueDataTransferInInfo["DomainName"].isNull())
			dataObject.domainName = valueDataTransferInInfo["DomainName"].asString();
		if(!valueDataTransferInInfo["ProgressBarType"].isNull())
			dataObject.progressBarType = std::stoi(valueDataTransferInInfo["ProgressBarType"].asString());
		if(!valueDataTransferInInfo["ResultMsg"].isNull())
			dataObject.resultMsg = valueDataTransferInInfo["ResultMsg"].asString();
		if(!valueDataTransferInInfo["ResultDateLong"].isNull())
			dataObject.resultDateLong = std::stol(valueDataTransferInInfo["ResultDateLong"].asString());
		if(!valueDataTransferInInfo["ExpirationDate"].isNull())
			dataObject.expirationDate = valueDataTransferInInfo["ExpirationDate"].asString();
		if(!valueDataTransferInInfo["Email"].isNull())
			dataObject.email = valueDataTransferInInfo["Email"].asString();
		if(!valueDataTransferInInfo["WhoisMailStatus"].isNull())
			dataObject.whoisMailStatus = valueDataTransferInInfo["WhoisMailStatus"].asString() == "true";
		if(!valueDataTransferInInfo["TransferAuthorizationCodeSubmissionDate"].isNull())
			dataObject.transferAuthorizationCodeSubmissionDate = valueDataTransferInInfo["TransferAuthorizationCodeSubmissionDate"].asString();
		if(!valueDataTransferInInfo["SubmissionDate"].isNull())
			dataObject.submissionDate = valueDataTransferInInfo["SubmissionDate"].asString();
		if(!valueDataTransferInInfo["ExpirationDateLong"].isNull())
			dataObject.expirationDateLong = std::stol(valueDataTransferInInfo["ExpirationDateLong"].asString());
		if(!valueDataTransferInInfo["SimpleTransferInStatus"].isNull())
			dataObject.simpleTransferInStatus = valueDataTransferInInfo["SimpleTransferInStatus"].asString();
		if(!valueDataTransferInInfo["ResultDate"].isNull())
			dataObject.resultDate = valueDataTransferInInfo["ResultDate"].asString();
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

