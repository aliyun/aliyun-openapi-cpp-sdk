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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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
	auto allClusterTypeInfoList = value["ClusterTypeInfoList"]["ClusterTypeInfo"];
	for (auto value : allClusterTypeInfoList)
	{
		EmrMainVersion::ClusterTypeInfo clusterTypeInfoObject;
		if(!value["ClusterType"].isNull())
			clusterTypeInfoObject.clusterType = value["ClusterType"].asString();
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

