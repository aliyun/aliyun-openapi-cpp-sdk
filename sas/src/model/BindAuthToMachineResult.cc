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

#include <alibabacloud/sas/model/BindAuthToMachineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

BindAuthToMachineResult::BindAuthToMachineResult() :
	ServiceResult()
{}

BindAuthToMachineResult::BindAuthToMachineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BindAuthToMachineResult::~BindAuthToMachineResult()
{}

void BindAuthToMachineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResultCode"].isNull())
		resultCode_ = std::stoi(value["ResultCode"].asString());
	if(!value["InsufficientCount"].isNull())
		insufficientCount_ = std::stoi(value["InsufficientCount"].asString());
	if(!value["UnBindCount"].isNull())
		unBindCount_ = std::stoi(value["UnBindCount"].asString());
	if(!value["BindCount"].isNull())
		bindCount_ = std::stoi(value["BindCount"].asString());
	if(!value["InsufficientEcsCount"].isNull())
		insufficientEcsCount_ = std::stoi(value["InsufficientEcsCount"].asString());
	if(!value["InsufficientCoreCount"].isNull())
		insufficientCoreCount_ = std::stoi(value["InsufficientCoreCount"].asString());

}

int BindAuthToMachineResult::getInsufficientCoreCount()const
{
	return insufficientCoreCount_;
}

int BindAuthToMachineResult::getInsufficientCount()const
{
	return insufficientCount_;
}

int BindAuthToMachineResult::getBindCount()const
{
	return bindCount_;
}

int BindAuthToMachineResult::getInsufficientEcsCount()const
{
	return insufficientEcsCount_;
}

int BindAuthToMachineResult::getUnBindCount()const
{
	return unBindCount_;
}

int BindAuthToMachineResult::getResultCode()const
{
	return resultCode_;
}

