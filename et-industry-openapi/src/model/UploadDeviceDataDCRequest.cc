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

#include <alibabacloud/et-industry-openapi/model/UploadDeviceDataDCRequest.h>

using AlibabaCloud::Et_industry_openapi::Model::UploadDeviceDataDCRequest;

UploadDeviceDataDCRequest::UploadDeviceDataDCRequest() :
	RoaServiceRequest("et-industry-openapi", "2019-06-10")
{
	setResourcePath("/api/report/point");
	setMethod(HttpRequest::Method::Post);
}

UploadDeviceDataDCRequest::~UploadDeviceDataDCRequest()
{}

std::vector<UploadDeviceDataDCRequest::data> UploadDeviceDataDCRequest::getData()const
{
	return data_;
}

void UploadDeviceDataDCRequest::setData(const std::vector<data>& data)
{
	data_ = data;
	for(int dep1 = 0; dep1!= data.size(); dep1++) {
		auto dataObj = data.at(dep1);
		std::string dataObjStr = "data." + std::to_string(dep1 + 1);
		for(int dep2 = 0; dep2!= dataObj.data.size(); dep2++) {
			auto dataObj = dataObj.data.at(dep2);
			std::string dataObjStr = dataObjStr + "data." + std::to_string(dep2 + 1);
			setParameter(dataObjStr + ".Device_id", dataObj.device_id);
			setParameter(dataObjStr + ".Create_time", dataObj.create_time);
			setParameter(dataObjStr + ".System_code", dataObj.system_code);
			setParameter(dataObjStr + ".Time", dataObj.time);
			setParameter(dataObjStr + ".Systime", dataObj.systime);
			setParameter(dataObjStr + ".Value", dataObj.value);
			setParameter(dataObjStr + ".Key", dataObj.key);
		}
		setParameter(dataObjStr + ".Pk", dataObj.pk);
	}
}

int UploadDeviceDataDCRequest::getTaskId()const
{
	return taskId_;
}

void UploadDeviceDataDCRequest::setTaskId(int taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", std::to_string(taskId));
}

