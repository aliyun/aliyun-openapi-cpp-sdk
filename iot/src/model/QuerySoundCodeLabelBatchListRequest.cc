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

#include <alibabacloud/iot/model/QuerySoundCodeLabelBatchListRequest.h>

using AlibabaCloud::Iot::Model::QuerySoundCodeLabelBatchListRequest;

QuerySoundCodeLabelBatchListRequest::QuerySoundCodeLabelBatchListRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QuerySoundCodeLabelBatchList")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySoundCodeLabelBatchListRequest::~QuerySoundCodeLabelBatchListRequest()
{}

std::string QuerySoundCodeLabelBatchListRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void QuerySoundCodeLabelBatchListRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

int QuerySoundCodeLabelBatchListRequest::getPageId()const
{
	return pageId_;
}

void QuerySoundCodeLabelBatchListRequest::setPageId(int pageId)
{
	pageId_ = pageId;
	setBodyParameter("PageId", std::to_string(pageId));
}

std::string QuerySoundCodeLabelBatchListRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QuerySoundCodeLabelBatchListRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

int QuerySoundCodeLabelBatchListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySoundCodeLabelBatchListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string QuerySoundCodeLabelBatchListRequest::getApiProduct()const
{
	return apiProduct_;
}

void QuerySoundCodeLabelBatchListRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string QuerySoundCodeLabelBatchListRequest::getApiRevision()const
{
	return apiRevision_;
}

void QuerySoundCodeLabelBatchListRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

