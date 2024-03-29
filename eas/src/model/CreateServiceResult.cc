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

#include <alibabacloud/eas/model/CreateServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

CreateServiceResult::CreateServiceResult() :
	ServiceResult()
{}

CreateServiceResult::CreateServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateServiceResult::~CreateServiceResult()
{}

void CreateServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ServiceId"].isNull())
		serviceId_ = value["ServiceId"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["InternetEndpoint"].isNull())
		internetEndpoint_ = value["InternetEndpoint"].asString();
	if(!value["IntranetEndpoint"].isNull())
		intranetEndpoint_ = value["IntranetEndpoint"].asString();

}

std::string CreateServiceResult::getStatus()const
{
	return status_;
}

std::string CreateServiceResult::getServiceName()const
{
	return serviceName_;
}

std::string CreateServiceResult::getInternetEndpoint()const
{
	return internetEndpoint_;
}

std::string CreateServiceResult::getRegion()const
{
	return region_;
}

std::string CreateServiceResult::getIntranetEndpoint()const
{
	return intranetEndpoint_;
}

std::string CreateServiceResult::getServiceId()const
{
	return serviceId_;
}

