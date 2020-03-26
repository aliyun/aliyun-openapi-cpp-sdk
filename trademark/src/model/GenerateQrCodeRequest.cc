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

#include <alibabacloud/trademark/model/GenerateQrCodeRequest.h>

using AlibabaCloud::Trademark::Model::GenerateQrCodeRequest;

GenerateQrCodeRequest::GenerateQrCodeRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "GenerateQrCode")
{
	setMethod(HttpRequest::Method::Post);
}

GenerateQrCodeRequest::~GenerateQrCodeRequest()
{}

std::string GenerateQrCodeRequest::getOssKey()const
{
	return ossKey_;
}

void GenerateQrCodeRequest::setOssKey(const std::string& ossKey)
{
	ossKey_ = ossKey;
	setParameter("OssKey", ossKey);
}

std::string GenerateQrCodeRequest::getFieldKey()const
{
	return fieldKey_;
}

void GenerateQrCodeRequest::setFieldKey(const std::string& fieldKey)
{
	fieldKey_ = fieldKey;
	setParameter("FieldKey", fieldKey);
}

std::string GenerateQrCodeRequest::getUuid()const
{
	return uuid_;
}

void GenerateQrCodeRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setParameter("Uuid", uuid);
}

