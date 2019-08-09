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

#include <alibabacloud/aegis/model/OperateAgentClientInstallResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

OperateAgentClientInstallResult::OperateAgentClientInstallResult() :
	ServiceResult()
{}

OperateAgentClientInstallResult::OperateAgentClientInstallResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OperateAgentClientInstallResult::~OperateAgentClientInstallResult()
{}

void OperateAgentClientInstallResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allAegisCelintInstallResposeList = value["AegisCelintInstallResposeList"]["AegisCelintInstallRespose"];
	for (auto value : allAegisCelintInstallResposeList)
	{
		AegisCelintInstallRespose aegisCelintInstallResposeListObject;
		if(!value["InstanceId"].isNull())
			aegisCelintInstallResposeListObject.instanceId = value["InstanceId"].asString();
		if(!value["RecordId"].isNull())
			aegisCelintInstallResposeListObject.recordId = std::stol(value["RecordId"].asString());
		if(!value["Uuid"].isNull())
			aegisCelintInstallResposeListObject.uuid = value["Uuid"].asString();
		aegisCelintInstallResposeList_.push_back(aegisCelintInstallResposeListObject);
	}

}

std::vector<OperateAgentClientInstallResult::AegisCelintInstallRespose> OperateAgentClientInstallResult::getAegisCelintInstallResposeList()const
{
	return aegisCelintInstallResposeList_;
}

