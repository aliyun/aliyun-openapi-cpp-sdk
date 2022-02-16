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

#include <alibabacloud/emr/model/CreateClusterV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

CreateClusterV2Result::CreateClusterV2Result() :
	ServiceResult()
{}

CreateClusterV2Result::CreateClusterV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateClusterV2Result::~CreateClusterV2Result()
{}

void CreateClusterV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["EmrOrderId"].isNull())
		emrOrderId_ = value["EmrOrderId"].asString();
	if(!value["MasterOrderId"].isNull())
		masterOrderId_ = value["MasterOrderId"].asString();
	if(!value["CoreOrderId"].isNull())
		coreOrderId_ = value["CoreOrderId"].asString();

}

std::string CreateClusterV2Result::getMasterOrderId()const
{
	return masterOrderId_;
}

std::string CreateClusterV2Result::getCoreOrderId()const
{
	return coreOrderId_;
}

std::string CreateClusterV2Result::getClusterId()const
{
	return clusterId_;
}

std::string CreateClusterV2Result::getEmrOrderId()const
{
	return emrOrderId_;
}

