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

#include <alibabacloud/iot/model/RetrySoundCodeLabelBatchRequest.h>

using AlibabaCloud::Iot::Model::RetrySoundCodeLabelBatchRequest;

RetrySoundCodeLabelBatchRequest::RetrySoundCodeLabelBatchRequest() :
	RpcServiceRequest("iot", "2018-01-20", "RetrySoundCodeLabelBatch")
{
	setMethod(HttpRequest::Method::Post);
}

RetrySoundCodeLabelBatchRequest::~RetrySoundCodeLabelBatchRequest()
{}

std::string RetrySoundCodeLabelBatchRequest::getBatchCode()const
{
	return batchCode_;
}

void RetrySoundCodeLabelBatchRequest::setBatchCode(const std::string& batchCode)
{
	batchCode_ = batchCode;
	setBodyParameter("BatchCode", batchCode);
}

std::string RetrySoundCodeLabelBatchRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void RetrySoundCodeLabelBatchRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string RetrySoundCodeLabelBatchRequest::getApiProduct()const
{
	return apiProduct_;
}

void RetrySoundCodeLabelBatchRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string RetrySoundCodeLabelBatchRequest::getApiRevision()const
{
	return apiRevision_;
}

void RetrySoundCodeLabelBatchRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

