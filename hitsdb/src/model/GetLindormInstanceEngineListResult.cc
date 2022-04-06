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

#include <alibabacloud/hitsdb/model/GetLindormInstanceEngineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

GetLindormInstanceEngineListResult::GetLindormInstanceEngineListResult() :
	ServiceResult()
{}

GetLindormInstanceEngineListResult::GetLindormInstanceEngineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLindormInstanceEngineListResult::~GetLindormInstanceEngineListResult()
{}

void GetLindormInstanceEngineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEngineListNode = value["EngineList"]["EngineInfo"];
	for (auto valueEngineListEngineInfo : allEngineListNode)
	{
		EngineInfo engineListObject;
		if(!valueEngineListEngineInfo["EngineType"].isNull())
			engineListObject.engineType = valueEngineListEngineInfo["EngineType"].asString();
		auto allNetInfoListNode = valueEngineListEngineInfo["NetInfoList"]["NetInfo"];
		for (auto valueEngineListEngineInfoNetInfoListNetInfo : allNetInfoListNode)
		{
			EngineInfo::NetInfo netInfoListObject;
			if(!valueEngineListEngineInfoNetInfoListNetInfo["AccessType"].isNull())
				netInfoListObject.accessType = std::stoi(valueEngineListEngineInfoNetInfoListNetInfo["AccessType"].asString());
			if(!valueEngineListEngineInfoNetInfoListNetInfo["Port"].isNull())
				netInfoListObject.port = std::stoi(valueEngineListEngineInfoNetInfoListNetInfo["Port"].asString());
			if(!valueEngineListEngineInfoNetInfoListNetInfo["ConnectionString"].isNull())
				netInfoListObject.connectionString = valueEngineListEngineInfoNetInfoListNetInfo["ConnectionString"].asString();
			if(!valueEngineListEngineInfoNetInfoListNetInfo["NetType"].isNull())
				netInfoListObject.netType = valueEngineListEngineInfoNetInfoListNetInfo["NetType"].asString();
			engineListObject.netInfoList.push_back(netInfoListObject);
		}
		engineList_.push_back(engineListObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::vector<GetLindormInstanceEngineListResult::EngineInfo> GetLindormInstanceEngineListResult::getEngineList()const
{
	return engineList_;
}

std::string GetLindormInstanceEngineListResult::getInstanceId()const
{
	return instanceId_;
}

