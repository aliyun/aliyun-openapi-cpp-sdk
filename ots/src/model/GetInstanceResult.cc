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

#include <alibabacloud/ots/model/GetInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ots;
using namespace AlibabaCloud::Ots::Model;

GetInstanceResult::GetInstanceResult() :
	ServiceResult()
{}

GetInstanceResult::GetInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceResult::~GetInstanceResult()
{}

void GetInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto instanceInfoNode = value["InstanceInfo"];
	if(!instanceInfoNode["InstanceName"].isNull())
		instanceInfo_.instanceName = instanceInfoNode["InstanceName"].asString();
	if(!instanceInfoNode["UserId"].isNull())
		instanceInfo_.userId = instanceInfoNode["UserId"].asString();
	if(!instanceInfoNode["Network"].isNull())
		instanceInfo_.network = instanceInfoNode["Network"].asString();
	if(!instanceInfoNode["Status"].isNull())
		instanceInfo_.status = std::stoi(instanceInfoNode["Status"].asString());
	if(!instanceInfoNode["WriteCapacity"].isNull())
		instanceInfo_.writeCapacity = std::stoi(instanceInfoNode["WriteCapacity"].asString());
	if(!instanceInfoNode["ReadCapacity"].isNull())
		instanceInfo_.readCapacity = std::stoi(instanceInfoNode["ReadCapacity"].asString());
	if(!instanceInfoNode["Description"].isNull())
		instanceInfo_.description = instanceInfoNode["Description"].asString();
	if(!instanceInfoNode["CreateTime"].isNull())
		instanceInfo_.createTime = instanceInfoNode["CreateTime"].asString();
	if(!instanceInfoNode["ClusterType"].isNull())
		instanceInfo_.clusterType = instanceInfoNode["ClusterType"].asString();
	auto allTagInfos = value["TagInfos"]["TagInfo"];
	for (auto value : allTagInfos)
	{
		InstanceInfo::TagInfo tagInfoObject;
		if(!value["TagKey"].isNull())
			tagInfoObject.tagKey = value["TagKey"].asString();
		if(!value["TagValue"].isNull())
			tagInfoObject.tagValue = value["TagValue"].asString();
		instanceInfo_.tagInfos.push_back(tagInfoObject);
	}
	auto quotaNode = instanceInfoNode["Quota"];
	if(!quotaNode["EntityQuota"].isNull())
		instanceInfo_.quota.entityQuota = std::stoi(quotaNode["EntityQuota"].asString());

}

GetInstanceResult::InstanceInfo GetInstanceResult::getInstanceInfo()const
{
	return instanceInfo_;
}

