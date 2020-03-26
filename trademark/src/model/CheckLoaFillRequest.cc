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

#include <alibabacloud/trademark/model/CheckLoaFillRequest.h>

using AlibabaCloud::Trademark::Model::CheckLoaFillRequest;

CheckLoaFillRequest::CheckLoaFillRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "CheckLoaFill")
{
	setMethod(HttpRequest::Method::Post);
}

CheckLoaFillRequest::~CheckLoaFillRequest()
{}

std::string CheckLoaFillRequest::getOssKey()const
{
	return ossKey_;
}

void CheckLoaFillRequest::setOssKey(const std::string& ossKey)
{
	ossKey_ = ossKey;
	setParameter("OssKey", ossKey);
}

std::string CheckLoaFillRequest::getType()const
{
	return type_;
}

void CheckLoaFillRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

