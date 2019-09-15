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

#include <alibabacloud/aegis/model/ModifyAccessKeyLeakDealRequest.h>

using AlibabaCloud::Aegis::Model::ModifyAccessKeyLeakDealRequest;

ModifyAccessKeyLeakDealRequest::ModifyAccessKeyLeakDealRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyAccessKeyLeakDeal")
{}

ModifyAccessKeyLeakDealRequest::~ModifyAccessKeyLeakDealRequest()
{}

std::string ModifyAccessKeyLeakDealRequest::getRemark()const
{
	return remark_;
}

void ModifyAccessKeyLeakDealRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", remark);
}

std::string ModifyAccessKeyLeakDealRequest::getType()const
{
	return type_;
}

void ModifyAccessKeyLeakDealRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ModifyAccessKeyLeakDealRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyAccessKeyLeakDealRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long ModifyAccessKeyLeakDealRequest::getId()const
{
	return id_;
}

void ModifyAccessKeyLeakDealRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

