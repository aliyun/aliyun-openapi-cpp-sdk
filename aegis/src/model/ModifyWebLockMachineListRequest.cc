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

#include <alibabacloud/aegis/model/ModifyWebLockMachineListRequest.h>

using AlibabaCloud::Aegis::Model::ModifyWebLockMachineListRequest;

ModifyWebLockMachineListRequest::ModifyWebLockMachineListRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyWebLockMachineList")
{}

ModifyWebLockMachineListRequest::~ModifyWebLockMachineListRequest()
{}

std::string ModifyWebLockMachineListRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyWebLockMachineListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyWebLockMachineListRequest::getLang()const
{
	return lang_;
}

void ModifyWebLockMachineListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ModifyWebLockMachineListRequest::getUuids()const
{
	return uuids_;
}

void ModifyWebLockMachineListRequest::setUuids(const std::string& uuids)
{
	uuids_ = uuids;
	setCoreParameter("Uuids", uuids);
}

