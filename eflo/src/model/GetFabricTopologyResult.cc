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

#include <alibabacloud/eflo/model/GetFabricTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

GetFabricTopologyResult::GetFabricTopologyResult() :
	ServiceResult()
{}

GetFabricTopologyResult::GetFabricTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFabricTopologyResult::~GetFabricTopologyResult()
{}

void GetFabricTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["RegionId"].isNull())
		content_.regionId = contentNode["RegionId"].asString();
	if(!contentNode["VpdId"].isNull())
		content_.vpdId = contentNode["VpdId"].asString();
	if(!contentNode["VpcId"].isNull())
		content_.vpcId = contentNode["VpcId"].asString();
	if(!contentNode["ClusterId"].isNull())
		content_.clusterId = contentNode["ClusterId"].asString();
	auto allTopoInfoNode = contentNode["TopoInfo"]["Layer"];
	for (auto contentNodeTopoInfoLayer : allTopoInfoNode)
	{
		Content::Layer layerObject;
		if(!contentNodeTopoInfoLayer["LayerType"].isNull())
			layerObject.layerType = contentNodeTopoInfoLayer["LayerType"].asString();
		if(!contentNodeTopoInfoLayer["LayerName"].isNull())
			layerObject.layerName = contentNodeTopoInfoLayer["LayerName"].asString();
		auto allNextLayer = value["NextLayer"]["Layer"];
		for (auto value : allNextLayer)
			layerObject.nextLayer.push_back(value.asString());
		content_.topoInfo.push_back(layerObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetFabricTopologyResult::getMessage()const
{
	return message_;
}

GetFabricTopologyResult::Content GetFabricTopologyResult::getContent()const
{
	return content_;
}

int GetFabricTopologyResult::getCode()const
{
	return code_;
}

