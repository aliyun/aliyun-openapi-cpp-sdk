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

#include <alibabacloud/trademark/model/QueryTradeMarkApplicationsRequest.h>

using AlibabaCloud::Trademark::Model::QueryTradeMarkApplicationsRequest;

QueryTradeMarkApplicationsRequest::QueryTradeMarkApplicationsRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "QueryTradeMarkApplications")
{}

QueryTradeMarkApplicationsRequest::~QueryTradeMarkApplicationsRequest()
{}

std::string QueryTradeMarkApplicationsRequest::getTmName()const
{
	return tmName_;
}

void QueryTradeMarkApplicationsRequest::setTmName(const std::string& tmName)
{
	tmName_ = tmName;
	setCoreParameter("TmName", tmName);
}

std::string QueryTradeMarkApplicationsRequest::getMaterialName()const
{
	return materialName_;
}

void QueryTradeMarkApplicationsRequest::setMaterialName(const std::string& materialName)
{
	materialName_ = materialName;
	setCoreParameter("MaterialName", materialName);
}

std::string QueryTradeMarkApplicationsRequest::getOrderId()const
{
	return orderId_;
}

void QueryTradeMarkApplicationsRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", orderId);
}

int QueryTradeMarkApplicationsRequest::getSupplementStatus()const
{
	return supplementStatus_;
}

void QueryTradeMarkApplicationsRequest::setSupplementStatus(int supplementStatus)
{
	supplementStatus_ = supplementStatus;
	setCoreParameter("SupplementStatus", std::to_string(supplementStatus));
}

int QueryTradeMarkApplicationsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryTradeMarkApplicationsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string QueryTradeMarkApplicationsRequest::getBizId()const
{
	return bizId_;
}

void QueryTradeMarkApplicationsRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string QueryTradeMarkApplicationsRequest::getTmNumber()const
{
	return tmNumber_;
}

void QueryTradeMarkApplicationsRequest::setTmNumber(const std::string& tmNumber)
{
	tmNumber_ = tmNumber;
	setCoreParameter("TmNumber", tmNumber);
}

std::string QueryTradeMarkApplicationsRequest::getSortOrder()const
{
	return sortOrder_;
}

void QueryTradeMarkApplicationsRequest::setSortOrder(const std::string& sortOrder)
{
	sortOrder_ = sortOrder;
	setCoreParameter("SortOrder", sortOrder);
}

int QueryTradeMarkApplicationsRequest::getPageNum()const
{
	return pageNum_;
}

void QueryTradeMarkApplicationsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

std::string QueryTradeMarkApplicationsRequest::getType()const
{
	return type_;
}

void QueryTradeMarkApplicationsRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

int QueryTradeMarkApplicationsRequest::getStatus()const
{
	return status_;
}

void QueryTradeMarkApplicationsRequest::setStatus(int status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

