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

#include <alibabacloud/sas/model/CreateAssetRequest.h>

using AlibabaCloud::Sas::Model::CreateAssetRequest;

CreateAssetRequest::CreateAssetRequest() :
	RpcServiceRequest("sas", "2018-12-03", "CreateAsset")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAssetRequest::~CreateAssetRequest()
{}

std::string CreateAssetRequest::getInternetIp()const
{
	return internetIp_;
}

void CreateAssetRequest::setInternetIp(const std::string& internetIp)
{
	internetIp_ = internetIp;
	setParameter("InternetIp", internetIp);
}

std::string CreateAssetRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateAssetRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateAssetRequest::getOsName()const
{
	return osName_;
}

void CreateAssetRequest::setOsName(const std::string& osName)
{
	osName_ = osName;
	setParameter("OsName", osName);
}

std::string CreateAssetRequest::getOs()const
{
	return os_;
}

void CreateAssetRequest::setOs(const std::string& os)
{
	os_ = os;
	setParameter("Os", os);
}

std::string CreateAssetRequest::getInstanceName()const
{
	return instanceName_;
}

void CreateAssetRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}

std::string CreateAssetRequest::getIntranetIp()const
{
	return intranetIp_;
}

void CreateAssetRequest::setIntranetIp(const std::string& intranetIp)
{
	intranetIp_ = intranetIp;
	setParameter("IntranetIp", intranetIp);
}

std::string CreateAssetRequest::getStatus()const
{
	return status_;
}

void CreateAssetRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

