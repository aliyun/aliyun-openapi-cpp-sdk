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

#include <alibabacloud/emr/model/ListEmrMainVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListEmrMainVersionResult::ListEmrMainVersionResult() :
	ServiceResult()
{}

ListEmrMainVersionResult::ListEmrMainVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEmrMainVersionResult::~ListEmrMainVersionResult()
{}

void ListEmrMainVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEmrMainVersionListNode = value["EmrMainVersionList"]["EmrMainVersion"];
	for (auto valueEmrMainVersionListEmrMainVersion : allEmrMainVersionListNode)
	{
		EmrMainVersion emrMainVersionListObject;
		if(!valueEmrMainVersionListEmrMainVersion["RegionId"].isNull())
			emrMainVersionListObject.regionId = valueEmrMainVersionListEmrMainVersion["RegionId"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["EmrVersion"].isNull())
			emrMainVersionListObject.emrVersion = valueEmrMainVersionListEmrMainVersion["EmrVersion"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["EcmVersion"].isNull())
			emrMainVersionListObject.ecmVersion = valueEmrMainVersionListEmrMainVersion["EcmVersion"].asString() == "true";
		if(!valueEmrMainVersionListEmrMainVersion["ImageId"].isNull())
			emrMainVersionListObject.imageId = valueEmrMainVersionListEmrMainVersion["ImageId"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["Display"].isNull())
			emrMainVersionListObject.display = valueEmrMainVersionListEmrMainVersion["Display"].asString() == "true";
		if(!valueEmrMainVersionListEmrMainVersion["StackName"].isNull())
			emrMainVersionListObject.stackName = valueEmrMainVersionListEmrMainVersion["StackName"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["StackVersion"].isNull())
			emrMainVersionListObject.stackVersion = valueEmrMainVersionListEmrMainVersion["StackVersion"].asString();
		if(!valueEmrMainVersionListEmrMainVersion["PublishType"].isNull())
			emrMainVersionListObject.publishType = valueEmrMainVersionListEmrMainVersion["PublishType"].asString();
		auto allClusterTypeInfoListNode = valueEmrMainVersionListEmrMainVersion["ClusterTypeInfoList"]["ClusterTypeInfo"];
		for (auto valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfo : allClusterTypeInfoListNode)
		{
			EmrMainVersion::ClusterTypeInfo clusterTypeInfoListObject;
			if(!valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfo["ClusterType"].isNull())
				clusterTypeInfoListObject.clusterType = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfo["ClusterType"].asString();
			auto allServiceInfoListNode = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfo["ServiceInfoList"]["ServiceInfo"];
			for (auto valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo : allServiceInfoListNode)
			{
				EmrMainVersion::ClusterTypeInfo::ServiceInfo serviceInfoListObject;
				if(!valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceName"].isNull())
					serviceInfoListObject.serviceName = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceName"].asString();
				if(!valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayName"].isNull())
					serviceInfoListObject.serviceDisplayName = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayName"].asString();
				if(!valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceVersion"].isNull())
					serviceInfoListObject.serviceVersion = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceVersion"].asString();
				if(!valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayVersion"].isNull())
					serviceInfoListObject.serviceDisplayVersion = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayVersion"].asString();
				if(!valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Mandatory"].isNull())
					serviceInfoListObject.mandatory = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Mandatory"].asString() == "true";
				if(!valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Display"].isNull())
					serviceInfoListObject.display = valueEmrMainVersionListEmrMainVersionClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Display"].asString() == "true";
				clusterTypeInfoListObject.serviceInfoList.push_back(serviceInfoListObject);
			}
			emrMainVersionListObject.clusterTypeInfoList.push_back(clusterTypeInfoListObject);
		}
		auto allClusterTypeWhiteUserListNode = valueEmrMainVersionListEmrMainVersion["ClusterTypeWhiteUserList"]["ClusterTypeWhiteUser"];
		for (auto valueEmrMainVersionListEmrMainVersionClusterTypeWhiteUserListClusterTypeWhiteUser : allClusterTypeWhiteUserListNode)
		{
			EmrMainVersion::ClusterTypeWhiteUser clusterTypeWhiteUserListObject;
			if(!valueEmrMainVersionListEmrMainVersionClusterTypeWhiteUserListClusterTypeWhiteUser["ClusterType"].isNull())
				clusterTypeWhiteUserListObject.clusterType = valueEmrMainVersionListEmrMainVersionClusterTypeWhiteUserListClusterTypeWhiteUser["ClusterType"].asString();
			if(!valueEmrMainVersionListEmrMainVersionClusterTypeWhiteUserListClusterTypeWhiteUser["UserId"].isNull())
				clusterTypeWhiteUserListObject.userId = valueEmrMainVersionListEmrMainVersionClusterTypeWhiteUserListClusterTypeWhiteUser["UserId"].asString();
			emrMainVersionListObject.clusterTypeWhiteUserList.push_back(clusterTypeWhiteUserListObject);
		}
		auto allWhiteUserList = value["WhiteUserList"]["WhiteUser"];
		for (auto value : allWhiteUserList)
			emrMainVersionListObject.whiteUserList.push_back(value.asString());
		emrMainVersionList_.push_back(emrMainVersionListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int ListEmrMainVersionResult::getTotalCount()const
{
	return totalCount_;
}

int ListEmrMainVersionResult::getPageSize()const
{
	return pageSize_;
}

int ListEmrMainVersionResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListEmrMainVersionResult::EmrMainVersion> ListEmrMainVersionResult::getEmrMainVersionList()const
{
	return emrMainVersionList_;
}

