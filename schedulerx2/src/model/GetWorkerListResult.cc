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

#include <alibabacloud/schedulerx2/model/GetWorkerListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

GetWorkerListResult::GetWorkerListResult() :
	ServiceResult()
{}

GetWorkerListResult::GetWorkerListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkerListResult::~GetWorkerListResult()
{}

void GetWorkerListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allWorkerInfosNode = dataNode["WorkerInfos"]["WorkerInfo"];
	for (auto dataNodeWorkerInfosWorkerInfo : allWorkerInfosNode)
	{
		Data::WorkerInfo workerInfoObject;
		if(!dataNodeWorkerInfosWorkerInfo["Ip"].isNull())
			workerInfoObject.ip = dataNodeWorkerInfosWorkerInfo["Ip"].asString();
		if(!dataNodeWorkerInfosWorkerInfo["Port"].isNull())
			workerInfoObject.port = std::stoi(dataNodeWorkerInfosWorkerInfo["Port"].asString());
		if(!dataNodeWorkerInfosWorkerInfo["WorkerAddress"].isNull())
			workerInfoObject.workerAddress = dataNodeWorkerInfosWorkerInfo["WorkerAddress"].asString();
		if(!dataNodeWorkerInfosWorkerInfo["Label"].isNull())
			workerInfoObject.label = dataNodeWorkerInfosWorkerInfo["Label"].asString();
		if(!dataNodeWorkerInfosWorkerInfo["Version"].isNull())
			workerInfoObject.version = dataNodeWorkerInfosWorkerInfo["Version"].asString();
		if(!dataNodeWorkerInfosWorkerInfo["Starter"].isNull())
			workerInfoObject.starter = dataNodeWorkerInfosWorkerInfo["Starter"].asString();
		data_.workerInfos.push_back(workerInfoObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetWorkerListResult::getMessage()const
{
	return message_;
}

GetWorkerListResult::Data GetWorkerListResult::getData()const
{
	return data_;
}

int GetWorkerListResult::getCode()const
{
	return code_;
}

bool GetWorkerListResult::getSuccess()const
{
	return success_;
}

