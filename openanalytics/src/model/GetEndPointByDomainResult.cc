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

#include <alibabacloud/openanalytics/model/GetEndPointByDomainResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Openanalytics;
using namespace AlibabaCloud::Openanalytics::Model;

GetEndPointByDomainResult::GetEndPointByDomainResult() :
	ServiceResult()
{}

GetEndPointByDomainResult::GetEndPointByDomainResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEndPointByDomainResult::~GetEndPointByDomainResult()
{}

void GetEndPointByDomainResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto endPointInfoNode = value["EndPointInfo"];
	if(!endPointInfoNode["endPointID"].isNull())
		endPointInfo_.endPointID = endPointInfoNode["endPointID"].asString();
	if(!endPointInfoNode["domainURL"].isNull())
		endPointInfo_.domainURL = endPointInfoNode["domainURL"].asString();
	if(!endPointInfoNode["host"].isNull())
		endPointInfo_.host = endPointInfoNode["host"].asString();
	if(!endPointInfoNode["port"].isNull())
		endPointInfo_.port = endPointInfoNode["port"].asString();
	if(!endPointInfoNode["networkType"].isNull())
		endPointInfo_.networkType = endPointInfoNode["networkType"].asString();
	if(!endPointInfoNode["vpcID"].isNull())
		endPointInfo_.vpcID = endPointInfoNode["vpcID"].asString();
	if(!endPointInfoNode["vSwitch"].isNull())
		endPointInfo_.vSwitch = endPointInfoNode["vSwitch"].asString();
	if(!endPointInfoNode["zone"].isNull())
		endPointInfo_.zone = endPointInfoNode["zone"].asString();
	if(!endPointInfoNode["allowIP"].isNull())
		endPointInfo_.allowIP = endPointInfoNode["allowIP"].asString();
	if(!endPointInfoNode["cloudInstanceID"].isNull())
		endPointInfo_.cloudInstanceID = endPointInfoNode["cloudInstanceID"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

GetEndPointByDomainResult::EndPointInfo GetEndPointByDomainResult::getEndPointInfo()const
{
	return endPointInfo_;
}

std::string GetEndPointByDomainResult::getRegionId()const
{
	return regionId_;
}

