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

#include <alibabacloud/ens/model/PreCreateEnsServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

PreCreateEnsServiceResult::PreCreateEnsServiceResult() :
	ServiceResult()
{}

PreCreateEnsServiceResult::PreCreateEnsServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PreCreateEnsServiceResult::~PreCreateEnsServiceResult()
{}

void PreCreateEnsServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BuyResourcesDetail"].isNull())
		buyResourcesDetail_ = value["BuyResourcesDetail"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["EnsServiceId"].isNull())
		ensServiceId_ = value["EnsServiceId"].asString();
	if(!value["NetLevel"].isNull())
		netLevel_ = value["NetLevel"].asString();

}

std::string PreCreateEnsServiceResult::getEnsServiceId()const
{
	return ensServiceId_;
}

std::string PreCreateEnsServiceResult::getNetLevel()const
{
	return netLevel_;
}

int PreCreateEnsServiceResult::getCode()const
{
	return code_;
}

std::string PreCreateEnsServiceResult::getBuyResourcesDetail()const
{
	return buyResourcesDetail_;
}

