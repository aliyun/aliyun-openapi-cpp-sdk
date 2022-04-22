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

#include <alibabacloud/iot/model/PackageSoundCodeLabelBatchAudioRequest.h>

using AlibabaCloud::Iot::Model::PackageSoundCodeLabelBatchAudioRequest;

PackageSoundCodeLabelBatchAudioRequest::PackageSoundCodeLabelBatchAudioRequest() :
	RpcServiceRequest("iot", "2018-01-20", "PackageSoundCodeLabelBatchAudio")
{
	setMethod(HttpRequest::Method::Post);
}

PackageSoundCodeLabelBatchAudioRequest::~PackageSoundCodeLabelBatchAudioRequest()
{}

std::string PackageSoundCodeLabelBatchAudioRequest::getBatchCode()const
{
	return batchCode_;
}

void PackageSoundCodeLabelBatchAudioRequest::setBatchCode(const std::string& batchCode)
{
	batchCode_ = batchCode;
	setBodyParameter("BatchCode", batchCode);
}

std::string PackageSoundCodeLabelBatchAudioRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void PackageSoundCodeLabelBatchAudioRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::string PackageSoundCodeLabelBatchAudioRequest::getApiProduct()const
{
	return apiProduct_;
}

void PackageSoundCodeLabelBatchAudioRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string PackageSoundCodeLabelBatchAudioRequest::getApiRevision()const
{
	return apiRevision_;
}

void PackageSoundCodeLabelBatchAudioRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

