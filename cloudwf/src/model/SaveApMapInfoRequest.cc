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

#include <alibabacloud/cloudwf/model/SaveApMapInfoRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApMapInfoRequest;

SaveApMapInfoRequest::SaveApMapInfoRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApMapInfo")
{}

SaveApMapInfoRequest::~SaveApMapInfoRequest()
{}

std::string SaveApMapInfoRequest::getJsonData()const
{
	return jsonData_;
}

void SaveApMapInfoRequest::setJsonData(const std::string& jsonData)
{
	jsonData_ = jsonData;
	setCoreParameter("JsonData", jsonData);
}

std::string SaveApMapInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApMapInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

