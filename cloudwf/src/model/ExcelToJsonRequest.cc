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

#include <alibabacloud/cloudwf/model/ExcelToJsonRequest.h>

using AlibabaCloud::Cloudwf::Model::ExcelToJsonRequest;

ExcelToJsonRequest::ExcelToJsonRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "ExcelToJson")
{
	setMethod(HttpRequest::Method::Post);
}

ExcelToJsonRequest::~ExcelToJsonRequest()
{}

std::string ExcelToJsonRequest::getUploadData()const
{
	return uploadData_;
}

void ExcelToJsonRequest::setUploadData(const std::string& uploadData)
{
	uploadData_ = uploadData;
	setParameter("UploadData", uploadData);
}

std::string ExcelToJsonRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ExcelToJsonRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

