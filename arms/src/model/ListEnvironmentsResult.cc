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

#include <alibabacloud/arms/model/ListEnvironmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListEnvironmentsResult::ListEnvironmentsResult() :
	ServiceResult()
{}

ListEnvironmentsResult::ListEnvironmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEnvironmentsResult::~ListEnvironmentsResult()
{}

void ListEnvironmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	auto allEnvironmentsNode = dataNode["Environments"]["environmentsItem"];
	for (auto dataNodeEnvironmentsenvironmentsItem : allEnvironmentsNode)
	{
		Data::EnvironmentsItem environmentsItemObject;
		if(!dataNodeEnvironmentsenvironmentsItem["UserId"].isNull())
			environmentsItemObject.userId = dataNodeEnvironmentsenvironmentsItem["UserId"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["BindResourceId"].isNull())
			environmentsItemObject.bindResourceId = dataNodeEnvironmentsenvironmentsItem["BindResourceId"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["BindResourceProfile"].isNull())
			environmentsItemObject.bindResourceProfile = dataNodeEnvironmentsenvironmentsItem["BindResourceProfile"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["BindResourceType"].isNull())
			environmentsItemObject.bindResourceType = dataNodeEnvironmentsenvironmentsItem["BindResourceType"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["BindVpcCidr"].isNull())
			environmentsItemObject.bindVpcCidr = dataNodeEnvironmentsenvironmentsItem["BindVpcCidr"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["CreateTime"].isNull())
			environmentsItemObject.createTime = dataNodeEnvironmentsenvironmentsItem["CreateTime"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["CreatedUserId"].isNull())
			environmentsItemObject.createdUserId = dataNodeEnvironmentsenvironmentsItem["CreatedUserId"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["EnvironmentId"].isNull())
			environmentsItemObject.environmentId = dataNodeEnvironmentsenvironmentsItem["EnvironmentId"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["EnvironmentName"].isNull())
			environmentsItemObject.environmentName = dataNodeEnvironmentsenvironmentsItem["EnvironmentName"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["EnvironmentType"].isNull())
			environmentsItemObject.environmentType = dataNodeEnvironmentsenvironmentsItem["EnvironmentType"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["GrafanaFolderTitle"].isNull())
			environmentsItemObject.grafanaFolderTitle = dataNodeEnvironmentsenvironmentsItem["GrafanaFolderTitle"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["GrafanaFolderUid"].isNull())
			environmentsItemObject.grafanaFolderUid = dataNodeEnvironmentsenvironmentsItem["GrafanaFolderUid"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["PrometheusId"].isNull())
			environmentsItemObject.prometheusId = std::stol(dataNodeEnvironmentsenvironmentsItem["PrometheusId"].asString());
		if(!dataNodeEnvironmentsenvironmentsItem["PrometheusInstanceId"].isNull())
			environmentsItemObject.prometheusInstanceId = dataNodeEnvironmentsenvironmentsItem["PrometheusInstanceId"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["RegionId"].isNull())
			environmentsItemObject.regionId = dataNodeEnvironmentsenvironmentsItem["RegionId"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["ResourceGroupId"].isNull())
			environmentsItemObject.resourceGroupId = dataNodeEnvironmentsenvironmentsItem["ResourceGroupId"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["GrafanaDatasourceUid"].isNull())
			environmentsItemObject.grafanaDatasourceUid = dataNodeEnvironmentsenvironmentsItem["GrafanaDatasourceUid"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["ReleaseCount"].isNull())
			environmentsItemObject.releaseCount = std::stoi(dataNodeEnvironmentsenvironmentsItem["ReleaseCount"].asString());
		if(!dataNodeEnvironmentsenvironmentsItem["LatestReleaseCreateTime"].isNull())
			environmentsItemObject.latestReleaseCreateTime = dataNodeEnvironmentsenvironmentsItem["LatestReleaseCreateTime"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["ManagedType"].isNull())
			environmentsItemObject.managedType = dataNodeEnvironmentsenvironmentsItem["ManagedType"].asString();
		if(!dataNodeEnvironmentsenvironmentsItem["FeePackage"].isNull())
			environmentsItemObject.feePackage = dataNodeEnvironmentsenvironmentsItem["FeePackage"].asString();
		auto allAddonsNode = dataNodeEnvironmentsenvironmentsItem["Addons"]["addonsItem"];
		for (auto dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem : allAddonsNode)
		{
			Data::EnvironmentsItem::AddonsItem addonsObject;
			if(!dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Alias"].isNull())
				addonsObject.alias = dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Alias"].asString();
			if(!dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Description"].isNull())
				addonsObject.description = dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Description"].asString();
			if(!dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Icon"].isNull())
				addonsObject.icon = dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Icon"].asString();
			if(!dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Name"].isNull())
				addonsObject.name = dataNodeEnvironmentsenvironmentsItemAddonsaddonsItem["Name"].asString();
			environmentsItemObject.addons.push_back(addonsObject);
		}
		auto allFeaturesNode = dataNodeEnvironmentsenvironmentsItem["Features"]["featuresItem"];
		for (auto dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem : allFeaturesNode)
		{
			Data::EnvironmentsItem::FeaturesItem featuresObject;
			if(!dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Alias"].isNull())
				featuresObject.alias = dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Alias"].asString();
			if(!dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Description"].isNull())
				featuresObject.description = dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Description"].asString();
			if(!dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Icon"].isNull())
				featuresObject.icon = dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Icon"].asString();
			if(!dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Name"].isNull())
				featuresObject.name = dataNodeEnvironmentsenvironmentsItemFeaturesfeaturesItem["Name"].asString();
			environmentsItemObject.features.push_back(featuresObject);
		}
		auto allTagsNode = dataNodeEnvironmentsenvironmentsItem["Tags"]["tagsItem"];
		for (auto dataNodeEnvironmentsenvironmentsItemTagstagsItem : allTagsNode)
		{
			Data::EnvironmentsItem::TagsItem tagsObject;
			if(!dataNodeEnvironmentsenvironmentsItemTagstagsItem["Key"].isNull())
				tagsObject.key = dataNodeEnvironmentsenvironmentsItemTagstagsItem["Key"].asString();
			if(!dataNodeEnvironmentsenvironmentsItemTagstagsItem["Value"].isNull())
				tagsObject.value = dataNodeEnvironmentsenvironmentsItemTagstagsItem["Value"].asString();
			environmentsItemObject.tags.push_back(tagsObject);
		}
		data_.environments.push_back(environmentsItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListEnvironmentsResult::getMessage()const
{
	return message_;
}

ListEnvironmentsResult::Data ListEnvironmentsResult::getData()const
{
	return data_;
}

int ListEnvironmentsResult::getCode()const
{
	return code_;
}

bool ListEnvironmentsResult::getSuccess()const
{
	return success_;
}

