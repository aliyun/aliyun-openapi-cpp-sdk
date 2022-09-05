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

#include <alibabacloud/arms/model/GetStackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetStackResult::GetStackResult() :
	ServiceResult()
{}

GetStackResult::GetStackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStackResult::~GetStackResult()
{}

void GetStackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStackInfoNode = value["StackInfo"]["StackInfoItem"];
	for (auto valueStackInfoStackInfoItem : allStackInfoNode)
	{
		StackInfoItem stackInfoObject;
		if(!valueStackInfoStackInfoItem["StartTime"].isNull())
			stackInfoObject.startTime = std::stol(valueStackInfoStackInfoItem["StartTime"].asString());
		if(!valueStackInfoStackInfoItem["Exception"].isNull())
			stackInfoObject.exception = valueStackInfoStackInfoItem["Exception"].asString();
		if(!valueStackInfoStackInfoItem["Api"].isNull())
			stackInfoObject.api = valueStackInfoStackInfoItem["Api"].asString();
		if(!valueStackInfoStackInfoItem["Line"].isNull())
			stackInfoObject.line = valueStackInfoStackInfoItem["Line"].asString();
		if(!valueStackInfoStackInfoItem["Duration"].isNull())
			stackInfoObject.duration = std::stol(valueStackInfoStackInfoItem["Duration"].asString());
		if(!valueStackInfoStackInfoItem["RpcId"].isNull())
			stackInfoObject.rpcId = valueStackInfoStackInfoItem["RpcId"].asString();
		if(!valueStackInfoStackInfoItem["ServiceName"].isNull())
			stackInfoObject.serviceName = valueStackInfoStackInfoItem["ServiceName"].asString();
		auto extInfoNode = value["ExtInfo"];
		if(!extInfoNode["Type"].isNull())
			stackInfoObject.extInfo.type = extInfoNode["Type"].asString();
		if(!extInfoNode["Info"].isNull())
			stackInfoObject.extInfo.info = extInfoNode["Info"].asString();
		stackInfo_.push_back(stackInfoObject);
	}

}

std::vector<GetStackResult::StackInfoItem> GetStackResult::getStackInfo()const
{
	return stackInfo_;
}

