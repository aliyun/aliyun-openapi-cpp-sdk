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

#include <alibabacloud/iot/model/QueryEdgeInstanceMessageRoutingRequest.h>

using AlibabaCloud::Iot::Model::QueryEdgeInstanceMessageRoutingRequest;

QueryEdgeInstanceMessageRoutingRequest::QueryEdgeInstanceMessageRoutingRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryEdgeInstanceMessageRouting")
{
	setMethod(HttpRequest::Method::Post);
}

QueryEdgeInstanceMessageRoutingRequest::~QueryEdgeInstanceMessageRoutingRequest()
{}

std::string QueryEdgeInstanceMessageRoutingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryEdgeInstanceMessageRoutingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryEdgeInstanceMessageRoutingRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryEdgeInstanceMessageRoutingRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryEdgeInstanceMessageRoutingRequest::getPageSize()const
{
	return pageSize_;
}

void QueryEdgeInstanceMessageRoutingRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QueryEdgeInstanceMessageRoutingRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryEdgeInstanceMessageRoutingRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryEdgeInstanceMessageRoutingRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryEdgeInstanceMessageRoutingRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string QueryEdgeInstanceMessageRoutingRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryEdgeInstanceMessageRoutingRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryEdgeInstanceMessageRoutingRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryEdgeInstanceMessageRoutingRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

