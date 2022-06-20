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

#include <alibabacloud/iot/model/QueryImportedDeviceByApplyIdRequest.h>

using AlibabaCloud::Iot::Model::QueryImportedDeviceByApplyIdRequest;

QueryImportedDeviceByApplyIdRequest::QueryImportedDeviceByApplyIdRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryImportedDeviceByApplyId")
{
	setMethod(HttpRequest::Method::Post);
}

QueryImportedDeviceByApplyIdRequest::~QueryImportedDeviceByApplyIdRequest()
{}

std::string QueryImportedDeviceByApplyIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryImportedDeviceByApplyIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryImportedDeviceByApplyIdRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryImportedDeviceByApplyIdRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

int QueryImportedDeviceByApplyIdRequest::getPageSize()const
{
	return pageSize_;
}

void QueryImportedDeviceByApplyIdRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long QueryImportedDeviceByApplyIdRequest::getApplyId()const
{
	return applyId_;
}

void QueryImportedDeviceByApplyIdRequest::setApplyId(long applyId)
{
	applyId_ = applyId;
	setParameter("ApplyId", std::to_string(applyId));
}

int QueryImportedDeviceByApplyIdRequest::getPageNo()const
{
	return pageNo_;
}

void QueryImportedDeviceByApplyIdRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string QueryImportedDeviceByApplyIdRequest::getApiProduct()const
{
	return apiProduct_;
}

void QueryImportedDeviceByApplyIdRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QueryImportedDeviceByApplyIdRequest::getApiRevision()const
{
	return apiRevision_;
}

void QueryImportedDeviceByApplyIdRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

