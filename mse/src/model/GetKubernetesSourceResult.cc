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

#include <alibabacloud/mse/model/GetKubernetesSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetKubernetesSourceResult::GetKubernetesSourceResult() :
	ServiceResult()
{}

GetKubernetesSourceResult::GetKubernetesSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetKubernetesSourceResult::~GetKubernetesSourceResult()
{}

void GetKubernetesSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["K8sSources"];
	for (auto valueDataK8sSources : allDataNode)
	{
		K8sSources dataObject;
		if(!valueDataK8sSources["Name"].isNull())
			dataObject.name = valueDataK8sSources["Name"].asString();
		if(!valueDataK8sSources["Cluster"].isNull())
			dataObject.cluster = valueDataK8sSources["Cluster"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetKubernetesSourceResult::getMessage()const
{
	return message_;
}

int GetKubernetesSourceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetKubernetesSourceResult::K8sSources> GetKubernetesSourceResult::getData()const
{
	return data_;
}

int GetKubernetesSourceResult::getCode()const
{
	return code_;
}

bool GetKubernetesSourceResult::getSuccess()const
{
	return success_;
}

