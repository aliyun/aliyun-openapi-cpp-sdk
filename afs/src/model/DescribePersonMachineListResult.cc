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

#include <alibabacloud/afs/model/DescribePersonMachineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribePersonMachineListResult::DescribePersonMachineListResult() :
	ServiceResult()
{}

DescribePersonMachineListResult::DescribePersonMachineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePersonMachineListResult::~DescribePersonMachineListResult()
{}

void DescribePersonMachineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPersonMachineRes = value["PersonMachineRes"];
	for (auto value : allPersonMachineRes)
	{
		PersonMachineRes personMachineResObject;
		if(!value["HasConfiguration"].isNull())
			personMachineResObject.hasConfiguration = value["HasConfiguration"].asString();
		auto allPersonMachines = value["PersonMachines"]["PersonMachine"];
		for (auto value : allPersonMachines)
		{
			PersonMachineRes::PersonMachine personMachineObject;
			if(!value["ConfigurationName"].isNull())
				personMachineObject.configurationName = value["ConfigurationName"].asString();
			if(!value["Appkey"].isNull())
				personMachineObject.appkey = value["Appkey"].asString();
			if(!value["ConfigurationMethod"].isNull())
				personMachineObject.configurationMethod = value["ConfigurationMethod"].asString();
			if(!value["ApplyType"].isNull())
				personMachineObject.applyType = value["ApplyType"].asString();
			if(!value["Scene"].isNull())
				personMachineObject.scene = value["Scene"].asString();
			if(!value["LastUpdate"].isNull())
				personMachineObject.lastUpdate = value["LastUpdate"].asString();
			personMachineResObject.personMachines.push_back(personMachineObject);
		}
		personMachineRes_.push_back(personMachineResObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();

}

std::vector<DescribePersonMachineListResult::PersonMachineRes> DescribePersonMachineListResult::getPersonMachineRes()const
{
	return personMachineRes_;
}

std::string DescribePersonMachineListResult::getBizCode()const
{
	return bizCode_;
}

