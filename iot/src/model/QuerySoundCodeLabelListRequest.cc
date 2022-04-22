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

#include <alibabacloud/iot/model/QuerySoundCodeLabelListRequest.h>

using AlibabaCloud::Iot::Model::QuerySoundCodeLabelListRequest;

QuerySoundCodeLabelListRequest::QuerySoundCodeLabelListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySoundCodeLabelList")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySoundCodeLabelListRequest::~QuerySoundCodeLabelListRequest()
{}

std::string QuerySoundCodeLabelListRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void QuerySoundCodeLabelListRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

int QuerySoundCodeLabelListRequest::getPageId()const
{
	return pageId_;
}

void QuerySoundCodeLabelListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySoundCodeLabelListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySoundCodeLabelListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySoundCodeLabelListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySoundCodeLabelListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySoundCodeLabelListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySoundCodeLabelListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySoundCodeLabelListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySoundCodeLabelListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

