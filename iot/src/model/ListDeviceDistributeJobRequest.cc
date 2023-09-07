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

#include <alibabacloud/iot/model/ListDeviceDistributeJobRequest.h>

using AlibabaCloud::Iot::Model::ListDeviceDistributeJobRequest;

ListDeviceDistributeJobRequest::ListDeviceDistributeJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "ListDeviceDistributeJob")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeviceDistributeJobRequest::~ListDeviceDistributeJobRequest()
{}

std::string ListDeviceDistributeJobRequest::getRealTenantId()const
{
	return realTenantId_;
}

void ListDeviceDistributeJobRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setBodyParameter("RealTenantId", realTenantId);
}

std::string ListDeviceDistributeJobRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void ListDeviceDistributeJobRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setBodyParameter("RealTripartiteKey", realTripartiteKey);
}

std::string ListDeviceDistributeJobRequest::getJobId()const
{
	return jobId_;
}

void ListDeviceDistributeJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setBodyParameter("JobId", jobId);
}

std::string ListDeviceDistributeJobRequest::getNextToken()const
{
	return nextToken_;
}

void ListDeviceDistributeJobRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

int ListDeviceDistributeJobRequest::getPageSize()const
{
	return pageSize_;
}

void ListDeviceDistributeJobRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListDeviceDistributeJobRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListDeviceDistributeJobRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListDeviceDistributeJobRequest::getProductKey()const
{
	return productKey_;
}

void ListDeviceDistributeJobRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string ListDeviceDistributeJobRequest::getJobType()const
{
	return jobType_;
}

void ListDeviceDistributeJobRequest::setJobType(const std::string& jobType)
{
	jobType_ = jobType;
	setParameter("JobType", jobType);
}

std::string ListDeviceDistributeJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void ListDeviceDistributeJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string ListDeviceDistributeJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void ListDeviceDistributeJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string ListDeviceDistributeJobRequest::getTargetUid()const
{
	return targetUid_;
}

void ListDeviceDistributeJobRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", targetUid);
}

std::string ListDeviceDistributeJobRequest::getSourceRegion()const
{
	return sourceRegion_;
}

void ListDeviceDistributeJobRequest::setSourceRegion(const std::string& sourceRegion)
{
	sourceRegion_ = sourceRegion;
	setParameter("SourceRegion", sourceRegion);
}

int ListDeviceDistributeJobRequest::getStatus()const
{
	return status_;
}

void ListDeviceDistributeJobRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

