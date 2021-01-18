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

#include <alibabacloud/dg/model/DownloadGatewayProgramRequest.h>

using AlibabaCloud::Dg::Model::DownloadGatewayProgramRequest;

DownloadGatewayProgramRequest::DownloadGatewayProgramRequest() :
	RpcServiceRequest("dg", "2019-03-27", "DownloadGatewayProgram")
{
	setMethod(HttpRequest::Method::Post);
}

DownloadGatewayProgramRequest::~DownloadGatewayProgramRequest()
{}

std::string DownloadGatewayProgramRequest::getUserOS()const
{
	return userOS_;
}

void DownloadGatewayProgramRequest::setUserOS(const std::string& userOS)
{
	userOS_ = userOS;
	setBodyParameter("UserOS", userOS);
}

std::string DownloadGatewayProgramRequest::getDgVersion()const
{
	return dgVersion_;
}

void DownloadGatewayProgramRequest::setDgVersion(const std::string& dgVersion)
{
	dgVersion_ = dgVersion;
	setBodyParameter("DgVersion", dgVersion);
}

