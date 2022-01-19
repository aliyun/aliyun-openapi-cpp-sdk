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

#include <alibabacloud/mse/model/ListAnsServiceClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListAnsServiceClustersResult::ListAnsServiceClustersResult() :
	ServiceResult()
{}

ListAnsServiceClustersResult::ListAnsServiceClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAnsServiceClustersResult::~ListAnsServiceClustersResult()
{}

void ListAnsServiceClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ProtectThreshold"].isNull())
		data_.protectThreshold = std::stof(dataNode["ProtectThreshold"].asString());
	if(!dataNode["GroupName"].isNull())
		data_.groupName = dataNode["GroupName"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["SelectorType"].isNull())
		data_.selectorType = dataNode["SelectorType"].asString();
	if(!dataNode["Metadata"].isNull())
		data_.metadata = dataNode["Metadata"].asString();
	if(!dataNode["Ephemeral"].isNull())
		data_.ephemeral = dataNode["Ephemeral"].asString() == "true";
	auto allClustersNode = dataNode["Clusters"]["NacosAnsCluster"];
	for (auto dataNodeClustersNacosAnsCluster : allClustersNode)
	{
		Data::NacosAnsCluster nacosAnsClusterObject;
		if(!dataNodeClustersNacosAnsCluster["DefaultCheckPort"].isNull())
			nacosAnsClusterObject.defaultCheckPort = std::stoi(dataNodeClustersNacosAnsCluster["DefaultCheckPort"].asString());
		if(!dataNodeClustersNacosAnsCluster["HealthCheckerType"].isNull())
			nacosAnsClusterObject.healthCheckerType = dataNodeClustersNacosAnsCluster["HealthCheckerType"].asString();
		if(!dataNodeClustersNacosAnsCluster["UseIPPort4Check"].isNull())
			nacosAnsClusterObject.useIPPort4Check = dataNodeClustersNacosAnsCluster["UseIPPort4Check"].asString() == "true";
		if(!dataNodeClustersNacosAnsCluster["ServiceName"].isNull())
			nacosAnsClusterObject.serviceName = dataNodeClustersNacosAnsCluster["ServiceName"].asString();
		if(!dataNodeClustersNacosAnsCluster["Name"].isNull())
			nacosAnsClusterObject.name = dataNodeClustersNacosAnsCluster["Name"].asString();
		if(!dataNodeClustersNacosAnsCluster["DefaultPort"].isNull())
			nacosAnsClusterObject.defaultPort = std::stoi(dataNodeClustersNacosAnsCluster["DefaultPort"].asString());
		if(!dataNodeClustersNacosAnsCluster["Metadata"].isNull())
			nacosAnsClusterObject.metadata = dataNodeClustersNacosAnsCluster["Metadata"].asString();
		data_.clusters.push_back(nacosAnsClusterObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAnsServiceClustersResult::getMessage()const
{
	return message_;
}

ListAnsServiceClustersResult::Data ListAnsServiceClustersResult::getData()const
{
	return data_;
}

std::string ListAnsServiceClustersResult::getErrorCode()const
{
	return errorCode_;
}

bool ListAnsServiceClustersResult::getSuccess()const
{
	return success_;
}

