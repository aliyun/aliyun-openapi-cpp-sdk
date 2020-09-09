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

#include <alibabacloud/vod/model/CreateMediaDNALibResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

CreateMediaDNALibResult::CreateMediaDNALibResult() :
	ServiceResult()
{}

CreateMediaDNALibResult::CreateMediaDNALibResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMediaDNALibResult::~CreateMediaDNALibResult()
{}

void CreateMediaDNALibResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto aIDNALibInfoNode = value["AIDNALibInfo"];
	if(!aIDNALibInfoNode["FpDBId"].isNull())
		aIDNALibInfo_.fpDBId = aIDNALibInfoNode["FpDBId"].asString();
	if(!aIDNALibInfoNode["ModelType"].isNull())
		aIDNALibInfo_.modelType = aIDNALibInfoNode["ModelType"].asString();
	if(!aIDNALibInfoNode["State"].isNull())
		aIDNALibInfo_.state = aIDNALibInfoNode["State"].asString();

}

CreateMediaDNALibResult::AIDNALibInfo CreateMediaDNALibResult::getAIDNALibInfo()const
{
	return aIDNALibInfo_;
}

