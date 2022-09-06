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

#include <alibabacloud/iot/model/PageQuerySharedSpeechOpenRequest.h>

using AlibabaCloud::Iot::Model::PageQuerySharedSpeechOpenRequest;

PageQuerySharedSpeechOpenRequest::PageQuerySharedSpeechOpenRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PageQuerySharedSpeechOpen")
{
	setMethod(HttpRequest::Method::Post);
}

PageQuerySharedSpeechOpenRequest::~PageQuerySharedSpeechOpenRequest()
{}

int PageQuerySharedSpeechOpenRequest::getPageId()const
{
	return pageId_;
}

void PageQuerySharedSpeechOpenRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string PageQuerySharedSpeechOpenRequest::getIotId()const
{
	return iotId_;
}

void PageQuerySharedSpeechOpenRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setBodyParameter("IotId", iotId);
}

std::string PageQuerySharedSpeechOpenRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PageQuerySharedSpeechOpenRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int PageQuerySharedSpeechOpenRequest::getPageSize()const
{
	return pageSize_;
}

void PageQuerySharedSpeechOpenRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string PageQuerySharedSpeechOpenRequest::getShareTaskCode()const
{
	return shareTaskCode_;
}

void PageQuerySharedSpeechOpenRequest::setShareTaskCode(const std::string& shareTaskCode)
{
	shareTaskCode_ = shareTaskCode;
	setBodyParameter("ShareTaskCode", shareTaskCode);
}

std::string PageQuerySharedSpeechOpenRequest::getProductKey()const
{
	return productKey_;
}

void PageQuerySharedSpeechOpenRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setBodyParameter("ProductKey", productKey);
}

std::string PageQuerySharedSpeechOpenRequest::getApiProduct()const
{
	return apiProduct_;
}

void PageQuerySharedSpeechOpenRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PageQuerySharedSpeechOpenRequest::getApiRevision()const
{
	return apiRevision_;
}

void PageQuerySharedSpeechOpenRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

std::string PageQuerySharedSpeechOpenRequest::getDeviceName()const
{
	return deviceName_;
}

void PageQuerySharedSpeechOpenRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

int PageQuerySharedSpeechOpenRequest::getStatus()const
{
	return status_;
}

void PageQuerySharedSpeechOpenRequest::setStatus(int status)
{
	status_ = status;
	setBodyParameter("Status", std::to_string(status));
}

