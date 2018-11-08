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

#include <alibabacloud/domain/model/QueryBrokerDemandRecordRequest.h>

using AlibabaCloud::Domain::Model::QueryBrokerDemandRecordRequest;

QueryBrokerDemandRecordRequest::QueryBrokerDemandRecordRequest() :
	RpcServiceRequest("domain", "2018-02-08", "QueryBrokerDemandRecord")
{}

QueryBrokerDemandRecordRequest::~QueryBrokerDemandRecordRequest()
{}

int QueryBrokerDemandRecordRequest::getPageSize()const
{
	return pageSize_;
}

void QueryBrokerDemandRecordRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string QueryBrokerDemandRecordRequest::getBizId()const
{
	return bizId_;
}

void QueryBrokerDemandRecordRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

int QueryBrokerDemandRecordRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryBrokerDemandRecordRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

