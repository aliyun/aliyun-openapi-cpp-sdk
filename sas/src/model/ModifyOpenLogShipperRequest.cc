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

#include <alibabacloud/sas/model/ModifyOpenLogShipperRequest.h>

using AlibabaCloud::Sas::Model::ModifyOpenLogShipperRequest;

ModifyOpenLogShipperRequest::ModifyOpenLogShipperRequest() :
	RpcServiceRequest("sas", "2018-12-03", "ModifyOpenLogShipper")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyOpenLogShipperRequest::~ModifyOpenLogShipperRequest()
{}

std::string ModifyOpenLogShipperRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyOpenLogShipperRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyOpenLogShipperRequest::getFrom()const
{
	return from_;
}

void ModifyOpenLogShipperRequest::setFrom(const std::string& from)
{
	from_ = from;
	setParameter("From", from);
}

