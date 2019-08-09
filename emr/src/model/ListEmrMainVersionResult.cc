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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allEmrMainVersionList = value["EmrMainVersionList"]["EmrMainVersion"];
	for (auto value : allEmrMainVersionList)
	{
		EmrMainVersion emrMainVersionListObject;
		if(!value["RegionId"].isNull())
			emrMainVersionListObject.regionId = value["RegionId"].asString();
		if(!value["EmrVersion"].isNull())
			emrMainVersionListObject.emrVersion = value["EmrVersion"].asString();
		if(!value["EcmVersion"].isNull())
			emrMainVersionListObject.ecmVersion = value["EcmVersion"].asString() == "true";
		if(!value["ImageId"].isNull())
			emrMainVersionListObject.imageId = value["ImageId"].asString();
		if(!value["Display"].isNull())
			emrMainVersionListObject.display = value["Display"].asString() == "true";
		if(!value["StackName"].isNull())
			emrMainVersionListObject.stackName = value["StackName"].asString();
		if(!value["StackVersion"].isNull())
			emrMainVersionListObject.stackVersion = value["StackVersion"].asString();
		auto allClusterTypeInfoList = value["ClusterTypeInfoList"]["ClusterTypeInfo"];
		for (auto value : allClusterTypeInfoList)
		{
			EmrMainVersion::ClusterTypeInfo clusterTypeInfoListObject;
			if(!value["ClusterType"].isNull())
				clusterTypeInfoListObject.clusterType = value["ClusterType"].asString();
			auto allServiceInfoList = value["ServiceInfoList"]["ServiceInfo"];
			for (auto value : allServiceInfoList)
			{
				EmrMainVersion::ClusterTypeInfo::ServiceInfo serviceInfoListObject;
				if(!value["ServiceName"].isNull())
					serviceInfoListObject.serviceName = value["ServiceName"].asString();
				if(!value["ServiceDisplayName"].isNull())
					serviceInfoListObject.serviceDisplayName = value["ServiceDisplayName"].asString();
				if(!value["ServiceVersion"].isNull())
					serviceInfoListObject.serviceVersion = value["ServiceVersion"].asString();
				if(!value["ServiceDisplayVersion"].isNull())
					serviceInfoListObject.serviceDisplayVersion = value["ServiceDisplayVersion"].asString();
				if(!value["Mandatory"].isNull())
					serviceInfoListObject.mandatory = value["Mandatory"].asString() == "true";
				if(!value["Display"].isNull())
					serviceInfoListObject.display = value["Display"].asString() == "true";
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

