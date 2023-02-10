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

#include <alibabacloud/eas/model/DescribeServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eas;
using namespace AlibabaCloud::Eas::Model;

DescribeServiceResult::DescribeServiceResult() :
	ServiceResult()
{}

DescribeServiceResult::DescribeServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServiceResult::~DescribeServiceResult()
{}

void DescribeServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLabelsNode = value["Labels"]["LabelsItem"];
	for (auto valueLabelsLabelsItem : allLabelsNode)
	{
		LabelsItem labelsObject;
		if(!valueLabelsLabelsItem["LabelKey"].isNull())
			labelsObject.labelKey = valueLabelsLabelsItem["LabelKey"].asString();
		if(!valueLabelsLabelsItem["LabelValue"].isNull())
			labelsObject.labelValue = valueLabelsLabelsItem["LabelValue"].asString();
		labels_.push_back(labelsObject);
	}
	if(!value["Region"].isNull())
		region_ = value["Region"].asString();
	if(!value["CallerUid"].isNull())
		callerUid_ = value["CallerUid"].asString();
	if(!value["ParentUid"].isNull())
		parentUid_ = value["ParentUid"].asString();
	if(!value["CurrentVersion"].isNull())
		currentVersion_ = std::stoi(value["CurrentVersion"].asString());
	if(!value["Cpu"].isNull())
		cpu_ = std::stoi(value["Cpu"].asString());
	if(!value["Gpu"].isNull())
		gpu_ = std::stoi(value["Gpu"].asString());
	if(!value["Image"].isNull())
		image_ = value["Image"].asString();
	if(!value["PendingInstance"].isNull())
		pendingInstance_ = std::stoi(value["PendingInstance"].asString());
	if(!value["RunningInstance"].isNull())
		runningInstance_ = std::stoi(value["RunningInstance"].asString());
	if(!value["TotalInstance"].isNull())
		totalInstance_ = std::stoi(value["TotalInstance"].asString());
	if(!value["InternetEndpoint"].isNull())
		internetEndpoint_ = value["InternetEndpoint"].asString();
	if(!value["IntranetEndpoint"].isNull())
		intranetEndpoint_ = value["IntranetEndpoint"].asString();
	if(!value["LatestVersion"].isNull())
		latestVersion_ = std::stoi(value["LatestVersion"].asString());
	if(!value["Memory"].isNull())
		memory_ = std::stoi(value["Memory"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Namespace"].isNull())
		_namespace_ = value["Namespace"].asString();
	if(!value["Reason"].isNull())
		reason_ = value["Reason"].asString();
	if(!value["Resource"].isNull())
		resource_ = value["Resource"].asString();
	if(!value["ResourceAlias"].isNull())
		resourceAlias_ = value["ResourceAlias"].asString();
	if(!value["ServiceConfig"].isNull())
		serviceConfig_ = value["ServiceConfig"].asString();
	if(!value["ServiceName"].isNull())
		serviceName_ = value["ServiceName"].asString();
	if(!value["ServiceGroup"].isNull())
		serviceGroup_ = value["ServiceGroup"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();
	if(!value["Weight"].isNull())
		weight_ = std::stoi(value["Weight"].asString());
	if(!value["ServiceId"].isNull())
		serviceId_ = value["ServiceId"].asString();
	if(!value["ServiceUid"].isNull())
		serviceUid_ = value["ServiceUid"].asString();
	if(!value["AccessToken"].isNull())
		accessToken_ = value["AccessToken"].asString();
	if(!value["Source"].isNull())
		source_ = value["Source"].asString();
	if(!value["ExtraData"].isNull())
		extraData_ = value["ExtraData"].asString();
	if(!value["Role"].isNull())
		role_ = value["Role"].asString();
	if(!value["RoleAttrs"].isNull())
		roleAttrs_ = value["RoleAttrs"].asString();
	if(!value["SafetyLock"].isNull())
		safetyLock_ = value["SafetyLock"].asString();

}

std::string DescribeServiceResult::getMessage()const
{
	return message_;
}

std::string DescribeServiceResult::getServiceGroup()const
{
	return serviceGroup_;
}

int DescribeServiceResult::getMemory()const
{
	return memory_;
}

int DescribeServiceResult::getCurrentVersion()const
{
	return currentVersion_;
}

int DescribeServiceResult::getRunningInstance()const
{
	return runningInstance_;
}

int DescribeServiceResult::getCpu()const
{
	return cpu_;
}

std::string DescribeServiceResult::getImage()const
{
	return image_;
}

int DescribeServiceResult::getGpu()const
{
	return gpu_;
}

std::string DescribeServiceResult::getCallerUid()const
{
	return callerUid_;
}

std::string DescribeServiceResult::getReason()const
{
	return reason_;
}

std::string DescribeServiceResult::getSource()const
{
	return source_;
}

std::string DescribeServiceResult::getServiceId()const
{
	return serviceId_;
}

int DescribeServiceResult::getTotalInstance()const
{
	return totalInstance_;
}

std::string DescribeServiceResult::getServiceConfig()const
{
	return serviceConfig_;
}

std::string DescribeServiceResult::getAccessToken()const
{
	return accessToken_;
}

std::string DescribeServiceResult::getInternetEndpoint()const
{
	return internetEndpoint_;
}

std::string DescribeServiceResult::getResourceAlias()const
{
	return resourceAlias_;
}

std::string DescribeServiceResult::getStatus()const
{
	return status_;
}

std::string DescribeServiceResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeServiceResult::getResource()const
{
	return resource_;
}

std::vector<DescribeServiceResult::LabelsItem> DescribeServiceResult::getLabels()const
{
	return labels_;
}

std::string DescribeServiceResult::get_Namespace()const
{
	return _namespace_;
}

std::string DescribeServiceResult::getExtraData()const
{
	return extraData_;
}

int DescribeServiceResult::getWeight()const
{
	return weight_;
}

std::string DescribeServiceResult::getRole()const
{
	return role_;
}

int DescribeServiceResult::getPendingInstance()const
{
	return pendingInstance_;
}

int DescribeServiceResult::getLatestVersion()const
{
	return latestVersion_;
}

std::string DescribeServiceResult::getServiceName()const
{
	return serviceName_;
}

std::string DescribeServiceResult::getSafetyLock()const
{
	return safetyLock_;
}

std::string DescribeServiceResult::getUpdateTime()const
{
	return updateTime_;
}

std::string DescribeServiceResult::getServiceUid()const
{
	return serviceUid_;
}

std::string DescribeServiceResult::getRegion()const
{
	return region_;
}

std::string DescribeServiceResult::getParentUid()const
{
	return parentUid_;
}

std::string DescribeServiceResult::getIntranetEndpoint()const
{
	return intranetEndpoint_;
}

std::string DescribeServiceResult::getRoleAttrs()const
{
	return roleAttrs_;
}

