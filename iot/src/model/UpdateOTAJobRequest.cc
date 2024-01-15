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

#include <alibabacloud/iot/model/UpdateOTAJobRequest.h>

using AlibabaCloud::Iot::Model::UpdateOTAJobRequest;

UpdateOTAJobRequest::UpdateOTAJobRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateOTAJob")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateOTAJobRequest::~UpdateOTAJobRequest()
{}

std::string UpdateOTAJobRequest::getRealTenantId()const
{
	return realTenantId_;
}

void UpdateOTAJobRequest::setRealTenantId(const std::string& realTenantId)
{
	realTenantId_ = realTenantId;
	setParameter("RealTenantId", realTenantId);
}

std::string UpdateOTAJobRequest::getIncrementFactor()const
{
	return incrementFactor_;
}

void UpdateOTAJobRequest::setIncrementFactor(const std::string& incrementFactor)
{
	incrementFactor_ = incrementFactor;
	setParameter("IncrementFactor", incrementFactor);
}

int UpdateOTAJobRequest::getBaseRatePerMinute()const
{
	return baseRatePerMinute_;
}

void UpdateOTAJobRequest::setBaseRatePerMinute(int baseRatePerMinute)
{
	baseRatePerMinute_ = baseRatePerMinute;
	setParameter("BaseRatePerMinute", std::to_string(baseRatePerMinute));
}

std::string UpdateOTAJobRequest::getUpgradeType()const
{
	return upgradeType_;
}

void UpdateOTAJobRequest::setUpgradeType(const std::string& upgradeType)
{
	upgradeType_ = upgradeType;
	setParameter("UpgradeType", upgradeType);
}

int UpdateOTAJobRequest::getTimeoutInMinutes()const
{
	return timeoutInMinutes_;
}

void UpdateOTAJobRequest::setTimeoutInMinutes(int timeoutInMinutes)
{
	timeoutInMinutes_ = timeoutInMinutes;
	setParameter("TimeoutInMinutes", std::to_string(timeoutInMinutes));
}

std::string UpdateOTAJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateOTAJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateOTAJobRequest::getRealTripartiteKey()const
{
	return realTripartiteKey_;
}

void UpdateOTAJobRequest::setRealTripartiteKey(const std::string& realTripartiteKey)
{
	realTripartiteKey_ = realTripartiteKey;
	setParameter("RealTripartiteKey", realTripartiteKey);
}

std::string UpdateOTAJobRequest::getJobId()const
{
	return jobId_;
}

void UpdateOTAJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

int UpdateOTAJobRequest::getNumberOfSucceedDevices()const
{
	return numberOfSucceedDevices_;
}

void UpdateOTAJobRequest::setNumberOfSucceedDevices(int numberOfSucceedDevices)
{
	numberOfSucceedDevices_ = numberOfSucceedDevices;
	setParameter("NumberOfSucceedDevices", std::to_string(numberOfSucceedDevices));
}

std::string UpdateOTAJobRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateOTAJobRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> UpdateOTAJobRequest::getSrcVersionList()const
{
	return srcVersionList_;
}

void UpdateOTAJobRequest::setSrcVersionList(const std::vector<std::string>& srcVersionList)
{
	srcVersionList_ = srcVersionList;
	for(int dep1 = 0; dep1!= srcVersionList.size(); dep1++) {
		setParameter("SrcVersionList."+ std::to_string(dep1), srcVersionList.at(dep1));
	}
}

std::string UpdateOTAJobRequest::getTargetSelection()const
{
	return targetSelection_;
}

void UpdateOTAJobRequest::setTargetSelection(const std::string& targetSelection)
{
	targetSelection_ = targetSelection;
	setParameter("TargetSelection", targetSelection);
}

std::vector<UpdateOTAJobRequest::Tags> UpdateOTAJobRequest::getTags()const
{
	return tags_;
}

void UpdateOTAJobRequest::setTags(const std::vector<Tags>& tags)
{
	tags_ = tags;
	for(int dep1 = 0; dep1!= tags.size(); dep1++) {
		auto tagsObj = tags.at(dep1);
		std::string tagsObjStr = "Tags." + std::to_string(dep1 + 1);
		setParameter(tagsObjStr + ".Value", tagsObj.value);
		setParameter(tagsObjStr + ".Key", tagsObj.key);
	}
}

int UpdateOTAJobRequest::getNumberOfNotifiedDevices()const
{
	return numberOfNotifiedDevices_;
}

void UpdateOTAJobRequest::setNumberOfNotifiedDevices(int numberOfNotifiedDevices)
{
	numberOfNotifiedDevices_ = numberOfNotifiedDevices;
	setParameter("NumberOfNotifiedDevices", std::to_string(numberOfNotifiedDevices));
}

std::string UpdateOTAJobRequest::getApiProduct()const
{
	return apiProduct_;
}

void UpdateOTAJobRequest::setApiProduct(const std::string& apiProduct)
{
	apiProduct_ = apiProduct;
	setBodyParameter("ApiProduct", apiProduct);
}

std::string UpdateOTAJobRequest::getApiRevision()const
{
	return apiRevision_;
}

void UpdateOTAJobRequest::setApiRevision(const std::string& apiRevision)
{
	apiRevision_ = apiRevision;
	setBodyParameter("ApiRevision", apiRevision);
}

int UpdateOTAJobRequest::getMaximumPerMinute()const
{
	return maximumPerMinute_;
}

void UpdateOTAJobRequest::setMaximumPerMinute(int maximumPerMinute)
{
	maximumPerMinute_ = maximumPerMinute;
	setParameter("MaximumPerMinute", std::to_string(maximumPerMinute));
}

