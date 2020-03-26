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

#include <alibabacloud/cloudwf/model/SaveApScanConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApScanConfigRequest;

SaveApScanConfigRequest::SaveApScanConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApScanConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SaveApScanConfigRequest::~SaveApScanConfigRequest()
{}

std::string SaveApScanConfigRequest::getJsonData()const
{
	return jsonData_;
}

void SaveApScanConfigRequest::setJsonData(const std::string& jsonData)
{
	jsonData_ = jsonData;
	setParameter("JsonData", jsonData);
}

std::string SaveApScanConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApScanConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long SaveApScanConfigRequest::getApConfigId()const
{
	return apConfigId_;
}

void SaveApScanConfigRequest::setApConfigId(long apConfigId)
{
	apConfigId_ = apConfigId;
	setParameter("ApConfigId", std::to_string(apConfigId));
}

