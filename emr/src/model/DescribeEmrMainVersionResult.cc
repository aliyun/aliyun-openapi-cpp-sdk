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
	auto allClusterTypeInfoListNode = emrMainVersionNode["ClusterTypeInfoList"]["ClusterTypeInfo"];
	for (auto emrMainVersionNodeClusterTypeInfoListClusterTypeInfo : allClusterTypeInfoListNode)
	{
		EmrMainVersion::ClusterTypeInfo clusterTypeInfoObject;
		if(!emrMainVersionNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].isNull())
			clusterTypeInfoObject.clusterType = emrMainVersionNodeClusterTypeInfoListClusterTypeInfo["ClusterType"].asString();
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
			clusterTypeInfoObject.serviceInfoList.push_back(serviceInfoListObject);
		}
		emrMainVersion_.clusterTypeInfoList.push_back(clusterTypeInfoObject);
	}
		auto allWhiteUserList = emrMainVersionNode["WhiteUserList"]["WwhiteUser"];
		for (auto value : allWhiteUserList)
			emrMainVersion_.whiteUserList.push_back(value.asString());

}

DescribeEmrMainVersionResult::EmrMainVersion DescribeEmrMainVersionResult::getEmrMainVersion()const
{
	return emrMainVersion_;
}

