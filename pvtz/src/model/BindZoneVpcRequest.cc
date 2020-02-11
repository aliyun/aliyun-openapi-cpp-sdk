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

#include <alibabacloud/pvtz/model/BindZoneVpcRequest.h>

using AlibabaCloud::Pvtz::Model::BindZoneVpcRequest;

BindZoneVpcRequest::BindZoneVpcRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "BindZoneVpc")
{
	setMethod(HttpRequest::Method::Post);
}

BindZoneVpcRequest::~BindZoneVpcRequest()
{}

std::string BindZoneVpcRequest::getUserClientIp()const
{
	return userClientIp_;
}

void BindZoneVpcRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string BindZoneVpcRequest::getZoneId()const
{
	return zoneId_;
}

void BindZoneVpcRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string BindZoneVpcRequest::getLang()const
{
	return lang_;
}

void BindZoneVpcRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::vector<BindZoneVpcRequest::Vpcs> BindZoneVpcRequest::getVpcs()const
{
	return vpcs_;
}

void BindZoneVpcRequest::setVpcs(const std::vector<Vpcs>& vpcs)
{
	vpcs_ = vpcs;
	for(int dep1 = 0; dep1!= vpcs.size(); dep1++) {
		auto vpcsObj = vpcs.at(dep1);
		std::string vpcsObjStr = "Vpcs." + std::to_string(dep1 + 1);
		setParameter(vpcsObjStr + ".RegionId", vpcsObj.regionId);
		setParameter(vpcsObjStr + ".VpcId", vpcsObj.vpcId);
	}
}

