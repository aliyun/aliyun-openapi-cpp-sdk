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

#include <alibabacloud/bssopenapi/model/QueryAccountTransactionsRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryAccountTransactionsRequest;

QueryAccountTransactionsRequest::QueryAccountTransactionsRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryAccountTransactions")
{}

QueryAccountTransactionsRequest::~QueryAccountTransactionsRequest()
{}

std::string QueryAccountTransactionsRequest::getRecordID()const
{
	return recordID_;
}

void QueryAccountTransactionsRequest::setRecordID(const std::string& recordID)
{
	recordID_ = recordID;
	setCoreParameter("RecordID", std::to_string(recordID));
}

int QueryAccountTransactionsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryAccountTransactionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryAccountTransactionsRequest::getTransactionChannelSN()const
{
	return transactionChannelSN_;
}

void QueryAccountTransactionsRequest::setTransactionChannelSN(const std::string& transactionChannelSN)
{
	transactionChannelSN_ = transactionChannelSN;
	setCoreParameter("TransactionChannelSN", std::to_string(transactionChannelSN));
}

std::string QueryAccountTransactionsRequest::getCreateTimeStart()const
{
	return createTimeStart_;
}

void QueryAccountTransactionsRequest::setCreateTimeStart(const std::string& createTimeStart)
{
	createTimeStart_ = createTimeStart;
	setCoreParameter("CreateTimeStart", std::to_string(createTimeStart));
}

std::string QueryAccountTransactionsRequest::getTransactionNumber()const
{
	return transactionNumber_;
}

void QueryAccountTransactionsRequest::setTransactionNumber(const std::string& transactionNumber)
{
	transactionNumber_ = transactionNumber;
	setCoreParameter("TransactionNumber", std::to_string(transactionNumber));
}

int QueryAccountTransactionsRequest::getPageNum()const
{
	return pageNum_;
}

void QueryAccountTransactionsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryAccountTransactionsRequest::getCreateTimeEnd()const
{
	return createTimeEnd_;
}

void QueryAccountTransactionsRequest::setCreateTimeEnd(const std::string& createTimeEnd)
{
	createTimeEnd_ = createTimeEnd;
	setCoreParameter("CreateTimeEnd", std::to_string(createTimeEnd));
}

