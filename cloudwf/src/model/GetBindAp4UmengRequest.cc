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

#include <alibabacloud/cloudwf/model/GetBindAp4UmengRequest.h>

using AlibabaCloud::Cloudwf::Model::GetBindAp4UmengRequest;

GetBindAp4UmengRequest::GetBindAp4UmengRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetBindAp4Umeng")
{
	setMethod(HttpRequest::Method::Post);
}

GetBindAp4UmengRequest::~GetBindAp4UmengRequest()
{}

std::string GetBindAp4UmengRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetBindAp4UmengRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

