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

#include <alibabacloud/smartag/model/DescribeSagECRouteBackupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagECRouteBackupAttributeResult::DescribeSagECRouteBackupAttributeResult() :
	ServiceResult()
{}

DescribeSagECRouteBackupAttributeResult::DescribeSagECRouteBackupAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagECRouteBackupAttributeResult::~DescribeSagECRouteBackupAttributeResult()
{}

void DescribeSagECRouteBackupAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCidrsNode = value["Cidrs"]["Cidr"];
	for (auto valueCidrsCidr : allCidrsNode)
	{
		Cidr cidrsObject;
		if(!valueCidrsCidr["EnableBackup"].isNull())
			cidrsObject.enableBackup = valueCidrsCidr["EnableBackup"].asString() == "true";
		if(!valueCidrsCidr["Cidr"].isNull())
			cidrsObject.cidr = valueCidrsCidr["Cidr"].asString();
		cidrs_.push_back(cidrsObject);
	}
	if(!value["HcIp"].isNull())
		hcIp_ = value["HcIp"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ExpressConnectionInterface"].isNull())
		expressConnectionInterface_ = value["ExpressConnectionInterface"].asString();
	if(!value["RouteBackup"].isNull())
		routeBackup_ = value["RouteBackup"].asString() == "true";
	if(!value["ExpressConnectionNexthop"].isNull())
		expressConnectionNexthop_ = value["ExpressConnectionNexthop"].asString();
	if(!value["SagId"].isNull())
		sagId_ = value["SagId"].asString();

}

std::string DescribeSagECRouteBackupAttributeResult::getHcIp()const
{
	return hcIp_;
}

std::string DescribeSagECRouteBackupAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeSagECRouteBackupAttributeResult::getExpressConnectionInterface()const
{
	return expressConnectionInterface_;
}

bool DescribeSagECRouteBackupAttributeResult::getRouteBackup()const
{
	return routeBackup_;
}

std::string DescribeSagECRouteBackupAttributeResult::getExpressConnectionNexthop()const
{
	return expressConnectionNexthop_;
}

std::string DescribeSagECRouteBackupAttributeResult::getSagId()const
{
	return sagId_;
}

std::vector<DescribeSagECRouteBackupAttributeResult::Cidr> DescribeSagECRouteBackupAttributeResult::getCidrs()const
{
	return cidrs_;
}

