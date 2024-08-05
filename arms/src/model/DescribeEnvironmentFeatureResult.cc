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

#include <alibabacloud/arms/model/DescribeEnvironmentFeatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeEnvironmentFeatureResult::DescribeEnvironmentFeatureResult() :
	ServiceResult()
{}

DescribeEnvironmentFeatureResult::DescribeEnvironmentFeatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnvironmentFeatureResult::~DescribeEnvironmentFeatureResult()
{}

void DescribeEnvironmentFeatureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto featureNode = dataNode["Feature"];
	if(!featureNode["Alias"].isNull())
		data_.feature.alias = featureNode["Alias"].asString();
	if(!featureNode["Config"].isNull())
		data_.feature.config = featureNode["Config"].asString();
	if(!featureNode["Description"].isNull())
		data_.feature.description = featureNode["Description"].asString();
	if(!featureNode["EnvironmentId"].isNull())
		data_.feature.environmentId = featureNode["EnvironmentId"].asString();
	if(!featureNode["Icon"].isNull())
		data_.feature.icon = featureNode["Icon"].asString();
	if(!featureNode["Language"].isNull())
		data_.feature.language = featureNode["Language"].asString();
	if(!featureNode["LatestVersion"].isNull())
		data_.feature.latestVersion = featureNode["LatestVersion"].asString();
	if(!featureNode["Name"].isNull())
		data_.feature.name = featureNode["Name"].asString();
	if(!featureNode["Status"].isNull())
		data_.feature.status = featureNode["Status"].asString();
	if(!featureNode["Version"].isNull())
		data_.feature.version = featureNode["Version"].asString();
	if(!featureNode["Managed"].isNull())
		data_.feature.managed = featureNode["Managed"].asString() == "true";
	auto featureStatusNode = dataNode["FeatureStatus"];
	if(!featureStatusNode["Name"].isNull())
		data_.featureStatus.name = featureStatusNode["Name"].asString();
	if(!featureStatusNode["Namespace"].isNull())
		data_.featureStatus._namespace = featureStatusNode["Namespace"].asString();
	if(!featureStatusNode["Status"].isNull())
		data_.featureStatus.status = featureStatusNode["Status"].asString();
	if(!featureStatusNode["SecurityGroupId"].isNull())
		data_.featureStatus.securityGroupId = featureStatusNode["SecurityGroupId"].asString();
	if(!featureStatusNode["VSwitchId"].isNull())
		data_.featureStatus.vSwitchId = featureStatusNode["VSwitchId"].asString();
	if(!featureStatusNode["BindResourceId"].isNull())
		data_.featureStatus.bindResourceId = featureStatusNode["BindResourceId"].asString();
	auto allFeatureContainersNode = featureStatusNode["FeatureContainers"]["featureContainersItem"];
	for (auto featureStatusNodeFeatureContainersfeatureContainersItem : allFeatureContainersNode)
	{
		Data::FeatureStatus::FeatureContainersItem featureContainersItemObject;
		if(!featureStatusNodeFeatureContainersfeatureContainersItem["Image"].isNull())
			featureContainersItemObject.image = featureStatusNodeFeatureContainersfeatureContainersItem["Image"].asString();
		if(!featureStatusNodeFeatureContainersfeatureContainersItem["Name"].isNull())
			featureContainersItemObject.name = featureStatusNodeFeatureContainersfeatureContainersItem["Name"].asString();
		auto allArgs = value["Args"]["args"];
		for (auto value : allArgs)
			featureContainersItemObject.args.push_back(value.asString());
		data_.featureStatus.featureContainers.push_back(featureContainersItemObject);
	}
		auto allIps = featureStatusNode["Ips"]["ips"];
		for (auto value : allIps)
			data_.featureStatus.ips.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeEnvironmentFeatureResult::getMessage()const
{
	return message_;
}

DescribeEnvironmentFeatureResult::Data DescribeEnvironmentFeatureResult::getData()const
{
	return data_;
}

int DescribeEnvironmentFeatureResult::getCode()const
{
	return code_;
}

bool DescribeEnvironmentFeatureResult::getSuccess()const
{
	return success_;
}

