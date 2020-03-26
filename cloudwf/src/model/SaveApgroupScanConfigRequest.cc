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

#include <alibabacloud/cloudwf/model/SaveApgroupScanConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApgroupScanConfigRequest;

SaveApgroupScanConfigRequest::SaveApgroupScanConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApgroupScanConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SaveApgroupScanConfigRequest::~SaveApgroupScanConfigRequest()
{}

std::string SaveApgroupScanConfigRequest::getJsonData()const
{
	return jsonData_;
}

void SaveApgroupScanConfigRequest::setJsonData(const std::string& jsonData)
{
	jsonData_ = jsonData;
	setParameter("JsonData", jsonData);
}

long SaveApgroupScanConfigRequest::getApgroupId()const
{
	return apgroupId_;
}

void SaveApgroupScanConfigRequest::setApgroupId(long apgroupId)
{
	apgroupId_ = apgroupId;
	setParameter("ApgroupId", std::to_string(apgroupId));
}

std::string SaveApgroupScanConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApgroupScanConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

