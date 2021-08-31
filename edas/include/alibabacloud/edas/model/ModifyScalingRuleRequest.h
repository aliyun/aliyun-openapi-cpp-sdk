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

#ifndef ALIBABACLOUD_EDAS_MODEL_MODIFYSCALINGRULEREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_MODIFYSCALINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT ModifyScalingRuleRequest : public RoaServiceRequest
			{

			public:
				ModifyScalingRuleRequest();
				~ModifyScalingRuleRequest();

				int getInStep()const;
				void setInStep(int inStep);
				int getOutInstanceNum()const;
				void setOutInstanceNum(int outInstanceNum);
				int getOutRT()const;
				void setOutRT(int outRT);
				int getInInstanceNum()const;
				void setInInstanceNum(int inInstanceNum);
				std::string getVSwitchIds()const;
				void setVSwitchIds(const std::string& vSwitchIds);
				std::string getTemplateInstanceId()const;
				void setTemplateInstanceId(const std::string& templateInstanceId);
				bool getAcceptEULA()const;
				void setAcceptEULA(bool acceptEULA);
				int getOutStep()const;
				void setOutStep(int outStep);
				int getOutCPU()const;
				void setOutCPU(int outCPU);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				int getTemplateVersion()const;
				void setTemplateVersion(int templateVersion);
				std::string getInCondition()const;
				void setInCondition(const std::string& inCondition);
				int getInRT()const;
				void setInRT(int inRT);
				int getInCpu()const;
				void setInCpu(int inCpu);
				int getOutDuration()const;
				void setOutDuration(int outDuration);
				std::string getMultiAzPolicy()const;
				void setMultiAzPolicy(const std::string& multiAzPolicy);
				int getOutLoad()const;
				void setOutLoad(int outLoad);
				int getInLoad()const;
				void setInLoad(int inLoad);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getResourceFrom()const;
				void setResourceFrom(const std::string& resourceFrom);
				bool getOutEnable()const;
				void setOutEnable(bool outEnable);
				std::string getTemplateId()const;
				void setTemplateId(const std::string& templateId);
				std::string getScalingPolicy()const;
				void setScalingPolicy(const std::string& scalingPolicy);
				std::string getOutCondition()const;
				void setOutCondition(const std::string& outCondition);
				int getInDuration()const;
				void setInDuration(int inDuration);
				bool getInEnable()const;
				void setInEnable(bool inEnable);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getTemplateInstanceName()const;
				void setTemplateInstanceName(const std::string& templateInstanceName);

            private:
				int inStep_;
				int outInstanceNum_;
				int outRT_;
				int inInstanceNum_;
				std::string vSwitchIds_;
				std::string templateInstanceId_;
				bool acceptEULA_;
				int outStep_;
				int outCPU_;
				std::string keyPairName_;
				std::string password_;
				int templateVersion_;
				std::string inCondition_;
				int inRT_;
				int inCpu_;
				int outDuration_;
				std::string multiAzPolicy_;
				int outLoad_;
				int inLoad_;
				std::string groupId_;
				std::string resourceFrom_;
				bool outEnable_;
				std::string templateId_;
				std::string scalingPolicy_;
				std::string outCondition_;
				int inDuration_;
				bool inEnable_;
				std::string appId_;
				std::string vpcId_;
				std::string templateInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_MODIFYSCALINGRULEREQUEST_H_