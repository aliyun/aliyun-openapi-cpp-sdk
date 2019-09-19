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
		auto allClusterTypeInfoListNode = allEmrMainVersionListNode["ClusterTypeInfoList"]["ClusterTypeInfo"];
		for (auto allEmrMainVersionListNodeClusterTypeInfoListClusterTypeInfo : allClusterTypeInfoListNode)
		{
			EmrMainVersion::ClusterTypeInfo clusterTypeInfoListObject;
			if(!allEmrMainVersionListNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].isNull())
				clusterTypeInfoListObject.clusterType = allEmrMainVersionListNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].asString();
			auto allServiceInfoListNode = allClusterTypeInfoListNode["ServiceInfoList"]["ServiceInfo"];
			for (auto allClusterTypeInfoListNodeServiceInfoListServiceInfo : allServiceInfoListNode)
			{
				EmrMainVersion::ClusterTypeInfo::ServiceInfo serviceInfoListObject;
				if(!allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceName"].isNull())
					serviceInfoListObject.serviceName = allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceName"].asString();
				if(!allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceDisplayName"].isNull())
					serviceInfoListObject.serviceDisplayName = allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceDisplayName"].asString();
				if(!allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceVersion"].isNull())
					serviceInfoListObject.serviceVersion = allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceVersion"].asString();
				if(!allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceDisplayVersion"].isNull())
					serviceInfoListObject.serviceDisplayVersion = allClusterTypeInfoListNodeServiceInfoListServiceInfo["ServiceDisplayVersion"].asString();
				if(!allClusterTypeInfoListNodeServiceInfoListServiceInfo["Mandatory"].isNull())
					serviceInfoListObject.mandatory = allClusterTypeInfoListNodeServiceInfoListServiceInfo["Mandatory"].asString() == "true";
				if(!allClusterTypeInfoListNodeServiceInfoListServiceInfo["Display"].isNull())
					serviceInfoListObject.display = allClusterTypeInfoListNodeServiceInfoListServiceInfo["Display"].asString() == "true";
				clusterTypeInfoListObject.serviceInfoList.push_back(serviceInfoListObject);
			}
			emrMainVersionListObject.clusterTypeInfoList.push_back(clusterTypeInfoListObject);
		}
		auto allWhiteUserList = value["WhiteUserList"]["WwhiteUser"];
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

