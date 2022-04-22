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

#include <alibabacloud/iot/model/BatchCreateSoundCodeLabelWithLabelsRequest.h>

using AlibabaCloud::Iot::Model::BatchCreateSoundCodeLabelWithLabelsRequest;

BatchCreateSoundCodeLabelWithLabelsRequest::BatchCreateSoundCodeLabelWithLabelsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchCreateSoundCodeLabelWithLabels")
{
	setMethod(HttpRequest::Method::Post);
}

BatchCreateSoundCodeLabelWithLabelsRequest::~BatchCreateSoundCodeLabelWithLabelsRequest()
{}

std::string BatchCreateSoundCodeLabelWithLabelsRequest::getScheduleCode()const
{
	return scheduleCode_;
}

void BatchCreateSoundCodeLabelWithLabelsRequest::setScheduleCode(const std::string& scheduleCode)
{
	scheduleCode_ = scheduleCode;
	setBodyParameter("ScheduleCode", scheduleCode);
}

std::string BatchCreateSoundCodeLabelWithLabelsRequest::getDescription()const
{
	return description_;
}

void BatchCreateSoundCodeLabelWithLabelsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string BatchCreateSoundCodeLabelWithLabelsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchCreateSoundCodeLabelWithLabelsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setBodyParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> BatchCreateSoundCodeLabelWithLabelsRequest::getLabels()const
{
	return labels_;
}

void BatchCreateSoundCodeLabelWithLabelsRequest::setLabels(const std::vector<std::string>& labels)
{
	labels_ = labels;
	for(int dep1 = 0; dep1!= labels.size(); dep1++) {
		setBodyParameter("Labels."+ std::to_string(dep1), labels.at(dep1));
	}
}

std::string BatchCreateSoundCodeLabelWithLabelsRequest::getApiProduct()const
{
	return apiProduct_;
}

void BatchCreateSoundCodeLabelWithLabelsRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string BatchCreateSoundCodeLabelWithLabelsRequest::getApiRevision()const
{
	return apiRevision_;
}

void BatchCreateSoundCodeLabelWithLabelsRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

