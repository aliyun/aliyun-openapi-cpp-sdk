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

#include <alibabacloud/trademark/model/QueryTradeProduceListRequest.h>

using AlibabaCloud::Trademark::Model::QueryTradeProduceListRequest;

QueryTradeProduceListRequest::QueryTradeProduceListRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTradeProduceList")
{}

QueryTradeProduceListRequest::~QueryTradeProduceListRequest()
{}

int QueryTradeProduceListRequest::getBuyerStatus()const
{
	return buyerStatus_;
}

void QueryTradeProduceListRequest::setBuyerStatus(int buyerStatus)
{
	buyerStatus_ = buyerStatus;
	setCoreParameter("BuyerStatus", buyerStatus);
}

int QueryTradeProduceListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTradeProduceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string QueryTradeProduceListRequest::getPreOrderId()const
{
	return preOrderId_;
}

void QueryTradeProduceListRequest::setPreOrderId(const std::string& preOrderId)
{
	preOrderId_ = preOrderId;
	setCoreParameter("PreOrderId", std::to_string(preOrderId));
}

std::string QueryTradeProduceListRequest::getBizId()const
{
	return bizId_;
}

void QueryTradeProduceListRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", std::to_string(bizId));
}

std::string QueryTradeProduceListRequest::getSortOrder()const
{
	return sortOrder_;
}

void QueryTradeProduceListRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setCoreParameter("SortOrder", std::to_string(sortOrder));
}

int QueryTradeProduceListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTradeProduceListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", pageNum);
}

std::string QueryTradeProduceListRequest::getSortFiled()const
{
	return sortFiled_;
}

void QueryTradeProduceListRequest::setSortFiled(const std::string& sortFiled)
{
	sortFiled_ = sortFiled;
	setCoreParameter("SortFiled", std::to_string(sortFiled));
}

std::string QueryTradeProduceListRequest::getRegisterNumber()const
{
	return registerNumber_;
}

void QueryTradeProduceListRequest::setRegisterNumber(const std::string& registerNumber)
{
	registerNumber_ = registerNumber;
	setCoreParameter("RegisterNumber", std::to_string(registerNumber));
}

