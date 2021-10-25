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

#include <alibabacloud/emr/model/DescribeEmrMainVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeEmrMainVersionResult::DescribeEmrMainVersionResult() :
	ServiceResult()
{}

DescribeEmrMainVersionResult::DescribeEmrMainVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEmrMainVersionResult::~DescribeEmrMainVersionResult()
{}

void DescribeEmrMainVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto emrMainVersionNode = value["EmrMainVersion"];
	if(!emrMainVersionNode["RegionId"].isNull())
		emrMainVersion_.regionId = emrMainVersionNode["RegionId"].asString();
	if(!emrMainVersionNode["EmrVersion"].isNull())
		emrMainVersion_.emrVersion = emrMainVersionNode["EmrVersion"].asString();
	if(!emrMainVersionNode["EcmVersion"].isNull())
		emrMainVersion_.ecmVersion = emrMainVersionNode["EcmVersion"].asString() == "true";
	if(!emrMainVersionNode["ImageId"].isNull())
		emrMainVersion_.imageId = emrMainVersionNode["ImageId"].asString();
	if(!emrMainVersionNode["Display"].isNull())
		emrMainVersion_.display = emrMainVersionNode["Display"].asString() == "true";
	if(!emrMainVersionNode["StackName"].isNull())
		emrMainVersion_.stackName = emrMainVersionNode["StackName"].asString();
	if(!emrMainVersionNode["StackVersion"].isNull())
		emrMainVersion_.stackVersion = emrMainVersionNode["StackVersion"].asString();
	if(!emrMainVersionNode["PublishType"].isNull())
		emrMainVersion_.publishType = emrMainVersionNode["PublishType"].asString();
	auto allClusterTypeInfoListNode = emrMainVersionNode["ClusterTypeInfoList"]["ClusterTypeInfo"];
	for (auto emrMainVersionNodeClusterTypeInfoListClusterTypeInfo : allClusterTypeInfoListNode)
	{
		EmrMainVersion::ClusterTypeInfo clusterTypeInfoObject;
		if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].isNull())
			clusterTypeInfoObject.clusterType = emrMainVersionNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].asString();
		auto allServiceInfoListNode = emrMainVersionNodeClusterTypeInfoListClusterTypeInfo["ServiceInfoList"]["ServiceInfo"];
		for (auto emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo : allServiceInfoListNode)
		{
			EmrMainVersion::ClusterTypeInfo::ServiceInfo serviceInfoListObject;
			if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceName"].isNull())
				serviceInfoListObject.serviceName = emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceName"].asString();
			if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayName"].isNull())
				serviceInfoListObject.serviceDisplayName = emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayName"].asString();
			if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceVersion"].isNull())
				serviceInfoListObject.serviceVersion = emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceVersion"].asString();
			if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayVersion"].isNull())
				serviceInfoListObject.serviceDisplayVersion = emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["ServiceDisplayVersion"].asString();
			if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Mandatory"].isNull())
				serviceInfoListObject.mandatory = emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Mandatory"].asString() == "true";
			if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Display"].isNull())
				serviceInfoListObject.display = emrMainVersionNodeClusterTypeInfoListClusterTypeInfoServiceInfoListServiceInfo["Display"].asString() == "true";
			clusterTypeInfoObject.serviceInfoList.push_back(serviceInfoListObject);
		}
		emrMainVersion_.clusterTypeInfoList.push_back(clusterTypeInfoObject);
	}
	auto allClusterTypeWhiteUserListNode = emrMainVersionNode["ClusterTypeWhiteUserList"]["ClusterTypeWhiteUser"];
	for (auto emrMainVersionNodeClusterTypeWhiteUserListClusterTypeWhiteUser : allClusterTypeWhiteUserListNode)
	{
		EmrMainVersion::ClusterTypeWhiteUser clusterTypeWhiteUserObject;
		if(!emrMainVersionNodeClusterTypeWhiteUserListClusterTypeWhiteUser["ClusterType"].isNull())
			clusterTypeWhiteUserObject.clusterType = emrMainVersionNodeClusterTypeWhiteUserListClusterTypeWhiteUser["ClusterType"].asString();
		if(!emrMainVersionNodeClusterTypeWhiteUserListClusterTypeWhiteUser["UserId"].isNull())
			clusterTypeWhiteUserObject.userId = emrMainVersionNodeClusterTypeWhiteUserListClusterTypeWhiteUser["UserId"].asString();
		emrMainVersion_.clusterTypeWhiteUserList.push_back(clusterTypeWhiteUserObject);
	}
		auto allWhiteUserList = emrMainVersionNode["WhiteUserList"]["WwhiteUser"];
		for (auto value : allWhiteUserList)
			emrMainVersion_.whiteUserList.push_back(value.asString());

}

DescribeEmrMainVersionResult::EmrMainVersion DescribeEmrMainVersionResult::getEmrMainVersion()const
{
	return emrMainVersion_;
}

